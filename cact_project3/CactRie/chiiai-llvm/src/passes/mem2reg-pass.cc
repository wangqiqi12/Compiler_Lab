//
// Created by creeper on 12/17/24.
//
#include <chiisai-llvm/basic-block.h>
#include <chiisai-llvm/dominator-tree.h>
#include <chiisai-llvm/function.h>
#include <chiisai-llvm/passes/mem2reg-pass.h>
#include <mystl/bit_vector.h>
#include <queue>
#include <unordered_set>

namespace llvm {
bool PromoteMemToRegPass::isPromotable(CRef<AllocaInst> ai) {
  // no volatile, so we only need to check if ai is only used in load or store
  for (auto user : ai->users) {
    assert(isa<Instruction>(user));
    if (isa<LoadInst>(user) || isa<StoreInst>(user))
      continue;
    logger.info("user {} is not a load or store, {} is not promotable",
                user->name(), ai->name());
    return false;
  }
  logger.info("alloca inst {} is promotable", ai->name());
  return true;
}

void PromoteMemToRegPass::renameAllocaInBlock(
    Ref<BasicBlock> block,
    std::unordered_map<CRef<AllocaInst>, Ref<Value>> &mostRecentValue) {
  std::vector<Ref<Instruction>> instToRemove{};
  logger.info("############### processing block {} ###############",
              block->name());
  for (auto inst : block->instructions) {
    if (isa<PhiInst>(inst) &&
        isInsertedPhiInstForBlock(cast<PhiInst>(inst), block)) {
      auto phi = cast<PhiInst>(inst);
      const auto &name = '%' + extractAllocaNameFromPhiInst(phi);
      auto alloca = makeCRef(block->function().identifier(name));
      assert(isa<AllocaInst>(alloca));
      auto ai = cast<AllocaInst>(alloca);
      mostRecentValue[ai] = phi;
      logger.info("update most recent value for alloca inst {} to phi inst {}",
                  ai->name(), phi->name());
    }
    if (isa<StoreInst>(inst)) {
      auto si = cast<StoreInst>(inst);
      if (!isa<AllocaInst>(si->pointer()))
        continue;
      auto ai = cast<AllocaInst>(si->pointer());
      mostRecentValue[ai] = si->value();
      logger.info("update most recent value for alloca inst {} to {}",
                  ai->name(), si->value()->name());
      instToRemove.emplace_back(si);
    }
    if (isa<LoadInst>(inst)) {
      auto li = cast<LoadInst>(inst);
      if (!isa<AllocaInst>(li->pointer()))
        continue;
      auto ai = cast<AllocaInst>(li->pointer());
      if (!mostRecentValue.contains(ai))
        continue;
      logger.info(
          "replace load inst {} with most recent value for alloca inst {}: {}",
          li->name(), ai->name(), mostRecentValue[ai]->name());
      li->replaceAllUsesWith(mostRecentValue[ai]);
      instToRemove.emplace_back(li);
    }
  }
  for (auto inst : instToRemove)
    block->removeInstruction(inst);
}

void PromoteMemToRegPass::fillPhiInst(
    Ref<BasicBlock> current, Ref<BasicBlock> succ,
    const std::unordered_map<std::string, Ref<AllocaInst>> &toBePromote,
    const std::unordered_map<CRef<AllocaInst>, Ref<Value>> &mostRecentValue) {

  for (auto inst : succ->instructions) {
    if (!isa<PhiInst>(inst))
      break; // phi inst must be at the beginning of the block and continuous
    auto phi = cast<PhiInst>(inst);
    if (!isInsertedPhiInstForBlock(phi, succ))
      continue;
    logger.info("fill phi inst {} for block {} from block {}", phi->toString(),
                succ->name(), current->name());
    auto ai = toBePromote.at('%' + extractAllocaNameFromPhiInst(phi));
    if (!mostRecentValue.contains(ai) || mostRecentValue.at(ai) == nullptr)
      continue;
    phi->addPhiValue(current, mostRecentValue.at(ai));
    logger.info("fill phi inst {} with most recent value {} for alloca inst {}",
                phi->name(), mostRecentValue.at(ai)->name(), ai->name());
  }
}

std::unordered_set<Ref<BasicBlock>>
PromoteMemToRegPass::computeLiveInBlocks(const Function &func,
                                         CRef<AllocaInst> alloca) {
  std::queue<Ref<BasicBlock>> workList{};
  std::unordered_set<Ref<BasicBlock>> liveInBlockSet{};
  std::unordered_set<CRef<BasicBlock>> defBlocks{};
  for (auto user : alloca->users) {
    assert(isa<Instruction>(user));
    if (auto inst = cast<Instruction>(user); isa<StoreInst>(inst))
      defBlocks.insert(makeCRef(inst->basicBlock));
  }
  for (auto block : func.basicBlockRefs()) {
    for (auto inst : block->instructions) {
      if (isa<StoreInst>(inst)) {
        auto si = cast<StoreInst>(inst);
        if (si->pointer() == alloca)
          break;
      }
      if (isa<LoadInst>(inst)) {
        auto li = cast<LoadInst>(inst);
        if (li->pointer() == alloca) {
          workList.emplace(block);
          break;
        }
      }
    }
  }
  while (!workList.empty()) {
    auto block = workList.front();
    workList.pop();
    if (liveInBlockSet.contains(block))
      continue;
    liveInBlockSet.insert(block);
    for (auto pred : block->predecessors) {
      if (defBlocks.contains(pred))
        continue;
      workList.emplace(pred);
    }
  }
  return liveInBlockSet;
}
void PromoteMemToRegPass::runOnFunction(Function &function) {
  DominatorTree domTree{};
  domTree.buildFromCFG(function);
  logger.info("<<<<<<<< running mem2reg on function {} >>>>>>>>",
              function.name());
  auto &entryBlock = function.basicBlock("entry");
  std::unordered_map<CRef<BasicBlock>, std::unordered_map<CRef<AllocaInst>, Ref<Value>>> mostRecentValue{};
  std::unordered_map<std::string, Ref<AllocaInst>> toBePromote{};
  std::vector<CRef<AllocaInst>> unused{};
  for (auto inst : entryBlock.instructions) {
    if (!isa<AllocaInst>(inst))
      continue;
    auto ai = cast<AllocaInst>(inst);
    assert(ai->type()->isPointer());
    auto holderType = cast<PointerType>(ai->type())->elementType();
    logger.info("--------------mem2reg for alloca inst: {}--------------",
                ai->name());
    if (!ai->isUsed()) {
      logger.info("alloca inst {} has no users, remove it", ai->name());
      unused.emplace_back(ai);
      continue;
    }

    if (!isPromotable(ai))
      continue;

    std::unordered_set<Ref<BasicBlock>> liveInBlockSet =
        computeLiveInBlocks(function, ai);

    auto dominanceLevelGreater = [&domTree](Ref<BasicBlock> a,
                                            Ref<BasicBlock> b) {
      return domTree.dominanceLevel(a) < domTree.dominanceLevel(b);
    };

    std::priority_queue<Ref<BasicBlock>, std::vector<Ref<BasicBlock>>,
                        decltype(dominanceLevelGreater)>
        liveInBlocks(dominanceLevelGreater);

    for (auto block : liveInBlockSet)
      liveInBlocks.push(block);

    while (!liveInBlocks.empty()) {
      auto block = liveInBlocks.top();
      liveInBlocks.pop();
      logger.info("processing dominance frontiers of live-in block {}",
                  block->name());
      for (auto dfBlock : domTree.dominanceFrontier(block)) {
        std::vector<PhiValue> phiValues(dfBlock->predecessors.size());
        if (dfBlock->hasIdentifier(nameInsertedPhiInst(ai, dfBlock))) {
          logger.info("phi inst {} already exists in block {}, skip",
                      nameInsertedPhiInst(ai, dfBlock), dfBlock->name());
          continue;
        }
        auto phi = std::make_unique<PhiInst>(
            *dfBlock,
            PhiInstDetails{nameInsertedPhiInst(ai, dfBlock), holderType, {}});
        logger.info("insert phi inst {} to block {}", phi->name(),
                    dfBlock->name());
        dfBlock->addInstructionFront(std::move(phi));
      }
    }
    toBePromote.insert({ai->name(), ai});
  }
  for (auto unusedAlloca : unused)
    entryBlock.removeInstruction(unusedAlloca);
  logger.info("------------------renaming phase start------------------");
  std::queue<Ref<BasicBlock>> workList{};
  std::unordered_set<CRef<BasicBlock>> visited{};
  workList.push(makeRef(entryBlock));
  visited.insert(makeCRef(entryBlock));
  while (!workList.empty()) {
    auto currentBlock = workList.front();
    workList.pop();
    renameAllocaInBlock(currentBlock, mostRecentValue[currentBlock]);
    for (auto succ : currentBlock->successors) {
      fillPhiInst(currentBlock, succ, toBePromote, mostRecentValue[currentBlock]);
      if (visited.contains(succ))
        continue;
      mostRecentValue[succ] = mostRecentValue[currentBlock];
      workList.push(succ);
      visited.insert(succ);
    }
  }

  for (auto ai : toBePromote | std::views::values) {
    logger.info("remove alloca inst {} from entry block", ai->name());
    entryBlock.removeInstruction(ai);
  }

  logger.info("<<<<<<<< mem2reg on function {} finished >>>>>>>>",
              function.name());
}
} // namespace llvm

//
// Created by creeper on 1/15/25.
//
#include <chiisai-llvm/backend/riscv/pseudo-inst-translator.h>
#include <chiisai-llvm/backend/riscv/riscv-backend-metadata.h>
#include <queue>
#include <unordered_set>
#include <valarray>
#include <chiisai-llvm/backend/riscv/utils.h>

namespace llvm {

static std::string genTempReg() {
  static uint32_t id = 0;
  return "__t" + std::to_string(++id) + "__";
}

static RiscvBinaryOps toRiscvBinaryOps(Instruction::BinaryOps op) {
  static std::unordered_map<Instruction::BinaryOps, RiscvBinaryOps> opMap{
      {Instruction::BinaryOps::Add, RiscvBinaryOps::Add},
      {Instruction::BinaryOps::Sub, RiscvBinaryOps::Sub},
      {Instruction::BinaryOps::Mul, RiscvBinaryOps::Mul},
      {Instruction::BinaryOps::SDiv, RiscvBinaryOps::Div},
      {Instruction::BinaryOps::SRem, RiscvBinaryOps::Rem},
      {Instruction::BinaryOps::Xor, RiscvBinaryOps::Xor},
      {Instruction::BinaryOps::Shl, RiscvBinaryOps::Shl},
      {Instruction::BinaryOps::LShr, RiscvBinaryOps::Shr},
      {Instruction::BinaryOps::AShr, RiscvBinaryOps::Shr},
      {Instruction::BinaryOps::FAdd, RiscvBinaryOps::Add},
      {Instruction::BinaryOps::FSub, RiscvBinaryOps::Sub},
      {Instruction::BinaryOps::FMul, RiscvBinaryOps::Mul},
      {Instruction::BinaryOps::FDiv, RiscvBinaryOps::Div},
  };
  return opMap.at(op);
}

static RiscvPredicate toRiscvPredicate(Predicate pred) {
  static std::unordered_map<Predicate, RiscvPredicate> predMap{
      {Predicate::OLT, RiscvPredicate::FLT},
      {Predicate::OLE, RiscvPredicate::FLE},
      {Predicate::SLT, RiscvPredicate::LT}};
  return predMap.at(pred);
}

RiscvPseudoCmp PseudoInstTranslator::toPseudoCmp(CRef<CmpInst> inst) {
  return RiscvPseudoCmp{
      .lhs = inst->lhs()->name(),
      .rhs = inst->rhs()->name(),
      .dest = inst->name(),
      .predicate = toRiscvPredicate(inst->predicate),
  };
}

void PseudoInstTranslator::translateLoad(CRef<BasicBlock> bb,
                                         CRef<LoadInst> load) {
  if (isa<GlobalVariable>(load->pointer())) {
    auto tmpName = genTempReg();
    pseudoInsts.at(bb).emplace_back(RiscvLoadGlobal{
        .dest = tmpName,
        .global = cast<GlobalVariable>(load->pointer())->name(),
    });
    pseudoInsts.at(bb).emplace_back(RiscvPseudoLoad{
        .base = tmpName,
        .offset = 0,
        .dest = load->name(),
    });
    vRegModifier[tmpName] = RegModifier::DoubleWord;
    return;
  }
  pseudoInsts.at(bb).emplace_back(RiscvPseudoLoad{
      .base = load->pointer()->name(),
      .offset = 0,
      .dest = load->name(),
  });
}

RiscvPseudoInstruction PseudoInstTranslator::toPseudoRet(CRef<RetInst> inst) {
  if (inst->ret())
    return RiscvPseudoRet{.value = inst->ret()->name()};
  return RiscvPseudoRet{};
}

void PseudoInstTranslator::translateCall(CRef<BasicBlock> bb,
                                         CRef<CallInst> call) {
  std::vector<std::string> args{};
  for (auto arg : call->realArgs())
    args.push_back(arg->name());
  if (call->type()->isVoid())
    pseudoInsts.at(bb).emplace_back(RiscvPseudoCall{
        .result = {},
        .func = call->function()->name(),
        .args = args,
    });
  else
    pseudoInsts.at(bb).emplace_back(RiscvPseudoCall{
        .result = call->name(),
        .func = call->function()->name(),
        .args = args,
    });
}

static bool toBitShift(RiscvPseudoBinary &inst) {
  static std::unordered_map<uint32_t, uint32_t> logTable{
      {1, 0},          {2, 1},          {4, 2},           {8, 3},
      {16, 4},         {32, 5},         {64, 6},          {128, 7},
      {256, 8},        {512, 9},        {1024, 10},       {2048, 11},
      {4096, 12},      {8192, 13},      {16384, 14},      {32768, 15},
      {65536, 16},     {131072, 17},    {262144, 18},     {524288, 19},
      {1048576, 20},   {2097152, 21},   {4194304, 22},    {8388608, 23},
      {16777216, 24},  {33554432, 25},  {67108864, 26},   {134217728, 27},
      {268435456, 28}, {536870912, 29}, {1073741824, 30},
  };

  if (!isConstantInt(inst.rhs)) return false;

  if (inst.op == RiscvBinaryOps::Mul || inst.op == RiscvBinaryOps::Div) {
    auto rhsVal = std::stoi(inst.rhs);
    assert(rhsVal >= 0);
    if (!logTable.contains(rhsVal))
      return false;
    inst.op = inst.op == RiscvBinaryOps::Mul ? RiscvBinaryOps::Shl
                                             : RiscvBinaryOps::Shr;
    inst.rhs = std::to_string(logTable.at(rhsVal));
    return true;
  }
  return false;
}

RiscvPseudoInstruction
PseudoInstTranslator::toSimplePseudoInstruction(CRef<Instruction> inst) {
  if (isa<AllocaInst>(inst)) {
    vRegModifier[inst->name()] = RegModifier::DoubleWord;
    return RiscvPseudoAlloca{.result = inst->name()};
  }

  throw std::runtime_error(
      "cannot be trivially translated to single pseudo instruction");
}

void PseudoInstTranslator::translateStore(CRef<BasicBlock> bb,
                                          CRef<StoreInst> store) {
  if (isa<GlobalVariable>(store->pointer())) {
    auto tmpName = genTempReg();
    pseudoInsts.at(bb).emplace_back(RiscvLoadGlobal{
        .dest = tmpName,
        .global = cast<GlobalVariable>(store->pointer())->name(),
    });
    pseudoInsts.at(bb).emplace_back(RiscvPseudoStore{
        .base = tmpName,
        .offset = 0,
        .value = store->value()->name(),
    });
    vRegModifier[tmpName] = RegModifier::DoubleWord;
    return;
  }
  pseudoInsts.at(bb).emplace_back(RiscvPseudoStore{
      .base = store->pointer()->name(),
      .offset = 0,
      .value = store->value()->name(),
  });
}

void PseudoInstTranslator::translateJump(CRef<BasicBlock> bb, CRef<BrInst> br) {
  if (br->isConditional()) {
    pseudoInsts.at(bb).emplace_back(RiscvPseudoJump{
        .cond = br->cond().name(),
        .trueLabel = br->thenBranch().name(),
    });
    // if go beyond above, the cond must be false
    pseudoInsts.at(bb).emplace_back(RiscvPseudoJump{
        .trueLabel = br->elseBranch().name(),
    });
  } else
    pseudoInsts.at(bb).emplace_back(RiscvPseudoJump{
        .trueLabel = br->thenBranch().name(),
    });
}

template <typename T> struct PredicateCompareTable {
  static const std::function<bool(T, T)> &get(Predicate pred) {
    static std::unordered_map<Predicate, std::function<bool(T, T)>> table{
        {Predicate::EQ, std::equal_to<T>{}},
        {Predicate::NE, std::not_equal_to<T>{}},
        {Predicate::SGT, std::greater<T>{}},
        {Predicate::SGE, std::greater_equal<T>{}},
        {Predicate::SLT, std::less<T>{}},
        {Predicate::SLE, std::less_equal<T>{}},
        {Predicate::OGT, std::greater<T>{}},
        {Predicate::OGE, std::greater_equal<T>{}},
        {Predicate::OLT, std::less<T>{}},
        {Predicate::OLE, std::less_equal<T>{}},
    };
    return table.at(pred);
  }
};

void PseudoInstTranslator::translateConstCmp(CRef<BasicBlock> bb,
                                             CRef<CmpInst> cmp) {
  if (cmp->lhs()->type()->isInteger()) {
    auto lhsVal = std::stoi(cast<Constant>(cmp->lhs())->name());
    auto rhsVal = std::stoi(cast<Constant>(cmp->rhs())->name());
    auto result =
        PredicateCompareTable<int>::get(cmp->predicate)(lhsVal, rhsVal);
    pseudoInsts.at(bb).emplace_back(RiscvPseudoMove{
        .dest = cmp->name(),
        .src = result ? "1" : "0",
    });
  }
  if (cmp->lhs()->type() == Type::floatType(ctx)) {
    auto lhsVal = std::stof(cast<Constant>(cmp->lhs())->name());
    auto rhsVal = std::stof(cast<Constant>(cmp->rhs())->name());
    auto result =
        PredicateCompareTable<float>::get(cmp->predicate)(lhsVal, rhsVal);
    pseudoInsts.at(bb).emplace_back(RiscvPseudoMove{
        .dest = cmp->name(),
        .src = result ? "1" : "0",
    });
  }
  if (cmp->lhs()->type() == Type::doubleType(ctx)) {
    auto lhsVal = std::stod(cast<Constant>(cmp->lhs())->name());
    auto rhsVal = std::stod(cast<Constant>(cmp->rhs())->name());
    auto result =
        PredicateCompareTable<double>::get(cmp->predicate)(lhsVal, rhsVal);
    pseudoInsts.at(bb).emplace_back(RiscvPseudoMove{
        .dest = cmp->name(),
        .src = result ? "1" : "0",
    });
  }
}

void PseudoInstTranslator::translateCmp(CRef<BasicBlock> bb,
                                        CRef<CmpInst> cmp) {
  static std::unordered_map<Predicate, RiscvPredicate> reversePred{
      {Predicate::OGE, RiscvPredicate::FLE},
      {Predicate::OGT, RiscvPredicate::FLT},
      {Predicate::SGT, RiscvPredicate::LT},
  };
  if (isa<Constant>(cmp->lhs()) && isa<Constant>(cmp->rhs())) {
    translateConstCmp(bb, cmp);
    return;
  }
  if (cmp->predicate == Predicate::OLE || cmp->predicate == Predicate::OLT ||
      cmp->predicate == Predicate::SLT) {
    pseudoInsts.at(bb).emplace_back(toPseudoCmp(cmp));
    return;
  }
  if (cmp->predicate == Predicate::OGE || cmp->predicate == Predicate::OGT ||
      cmp->predicate == Predicate::SGT) {
    pseudoInsts.at(bb).emplace_back(RiscvPseudoCmp{
        .lhs = cmp->rhs()->name(),
        .rhs = cmp->lhs()->name(),
        .dest = cmp->name(),
        .predicate = reversePred.at(cmp->predicate),
    });
    return;
  }
  if (cmp->predicate == Predicate::SGE) {
    pseudoInsts.at(bb).emplace_back(RiscvPseudoCmp{
        .lhs = cmp->rhs()->name(),
        .rhs = cmp->lhs()->name(),
        .dest = cmp->name(),
        .predicate = RiscvPredicate::LT,
    });
    pseudoInsts.at(bb).emplace_back(RiscvPseudoBinary{
        .result = cmp->name(),
        .lhs = cmp->name(),
        .rhs = "-1",
        .op = RiscvBinaryOps::Xor,
    });
  }
  if (cmp->predicate == Predicate::SLE) {
    pseudoInsts.at(bb).emplace_back(RiscvPseudoCmp{
        .lhs = cmp->rhs()->name(),
        .rhs = cmp->lhs()->name(),
        .dest = cmp->name(),
        .predicate = RiscvPredicate::LT,
    });
    pseudoInsts.at(bb).emplace_back(RiscvPseudoBinary{
        .result = cmp->name(),
        .lhs = cmp->name(),
        .rhs = "-1",
        .op = RiscvBinaryOps::Xor,
    });
  }
  if (cmp->predicate == Predicate::EQ) {
    if (cmp->lhs()->type()->isFloatingPoint()) {
      pseudoInsts.at(bb).emplace_back(RiscvPseudoCmp{
          .lhs = cmp->lhs()->name(),
          .rhs = cmp->rhs()->name(),
          .dest = cmp->name(),
          .predicate = RiscvPredicate::FEQ,
      });
    } else {
      auto tmp = genTempReg();
      pseudoInsts.at(bb).emplace_back(RiscvPseudoBinary{
          .result = tmp,
          .lhs = cmp->lhs()->name(),
          .rhs = cmp->rhs()->name(),
          .op = RiscvBinaryOps::Sub,
      });
      pseudoInsts.at(bb).emplace_back(RiscvPseudoEqz{
          .dest = cmp->name(),
          .src = tmp,
          .isEqz = true,
      });
    }
  }
  if (cmp->predicate == Predicate::NE) {
    if (cmp->lhs()->type()->isFloatingPoint()) {
      pseudoInsts.at(bb).emplace_back(RiscvPseudoCmp{
          .lhs = cmp->lhs()->name(),
          .rhs = cmp->rhs()->name(),
          .dest = cmp->name(),
          .predicate = RiscvPredicate::FEQ,
      });
      pseudoInsts.at(bb).emplace_back(RiscvPseudoBinary{
          .result = cmp->name(),
          .lhs = cmp->name(),
          .rhs = "1",
          .op = RiscvBinaryOps::Xor,
      });
    } else {
      auto tmp = genTempReg();
      pseudoInsts.at(bb).emplace_back(RiscvPseudoBinary{
          .result = tmp,
          .lhs = cmp->lhs()->name(),
          .rhs = cmp->rhs()->name(),
          .op = RiscvBinaryOps::Sub,
      });
      pseudoInsts.at(bb).emplace_back(RiscvPseudoEqz{
          .dest = cmp->name(),
          .src = tmp,
          .isEqz = false,
      });
    }
  }
}

void PseudoInstTranslator::translateGep(CRef<BasicBlock> bb,
                                        CRef<GepInst> gep) {
  std::string baseName{};
  if (isa<GlobalVariable>(gep->pointer())) {
    baseName = genTempReg();
    pseudoInsts.at(bb).emplace_back(RiscvLoadGlobal{
        .dest = baseName,
        .global = cast<GlobalVariable>(gep->pointer())->name(),
    });
    vRegModifier[baseName] = RegModifier::DoubleWord;
  } else
    baseName = gep->pointer()->name();

  auto baseType = gep->pointer()->type();
  CRef<Type> elementType{};
  if (baseType->isPointer())
    elementType = cast<PointerType>(baseType)->elementType();
  else if (baseType->isArray())
    elementType = cast<ArrayType>(baseType)->elementType();
  else
    throw std::runtime_error("unsupported type in GEP");

  if (gep->index()) {
    assert(gep->index()->type()->isInteger());
    if (!isa<Constant>(gep->index())) {
      auto offsetComputeInst = RiscvPseudoBinary{
          .result = "__" + gep->name() + "_offset_byte__",
          .lhs = gep->index()->name(),
          .rhs = std::to_string(sizeOfType(elementType)),
          .op = RiscvBinaryOps::Mul,
      };
      toBitShift(offsetComputeInst);
      pseudoInsts.at(bb).emplace_back(offsetComputeInst);
      pseudoInsts.at(bb).emplace_back(RiscvPseudoBinary{
          .result = gep->name(),
          .lhs = baseName,
          .rhs = offsetComputeInst.result,
          .op = RiscvBinaryOps::Add,
      });
    } else {
      auto offsetByElement = std::stoi(cast<Constant>(gep->index())->name());
      auto offsetByBit = offsetByElement * sizeOfType(elementType);
      pseudoInsts.at(bb).emplace_back(RiscvPseudoBinary{
          .result = gep->name(),
          .lhs = baseName,
          .rhs = std::to_string(offsetByBit),
          .op = RiscvBinaryOps::Add,
      });
    }
  } else
    pseudoInsts.at(bb).emplace_back(RiscvPseudoMove{
        .dest = gep->name(),
        .src = baseName,
    });
  vRegModifier[gep->name()] = RegModifier::DoubleWord;
}

template <typename T> struct BinaryTable {
  static const std::function<T(T, T)> &get(RiscvBinaryOps op) {

    if constexpr (std::is_integral_v<T>) {
      static std::unordered_map<RiscvBinaryOps, std::function<T(T, T)>> table{
          {RiscvBinaryOps::Add, std::plus<T>{}},
          {RiscvBinaryOps::Sub, std::minus<T>{}},
          {RiscvBinaryOps::Mul, std::multiplies<T>{}},
          {RiscvBinaryOps::Div, std::divides<T>{}},
          {RiscvBinaryOps::And, std::bit_and<T>{}},
          {RiscvBinaryOps::Or, std::bit_or<T>{}},
          {RiscvBinaryOps::Xor, std::bit_xor<T>{}},
          {RiscvBinaryOps::Shl, [](T lhs, T rhs) { return lhs << rhs; }},
          {RiscvBinaryOps::Shr, [](T lhs, T rhs) { return lhs >> rhs; }},
      };
      return table.at(op);
    } else {
      static std::unordered_map<RiscvBinaryOps, std::function<T(T, T)>> table{
          {RiscvBinaryOps::Add, std::plus<T>{}},
          {RiscvBinaryOps::Sub, std::minus<T>{}},
          {RiscvBinaryOps::Mul, std::multiplies<T>{}},
          {RiscvBinaryOps::Div, std::divides<T>{}},
      };
      return table.at(op);
    }
  }
};

void PseudoInstTranslator::translateConstantBinary(CRef<BasicBlock> bb,
                                                   CRef<BinaryInst> binary) {
  auto riscvOp =
      toRiscvBinaryOps(static_cast<Instruction::BinaryOps>(binary->opCode));
  if (binary->lhs()->type()->isInteger()) {
    auto lhsVal = std::stoi(cast<Constant>(binary->lhs())->name());
    auto rhsVal = std::stoi(cast<Constant>(binary->rhs())->name());
    auto result = BinaryTable<int>::get(riscvOp)(lhsVal, rhsVal);
    pseudoInsts.at(bb).emplace_back(RiscvPseudoMove{
        .dest = binary->name(),
        .src = std::to_string(result),
    });
  }
  if (binary->lhs()->type() == Type::floatType(ctx)) {
    auto lhsVal = std::stof(cast<Constant>(binary->lhs())->name());
    auto rhsVal = std::stof(cast<Constant>(binary->rhs())->name());
    auto result = BinaryTable<float>::get(riscvOp)(lhsVal, rhsVal);
    pseudoInsts.at(bb).emplace_back(RiscvPseudoMove{
        .dest = binary->name(),
        .src = std::to_string(result),
    });
  }
  if (binary->lhs()->type() == Type::doubleType(ctx)) {
    auto lhsVal = std::stod(cast<Constant>(binary->lhs())->name());
    auto rhsVal = std::stod(cast<Constant>(binary->rhs())->name());
    auto result = BinaryTable<double>::get(riscvOp)(lhsVal, rhsVal);
    pseudoInsts.at(bb).emplace_back(RiscvPseudoMove{
        .dest = binary->name(),
        .src = std::to_string(result),
    });
  }
}

void PseudoInstTranslator::translateBinary(CRef<BasicBlock> bb,
                                           CRef<BinaryInst> binary) {
  if (isa<Constant>(binary->lhs()) && isa<Constant>(binary->rhs())) {
    translateConstantBinary(bb, binary);
    return ;
  }
  auto translation = RiscvPseudoBinary{
      .result = binary->name(),
      .lhs = binary->lhs()->name(),
      .rhs = binary->rhs()->name(),
      .op = toRiscvBinaryOps(
          static_cast<Instruction::BinaryOps>(binary->opCode))};
  if (binary->type()->isInteger()) {
    if (!toBitShift(translation)) {
      if (binary->isCommutative()) {
        std::swap(translation.lhs, translation.rhs);
        toBitShift(translation);
      }
    }
    pseudoInsts.at(bb).emplace_back(translation);
  }
}

void PseudoInstTranslator::translate() {
  std::unordered_map<CRef<BasicBlock>, std::vector<RiscvPseudoInstruction>>
      phiAppended{};
  auto eliminatePhi = [&](CRef<PhiInst> phi) {
    const auto &phiName = phi->name();
    for (auto i = 0; i < phi->incomingValues.size(); i++) {
      auto reg = phi->incomingValues[i];
      if (reg->name() == phiName)
        continue;
      auto pred = cast<BasicBlock>(phi->incomingBlocks[i]);
      phiAppended[pred].emplace_back(RiscvPseudoMove{
          .dest = phiName,
          .src = reg->name(),
      });
    }
  };
  for (auto bb : func.basicBlockRefs()) {
    pseudoInsts.emplace(bb, std::vector<RiscvPseudoInstruction>{});
    for (auto inst : bb->instructions)
      if (isa<PhiInst>(inst))
        eliminatePhi(cast<PhiInst>(inst));
  }

  auto decideModifier = [&](CRef<Value> value) {
    if (!value->type())
      return RegModifier::None;
    if (value->type()->isVoid())
      return RegModifier::None;
    if (value->type()->isInteger()) {
      auto bitWidth = cast<IntegerType>(value->type())->bitWidth();
      if (bitWidth <= 32)
        return RegModifier::None;
      if (bitWidth <= 64)
        return RegModifier::DoubleWord;
      throw std::runtime_error("bit width too large");
    }
    if (value->type()->isConvertibleToPointer())
      return RegModifier::DoubleWord;
    return value->type() == Type::floatType(ctx) ? RegModifier::Float
                                                 : RegModifier::Double;
  };

  for (auto arg : func.args()) {
    if (decideModifier(arg) == RegModifier::None)
      continue;
    vRegModifier[arg->name()] = decideModifier(arg);
  }
  for (auto bb : func.basicBlockRefs()) {
    for (const auto &[reg, value] : bb->identifiers()) {
      if (decideModifier(value) == RegModifier::None)
        continue;
      vRegModifier[reg] = decideModifier(value);
    }
    for (auto inst : bb->instructions) {
      if (isa<PhiInst>(inst))
        continue;
      if (isa<GepInst>(inst)) {
        translateGep(bb, cast<GepInst>(inst));
      } else if (isa<BrInst>(inst)) {
        if (phiAppended.contains(bb))
          pseudoInsts.at(bb).insert(pseudoInsts.at(bb).end(),
                                    phiAppended.at(bb).begin(),
                                    phiAppended.at(bb).end());
        translateJump(bb, cast<BrInst>(inst));
      } else if (isa<CmpInst>(inst)) {
        translateCmp(bb, cast<CmpInst>(inst));
      } else if (isa<LoadInst>(inst)) {
        translateLoad(bb, cast<LoadInst>(inst));
      } else if (isa<StoreInst>(inst)) {
        translateStore(bb, cast<StoreInst>(inst));
      } else if (isa<CallInst>(inst)) {
        translateCall(bb, cast<CallInst>(inst));
      } else if (isa<RetInst>(inst)) {
        pseudoInsts.at(bb).emplace_back(toPseudoRet(cast<RetInst>(inst)));
        break;
      } else if (isa<BinaryInst>(inst)) {
        translateBinary(bb, cast<BinaryInst>(inst));
      } else if (isa<AllocaInst>(inst)) {
        pseudoInsts.at(bb).emplace_back(RiscvPseudoAlloca{
            .result = inst->name(),
        });
      } else {
        pseudoInsts.at(bb).emplace_back(toSimplePseudoInstruction(inst));
      }
    }
  }

  // log all the pseudo instructions
  for (const auto &[bb, insts] : pseudoInsts) {
    logger->info("<<<<<< {} >>>>>>", bb->name());
    for (const auto &inst : insts)
      logger->info(toString(inst));
    logger->info("");
    logger->outStream().flush();
  }
}

static std::vector<CRef<BasicBlock>> linearizeBlocks(const Function &func) {
  std::queue<CRef<BasicBlock>> q;
  std::unordered_set<CRef<BasicBlock>> visited;
  std::vector<CRef<BasicBlock>> result{};
  q.push(makeCRef(func.basicBlock("entry")));
  visited.insert(makeCRef(func.basicBlock("entry")));
  while (!q.empty()) {
    auto bb = q.front();
    result.push_back(bb);
    q.pop();
    for (auto succ : bb->successors) {
      if (visited.contains(succ))
        continue;
      visited.insert(succ);
      q.emplace(succ);
    }
  }
  return result;
}

PseudoInstructionSequence PseudoInstTranslator::pseudoInstSequence() const {
  const auto &linearizedBlockSeq = linearizeBlocks(func);
  std::vector<RiscvPseudoInstruction> pseudoInstSeq{};
  std::map<int32_t, std::string> labels{};
  for (auto bb : linearizedBlockSeq) {
    labels.insert({static_cast<int32_t>(pseudoInstSeq.size()), bb->name()});
    pseudoInstSeq.insert(pseudoInstSeq.end(), pseudoInsts.at(bb).begin(),
                         pseudoInsts.at(bb).end());
  }
  return PseudoInstructionSequence{
      .insts = pseudoInstSeq,
      .labels = labels,
  };
}

} // namespace llvm
//
// Created by creeper on 1/13/25.
//
#include "chiisai-llvm/backend/riscv/passes/register-weight-estimation.h"
#include "chiisai-llvm/backend/riscv/riscv-backend.h"
#include "chiisai-llvm/backend/riscv/riscv-reg-alloc.h"

#include <chiisai-llvm/backend/riscv/passes/liveness-analysis.h>
#include <chiisai-llvm/backend/riscv/pseudo-inst-translator.h>
#include <chiisai-llvm/module-builder.h>
#include <chiisai-llvm/module.h>
#include <chiisai-llvm/passes/dot-cfg-pass.h>
#include <chiisai-llvm/passes/loop-analysis.h>
#include <chiisai-llvm/passes/mem2reg-pass.h>
#include <chiisai-llvm/passes/single-jump-elimination-pass.h>
#include <chiisai-llvm/passes/useless-arith-elimination.h>

#include <iostream>
using namespace llvm;

int main(int argc, char **argv) {
  if (argc != 2) {
    std::cerr << std::format("Usage: {} <input-file>\n", argv[0]);
    return 1;
  }
  std::filesystem::path input(argv[1]);
  auto [module, llvmContext] = buildModule(input);
  for (auto function : module->functions) {
    if (!function->isImplemented()) continue;
    SingleJumpEliminationPass().runOnFunction(*function);
    PromoteMemToRegPass().runOnFunction(*function);
    UselessArithEliminationPass(*llvmContext).runOnFunction(*function);
  }
  auto srcFileName = input.stem().string();
  std::filesystem::path output = srcFileName + ".asm";
  std::ofstream file(output);
  file << RiscvBackend(*llvmContext).generateAssembly(*module);
  std::cout << "assembly has been saved to " << output << std::endl;
  return 0;
}
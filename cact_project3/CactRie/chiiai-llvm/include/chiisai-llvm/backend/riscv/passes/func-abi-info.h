//
// Created by creeper on 12/26/24.
//

#ifndef FUNC_ABI_INFO_H
#define FUNC_ABI_INFO_H

#include "chiisai-llvm/module.h"

#include <chiisai-llvm/backend/riscv/riscv-backend-metadata.h>
#include <chiisai-llvm/function.h>

namespace llvm {

struct FunctionABIInfo {
  explicit FunctionABIInfo(const Module &module) : module(module) {}
  void runOnFunction(const Function &func);

  uint32_t numIntArgRegUsed(const std::string &func) const {
    const auto &intArgRegs = integerArgReg.at(func);
    return intArgRegs.size();
  }

  uint32_t numFloatArgRegUsed(const std::string &func) const {
    const auto &floatArgRegs = floatArgReg.at(func);
    return floatArgRegs.size();
  }

  std::optional<uint32_t> getIntArgRegIdx(const std::string &func,
                                          uint32_t argIdx) const {
    const auto &intArgRegs = integerArgReg.at(func);
    auto function = module.function(func);
    auto it = std::ranges::find(intArgRegs, argIdx);
    if (it == intArgRegs.end())
      return std::nullopt;
    auto idx = std::distance(intArgRegs.begin(), it);
    return idx;
  }

  std::optional<uint32_t> getFloatArgRegIdx(const std::string &func,
                                            uint32_t argIdx) const {
    const auto &floatArgRegs = floatArgReg.at(func);
    auto function = module.function(func);
    auto it = std::ranges::find(floatArgRegs, argIdx);

    if (it == floatArgRegs.end())
      return std::nullopt;
    auto idx = std::distance(floatArgRegs.begin(), it);
    return idx;
  }

  const Module &module;
  std::unordered_map<std::string, std::vector<uint32_t>> integerArgReg;
  std::unordered_map<std::string, std::vector<uint32_t>> floatArgReg;
  std::unordered_map<std::string, std::vector<uint32_t>> argsInRegs;
  std::unordered_map<std::string, std::vector<uint32_t>> argsOnStack;
  std::unordered_map<std::string, std::unordered_map<std::string, int32_t>>
      localIdSizes{};
  std::unordered_map<std::string, uint32_t> localSize{};
};

} // namespace llvm
#endif // FUNC_ABI_INFO_H

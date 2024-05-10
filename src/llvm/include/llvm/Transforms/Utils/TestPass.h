#ifndef LLVM_TRANSFORMS_TESTPASS_H
#define LLVM_TRANSFORMS_TESTPASS_H
#include "llvm/IR/Instructions.h"
#include "llvm/IR/PassManager.h"

namespace llvm {
class TestPass : public PassInfoMixin<TestPass> {
public:
  PreservedAnalyses run(Function &F, FunctionAnalysisManager &AM);
  PreservedAnalyses run(Module&, ModuleAnalysisManager&);
};
} // namespace llvm

#endif

#include "llvm/Transforms/Utils/TestPass.h"

using namespace llvm;

PreservedAnalyses TestPass::run(Function &F, FunctionAnalysisManager &AM) {
  // Trovo numero di argomenti
  unsigned numArgs = F.arg_size();
  std::string argStr =
      (F.isVarArg()) ? std::to_string(numArgs) + "+*" : std::to_string(numArgs);

  // Trovo numero di blocchi base e istruzioni e chiamate a funzione
  auto bbCounter = 0u, instrCounter = 0u, callInstrCounter = 0u;
  for (const auto &bb : F) {
    bbCounter++;
    for (const auto &i : bb) {
      instrCounter++;
      if (auto *call = dyn_cast<CallInst>(&i)) {
        callInstrCounter++;
      }
    }
  }

  errs() << "Nome funzione: " << F.getName() << "\n"
         << "N° di argomenti: " << argStr << "\n"
         << "N° di chiamate a funzione nello stesso modulo: "
         << callInstrCounter << "\n"
         << "N° di blocchi base: " << bbCounter << "\n"
         << "N° di istruzioni: " << instrCounter << "\n";

  return PreservedAnalyses::all();
}

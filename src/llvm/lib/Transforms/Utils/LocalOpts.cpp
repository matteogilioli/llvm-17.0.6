//===-- LocalOpts.cpp - Example Transformations --------------------------===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

#include "llvm/Transforms/Utils/LocalOpts.h"
#include "llvm/IR/Instructions.h"
#include "llvm/IR/InstrTypes.h"

using namespace llvm;

bool strengthReduction(Instruction &inst) {
  bool transformed = false;
  if (inst.getOpcode() == Instruction::Mul) {
    // Moltiplicazione per potenza di 2 e per potenza di 2 + 1 o - 1
    for (int op = 0; op < 2; op++) {
      ConstantInt *c = dyn_cast<ConstantInt>(inst.getOperand(op));
      if (c) {
        int value = c->getSExtValue();
        if ((value & (value - 1)) == 0) {
          // Potenza di due
          Instruction *shl = BinaryOperator::Create(
              Instruction::Shl, inst.getOperand(op == 1 ? 0 : 1),
              ConstantInt::get(c->getType(), c->getValue().logBase2()));
          shl->insertAfter(&inst);
          inst.replaceAllUsesWith(shl);
          outs() << "Sostituzione di " << inst << " con " << *shl << '\n';
          transformed = true;
        }
      }
    }
  }
  return transformed;
}

bool runOnBasicBlock(BasicBlock &B) {
  bool isModified = false;
  for (Instruction &inst : B) {
    if (strengthReduction(inst))
      isModified = true;
  }
  return isModified;
}

bool runOnFunction(Function &F) {
  bool Transformed = false;

  for (auto Iter = F.begin(); Iter != F.end(); ++Iter) {
    if (runOnBasicBlock(*Iter)) {
      Transformed = true;
    }
  }

  return Transformed;
}


PreservedAnalyses LocalOpts::run(Module &M, ModuleAnalysisManager &AM) {
  for (auto Fiter = M.begin(); Fiter != M.end(); ++Fiter)
    if (runOnFunction(*Fiter))
      return PreservedAnalyses::none();

  return PreservedAnalyses::all();
}

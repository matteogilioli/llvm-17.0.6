; NOTE: Assertions have been autogenerated by utils/update_analyze_test_checks.py
; RUN: opt -passes="print<cost-model>" 2>&1 -disable-output -cost-kind=code-size %s -S -o - | FileCheck %s --check-prefix=CHECK-SIZE
; RUN: opt -passes="print<cost-model>" 2>&1 -disable-output -cost-kind=throughput %s -S -o - | FileCheck %s --check-prefix=CHECK-THROUGHPUT

target datalayout = "e-m:e-i8:8:32-i16:16:32-i64:64-i128:128-n32:64-S128"

define i32 @trivially_free() {
; CHECK-SIZE-LABEL: 'trivially_free'
; CHECK-SIZE-NEXT:  Cost Model: Found an estimated cost of 0 for instruction: %a0 = call i32 @llvm.annotation.i32.p0(i32 undef, ptr undef, ptr undef, i32 undef)
; CHECK-SIZE-NEXT:  Cost Model: Found an estimated cost of 0 for instruction: call void @llvm.assume(i1 undef)
; CHECK-SIZE-NEXT:  Cost Model: Found an estimated cost of 0 for instruction: call void @llvm.experimental.noalias.scope.decl(metadata !3)
; CHECK-SIZE-NEXT:  Cost Model: Found an estimated cost of 0 for instruction: call void @llvm.sideeffect()
; CHECK-SIZE-NEXT:  Cost Model: Found an estimated cost of 0 for instruction: call void @llvm.dbg.assign(metadata ptr undef, metadata !6, metadata !DIExpression(), metadata !8, metadata ptr undef, metadata !DIExpression()), !dbg !9
; CHECK-SIZE-NEXT:  Cost Model: Found an estimated cost of 0 for instruction: call void @llvm.dbg.declare(metadata ptr undef, metadata !6, metadata !DIExpression()), !dbg !9
; CHECK-SIZE-NEXT:  Cost Model: Found an estimated cost of 0 for instruction: call void @llvm.dbg.label(metadata !10), !dbg !9
; CHECK-SIZE-NEXT:  Cost Model: Found an estimated cost of 0 for instruction: %a1 = call ptr @llvm.invariant.start.p0(i64 1, ptr undef)
; CHECK-SIZE-NEXT:  Cost Model: Found an estimated cost of 0 for instruction: call void @llvm.invariant.end.p0(ptr undef, i64 1, ptr undef)
; CHECK-SIZE-NEXT:  Cost Model: Found an estimated cost of 0 for instruction: %a2 = call ptr @llvm.launder.invariant.group.p0(ptr undef)
; CHECK-SIZE-NEXT:  Cost Model: Found an estimated cost of 0 for instruction: %a3 = call ptr @llvm.strip.invariant.group.p0(ptr undef)
; CHECK-SIZE-NEXT:  Cost Model: Found an estimated cost of 0 for instruction: %a4 = call i1 @llvm.is.constant.i32(i32 undef)
; CHECK-SIZE-NEXT:  Cost Model: Found an estimated cost of 0 for instruction: call void @llvm.lifetime.start.p0(i64 1, ptr undef)
; CHECK-SIZE-NEXT:  Cost Model: Found an estimated cost of 0 for instruction: call void @llvm.lifetime.end.p0(i64 1, ptr undef)
; CHECK-SIZE-NEXT:  Cost Model: Found an estimated cost of 0 for instruction: %a5 = call i64 @llvm.objectsize.i64.p0(ptr undef, i1 true, i1 true, i1 true)
; CHECK-SIZE-NEXT:  Cost Model: Found an estimated cost of 0 for instruction: %a6 = call ptr @llvm.ptr.annotation.p0.p0(ptr undef, ptr undef, ptr undef, i32 undef, ptr undef)
; CHECK-SIZE-NEXT:  Cost Model: Found an estimated cost of 0 for instruction: call void @llvm.var.annotation.p0.p0(ptr undef, ptr undef, ptr undef, i32 undef, ptr undef)
; CHECK-SIZE-NEXT:  Cost Model: Found an estimated cost of 1 for instruction: ret i32 undef
;
; CHECK-THROUGHPUT-LABEL: 'trivially_free'
; CHECK-THROUGHPUT-NEXT:  Cost Model: Found an estimated cost of 0 for instruction: %a0 = call i32 @llvm.annotation.i32.p0(i32 undef, ptr undef, ptr undef, i32 undef)
; CHECK-THROUGHPUT-NEXT:  Cost Model: Found an estimated cost of 0 for instruction: call void @llvm.assume(i1 undef)
; CHECK-THROUGHPUT-NEXT:  Cost Model: Found an estimated cost of 0 for instruction: call void @llvm.experimental.noalias.scope.decl(metadata !3)
; CHECK-THROUGHPUT-NEXT:  Cost Model: Found an estimated cost of 0 for instruction: call void @llvm.sideeffect()
; CHECK-THROUGHPUT-NEXT:  Cost Model: Found an estimated cost of 0 for instruction: call void @llvm.dbg.assign(metadata ptr undef, metadata !6, metadata !DIExpression(), metadata !8, metadata ptr undef, metadata !DIExpression()), !dbg !9
; CHECK-THROUGHPUT-NEXT:  Cost Model: Found an estimated cost of 0 for instruction: call void @llvm.dbg.declare(metadata ptr undef, metadata !6, metadata !DIExpression()), !dbg !9
; CHECK-THROUGHPUT-NEXT:  Cost Model: Found an estimated cost of 0 for instruction: call void @llvm.dbg.label(metadata !10), !dbg !9
; CHECK-THROUGHPUT-NEXT:  Cost Model: Found an estimated cost of 0 for instruction: %a1 = call ptr @llvm.invariant.start.p0(i64 1, ptr undef)
; CHECK-THROUGHPUT-NEXT:  Cost Model: Found an estimated cost of 0 for instruction: call void @llvm.invariant.end.p0(ptr undef, i64 1, ptr undef)
; CHECK-THROUGHPUT-NEXT:  Cost Model: Found an estimated cost of 0 for instruction: %a2 = call ptr @llvm.launder.invariant.group.p0(ptr undef)
; CHECK-THROUGHPUT-NEXT:  Cost Model: Found an estimated cost of 0 for instruction: %a3 = call ptr @llvm.strip.invariant.group.p0(ptr undef)
; CHECK-THROUGHPUT-NEXT:  Cost Model: Found an estimated cost of 0 for instruction: %a4 = call i1 @llvm.is.constant.i32(i32 undef)
; CHECK-THROUGHPUT-NEXT:  Cost Model: Found an estimated cost of 0 for instruction: call void @llvm.lifetime.start.p0(i64 1, ptr undef)
; CHECK-THROUGHPUT-NEXT:  Cost Model: Found an estimated cost of 0 for instruction: call void @llvm.lifetime.end.p0(i64 1, ptr undef)
; CHECK-THROUGHPUT-NEXT:  Cost Model: Found an estimated cost of 0 for instruction: %a5 = call i64 @llvm.objectsize.i64.p0(ptr undef, i1 true, i1 true, i1 true)
; CHECK-THROUGHPUT-NEXT:  Cost Model: Found an estimated cost of 0 for instruction: %a6 = call ptr @llvm.ptr.annotation.p0.p0(ptr undef, ptr undef, ptr undef, i32 undef, ptr undef)
; CHECK-THROUGHPUT-NEXT:  Cost Model: Found an estimated cost of 0 for instruction: call void @llvm.var.annotation.p0.p0(ptr undef, ptr undef, ptr undef, i32 undef, ptr undef)
; CHECK-THROUGHPUT-NEXT:  Cost Model: Found an estimated cost of 1 for instruction: ret i32 undef
;
  %a0 = call i32 @llvm.annotation.i32(i32 undef, ptr undef, ptr undef, i32 undef)
  call void @llvm.assume(i1 undef)
  call void @llvm.experimental.noalias.scope.decl(metadata !4)
  call void @llvm.sideeffect()
  call void @llvm.dbg.assign(metadata ptr undef, metadata !0, metadata !DIExpression(), metadata !10, metadata ptr undef, metadata !DIExpression()), !dbg !8
  call void @llvm.dbg.declare(metadata ptr undef, metadata !0, metadata !DIExpression()), !dbg !8
  call void @llvm.dbg.value(metadata i64 undef, i64 undef, metadata !DIExpression(), metadata !DIExpression()), !dbg !8
  call void @llvm.dbg.label(metadata !2), !dbg !8
  %a1 = call ptr @llvm.invariant.start.p0(i64 1, ptr undef)
  call void @llvm.invariant.end.p0(ptr undef, i64 1, ptr undef)
  %a2 = call ptr @llvm.launder.invariant.group.p0(ptr undef)
  %a3 = call ptr @llvm.strip.invariant.group.p0(ptr undef)
  %a4 = call i1 @llvm.is.constant.i32(i32 undef)
  call void @llvm.lifetime.start.p0(i64 1, ptr undef)
  call void @llvm.lifetime.end.p0(i64 1, ptr undef)
  %a5 = call i64 @llvm.objectsize.i64.p0(ptr undef, i1 1, i1 1, i1 1)
  %a6 = call ptr @llvm.ptr.annotation.p0(ptr undef, ptr undef, ptr undef, i32 undef, ptr undef)
  call void @llvm.var.annotation(ptr undef, ptr undef, ptr undef, i32 undef, ptr undef)
  ret i32 undef
}

declare i32 @llvm.annotation.i32(i32, ptr, ptr, i32)
declare void @llvm.assume(i1)
declare void @llvm.experimental.noalias.scope.decl(metadata)
declare void @llvm.sideeffect()
declare void @llvm.dbg.assign(metadata, metadata, metadata, metadata, metadata, metadata)
declare void @llvm.dbg.declare(metadata, metadata, metadata)
declare void @llvm.dbg.value(metadata, i64, metadata, metadata)
declare void @llvm.dbg.label(metadata)
declare ptr @llvm.invariant.start.p0(i64, ptr)
declare void @llvm.invariant.end.p0(ptr, i64, ptr)
declare ptr @llvm.launder.invariant.group.p0(ptr)
declare ptr @llvm.strip.invariant.group.p0(ptr)
declare i1 @llvm.is.constant.i32(i32)
declare void @llvm.lifetime.start.p0(i64, ptr)
declare void @llvm.lifetime.end.p0(i64, ptr)
declare i64 @llvm.objectsize.i64.p0(ptr, i1, i1, i1)
declare ptr @llvm.ptr.annotation.p0(ptr, ptr, ptr, i32, ptr)
declare void @llvm.var.annotation(ptr, ptr, ptr, i32, ptr)

!llvm.dbg.cu = !{!9}
!llvm.module.flags = !{!7}

!0 = !DILocalVariable(scope: !1)
!1 = distinct !DISubprogram(name: "dummy", line: 79, isLocal: true, isDefinition: true, virtualIndex: 6, flags: DIFlagPrototyped, isOptimized: true, file: !3, unit: !9)
!2 = !DILabel(scope: !1, name: "label", file: !3, line: 7)
!3 = !DIFile(filename: "debug-label.c", directory: "./")
!4 = !{ !5 }
!5 = distinct !{ !5, !6, !"foo: var" }
!6 = distinct !{ !6, !"foo" }
!7 = !{i32 2, !"Debug Info Version", i32 3}
!8 = !DILocation(line: 0, scope: !1)
!9 = distinct !DICompileUnit(language: DW_LANG_C11, file: !3, producer: "clang")
!10 = distinct !DIAssignID()
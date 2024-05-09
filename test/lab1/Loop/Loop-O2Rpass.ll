; ModuleID = 'TEST/Loop.c'
source_filename = "TEST/Loop.c"
target datalayout = "e-m:o-i64:64-i128:128-n32:64-S128"
target triple = "arm64-apple-macosx14.0.0"

@g = common local_unnamed_addr global i32 0, align 4

; Function Attrs: mustprogress nofree norecurse nosync nounwind ssp willreturn uwtable(sync)
define i32 @g_incr(i32 noundef %0) local_unnamed_addr #0 !dbg !9 {
  %2 = load i32, ptr @g, align 4, !dbg !12, !tbaa !13
  %3 = add nsw i32 %2, %0, !dbg !12
  store i32 %3, ptr @g, align 4, !dbg !12, !tbaa !13
  ret i32 %3, !dbg !17
}

; Function Attrs: nofree norecurse nosync nounwind ssp uwtable(sync)
define i32 @loop(i32 noundef %0, i32 noundef %1, i32 noundef %2) local_unnamed_addr #1 !dbg !18 {
  %4 = load i32, ptr @g, align 4, !tbaa !13
  %5 = icmp sgt i32 %1, %0, !dbg !19
  br i1 %5, label %6, label %10, !dbg !20

6:                                                ; preds = %3
  %7 = sub i32 %1, %0, !dbg !20
  %8 = mul i32 %7, %2, !dbg !20
  %9 = add i32 %4, %8, !dbg !20
  store i32 %9, ptr @g, align 4, !dbg !21, !tbaa !13
  br label %10, !dbg !20

10:                                               ; preds = %6, %3
  %11 = phi i32 [ %9, %6 ], [ %4, %3 ], !dbg !23
  ret i32 %11, !dbg !24
}

attributes #0 = { mustprogress nofree norecurse nosync nounwind ssp willreturn uwtable(sync) "frame-pointer"="non-leaf" "min-legal-vector-width"="0" "no-trapping-math"="true" "probe-stack"="__chkstk_darwin" "stack-protector-buffer-size"="8" "target-cpu"="apple-m1" "target-features"="+aes,+crc,+crypto,+dotprod,+fp-armv8,+fp16fml,+fullfp16,+lse,+neon,+ras,+rcpc,+rdm,+sha2,+sha3,+sm4,+v8.1a,+v8.2a,+v8.3a,+v8.4a,+v8.5a,+v8a,+zcm,+zcz" }
attributes #1 = { nofree norecurse nosync nounwind ssp uwtable(sync) "frame-pointer"="non-leaf" "min-legal-vector-width"="0" "no-trapping-math"="true" "probe-stack"="__chkstk_darwin" "stack-protector-buffer-size"="8" "target-cpu"="apple-m1" "target-features"="+aes,+crc,+crypto,+dotprod,+fp-armv8,+fp16fml,+fullfp16,+lse,+neon,+ras,+rcpc,+rdm,+sha2,+sha3,+sm4,+v8.1a,+v8.2a,+v8.3a,+v8.4a,+v8.5a,+v8a,+zcm,+zcz" }

!llvm.module.flags = !{!0, !1, !2, !3, !4, !5}
!llvm.dbg.cu = !{!6}
!llvm.ident = !{!8}

!0 = !{i32 2, !"SDK Version", [2 x i32] [i32 14, i32 4]}
!1 = !{i32 2, !"Debug Info Version", i32 3}
!2 = !{i32 1, !"wchar_size", i32 4}
!3 = !{i32 8, !"PIC Level", i32 2}
!4 = !{i32 7, !"uwtable", i32 1}
!5 = !{i32 7, !"frame-pointer", i32 1}
!6 = distinct !DICompileUnit(language: DW_LANG_C99, file: !7, producer: "Apple clang version 15.0.0 (clang-1500.3.9.4)", isOptimized: true, runtimeVersion: 0, emissionKind: NoDebug, splitDebugInlining: false, nameTableKind: None, sysroot: "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk", sdk: "MacOSX.sdk")
!7 = !DIFile(filename: "TEST/Loop.c", directory: "/Users/matteo/Developer/LLVM")
!8 = !{!"Apple clang version 15.0.0 (clang-1500.3.9.4)"}
!9 = distinct !DISubprogram(name: "g_incr", scope: !7, file: !7, line: 20, type: !10, scopeLine: 20, flags: DIFlagPrototyped, spFlags: DISPFlagDefinition | DISPFlagOptimized, unit: !6, retainedNodes: !11)
!10 = !DISubroutineType(types: !11)
!11 = !{}
!12 = !DILocation(line: 21, column: 5, scope: !9)
!13 = !{!14, !14, i64 0}
!14 = !{!"int", !15, i64 0}
!15 = !{!"omnipotent char", !16, i64 0}
!16 = !{!"Simple C/C++ TBAA"}
!17 = !DILocation(line: 22, column: 3, scope: !9)
!18 = distinct !DISubprogram(name: "loop", scope: !7, file: !7, line: 30, type: !10, scopeLine: 30, flags: DIFlagPrototyped, spFlags: DISPFlagDefinition | DISPFlagOptimized, unit: !6, retainedNodes: !11)
!19 = !DILocation(line: 33, column: 17, scope: !18)
!20 = !DILocation(line: 33, column: 3, scope: !18)
!21 = !DILocation(line: 21, column: 5, scope: !9, inlinedAt: !22)
!22 = distinct !DILocation(line: 34, column: 5, scope: !18)
!23 = !DILocation(line: 37, column: 16, scope: !18)
!24 = !DILocation(line: 37, column: 3, scope: !18)

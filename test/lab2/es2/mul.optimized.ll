; ModuleID = 'mul.optimized.bc'
source_filename = "mul.ll"

define dso_local i32 @foo(i32 noundef %0, i32 noundef %1) {
  %3 = add nsw i32 %0, %1
  %4 = mul nsw i32 %3, 8
  %5 = shl i32 %3, 3
  ret i32 %4
}

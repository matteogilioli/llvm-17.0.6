; int mul(int a, int b) {
;   int c = a + b;
;   return c * 8;
; }

define dso_local i32 @foo(i32 noundef %0, i32 noundef %1) #0 {
  %3 = add nsw i32 %0, %1
  %4 = mul nsw i32 %3, 8
  ret i32 %4
}

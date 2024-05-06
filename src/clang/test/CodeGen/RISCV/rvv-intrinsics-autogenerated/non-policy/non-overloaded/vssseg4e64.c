// NOTE: Assertions have been autogenerated by utils/update_cc_test_checks.py UTC_ARGS: --version 2
// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +zvfh -disable-O0-optnone  \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

// CHECK-RV64-LABEL: define dso_local void @test_vssseg4e64_v_f64m1x4
// CHECK-RV64-SAME: (ptr noundef [[BASE:%.*]], i64 noundef [[BSTRIDE:%.*]], <vscale x 1 x double> [[V_TUPLE_COERCE0:%.*]], <vscale x 1 x double> [[V_TUPLE_COERCE1:%.*]], <vscale x 1 x double> [[V_TUPLE_COERCE2:%.*]], <vscale x 1 x double> [[V_TUPLE_COERCE3:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0:[0-9]+]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = insertvalue { <vscale x 1 x double>, <vscale x 1 x double>, <vscale x 1 x double>, <vscale x 1 x double> } poison, <vscale x 1 x double> [[V_TUPLE_COERCE0]], 0
// CHECK-RV64-NEXT:    [[TMP1:%.*]] = insertvalue { <vscale x 1 x double>, <vscale x 1 x double>, <vscale x 1 x double>, <vscale x 1 x double> } [[TMP0]], <vscale x 1 x double> [[V_TUPLE_COERCE1]], 1
// CHECK-RV64-NEXT:    [[TMP2:%.*]] = insertvalue { <vscale x 1 x double>, <vscale x 1 x double>, <vscale x 1 x double>, <vscale x 1 x double> } [[TMP1]], <vscale x 1 x double> [[V_TUPLE_COERCE2]], 2
// CHECK-RV64-NEXT:    [[TMP3:%.*]] = insertvalue { <vscale x 1 x double>, <vscale x 1 x double>, <vscale x 1 x double>, <vscale x 1 x double> } [[TMP2]], <vscale x 1 x double> [[V_TUPLE_COERCE3]], 3
// CHECK-RV64-NEXT:    [[TMP4:%.*]] = extractvalue { <vscale x 1 x double>, <vscale x 1 x double>, <vscale x 1 x double>, <vscale x 1 x double> } [[TMP3]], 0
// CHECK-RV64-NEXT:    [[TMP5:%.*]] = extractvalue { <vscale x 1 x double>, <vscale x 1 x double>, <vscale x 1 x double>, <vscale x 1 x double> } [[TMP3]], 1
// CHECK-RV64-NEXT:    [[TMP6:%.*]] = extractvalue { <vscale x 1 x double>, <vscale x 1 x double>, <vscale x 1 x double>, <vscale x 1 x double> } [[TMP3]], 2
// CHECK-RV64-NEXT:    [[TMP7:%.*]] = extractvalue { <vscale x 1 x double>, <vscale x 1 x double>, <vscale x 1 x double>, <vscale x 1 x double> } [[TMP3]], 3
// CHECK-RV64-NEXT:    call void @llvm.riscv.vssseg4.nxv1f64.i64(<vscale x 1 x double> [[TMP4]], <vscale x 1 x double> [[TMP5]], <vscale x 1 x double> [[TMP6]], <vscale x 1 x double> [[TMP7]], ptr [[BASE]], i64 [[BSTRIDE]], i64 [[VL]])
// CHECK-RV64-NEXT:    ret void
//
void test_vssseg4e64_v_f64m1x4(double *base, ptrdiff_t bstride, vfloat64m1x4_t v_tuple, size_t vl) {
  return __riscv_vssseg4e64_v_f64m1x4(base, bstride, v_tuple, vl);
}

// CHECK-RV64-LABEL: define dso_local void @test_vssseg4e64_v_f64m2x4
// CHECK-RV64-SAME: (ptr noundef [[BASE:%.*]], i64 noundef [[BSTRIDE:%.*]], <vscale x 2 x double> [[V_TUPLE_COERCE0:%.*]], <vscale x 2 x double> [[V_TUPLE_COERCE1:%.*]], <vscale x 2 x double> [[V_TUPLE_COERCE2:%.*]], <vscale x 2 x double> [[V_TUPLE_COERCE3:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = insertvalue { <vscale x 2 x double>, <vscale x 2 x double>, <vscale x 2 x double>, <vscale x 2 x double> } poison, <vscale x 2 x double> [[V_TUPLE_COERCE0]], 0
// CHECK-RV64-NEXT:    [[TMP1:%.*]] = insertvalue { <vscale x 2 x double>, <vscale x 2 x double>, <vscale x 2 x double>, <vscale x 2 x double> } [[TMP0]], <vscale x 2 x double> [[V_TUPLE_COERCE1]], 1
// CHECK-RV64-NEXT:    [[TMP2:%.*]] = insertvalue { <vscale x 2 x double>, <vscale x 2 x double>, <vscale x 2 x double>, <vscale x 2 x double> } [[TMP1]], <vscale x 2 x double> [[V_TUPLE_COERCE2]], 2
// CHECK-RV64-NEXT:    [[TMP3:%.*]] = insertvalue { <vscale x 2 x double>, <vscale x 2 x double>, <vscale x 2 x double>, <vscale x 2 x double> } [[TMP2]], <vscale x 2 x double> [[V_TUPLE_COERCE3]], 3
// CHECK-RV64-NEXT:    [[TMP4:%.*]] = extractvalue { <vscale x 2 x double>, <vscale x 2 x double>, <vscale x 2 x double>, <vscale x 2 x double> } [[TMP3]], 0
// CHECK-RV64-NEXT:    [[TMP5:%.*]] = extractvalue { <vscale x 2 x double>, <vscale x 2 x double>, <vscale x 2 x double>, <vscale x 2 x double> } [[TMP3]], 1
// CHECK-RV64-NEXT:    [[TMP6:%.*]] = extractvalue { <vscale x 2 x double>, <vscale x 2 x double>, <vscale x 2 x double>, <vscale x 2 x double> } [[TMP3]], 2
// CHECK-RV64-NEXT:    [[TMP7:%.*]] = extractvalue { <vscale x 2 x double>, <vscale x 2 x double>, <vscale x 2 x double>, <vscale x 2 x double> } [[TMP3]], 3
// CHECK-RV64-NEXT:    call void @llvm.riscv.vssseg4.nxv2f64.i64(<vscale x 2 x double> [[TMP4]], <vscale x 2 x double> [[TMP5]], <vscale x 2 x double> [[TMP6]], <vscale x 2 x double> [[TMP7]], ptr [[BASE]], i64 [[BSTRIDE]], i64 [[VL]])
// CHECK-RV64-NEXT:    ret void
//
void test_vssseg4e64_v_f64m2x4(double *base, ptrdiff_t bstride, vfloat64m2x4_t v_tuple, size_t vl) {
  return __riscv_vssseg4e64_v_f64m2x4(base, bstride, v_tuple, vl);
}

// CHECK-RV64-LABEL: define dso_local void @test_vssseg4e64_v_i64m1x4
// CHECK-RV64-SAME: (ptr noundef [[BASE:%.*]], i64 noundef [[BSTRIDE:%.*]], <vscale x 1 x i64> [[V_TUPLE_COERCE0:%.*]], <vscale x 1 x i64> [[V_TUPLE_COERCE1:%.*]], <vscale x 1 x i64> [[V_TUPLE_COERCE2:%.*]], <vscale x 1 x i64> [[V_TUPLE_COERCE3:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = insertvalue { <vscale x 1 x i64>, <vscale x 1 x i64>, <vscale x 1 x i64>, <vscale x 1 x i64> } poison, <vscale x 1 x i64> [[V_TUPLE_COERCE0]], 0
// CHECK-RV64-NEXT:    [[TMP1:%.*]] = insertvalue { <vscale x 1 x i64>, <vscale x 1 x i64>, <vscale x 1 x i64>, <vscale x 1 x i64> } [[TMP0]], <vscale x 1 x i64> [[V_TUPLE_COERCE1]], 1
// CHECK-RV64-NEXT:    [[TMP2:%.*]] = insertvalue { <vscale x 1 x i64>, <vscale x 1 x i64>, <vscale x 1 x i64>, <vscale x 1 x i64> } [[TMP1]], <vscale x 1 x i64> [[V_TUPLE_COERCE2]], 2
// CHECK-RV64-NEXT:    [[TMP3:%.*]] = insertvalue { <vscale x 1 x i64>, <vscale x 1 x i64>, <vscale x 1 x i64>, <vscale x 1 x i64> } [[TMP2]], <vscale x 1 x i64> [[V_TUPLE_COERCE3]], 3
// CHECK-RV64-NEXT:    [[TMP4:%.*]] = extractvalue { <vscale x 1 x i64>, <vscale x 1 x i64>, <vscale x 1 x i64>, <vscale x 1 x i64> } [[TMP3]], 0
// CHECK-RV64-NEXT:    [[TMP5:%.*]] = extractvalue { <vscale x 1 x i64>, <vscale x 1 x i64>, <vscale x 1 x i64>, <vscale x 1 x i64> } [[TMP3]], 1
// CHECK-RV64-NEXT:    [[TMP6:%.*]] = extractvalue { <vscale x 1 x i64>, <vscale x 1 x i64>, <vscale x 1 x i64>, <vscale x 1 x i64> } [[TMP3]], 2
// CHECK-RV64-NEXT:    [[TMP7:%.*]] = extractvalue { <vscale x 1 x i64>, <vscale x 1 x i64>, <vscale x 1 x i64>, <vscale x 1 x i64> } [[TMP3]], 3
// CHECK-RV64-NEXT:    call void @llvm.riscv.vssseg4.nxv1i64.i64(<vscale x 1 x i64> [[TMP4]], <vscale x 1 x i64> [[TMP5]], <vscale x 1 x i64> [[TMP6]], <vscale x 1 x i64> [[TMP7]], ptr [[BASE]], i64 [[BSTRIDE]], i64 [[VL]])
// CHECK-RV64-NEXT:    ret void
//
void test_vssseg4e64_v_i64m1x4(int64_t *base, ptrdiff_t bstride, vint64m1x4_t v_tuple, size_t vl) {
  return __riscv_vssseg4e64_v_i64m1x4(base, bstride, v_tuple, vl);
}

// CHECK-RV64-LABEL: define dso_local void @test_vssseg4e64_v_i64m2x4
// CHECK-RV64-SAME: (ptr noundef [[BASE:%.*]], i64 noundef [[BSTRIDE:%.*]], <vscale x 2 x i64> [[V_TUPLE_COERCE0:%.*]], <vscale x 2 x i64> [[V_TUPLE_COERCE1:%.*]], <vscale x 2 x i64> [[V_TUPLE_COERCE2:%.*]], <vscale x 2 x i64> [[V_TUPLE_COERCE3:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = insertvalue { <vscale x 2 x i64>, <vscale x 2 x i64>, <vscale x 2 x i64>, <vscale x 2 x i64> } poison, <vscale x 2 x i64> [[V_TUPLE_COERCE0]], 0
// CHECK-RV64-NEXT:    [[TMP1:%.*]] = insertvalue { <vscale x 2 x i64>, <vscale x 2 x i64>, <vscale x 2 x i64>, <vscale x 2 x i64> } [[TMP0]], <vscale x 2 x i64> [[V_TUPLE_COERCE1]], 1
// CHECK-RV64-NEXT:    [[TMP2:%.*]] = insertvalue { <vscale x 2 x i64>, <vscale x 2 x i64>, <vscale x 2 x i64>, <vscale x 2 x i64> } [[TMP1]], <vscale x 2 x i64> [[V_TUPLE_COERCE2]], 2
// CHECK-RV64-NEXT:    [[TMP3:%.*]] = insertvalue { <vscale x 2 x i64>, <vscale x 2 x i64>, <vscale x 2 x i64>, <vscale x 2 x i64> } [[TMP2]], <vscale x 2 x i64> [[V_TUPLE_COERCE3]], 3
// CHECK-RV64-NEXT:    [[TMP4:%.*]] = extractvalue { <vscale x 2 x i64>, <vscale x 2 x i64>, <vscale x 2 x i64>, <vscale x 2 x i64> } [[TMP3]], 0
// CHECK-RV64-NEXT:    [[TMP5:%.*]] = extractvalue { <vscale x 2 x i64>, <vscale x 2 x i64>, <vscale x 2 x i64>, <vscale x 2 x i64> } [[TMP3]], 1
// CHECK-RV64-NEXT:    [[TMP6:%.*]] = extractvalue { <vscale x 2 x i64>, <vscale x 2 x i64>, <vscale x 2 x i64>, <vscale x 2 x i64> } [[TMP3]], 2
// CHECK-RV64-NEXT:    [[TMP7:%.*]] = extractvalue { <vscale x 2 x i64>, <vscale x 2 x i64>, <vscale x 2 x i64>, <vscale x 2 x i64> } [[TMP3]], 3
// CHECK-RV64-NEXT:    call void @llvm.riscv.vssseg4.nxv2i64.i64(<vscale x 2 x i64> [[TMP4]], <vscale x 2 x i64> [[TMP5]], <vscale x 2 x i64> [[TMP6]], <vscale x 2 x i64> [[TMP7]], ptr [[BASE]], i64 [[BSTRIDE]], i64 [[VL]])
// CHECK-RV64-NEXT:    ret void
//
void test_vssseg4e64_v_i64m2x4(int64_t *base, ptrdiff_t bstride, vint64m2x4_t v_tuple, size_t vl) {
  return __riscv_vssseg4e64_v_i64m2x4(base, bstride, v_tuple, vl);
}

// CHECK-RV64-LABEL: define dso_local void @test_vssseg4e64_v_u64m1x4
// CHECK-RV64-SAME: (ptr noundef [[BASE:%.*]], i64 noundef [[BSTRIDE:%.*]], <vscale x 1 x i64> [[V_TUPLE_COERCE0:%.*]], <vscale x 1 x i64> [[V_TUPLE_COERCE1:%.*]], <vscale x 1 x i64> [[V_TUPLE_COERCE2:%.*]], <vscale x 1 x i64> [[V_TUPLE_COERCE3:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = insertvalue { <vscale x 1 x i64>, <vscale x 1 x i64>, <vscale x 1 x i64>, <vscale x 1 x i64> } poison, <vscale x 1 x i64> [[V_TUPLE_COERCE0]], 0
// CHECK-RV64-NEXT:    [[TMP1:%.*]] = insertvalue { <vscale x 1 x i64>, <vscale x 1 x i64>, <vscale x 1 x i64>, <vscale x 1 x i64> } [[TMP0]], <vscale x 1 x i64> [[V_TUPLE_COERCE1]], 1
// CHECK-RV64-NEXT:    [[TMP2:%.*]] = insertvalue { <vscale x 1 x i64>, <vscale x 1 x i64>, <vscale x 1 x i64>, <vscale x 1 x i64> } [[TMP1]], <vscale x 1 x i64> [[V_TUPLE_COERCE2]], 2
// CHECK-RV64-NEXT:    [[TMP3:%.*]] = insertvalue { <vscale x 1 x i64>, <vscale x 1 x i64>, <vscale x 1 x i64>, <vscale x 1 x i64> } [[TMP2]], <vscale x 1 x i64> [[V_TUPLE_COERCE3]], 3
// CHECK-RV64-NEXT:    [[TMP4:%.*]] = extractvalue { <vscale x 1 x i64>, <vscale x 1 x i64>, <vscale x 1 x i64>, <vscale x 1 x i64> } [[TMP3]], 0
// CHECK-RV64-NEXT:    [[TMP5:%.*]] = extractvalue { <vscale x 1 x i64>, <vscale x 1 x i64>, <vscale x 1 x i64>, <vscale x 1 x i64> } [[TMP3]], 1
// CHECK-RV64-NEXT:    [[TMP6:%.*]] = extractvalue { <vscale x 1 x i64>, <vscale x 1 x i64>, <vscale x 1 x i64>, <vscale x 1 x i64> } [[TMP3]], 2
// CHECK-RV64-NEXT:    [[TMP7:%.*]] = extractvalue { <vscale x 1 x i64>, <vscale x 1 x i64>, <vscale x 1 x i64>, <vscale x 1 x i64> } [[TMP3]], 3
// CHECK-RV64-NEXT:    call void @llvm.riscv.vssseg4.nxv1i64.i64(<vscale x 1 x i64> [[TMP4]], <vscale x 1 x i64> [[TMP5]], <vscale x 1 x i64> [[TMP6]], <vscale x 1 x i64> [[TMP7]], ptr [[BASE]], i64 [[BSTRIDE]], i64 [[VL]])
// CHECK-RV64-NEXT:    ret void
//
void test_vssseg4e64_v_u64m1x4(uint64_t *base, ptrdiff_t bstride, vuint64m1x4_t v_tuple, size_t vl) {
  return __riscv_vssseg4e64_v_u64m1x4(base, bstride, v_tuple, vl);
}

// CHECK-RV64-LABEL: define dso_local void @test_vssseg4e64_v_u64m2x4
// CHECK-RV64-SAME: (ptr noundef [[BASE:%.*]], i64 noundef [[BSTRIDE:%.*]], <vscale x 2 x i64> [[V_TUPLE_COERCE0:%.*]], <vscale x 2 x i64> [[V_TUPLE_COERCE1:%.*]], <vscale x 2 x i64> [[V_TUPLE_COERCE2:%.*]], <vscale x 2 x i64> [[V_TUPLE_COERCE3:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = insertvalue { <vscale x 2 x i64>, <vscale x 2 x i64>, <vscale x 2 x i64>, <vscale x 2 x i64> } poison, <vscale x 2 x i64> [[V_TUPLE_COERCE0]], 0
// CHECK-RV64-NEXT:    [[TMP1:%.*]] = insertvalue { <vscale x 2 x i64>, <vscale x 2 x i64>, <vscale x 2 x i64>, <vscale x 2 x i64> } [[TMP0]], <vscale x 2 x i64> [[V_TUPLE_COERCE1]], 1
// CHECK-RV64-NEXT:    [[TMP2:%.*]] = insertvalue { <vscale x 2 x i64>, <vscale x 2 x i64>, <vscale x 2 x i64>, <vscale x 2 x i64> } [[TMP1]], <vscale x 2 x i64> [[V_TUPLE_COERCE2]], 2
// CHECK-RV64-NEXT:    [[TMP3:%.*]] = insertvalue { <vscale x 2 x i64>, <vscale x 2 x i64>, <vscale x 2 x i64>, <vscale x 2 x i64> } [[TMP2]], <vscale x 2 x i64> [[V_TUPLE_COERCE3]], 3
// CHECK-RV64-NEXT:    [[TMP4:%.*]] = extractvalue { <vscale x 2 x i64>, <vscale x 2 x i64>, <vscale x 2 x i64>, <vscale x 2 x i64> } [[TMP3]], 0
// CHECK-RV64-NEXT:    [[TMP5:%.*]] = extractvalue { <vscale x 2 x i64>, <vscale x 2 x i64>, <vscale x 2 x i64>, <vscale x 2 x i64> } [[TMP3]], 1
// CHECK-RV64-NEXT:    [[TMP6:%.*]] = extractvalue { <vscale x 2 x i64>, <vscale x 2 x i64>, <vscale x 2 x i64>, <vscale x 2 x i64> } [[TMP3]], 2
// CHECK-RV64-NEXT:    [[TMP7:%.*]] = extractvalue { <vscale x 2 x i64>, <vscale x 2 x i64>, <vscale x 2 x i64>, <vscale x 2 x i64> } [[TMP3]], 3
// CHECK-RV64-NEXT:    call void @llvm.riscv.vssseg4.nxv2i64.i64(<vscale x 2 x i64> [[TMP4]], <vscale x 2 x i64> [[TMP5]], <vscale x 2 x i64> [[TMP6]], <vscale x 2 x i64> [[TMP7]], ptr [[BASE]], i64 [[BSTRIDE]], i64 [[VL]])
// CHECK-RV64-NEXT:    ret void
//
void test_vssseg4e64_v_u64m2x4(uint64_t *base, ptrdiff_t bstride, vuint64m2x4_t v_tuple, size_t vl) {
  return __riscv_vssseg4e64_v_u64m2x4(base, bstride, v_tuple, vl);
}

// CHECK-RV64-LABEL: define dso_local void @test_vssseg4e64_v_f64m1x4_m
// CHECK-RV64-SAME: (<vscale x 1 x i1> [[MASK:%.*]], ptr noundef [[BASE:%.*]], i64 noundef [[BSTRIDE:%.*]], <vscale x 1 x double> [[V_TUPLE_COERCE0:%.*]], <vscale x 1 x double> [[V_TUPLE_COERCE1:%.*]], <vscale x 1 x double> [[V_TUPLE_COERCE2:%.*]], <vscale x 1 x double> [[V_TUPLE_COERCE3:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = insertvalue { <vscale x 1 x double>, <vscale x 1 x double>, <vscale x 1 x double>, <vscale x 1 x double> } poison, <vscale x 1 x double> [[V_TUPLE_COERCE0]], 0
// CHECK-RV64-NEXT:    [[TMP1:%.*]] = insertvalue { <vscale x 1 x double>, <vscale x 1 x double>, <vscale x 1 x double>, <vscale x 1 x double> } [[TMP0]], <vscale x 1 x double> [[V_TUPLE_COERCE1]], 1
// CHECK-RV64-NEXT:    [[TMP2:%.*]] = insertvalue { <vscale x 1 x double>, <vscale x 1 x double>, <vscale x 1 x double>, <vscale x 1 x double> } [[TMP1]], <vscale x 1 x double> [[V_TUPLE_COERCE2]], 2
// CHECK-RV64-NEXT:    [[TMP3:%.*]] = insertvalue { <vscale x 1 x double>, <vscale x 1 x double>, <vscale x 1 x double>, <vscale x 1 x double> } [[TMP2]], <vscale x 1 x double> [[V_TUPLE_COERCE3]], 3
// CHECK-RV64-NEXT:    [[TMP4:%.*]] = extractvalue { <vscale x 1 x double>, <vscale x 1 x double>, <vscale x 1 x double>, <vscale x 1 x double> } [[TMP3]], 0
// CHECK-RV64-NEXT:    [[TMP5:%.*]] = extractvalue { <vscale x 1 x double>, <vscale x 1 x double>, <vscale x 1 x double>, <vscale x 1 x double> } [[TMP3]], 1
// CHECK-RV64-NEXT:    [[TMP6:%.*]] = extractvalue { <vscale x 1 x double>, <vscale x 1 x double>, <vscale x 1 x double>, <vscale x 1 x double> } [[TMP3]], 2
// CHECK-RV64-NEXT:    [[TMP7:%.*]] = extractvalue { <vscale x 1 x double>, <vscale x 1 x double>, <vscale x 1 x double>, <vscale x 1 x double> } [[TMP3]], 3
// CHECK-RV64-NEXT:    call void @llvm.riscv.vssseg4.mask.nxv1f64.i64(<vscale x 1 x double> [[TMP4]], <vscale x 1 x double> [[TMP5]], <vscale x 1 x double> [[TMP6]], <vscale x 1 x double> [[TMP7]], ptr [[BASE]], i64 [[BSTRIDE]], <vscale x 1 x i1> [[MASK]], i64 [[VL]])
// CHECK-RV64-NEXT:    ret void
//
void test_vssseg4e64_v_f64m1x4_m(vbool64_t mask, double *base, ptrdiff_t bstride, vfloat64m1x4_t v_tuple, size_t vl) {
  return __riscv_vssseg4e64_v_f64m1x4_m(mask, base, bstride, v_tuple, vl);
}

// CHECK-RV64-LABEL: define dso_local void @test_vssseg4e64_v_f64m2x4_m
// CHECK-RV64-SAME: (<vscale x 2 x i1> [[MASK:%.*]], ptr noundef [[BASE:%.*]], i64 noundef [[BSTRIDE:%.*]], <vscale x 2 x double> [[V_TUPLE_COERCE0:%.*]], <vscale x 2 x double> [[V_TUPLE_COERCE1:%.*]], <vscale x 2 x double> [[V_TUPLE_COERCE2:%.*]], <vscale x 2 x double> [[V_TUPLE_COERCE3:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = insertvalue { <vscale x 2 x double>, <vscale x 2 x double>, <vscale x 2 x double>, <vscale x 2 x double> } poison, <vscale x 2 x double> [[V_TUPLE_COERCE0]], 0
// CHECK-RV64-NEXT:    [[TMP1:%.*]] = insertvalue { <vscale x 2 x double>, <vscale x 2 x double>, <vscale x 2 x double>, <vscale x 2 x double> } [[TMP0]], <vscale x 2 x double> [[V_TUPLE_COERCE1]], 1
// CHECK-RV64-NEXT:    [[TMP2:%.*]] = insertvalue { <vscale x 2 x double>, <vscale x 2 x double>, <vscale x 2 x double>, <vscale x 2 x double> } [[TMP1]], <vscale x 2 x double> [[V_TUPLE_COERCE2]], 2
// CHECK-RV64-NEXT:    [[TMP3:%.*]] = insertvalue { <vscale x 2 x double>, <vscale x 2 x double>, <vscale x 2 x double>, <vscale x 2 x double> } [[TMP2]], <vscale x 2 x double> [[V_TUPLE_COERCE3]], 3
// CHECK-RV64-NEXT:    [[TMP4:%.*]] = extractvalue { <vscale x 2 x double>, <vscale x 2 x double>, <vscale x 2 x double>, <vscale x 2 x double> } [[TMP3]], 0
// CHECK-RV64-NEXT:    [[TMP5:%.*]] = extractvalue { <vscale x 2 x double>, <vscale x 2 x double>, <vscale x 2 x double>, <vscale x 2 x double> } [[TMP3]], 1
// CHECK-RV64-NEXT:    [[TMP6:%.*]] = extractvalue { <vscale x 2 x double>, <vscale x 2 x double>, <vscale x 2 x double>, <vscale x 2 x double> } [[TMP3]], 2
// CHECK-RV64-NEXT:    [[TMP7:%.*]] = extractvalue { <vscale x 2 x double>, <vscale x 2 x double>, <vscale x 2 x double>, <vscale x 2 x double> } [[TMP3]], 3
// CHECK-RV64-NEXT:    call void @llvm.riscv.vssseg4.mask.nxv2f64.i64(<vscale x 2 x double> [[TMP4]], <vscale x 2 x double> [[TMP5]], <vscale x 2 x double> [[TMP6]], <vscale x 2 x double> [[TMP7]], ptr [[BASE]], i64 [[BSTRIDE]], <vscale x 2 x i1> [[MASK]], i64 [[VL]])
// CHECK-RV64-NEXT:    ret void
//
void test_vssseg4e64_v_f64m2x4_m(vbool32_t mask, double *base, ptrdiff_t bstride, vfloat64m2x4_t v_tuple, size_t vl) {
  return __riscv_vssseg4e64_v_f64m2x4_m(mask, base, bstride, v_tuple, vl);
}

// CHECK-RV64-LABEL: define dso_local void @test_vssseg4e64_v_i64m1x4_m
// CHECK-RV64-SAME: (<vscale x 1 x i1> [[MASK:%.*]], ptr noundef [[BASE:%.*]], i64 noundef [[BSTRIDE:%.*]], <vscale x 1 x i64> [[V_TUPLE_COERCE0:%.*]], <vscale x 1 x i64> [[V_TUPLE_COERCE1:%.*]], <vscale x 1 x i64> [[V_TUPLE_COERCE2:%.*]], <vscale x 1 x i64> [[V_TUPLE_COERCE3:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = insertvalue { <vscale x 1 x i64>, <vscale x 1 x i64>, <vscale x 1 x i64>, <vscale x 1 x i64> } poison, <vscale x 1 x i64> [[V_TUPLE_COERCE0]], 0
// CHECK-RV64-NEXT:    [[TMP1:%.*]] = insertvalue { <vscale x 1 x i64>, <vscale x 1 x i64>, <vscale x 1 x i64>, <vscale x 1 x i64> } [[TMP0]], <vscale x 1 x i64> [[V_TUPLE_COERCE1]], 1
// CHECK-RV64-NEXT:    [[TMP2:%.*]] = insertvalue { <vscale x 1 x i64>, <vscale x 1 x i64>, <vscale x 1 x i64>, <vscale x 1 x i64> } [[TMP1]], <vscale x 1 x i64> [[V_TUPLE_COERCE2]], 2
// CHECK-RV64-NEXT:    [[TMP3:%.*]] = insertvalue { <vscale x 1 x i64>, <vscale x 1 x i64>, <vscale x 1 x i64>, <vscale x 1 x i64> } [[TMP2]], <vscale x 1 x i64> [[V_TUPLE_COERCE3]], 3
// CHECK-RV64-NEXT:    [[TMP4:%.*]] = extractvalue { <vscale x 1 x i64>, <vscale x 1 x i64>, <vscale x 1 x i64>, <vscale x 1 x i64> } [[TMP3]], 0
// CHECK-RV64-NEXT:    [[TMP5:%.*]] = extractvalue { <vscale x 1 x i64>, <vscale x 1 x i64>, <vscale x 1 x i64>, <vscale x 1 x i64> } [[TMP3]], 1
// CHECK-RV64-NEXT:    [[TMP6:%.*]] = extractvalue { <vscale x 1 x i64>, <vscale x 1 x i64>, <vscale x 1 x i64>, <vscale x 1 x i64> } [[TMP3]], 2
// CHECK-RV64-NEXT:    [[TMP7:%.*]] = extractvalue { <vscale x 1 x i64>, <vscale x 1 x i64>, <vscale x 1 x i64>, <vscale x 1 x i64> } [[TMP3]], 3
// CHECK-RV64-NEXT:    call void @llvm.riscv.vssseg4.mask.nxv1i64.i64(<vscale x 1 x i64> [[TMP4]], <vscale x 1 x i64> [[TMP5]], <vscale x 1 x i64> [[TMP6]], <vscale x 1 x i64> [[TMP7]], ptr [[BASE]], i64 [[BSTRIDE]], <vscale x 1 x i1> [[MASK]], i64 [[VL]])
// CHECK-RV64-NEXT:    ret void
//
void test_vssseg4e64_v_i64m1x4_m(vbool64_t mask, int64_t *base, ptrdiff_t bstride, vint64m1x4_t v_tuple, size_t vl) {
  return __riscv_vssseg4e64_v_i64m1x4_m(mask, base, bstride, v_tuple, vl);
}

// CHECK-RV64-LABEL: define dso_local void @test_vssseg4e64_v_i64m2x4_m
// CHECK-RV64-SAME: (<vscale x 2 x i1> [[MASK:%.*]], ptr noundef [[BASE:%.*]], i64 noundef [[BSTRIDE:%.*]], <vscale x 2 x i64> [[V_TUPLE_COERCE0:%.*]], <vscale x 2 x i64> [[V_TUPLE_COERCE1:%.*]], <vscale x 2 x i64> [[V_TUPLE_COERCE2:%.*]], <vscale x 2 x i64> [[V_TUPLE_COERCE3:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = insertvalue { <vscale x 2 x i64>, <vscale x 2 x i64>, <vscale x 2 x i64>, <vscale x 2 x i64> } poison, <vscale x 2 x i64> [[V_TUPLE_COERCE0]], 0
// CHECK-RV64-NEXT:    [[TMP1:%.*]] = insertvalue { <vscale x 2 x i64>, <vscale x 2 x i64>, <vscale x 2 x i64>, <vscale x 2 x i64> } [[TMP0]], <vscale x 2 x i64> [[V_TUPLE_COERCE1]], 1
// CHECK-RV64-NEXT:    [[TMP2:%.*]] = insertvalue { <vscale x 2 x i64>, <vscale x 2 x i64>, <vscale x 2 x i64>, <vscale x 2 x i64> } [[TMP1]], <vscale x 2 x i64> [[V_TUPLE_COERCE2]], 2
// CHECK-RV64-NEXT:    [[TMP3:%.*]] = insertvalue { <vscale x 2 x i64>, <vscale x 2 x i64>, <vscale x 2 x i64>, <vscale x 2 x i64> } [[TMP2]], <vscale x 2 x i64> [[V_TUPLE_COERCE3]], 3
// CHECK-RV64-NEXT:    [[TMP4:%.*]] = extractvalue { <vscale x 2 x i64>, <vscale x 2 x i64>, <vscale x 2 x i64>, <vscale x 2 x i64> } [[TMP3]], 0
// CHECK-RV64-NEXT:    [[TMP5:%.*]] = extractvalue { <vscale x 2 x i64>, <vscale x 2 x i64>, <vscale x 2 x i64>, <vscale x 2 x i64> } [[TMP3]], 1
// CHECK-RV64-NEXT:    [[TMP6:%.*]] = extractvalue { <vscale x 2 x i64>, <vscale x 2 x i64>, <vscale x 2 x i64>, <vscale x 2 x i64> } [[TMP3]], 2
// CHECK-RV64-NEXT:    [[TMP7:%.*]] = extractvalue { <vscale x 2 x i64>, <vscale x 2 x i64>, <vscale x 2 x i64>, <vscale x 2 x i64> } [[TMP3]], 3
// CHECK-RV64-NEXT:    call void @llvm.riscv.vssseg4.mask.nxv2i64.i64(<vscale x 2 x i64> [[TMP4]], <vscale x 2 x i64> [[TMP5]], <vscale x 2 x i64> [[TMP6]], <vscale x 2 x i64> [[TMP7]], ptr [[BASE]], i64 [[BSTRIDE]], <vscale x 2 x i1> [[MASK]], i64 [[VL]])
// CHECK-RV64-NEXT:    ret void
//
void test_vssseg4e64_v_i64m2x4_m(vbool32_t mask, int64_t *base, ptrdiff_t bstride, vint64m2x4_t v_tuple, size_t vl) {
  return __riscv_vssseg4e64_v_i64m2x4_m(mask, base, bstride, v_tuple, vl);
}

// CHECK-RV64-LABEL: define dso_local void @test_vssseg4e64_v_u64m1x4_m
// CHECK-RV64-SAME: (<vscale x 1 x i1> [[MASK:%.*]], ptr noundef [[BASE:%.*]], i64 noundef [[BSTRIDE:%.*]], <vscale x 1 x i64> [[V_TUPLE_COERCE0:%.*]], <vscale x 1 x i64> [[V_TUPLE_COERCE1:%.*]], <vscale x 1 x i64> [[V_TUPLE_COERCE2:%.*]], <vscale x 1 x i64> [[V_TUPLE_COERCE3:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = insertvalue { <vscale x 1 x i64>, <vscale x 1 x i64>, <vscale x 1 x i64>, <vscale x 1 x i64> } poison, <vscale x 1 x i64> [[V_TUPLE_COERCE0]], 0
// CHECK-RV64-NEXT:    [[TMP1:%.*]] = insertvalue { <vscale x 1 x i64>, <vscale x 1 x i64>, <vscale x 1 x i64>, <vscale x 1 x i64> } [[TMP0]], <vscale x 1 x i64> [[V_TUPLE_COERCE1]], 1
// CHECK-RV64-NEXT:    [[TMP2:%.*]] = insertvalue { <vscale x 1 x i64>, <vscale x 1 x i64>, <vscale x 1 x i64>, <vscale x 1 x i64> } [[TMP1]], <vscale x 1 x i64> [[V_TUPLE_COERCE2]], 2
// CHECK-RV64-NEXT:    [[TMP3:%.*]] = insertvalue { <vscale x 1 x i64>, <vscale x 1 x i64>, <vscale x 1 x i64>, <vscale x 1 x i64> } [[TMP2]], <vscale x 1 x i64> [[V_TUPLE_COERCE3]], 3
// CHECK-RV64-NEXT:    [[TMP4:%.*]] = extractvalue { <vscale x 1 x i64>, <vscale x 1 x i64>, <vscale x 1 x i64>, <vscale x 1 x i64> } [[TMP3]], 0
// CHECK-RV64-NEXT:    [[TMP5:%.*]] = extractvalue { <vscale x 1 x i64>, <vscale x 1 x i64>, <vscale x 1 x i64>, <vscale x 1 x i64> } [[TMP3]], 1
// CHECK-RV64-NEXT:    [[TMP6:%.*]] = extractvalue { <vscale x 1 x i64>, <vscale x 1 x i64>, <vscale x 1 x i64>, <vscale x 1 x i64> } [[TMP3]], 2
// CHECK-RV64-NEXT:    [[TMP7:%.*]] = extractvalue { <vscale x 1 x i64>, <vscale x 1 x i64>, <vscale x 1 x i64>, <vscale x 1 x i64> } [[TMP3]], 3
// CHECK-RV64-NEXT:    call void @llvm.riscv.vssseg4.mask.nxv1i64.i64(<vscale x 1 x i64> [[TMP4]], <vscale x 1 x i64> [[TMP5]], <vscale x 1 x i64> [[TMP6]], <vscale x 1 x i64> [[TMP7]], ptr [[BASE]], i64 [[BSTRIDE]], <vscale x 1 x i1> [[MASK]], i64 [[VL]])
// CHECK-RV64-NEXT:    ret void
//
void test_vssseg4e64_v_u64m1x4_m(vbool64_t mask, uint64_t *base, ptrdiff_t bstride, vuint64m1x4_t v_tuple, size_t vl) {
  return __riscv_vssseg4e64_v_u64m1x4_m(mask, base, bstride, v_tuple, vl);
}

// CHECK-RV64-LABEL: define dso_local void @test_vssseg4e64_v_u64m2x4_m
// CHECK-RV64-SAME: (<vscale x 2 x i1> [[MASK:%.*]], ptr noundef [[BASE:%.*]], i64 noundef [[BSTRIDE:%.*]], <vscale x 2 x i64> [[V_TUPLE_COERCE0:%.*]], <vscale x 2 x i64> [[V_TUPLE_COERCE1:%.*]], <vscale x 2 x i64> [[V_TUPLE_COERCE2:%.*]], <vscale x 2 x i64> [[V_TUPLE_COERCE3:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = insertvalue { <vscale x 2 x i64>, <vscale x 2 x i64>, <vscale x 2 x i64>, <vscale x 2 x i64> } poison, <vscale x 2 x i64> [[V_TUPLE_COERCE0]], 0
// CHECK-RV64-NEXT:    [[TMP1:%.*]] = insertvalue { <vscale x 2 x i64>, <vscale x 2 x i64>, <vscale x 2 x i64>, <vscale x 2 x i64> } [[TMP0]], <vscale x 2 x i64> [[V_TUPLE_COERCE1]], 1
// CHECK-RV64-NEXT:    [[TMP2:%.*]] = insertvalue { <vscale x 2 x i64>, <vscale x 2 x i64>, <vscale x 2 x i64>, <vscale x 2 x i64> } [[TMP1]], <vscale x 2 x i64> [[V_TUPLE_COERCE2]], 2
// CHECK-RV64-NEXT:    [[TMP3:%.*]] = insertvalue { <vscale x 2 x i64>, <vscale x 2 x i64>, <vscale x 2 x i64>, <vscale x 2 x i64> } [[TMP2]], <vscale x 2 x i64> [[V_TUPLE_COERCE3]], 3
// CHECK-RV64-NEXT:    [[TMP4:%.*]] = extractvalue { <vscale x 2 x i64>, <vscale x 2 x i64>, <vscale x 2 x i64>, <vscale x 2 x i64> } [[TMP3]], 0
// CHECK-RV64-NEXT:    [[TMP5:%.*]] = extractvalue { <vscale x 2 x i64>, <vscale x 2 x i64>, <vscale x 2 x i64>, <vscale x 2 x i64> } [[TMP3]], 1
// CHECK-RV64-NEXT:    [[TMP6:%.*]] = extractvalue { <vscale x 2 x i64>, <vscale x 2 x i64>, <vscale x 2 x i64>, <vscale x 2 x i64> } [[TMP3]], 2
// CHECK-RV64-NEXT:    [[TMP7:%.*]] = extractvalue { <vscale x 2 x i64>, <vscale x 2 x i64>, <vscale x 2 x i64>, <vscale x 2 x i64> } [[TMP3]], 3
// CHECK-RV64-NEXT:    call void @llvm.riscv.vssseg4.mask.nxv2i64.i64(<vscale x 2 x i64> [[TMP4]], <vscale x 2 x i64> [[TMP5]], <vscale x 2 x i64> [[TMP6]], <vscale x 2 x i64> [[TMP7]], ptr [[BASE]], i64 [[BSTRIDE]], <vscale x 2 x i1> [[MASK]], i64 [[VL]])
// CHECK-RV64-NEXT:    ret void
//
void test_vssseg4e64_v_u64m2x4_m(vbool32_t mask, uint64_t *base, ptrdiff_t bstride, vuint64m2x4_t v_tuple, size_t vl) {
  return __riscv_vssseg4e64_v_u64m2x4_m(mask, base, bstride, v_tuple, vl);
}

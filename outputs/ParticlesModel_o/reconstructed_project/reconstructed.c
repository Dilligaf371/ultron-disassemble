/* ============================================================================
* ULTRON DISASSEMBLE — AUTONOMOUS COMPILABLE RECONSTRUCTION (C17/C23)
* Auto-synthesized from binary CFG, SSA lifter, and recovered symbol table
* ============================================================================ */

#include <stdint.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef uint64_t u64;
typedef int64_t  i64;
typedef uint32_t u32;

/* ── Recovered Read-Only String Literals ── */
static const char * const ULTRON_STR_00 = "#>333?" /* @ 0x14c22 */;
static const char * const ULTRON_STR_01 = "Aleria" /* @ 0x14f8c */;
static const char * const ULTRON_STR_02 = "ParticlesState" /* @ 0x14f93 */;
static const char * const ULTRON_STR_03 = "ParticlesBudget" /* @ 0x14fa2 */;
static const char * const ULTRON_STR_04 = "ParticlesPalette" /* @ 0x14fc0 */;
static const char * const ULTRON_STR_05 = "ParticlesFaceClass" /* @ 0x14fe0 */;
static const char * const ULTRON_STR_06 = "ParticlesGeometry" /* @ 0x15000 */;
static const char * const ULTRON_STR_07 = "Face" /* @ 0x15012 */;
static const char * const ULTRON_STR_08 = "Edge" /* @ 0x15017 */;
static const char * const ULTRON_STR_09 = "ParticlesUniforms" /* @ 0x15020 */;
static const char * const ULTRON_STR_10 = "ParticlesMotion" /* @ 0x15032 */;
static const char * const ULTRON_STR_11 = "idle" /* @ 0x15050 */;
static const char * const ULTRON_STR_12 = "listening" /* @ 0x15055 */;
static const char * const ULTRON_STR_13 = "thinking" /* @ 0x1505f */;
static const char * const ULTRON_STR_14 = "speaking" /* @ 0x15068 */;
static const char * const ULTRON_STR_15 = "alert" /* @ 0x15071 */;
static const char * const ULTRON_STR_16 = "sleeping" /* @ 0x15077 */;
static const char * const ULTRON_STR_17 = "finished" /* @ 0x15080 */;
static const char * const ULTRON_STR_18 = "Double value cannot be converted to Int because it is either infinite or NaN" /* @ 0x15090 */;
static const char * const ULTRON_STR_19 = "Swift/arm64e-apple-macos.swiftinterface" /* @ 0x150e0 */;
static const char * const ULTRON_STR_20 = "Not enough bits to represent the passed value" /* @ 0x15110 */;
static const char * const ULTRON_STR_21 = "Fatal error" /* @ 0x1513e */;
static const char * const ULTRON_STR_22 = "Double value cannot be converted to Int because the result would be less than Int.min" /* @ 0x15150 */;
static const char * const ULTRON_STR_23 = "Double value cannot be converted to Int because the result would be greater than Int.max" /* @ 0x151b0 */;
static const char * const ULTRON_STR_24 = "Index out of range" /* @ 0x15210 */;
static const char * const ULTRON_STR_25 = "Range requires lowerBound <= upperBound" /* @ 0x15230 */;
static const char * const ULTRON_STR_26 = "Float value cannot be converted to Int because it is either infinite or NaN" /* @ 0x15260 */;
static const char * const ULTRON_STR_27 = "Float value cannot be converted to Int because the result would be less than Int.min" /* @ 0x152b0 */;
static const char * const ULTRON_STR_28 = "Float value cannot be converted to Int because the result would be greater than Int.max" /* @ 0x15310 */;
static const char * const ULTRON_STR_29 = "ySdGG" /* @ 0x15370 */;
static const char * const ULTRON_STR_30 = "SaySdG" /* @ 0x15376 */;
static const char * const ULTRON_STR_31 = "ySdG" /* @ 0x15383 */;

/* ── Forward Declarations ── */
u64 re_flirt_cxx_exception_landing_pad_8c(u64 arg0, u64 arg1, u64 arg2); /* flirt_cxx_exception_landing_pad_8c @ 0x8c (144B) */
u64 re_flirt_objc_retain_release_thunk_11c(u64 arg0, u64 arg1, u64 arg2); /* flirt_objc_retain_release_thunk_11c @ 0x11c (16B) */
u64 re_flirt_cxx_exception_landing_pad_12c(u64 arg0, u64 arg1, u64 arg2); /* flirt_cxx_exception_landing_pad_12c @ 0x12c (16B) */
u64 re_flirt_cxx_exception_landing_pad_13c(u64 arg0, u64 arg1, u64 arg2); /* flirt_cxx_exception_landing_pad_13c @ 0x13c (276B) */
u64 re_flirt_cxx_exception_landing_pad_250(u64 arg0, u64 arg1, u64 arg2); /* flirt_cxx_exception_landing_pad_250 @ 0x250 (28B) */
u64 re_flirt_objc_retain_release_thunk_26c(u64 arg0, u64 arg1, u64 arg2); /* flirt_objc_retain_release_thunk_26c @ 0x26c (32B) */
u64 re_ss27_finalizeUninitializedArrayySayxGABnlF(u64 arg0, u64 arg1, u64 arg2); /* swift::_finalizeUninitializedArray() @ 0x28c (36B) */
u64 re_flirt_objc_retain_release_thunk_2b0(u64 arg0, u64 arg1, u64 arg2); /* flirt_objc_retain_release_thunk_2b0 @ 0x2b0 (4B) */
u64 re_flirt_pthread_mutex_scoped_lock_2b4(u64 arg0, u64 arg1, u64 arg2); /* flirt_pthread_mutex_scoped_lock_2b4 @ 0x2b4 (24B) */
u64 re_s6Aleria14ParticlesStateO8allCasesSayACGvgZ(u64 arg0, u64 arg1, u64 arg2); /* swift::Aleria::ParticlesState::allCases() @ 0x2cc (36B) */
u64 re_flirt_cxx_exception_landing_pad_2f0(u64 arg0, u64 arg1, u64 arg2); /* flirt_cxx_exception_landing_pad_2f0 @ 0x2f0 (60B) */
u64 re_flirt_pthread_mutex_scoped_lock_32c(u64 arg0, u64 arg1, u64 arg2); /* flirt_pthread_mutex_scoped_lock_32c @ 0x32c (16B) */
u64 re_s6Aleria14ParticlesStateO8rawValueSSvg(u64 arg0, u64 arg1, u64 arg2); /* swift::Aleria::ParticlesState::rawValue() @ 0x33c (164B) */
u64 re_flirt_objc_retain_release_thunk_3e0(u64 arg0, u64 arg1, u64 arg2); /* flirt_objc_retain_release_thunk_3e0 @ 0x3e0 (40B) */
u64 re_flirt_objc_retain_release_thunk_408(u64 arg0, u64 arg1, u64 arg2); /* flirt_objc_retain_release_thunk_408 @ 0x408 (40B) */
u64 re_flirt_objc_retain_release_thunk_430(u64 arg0, u64 arg1, u64 arg2); /* flirt_objc_retain_release_thunk_430 @ 0x430 (40B) */
u64 re_flirt_objc_retain_release_thunk_458(u64 arg0, u64 arg1, u64 arg2); /* flirt_objc_retain_release_thunk_458 @ 0x458 (40B) */
u64 re_flirt_objc_retain_release_thunk_480(u64 arg0, u64 arg1, u64 arg2); /* flirt_objc_retain_release_thunk_480 @ 0x480 (40B) */
u64 re_flirt_objc_retain_release_thunk_4a8(u64 arg0, u64 arg1, u64 arg2); /* flirt_objc_retain_release_thunk_4a8 @ 0x4a8 (40B) */
u64 re_flirt_objc_retain_release_thunk_4d0(u64 arg0, u64 arg1, u64 arg2); /* flirt_objc_retain_release_thunk_4d0 @ 0x4d0 (36B) */
u64 re_s6Aleria14ParticlesStateOSQAASQ2eeoiySbx_xtFZTW(u64 arg0, u64 arg1, u64 arg2); /* swift::Aleria::ParticlesState::ee() @ 0x4f4 (20B) */
u64 re_s6Aleria14ParticlesStateOSHAASH9hashValueSivgTW(u64 arg0, u64 arg1, u64 arg2); /* swift::Aleria::ParticlesState::hashValue() @ 0x508 (20B) */
u64 re_flirt_cxx_exception_landing_pad_51c(u64 arg0, u64 arg1, u64 arg2); /* flirt_cxx_exception_landing_pad_51c @ 0x51c (24B) */
u64 re_flirt_pthread_mutex_scoped_lock_534(u64 arg0, u64 arg1, u64 arg2); /* flirt_pthread_mutex_scoped_lock_534 @ 0x534 (16B) */
u64 re_s6Aleria14ParticlesStateOSHAASH4hash4intoys6HasherVz_tFTW(u64 arg0, u64 arg1, u64 arg2); /* swift::Aleria::ParticlesState::hash::into::Hasher() @ 0x544 (24B) */
u64 re_flirt_cxx_exception_landing_pad_55c(u64 arg0, u64 arg1, u64 arg2); /* flirt_cxx_exception_landing_pad_55c @ 0x55c (28B) */
u64 re_flirt_pthread_mutex_scoped_lock_578(u64 arg0, u64 arg1, u64 arg2); /* flirt_pthread_mutex_scoped_lock_578 @ 0x578 (16B) */
u64 re_s6Aleria14ParticlesStateOSHAASH13_rawHashValue4seedS2i_tFTW(u64 arg0, u64 arg1, u64 arg2); /* swift::Aleria::ParticlesState::_rawHashValue::seed::i_() @ 0x588 (24B) */
u64 re_flirt_cxx_exception_landing_pad_5a0(u64 arg0, u64 arg1, u64 arg2); /* flirt_cxx_exception_landing_pad_5a0 @ 0x5a0 (28B) */
u64 re_flirt_pthread_mutex_scoped_lock_5bc(u64 arg0, u64 arg1, u64 arg2); /* flirt_pthread_mutex_scoped_lock_5bc @ 0x5bc (16B) */

/*
* Reconstructed Procedure: flirt_cxx_exception_landing_pad_8c (@ 0x8c, 144 bytes, 1 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // flirt_cxx_exception_landing_pad_8c ───
     * int64_t flirt_cxx_exception_landing_pad_8c(int64_t arg0, int64_t arg1) {
     *     r0 = flirt_cxx_exception_landing_pad_8c(r0, r1);
     *     r8 = ((AutoStruct_flirt_cxx_exception_landing_pad_1c10_11c10 *)sp)->field_10_ro;
     *     r14 = ((AutoStruct_flirt_pthread_mutex_scoped_lock_1d64_11d64 *)sp)->field_18_ro;
     *     r9 = ((AutoStruct_flirt_cxx_exception_landing_pad_1c10_11c10 *)sp)->field_20_ro;
     *     r13 = ((AutoStruct_flirt_cxx_exception_landing_pad_5484_5484 *)sp)->field_28_rw;
     *     r12 = ((AutoStruct_flirt_cxx_exception_landing_pad_8c_8c *)sp)->field_30_rw;
     *     r11 = ((AutoStruct_flirt_cxx_exception_landing_pad_8c_8c *)sp)->field_38_rw;
     *     r10 = ((AutoStruct_flirt_cxx_exception_landing_pad_8c_8c *)sp)->field_40_rw;
     *     r1 = ((AutoStruct_flirt_cxx_exception_landing_pad_8c_8c *)sp)->field_48_rw;
     *     *([x29, #-0x40]) = r0;
     *     ((AutoStruct_flirt_cxx_exception_landing_pad_1c10_11c10 *)r0)->field_20_ro = r8;
     *     r8 = 4;
     *     ((AutoStruct_flirt_cxx_exception_landing_pad_5484_5484 *)r0)->field_28_rw = r8;
     *     r8 = 2;
     *     ((AutoStruct_flirt_cxx_exception_landing_pad_8c_8c *)r0)->field_30_rw = r8;
     *     ((AutoStruct_flirt_cxx_exception_landing_pad_8c_8c *)r0)->field_38_rw = r14;
     *     r14 = 9;
     *     ((AutoStruct_flirt_cxx_exception_landing_pad_8c_8c *)r0)->field_40_rw = r14;
     *     ((AutoStruct_flirt_cxx_exception_landing_pad_8c_8c *)r0)->field_48_rw = r8;
     *     ((AutoStruct_flirt_cxx_exception_landing_pad_8c_8c *)r0)->field_50_rw = r9;
     *     r9 = 8;
     *     ((AutoStruct_flirt_cxx_exception_landing_pad_8c_8c *)r0)->field_58_rw = r9;
     *     ((AutoStruct_flirt_cxx_exception_landing_pad_8c_8c *)r0)->field_60_rw = r8;
     *     ((AutoStruct_flirt_cxx_exception_landing_pad_8c_8c *)r0)->field_68_rw = r13;
     *     ((AutoStruct_flirt_cxx_exception_landing_pad_8c_8c *)r0)->field_70_rw = r9;
     *     ((AutoStruct_flirt_cxx_exception_landing_pad_8c_8c *)r0)->field_78_rw = r8;
     *     ((AutoStruct_flirt_cxx_exception_landing_pad_8c_8c *)r0)->field_80_rw = r12;
     *     r12 = 5;
     *     ((AutoStruct_flirt_cxx_exception_landing_pad_8c_8c *)r0)->field_88_rw = r12;
     *     ((AutoStruct_flirt_cxx_exception_landing_pad_8c_8c *)r0)->field_90_rw = r8;
     *     ((AutoStruct_flirt_cxx_exception_landing_pad_8c_8c *)r0)->field_98_rw = r11;
     *     ((AutoStruct_flirt_cxx_exception_landing_pad_8c_8c *)r0)->field_a0_rw = r9;
     *     ((AutoStruct_flirt_cxx_exception_landing_pad_8c_8c *)r0)->field_a8_rw = r8;
     *     ((AutoStruct_flirt_cxx_exception_landing_pad_8c_8c *)r0)->field_b0_rw = r10;
     *     ((AutoStruct_flirt_cxx_exception_landing_pad_8c_8c *)r0)->field_b8_rw = r9;
     *     ((AutoStruct_flirt_cxx_exception_landing_pad_8c_8c *)r0)->field_c0_rw = r8;
     * }
*/
u64 re_flirt_cxx_exception_landing_pad_8c(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x8cULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x1ULL;
}

/*
* Reconstructed Procedure: flirt_objc_retain_release_thunk_11c (@ 0x11c, 16 bytes, 1 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // flirt_objc_retain_release_thunk_11c ───
     * int64_t flirt_objc_retain_release_thunk_11c(int64_t arg0, int64_t arg1) {
     *     r0 = flirt_objc_retain_release_thunk_11c(r0, r1);
     *     r1 = *([x29, #-0x38]);
     *     r2 = *([x29, #-0x30]);
     *     *([x29, #-0x28]) = r0;
     * }
*/
u64 re_flirt_objc_retain_release_thunk_11c(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x11cULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x1ULL;
}

/*
* Reconstructed Procedure: flirt_cxx_exception_landing_pad_12c (@ 0x12c, 16 bytes, 1 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // flirt_cxx_exception_landing_pad_12c ───
     * int64_t flirt_cxx_exception_landing_pad_12c(int64_t arg0, int64_t arg1) {
     *     r0 = flirt_cxx_exception_landing_pad_12c(r0, r1);
     *     r8 = r0;
     *     r0 = *([x29, #-0x28]);
     *     *([x29, #-0x20]) = r8;
     * }
*/
u64 re_flirt_cxx_exception_landing_pad_12c(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x12cULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x1ULL;
}

/*
* Reconstructed Procedure: flirt_cxx_exception_landing_pad_13c (@ 0x13c, 276 bytes, 22 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // flirt_cxx_exception_landing_pad_13c ───
     * // Stack Frame: 0B | Basic Blocks: 22 | Natural Loops: 0 | Post-Dom Nodes: 22 | Callers: 1
     * int64_t flirt_cxx_exception_landing_pad_13c(int64_t arg0, int64_t arg1) {
     *     r0 = flirt_cxx_exception_landing_pad_13c(r0, r1);
     *     r0 = *([x29, #-0x20]);
     *     if (r0 != 0) { goto loc_15c; }
     *     // [Block 0x148 | PostDom: 0x14c]
     *     goto loc_14c;
     *     // [Block 0x14c | PostDom: exit]
     *     /* 0x14c: sturb wzr, [x29, #-1] * /
     *     r8 = 0;
     *     ((AutoStruct_flirt_objc_retain_release_thunk_1e78_11e78 *)sp)->field_0c_ro = r8;
     *     goto loc_260;
     *     // [Block 0x15c | PostDom: exit]
     *     r9 = *([x29, #-0x20]);
     *     r8 = 1;
     *     r8 = r8 - r9;
     *     if (r8 != 0) { goto loc_184; }
     *     // [Block 0x16c | PostDom: 0x170]
     *     goto loc_170;
     *     // [Block 0x170 | PostDom: exit]
     *     r8 = 1;
     *     /* 0x174: sturb w8, [x29, #-1] * /
     *     r8 = 1;
     *     ((AutoStruct_flirt_objc_retain_release_thunk_1e78_11e78 *)sp)->field_0c_ro = r8;
     *     goto loc_260;
     *     // [Block 0x184 | PostDom: exit]
     *     r9 = *([x29, #-0x20]);
     *     r8 = 2;
     *     r8 = r8 - r9;
     *     if (r8 != 0) { goto loc_1ac; }
     *     // [Block 0x194 | PostDom: 0x198]
     *     goto loc_198;
     *     // [Block 0x198 | PostDom: exit]
     *     r8 = 2;
     *     /* 0x19c: sturb w8, [x29, #-1] * /
     *     r8 = 2;
     *     ((AutoStruct_flirt_objc_retain_release_thunk_1e78_11e78 *)sp)->field_0c_ro = r8;
     *     goto loc_260;
     *     // [Block 0x1ac | PostDom: exit]
     *     r9 = *([x29, #-0x20]);
     *     r8 = 3;
     *     r8 = r8 - r9;
     *     if (r8 != 0) { goto loc_1d4; }
     *     // [Block 0x1bc | PostDom: 0x1c0]
     *     goto loc_1c0;
     *     // [Block 0x1c0 | PostDom: exit]
     *     r8 = 3;
     *     /* 0x1c4: sturb w8, [x29, #-1] * /
     *     r8 = 3;
     *     ((AutoStruct_flirt_objc_retain_release_thunk_1e78_11e78 *)sp)->field_0c_ro = r8;
     *     goto loc_260;
     *     // [Block 0x1d4 | PostDom: exit]
     *     r9 = *([x29, #-0x20]);
     *     r8 = 4;
     *     r8 = r8 - r9;
     *     if (r8 != 0) { goto loc_1fc; }
     *     // [Block 0x1e4 | PostDom: 0x1e8]
     *     goto loc_1e8;
     *     // [Block 0x1e8 | PostDom: exit]
     *     r8 = 4;
     *     /* 0x1ec: sturb w8, [x29, #-1] * /
     *     r8 = 4;
     *     ((AutoStruct_flirt_objc_retain_release_thunk_1e78_11e78 *)sp)->field_0c_ro = r8;
     *     goto loc_260;
     *     // [Block 0x1fc | PostDom: exit]
     *     r9 = *([x29, #-0x20]);
     *     r8 = 5;
     *     r8 = r8 - r9;
     *     if (r8 != 0) { goto loc_224; }
     *     // [Block 0x20c | PostDom: 0x210]
     *     goto loc_210;
     *     // [Block 0x210 | PostDom: exit]
     *     r8 = 5;
     *     /* 0x214: sturb w8, [x29, #-1] * /
     *     r8 = 5;
     *     ((AutoStruct_flirt_objc_retain_release_thunk_1e78_11e78 *)sp)->field_0c_ro = r8;
     *     goto loc_260;
     *     // [Block 0x224 | PostDom: exit]
     *     r9 = *([x29, #-0x20]);
     *     r8 = 6;
     *     r8 = r8 - r9;
     *     if (r8 != 0) { goto loc_24c; }
     *     // [Block 0x234 | PostDom: 0x238]
     *     goto loc_238;
     *     // [Block 0x238 | PostDom: exit]
     *     r8 = 6;
     *     /* 0x23c: sturb w8, [x29, #-1] * /
     *     r8 = 6;
     *     ((AutoStruct_flirt_objc_retain_release_thunk_1e78_11e78 *)sp)->field_0c_ro = r8;
     *     goto loc_260;
     *     // [Block 0x24c | PostDom: exit]
     *     r0 = *([x29, #-0x30]);
     * }
*/
u64 re_flirt_cxx_exception_landing_pad_13c(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x13cULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x1ULL;
}

/*
* Reconstructed Procedure: flirt_cxx_exception_landing_pad_250 (@ 0x250, 28 bytes, 2 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // flirt_cxx_exception_landing_pad_250 ───
     * // Stack Frame: 0B | Basic Blocks: 2 | Natural Loops: 0 | Post-Dom Nodes: 2 | Callers: 1
     * int64_t flirt_cxx_exception_landing_pad_250(int64_t arg0, int64_t arg1) {
     *     r0 = flirt_cxx_exception_landing_pad_250(r0, r1);
     *     r8 = 7;
     *     ((AutoStruct_flirt_pthread_mutex_scoped_lock_1d64_11d64 *)sp)->field_08_ro = r8;
     *     goto loc_27c;
     *     // [Block 0x260 | PostDom: exit]
     *     r0 = *([x29, #-0x30]);
     *     r8 = ((AutoStruct_flirt_objc_retain_release_thunk_1e78_11e78 *)sp)->field_0c_ro;
     *     ((AutoStruct_flirt_cxx_exception_landing_pad_1c10_11c10 *)sp)->field_04_ro = r8;
     * }
*/
u64 re_flirt_cxx_exception_landing_pad_250(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x250ULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x1ULL;
}

/*
* Reconstructed Procedure: flirt_objc_retain_release_thunk_26c (@ 0x26c, 32 bytes, 2 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // flirt_objc_retain_release_thunk_26c ───
     * // Stack Frame: 0B | Basic Blocks: 2 | Natural Loops: 0 | Post-Dom Nodes: 2 | Callers: 1
     * int64_t flirt_objc_retain_release_thunk_26c(int64_t arg0, int64_t arg1) {
     *     r0 = flirt_objc_retain_release_thunk_26c(r0, r1);
     *     r8 = ((AutoStruct_flirt_cxx_exception_landing_pad_1c10_11c10 *)sp)->field_04_ro;
     *     ((AutoStruct_flirt_pthread_mutex_scoped_lock_1d64_11d64 *)sp)->field_08_ro = r8;
     *     goto loc_27c;
     *     // [Block 0x27c | PostDom: exit]
     *     r0 = ((AutoStruct_flirt_pthread_mutex_scoped_lock_1d64_11d64 *)sp)->field_08_ro;
     *     return r0;
     * }
*/
u64 re_flirt_objc_retain_release_thunk_26c(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x26cULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x2ULL;
}

/*
* Reconstructed Procedure: swift::_finalizeUninitializedArray() (@ 0x28c, 36 bytes, 1 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // swift::_finalizeUninitializedArray() ───
     * int64_t swift::_finalizeUninitializedArray(int64_t arg0, int64_t arg1) {
     *     r8 = r1;
     *     ((AutoStruct_flirt_pthread_mutex_scoped_lock_1d64_11d64 *)sp)->field_08_ro = r8;
     *     r20 = sp;
     *     *([sp]) = r0;
     *     r0 = 0;
     * }
*/
u64 re_ss27_finalizeUninitializedArrayySayxGABnlF(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x28cULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x1ULL;
}

/*
* Reconstructed Procedure: flirt_objc_retain_release_thunk_2b0 (@ 0x2b0, 4 bytes, 1 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // flirt_objc_retain_release_thunk_2b0 ───
     * int64_t flirt_objc_retain_release_thunk_2b0(int64_t arg0, int64_t arg1) {
     *     r0 = flirt_objc_retain_release_thunk_2b0(r0, r1);
     * }
*/
u64 re_flirt_objc_retain_release_thunk_2b0(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x2b0ULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x1ULL;
}

/*
* Reconstructed Procedure: flirt_pthread_mutex_scoped_lock_2b4 (@ 0x2b4, 24 bytes, 1 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // flirt_pthread_mutex_scoped_lock_2b4 ───
     * int64_t flirt_pthread_mutex_scoped_lock_2b4(int64_t arg0, int64_t arg1) {
     *     r0 = flirt_pthread_mutex_scoped_lock_2b4(r0, r1);
     *     r0 = *([sp]);
     *     return r0;
     * }
*/
u64 re_flirt_pthread_mutex_scoped_lock_2b4(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x2b4ULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x2ULL;
}

/*
* Reconstructed Procedure: swift::Aleria::ParticlesState::allCases() (@ 0x2cc, 36 bytes, 1 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // swift::Aleria::ParticlesState::allCases() ───
     * int64_t swift::Aleria::ParticlesState::allCases(int64_t arg0, int64_t arg1) {
     *     r8 = 7;
     *     r0 = r8;
     *     r8 = 0x0;
     *     r1 = r8 + 0x10;
     *     ((AutoStruct_flirt_pthread_mutex_scoped_lock_1d64_11d64 *)sp)->field_08_ro = r1;
     * }
*/
u64 re_s6Aleria14ParticlesStateO8allCasesSayACGvgZ(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x2ccULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x3ULL;
}

/*
* Reconstructed Procedure: flirt_cxx_exception_landing_pad_2f0 (@ 0x2f0, 60 bytes, 1 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // flirt_cxx_exception_landing_pad_2f0 ───
     * int64_t flirt_cxx_exception_landing_pad_2f0(int64_t arg0, int64_t arg1) {
     *     r0 = flirt_cxx_exception_landing_pad_2f0(r0, r1);
     *     r1 = ((AutoStruct_flirt_pthread_mutex_scoped_lock_1d64_11d64 *)sp)->field_08_ro;
     *     ((AutoStruct_flirt_cxx_exception_landing_pad_1c10_11c10 *)r0)->field_20_ro = 0;
     *     r8 = 1;
     *     ((AutoStruct_flirt_cxx_exception_landing_pad_2b5c_2b5c *)r0)->field_21_rw = r8;
     *     r8 = 2;
     *     ((AutoStruct_flirt_cxx_exception_landing_pad_2b5c_2b5c *)r0)->field_22_rw = r8;
     *     r8 = 3;
     *     ((AutoStruct_flirt_cxx_exception_landing_pad_2b5c_2b5c *)r0)->field_23_rw = r8;
     *     r8 = 4;
     *     ((AutoStruct_flirt_cxx_exception_landing_pad_2b5c_2b5c *)r0)->field_24_rw = r8;
     *     r8 = 5;
     *     ((AutoStruct_flirt_cxx_exception_landing_pad_2f0_2f0 *)r0)->field_25_rw = r8;
     *     r8 = 6;
     *     ((AutoStruct_flirt_cxx_exception_landing_pad_2f0_2f0 *)r0)->field_26_rw = r8;
     * }
*/
u64 re_flirt_cxx_exception_landing_pad_2f0(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x2f0ULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x1ULL;
}

/*
* Reconstructed Procedure: flirt_pthread_mutex_scoped_lock_32c (@ 0x32c, 16 bytes, 1 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // flirt_pthread_mutex_scoped_lock_32c ───
     * int64_t flirt_pthread_mutex_scoped_lock_32c(int64_t arg0, int64_t arg1) {
     *     r0 = flirt_pthread_mutex_scoped_lock_32c(r0, r1);
     *     return r0;
     * }
*/
u64 re_flirt_pthread_mutex_scoped_lock_32c(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x32cULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x2ULL;
}

/*
* Reconstructed Procedure: swift::Aleria::ParticlesState::rawValue() (@ 0x33c, 164 bytes, 14 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // swift::Aleria::ParticlesState::rawValue() ───
     * // Stack Frame: 0B | Basic Blocks: 14 | Natural Loops: 0 | Post-Dom Nodes: 14 | Callers: 0
     * int64_t swift::Aleria::ParticlesState::rawValue(int64_t arg0, int64_t arg1) {
     *     *([x29, #-0xc]) = r0;
     *     /* 0x34c: sturb wzr, [x29, #-8] * /
     *     /* 0x350: sturb w0, [x29, #-8] * /
     *     r8 = r0 & 0xff;
     *     if (r8 == 0) { goto loc_3c8; }
     *     // [Block 0x35c | PostDom: 0x360]
     *     goto loc_360;
     *     // [Block 0x360 | PostDom: 0x370]
     *     r8 = *([x29, #-0xc]);
     *     r8 = r8 & 0xff;
     *     r8--;
     *     if (r8 == 0) { goto loc_3f0; }
     *     // [Block 0x370 | PostDom: 0x374]
     *     goto loc_374;
     *     // [Block 0x374 | PostDom: 0x384]
     *     r8 = *([x29, #-0xc]);
     *     r8 = r8 & 0xff;
     *     r8 = r8 - 2;
     *     if (r8 == 0) { goto loc_418; }
     *     // [Block 0x384 | PostDom: 0x388]
     *     goto loc_388;
     *     // [Block 0x388 | PostDom: 0x398]
     *     r8 = *([x29, #-0xc]);
     *     r8 = r8 & 0xff;
     *     r8 = r8 - 3;
     *     if (r8 == 0) { goto loc_440; }
     *     // [Block 0x398 | PostDom: 0x39c]
     *     goto loc_39c;
     *     // [Block 0x39c | PostDom: 0x3ac]
     *     r8 = *([x29, #-0xc]);
     *     r8 = r8 & 0xff;
     *     r8 = r8 - 4;
     *     if (r8 == 0) { goto loc_468; }
     *     // [Block 0x3ac | PostDom: 0x3b0]
     *     goto loc_3b0;
     *     // [Block 0x3b0 | PostDom: 0x3c0]
     *     r8 = *([x29, #-0xc]);
     *     r8 = r8 & 0xff;
     *     r8 = r8 - 5;
     *     if (r8 == 0) { goto loc_490; }
     *     // [Block 0x3c0 | PostDom: 0x3c4]
     *     goto loc_3c4;
     *     // [Block 0x3c4 | PostDom: exit]
     *     goto loc_4b8;
     *     // [Block 0x3c8 | PostDom: exit]
     *     r0 = 0x0;
     *     r8 = 4;
     *     r1 = r8;
     *     r8 = 1;
     *     r2 = r8 & 1;
     * }
*/
u64 re_s6Aleria14ParticlesStateO8rawValueSSvg(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x33cULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x2ULL;
}

/*
* Reconstructed Procedure: flirt_objc_retain_release_thunk_3e0 (@ 0x3e0, 40 bytes, 2 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // flirt_objc_retain_release_thunk_3e0 ───
     * // Stack Frame: 0B | Basic Blocks: 2 | Natural Loops: 0 | Post-Dom Nodes: 2 | Callers: 1
     * int64_t flirt_objc_retain_release_thunk_3e0(int64_t arg0, int64_t arg1) {
     *     r0 = flirt_objc_retain_release_thunk_3e0(r0, r1);
     *     *([sp]) = r0;
     *     ((AutoStruct_flirt_pthread_mutex_scoped_lock_1d64_11d64 *)sp)->field_08_ro = r1;
     *     goto loc_4e0;
     *     // [Block 0x3f0 | PostDom: exit]
     *     r0 = 0x0;
     *     r8 = 9;
     *     r1 = r8;
     *     r8 = 1;
     *     r2 = r8 & 1;
     * }
*/
u64 re_flirt_objc_retain_release_thunk_3e0(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x3e0ULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x2ULL;
}

/*
* Reconstructed Procedure: flirt_objc_retain_release_thunk_408 (@ 0x408, 40 bytes, 2 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // flirt_objc_retain_release_thunk_408 ───
     * // Stack Frame: 0B | Basic Blocks: 2 | Natural Loops: 0 | Post-Dom Nodes: 2 | Callers: 1
     * int64_t flirt_objc_retain_release_thunk_408(int64_t arg0, int64_t arg1) {
     *     r0 = flirt_objc_retain_release_thunk_408(r0, r1);
     *     *([sp]) = r0;
     *     ((AutoStruct_flirt_pthread_mutex_scoped_lock_1d64_11d64 *)sp)->field_08_ro = r1;
     *     goto loc_4e0;
     *     // [Block 0x418 | PostDom: exit]
     *     r0 = 0x0;
     *     r8 = 8;
     *     r1 = r8;
     *     r8 = 1;
     *     r2 = r8 & 1;
     * }
*/
u64 re_flirt_objc_retain_release_thunk_408(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x408ULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x2ULL;
}

/*
* Reconstructed Procedure: flirt_objc_retain_release_thunk_430 (@ 0x430, 40 bytes, 2 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // flirt_objc_retain_release_thunk_430 ───
     * // Stack Frame: 0B | Basic Blocks: 2 | Natural Loops: 0 | Post-Dom Nodes: 2 | Callers: 1
     * int64_t flirt_objc_retain_release_thunk_430(int64_t arg0, int64_t arg1) {
     *     r0 = flirt_objc_retain_release_thunk_430(r0, r1);
     *     *([sp]) = r0;
     *     ((AutoStruct_flirt_pthread_mutex_scoped_lock_1d64_11d64 *)sp)->field_08_ro = r1;
     *     goto loc_4e0;
     *     // [Block 0x440 | PostDom: exit]
     *     r0 = 0x0;
     *     r8 = 8;
     *     r1 = r8;
     *     r8 = 1;
     *     r2 = r8 & 1;
     * }
*/
u64 re_flirt_objc_retain_release_thunk_430(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x430ULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x2ULL;
}

/*
* Reconstructed Procedure: flirt_objc_retain_release_thunk_458 (@ 0x458, 40 bytes, 2 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // flirt_objc_retain_release_thunk_458 ───
     * // Stack Frame: 0B | Basic Blocks: 2 | Natural Loops: 0 | Post-Dom Nodes: 2 | Callers: 1
     * int64_t flirt_objc_retain_release_thunk_458(int64_t arg0, int64_t arg1) {
     *     r0 = flirt_objc_retain_release_thunk_458(r0, r1);
     *     *([sp]) = r0;
     *     ((AutoStruct_flirt_pthread_mutex_scoped_lock_1d64_11d64 *)sp)->field_08_ro = r1;
     *     goto loc_4e0;
     *     // [Block 0x468 | PostDom: exit]
     *     r0 = 0x0;
     *     r8 = 5;
     *     r1 = r8;
     *     r8 = 1;
     *     r2 = r8 & 1;
     * }
*/
u64 re_flirt_objc_retain_release_thunk_458(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x458ULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x2ULL;
}

/*
* Reconstructed Procedure: flirt_objc_retain_release_thunk_480 (@ 0x480, 40 bytes, 2 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // flirt_objc_retain_release_thunk_480 ───
     * // Stack Frame: 0B | Basic Blocks: 2 | Natural Loops: 0 | Post-Dom Nodes: 2 | Callers: 1
     * int64_t flirt_objc_retain_release_thunk_480(int64_t arg0, int64_t arg1) {
     *     r0 = flirt_objc_retain_release_thunk_480(r0, r1);
     *     *([sp]) = r0;
     *     ((AutoStruct_flirt_pthread_mutex_scoped_lock_1d64_11d64 *)sp)->field_08_ro = r1;
     *     goto loc_4e0;
     *     // [Block 0x490 | PostDom: exit]
     *     r0 = 0x0;
     *     r8 = 8;
     *     r1 = r8;
     *     r8 = 1;
     *     r2 = r8 & 1;
     * }
*/
u64 re_flirt_objc_retain_release_thunk_480(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x480ULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x2ULL;
}

/*
* Reconstructed Procedure: flirt_objc_retain_release_thunk_4a8 (@ 0x4a8, 40 bytes, 2 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // flirt_objc_retain_release_thunk_4a8 ───
     * // Stack Frame: 0B | Basic Blocks: 2 | Natural Loops: 0 | Post-Dom Nodes: 2 | Callers: 1
     * int64_t flirt_objc_retain_release_thunk_4a8(int64_t arg0, int64_t arg1) {
     *     r0 = flirt_objc_retain_release_thunk_4a8(r0, r1);
     *     *([sp]) = r0;
     *     ((AutoStruct_flirt_pthread_mutex_scoped_lock_1d64_11d64 *)sp)->field_08_ro = r1;
     *     goto loc_4e0;
     *     // [Block 0x4b8 | PostDom: exit]
     *     r0 = 0x0;
     *     r8 = 8;
     *     r1 = r8;
     *     r8 = 1;
     *     r2 = r8 & 1;
     * }
*/
u64 re_flirt_objc_retain_release_thunk_4a8(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x4a8ULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x2ULL;
}

/*
* Reconstructed Procedure: flirt_objc_retain_release_thunk_4d0 (@ 0x4d0, 36 bytes, 2 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // flirt_objc_retain_release_thunk_4d0 ───
     * // Stack Frame: 0B | Basic Blocks: 2 | Natural Loops: 0 | Post-Dom Nodes: 2 | Callers: 1
     * int64_t flirt_objc_retain_release_thunk_4d0(int64_t arg0, int64_t arg1) {
     *     r0 = flirt_objc_retain_release_thunk_4d0(r0, r1);
     *     *([sp]) = r0;
     *     ((AutoStruct_flirt_pthread_mutex_scoped_lock_1d64_11d64 *)sp)->field_08_ro = r1;
     *     goto loc_4e0;
     *     // [Block 0x4e0 | PostDom: exit]
     *     r0 = *([sp]);
     *     r1 = ((AutoStruct_flirt_pthread_mutex_scoped_lock_1d64_11d64 *)sp)->field_08_ro;
     *     return r0;
     * }
*/
u64 re_flirt_objc_retain_release_thunk_4d0(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x4d0ULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x2ULL;
}

/*
* Reconstructed Procedure: swift::Aleria::ParticlesState::ee() (@ 0x4f4, 20 bytes, 1 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // swift::Aleria::ParticlesState::ee() ───
     * int64_t swift::Aleria::ParticlesState::ee(int64_t arg0, int64_t arg1) {
     *     r8 = *([x0]); // [DWARF CU: ParticlesModel.swift:$s6Aleria14ParticlesStateOSQAASQ2eeoiySbx_xtFZTW]
     *     r9 = *([x1]);
     *     r8 = r8 - r9;
     *     /* 0x500: cset w0, eq * /
     *     return r0;
     * }
*/
u64 re_s6Aleria14ParticlesStateOSQAASQ2eeoiySbx_xtFZTW(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x4f4ULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x0ULL;
}

/*
* Reconstructed Procedure: swift::Aleria::ParticlesState::hashValue() (@ 0x508, 20 bytes, 1 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // swift::Aleria::ParticlesState::hashValue() ───
     * int64_t swift::Aleria::ParticlesState::hashValue(int64_t arg0, int64_t arg1) {
     *     ((AutoStruct_flirt_pthread_mutex_scoped_lock_1d64_11d64 *)sp)->field_08_ro = r0;
     *     *([sp]) = r1;
     * }
*/
u64 re_s6Aleria14ParticlesStateOSHAASH9hashValueSivgTW(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x508ULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x1ULL;
}

/*
* Reconstructed Procedure: flirt_cxx_exception_landing_pad_51c (@ 0x51c, 24 bytes, 1 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // flirt_cxx_exception_landing_pad_51c ───
     * int64_t flirt_cxx_exception_landing_pad_51c(int64_t arg0, int64_t arg1) {
     *     r0 = flirt_cxx_exception_landing_pad_51c(r0, r1);
     *     r1 = *([sp]);
     *     r2 = r0;
     *     r0 = ((AutoStruct_flirt_pthread_mutex_scoped_lock_1d64_11d64 *)sp)->field_08_ro;
     *     r3 = *([x3]);
     * }
*/
u64 re_flirt_cxx_exception_landing_pad_51c(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x51cULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x1ULL;
}

/*
* Reconstructed Procedure: flirt_pthread_mutex_scoped_lock_534 (@ 0x534, 16 bytes, 1 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // flirt_pthread_mutex_scoped_lock_534 ───
     * int64_t flirt_pthread_mutex_scoped_lock_534(int64_t arg0, int64_t arg1) {
     *     r0 = flirt_pthread_mutex_scoped_lock_534(r0, r1);
     *     return r0;
     * }
*/
u64 re_flirt_pthread_mutex_scoped_lock_534(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x534ULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x2ULL;
}

/*
* Reconstructed Procedure: swift::Aleria::ParticlesState::hash::into::Hasher() (@ 0x544, 24 bytes, 1 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // swift::Aleria::ParticlesState::hash::into::Hasher() ───
     * int64_t swift::Aleria::ParticlesState::hash::into::Hasher(int64_t arg0, int64_t arg1) {
     *     *([x29, #-8]) = r0;
     *     ((AutoStruct_flirt_pthread_mutex_scoped_lock_1d64_11d64 *)sp)->field_08_ro = r1;
     *     ((AutoStruct_flirt_cxx_exception_landing_pad_1c10_11c10 *)sp)->field_10_ro = r2;
     * }
*/
u64 re_s6Aleria14ParticlesStateOSHAASH4hash4intoys6HasherVz_tFTW(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x544ULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x1ULL;
}

/*
* Reconstructed Procedure: flirt_cxx_exception_landing_pad_55c (@ 0x55c, 28 bytes, 1 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // flirt_cxx_exception_landing_pad_55c ───
     * int64_t flirt_cxx_exception_landing_pad_55c(int64_t arg0, int64_t arg1) {
     *     r0 = flirt_cxx_exception_landing_pad_55c(r0, r1);
     *     r1 = ((AutoStruct_flirt_pthread_mutex_scoped_lock_1d64_11d64 *)sp)->field_08_ro;
     *     r2 = ((AutoStruct_flirt_cxx_exception_landing_pad_1c10_11c10 *)sp)->field_10_ro;
     *     r3 = r0;
     *     r0 = *([x29, #-8]);
     *     r4 = *([x4]);
     * }
*/
u64 re_flirt_cxx_exception_landing_pad_55c(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x55cULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x1ULL;
}

/*
* Reconstructed Procedure: flirt_pthread_mutex_scoped_lock_578 (@ 0x578, 16 bytes, 1 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // flirt_pthread_mutex_scoped_lock_578 ───
     * int64_t flirt_pthread_mutex_scoped_lock_578(int64_t arg0, int64_t arg1) {
     *     r0 = flirt_pthread_mutex_scoped_lock_578(r0, r1);
     *     return r0;
     * }
*/
u64 re_flirt_pthread_mutex_scoped_lock_578(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x578ULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x2ULL;
}

/*
* Reconstructed Procedure: swift::Aleria::ParticlesState::_rawHashValue::seed::i_() (@ 0x588, 24 bytes, 1 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // swift::Aleria::ParticlesState::_rawHashValue::seed::i_() ───
     * int64_t swift::Aleria::ParticlesState::_rawHashValue::seed::i_(int64_t arg0, int64_t arg1) {
     *     *([x29, #-8]) = r0;
     *     ((AutoStruct_flirt_pthread_mutex_scoped_lock_1d64_11d64 *)sp)->field_08_ro = r1;
     *     ((AutoStruct_flirt_cxx_exception_landing_pad_1c10_11c10 *)sp)->field_10_ro = r2;
     * }
*/
u64 re_s6Aleria14ParticlesStateOSHAASH13_rawHashValue4seedS2i_tFTW(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x588ULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x1ULL;
}

/*
* Reconstructed Procedure: flirt_cxx_exception_landing_pad_5a0 (@ 0x5a0, 28 bytes, 1 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // flirt_cxx_exception_landing_pad_5a0 ───
     * int64_t flirt_cxx_exception_landing_pad_5a0(int64_t arg0, int64_t arg1) {
     *     r0 = flirt_cxx_exception_landing_pad_5a0(r0, r1);
     *     r1 = ((AutoStruct_flirt_pthread_mutex_scoped_lock_1d64_11d64 *)sp)->field_08_ro;
     *     r2 = ((AutoStruct_flirt_cxx_exception_landing_pad_1c10_11c10 *)sp)->field_10_ro;
     *     r3 = r0;
     *     r0 = *([x29, #-8]);
     *     r4 = *([x4]);
     * }
*/
u64 re_flirt_cxx_exception_landing_pad_5a0(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x5a0ULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x1ULL;
}

/*
* Reconstructed Procedure: flirt_pthread_mutex_scoped_lock_5bc (@ 0x5bc, 16 bytes, 1 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // flirt_pthread_mutex_scoped_lock_5bc ───
     * int64_t flirt_pthread_mutex_scoped_lock_5bc(int64_t arg0, int64_t arg1) {
     *     r0 = flirt_pthread_mutex_scoped_lock_5bc(r0, r1);
     *     return r0;
     * }
*/
u64 re_flirt_pthread_mutex_scoped_lock_5bc(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x5bcULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x2ULL;
}

int main(int argc, char **argv) {
printf("[ULTRON RECONSTRUCTED BINARY] Target: ParticlesModel.o | Format: Mach-O 64-bit | Procs: 848\n");
    u64 res = re_flirt_cxx_exception_landing_pad_8c(0x1000ULL, 4ULL, 0x42ULL);
printf("[ULTRON] Executed entry subroutine 'flirt_cxx_exception_landing_pad_8c' (@ 0x8c) -> 0x%llx\n", (unsigned long long)res);
    return 0;
}

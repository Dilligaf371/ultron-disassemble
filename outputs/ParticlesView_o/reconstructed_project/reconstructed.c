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
static const char * const ULTRON_STR_00 = "Aleria" /* @ 0x1418c */;
static const char * const ULTRON_STR_01 = "$s6Aleria25ParticlesRendersStillsKey33_B7E286589AABE3DFB6F60C603D4029DCLLV" /* @ 0x141a0 */;
static const char * const ULTRON_STR_02 = "ParticlesRendersStillsKey" /* @ 0x141f0 */;
static const char * const ULTRON_STR_03 = "ParticlesSurface" /* @ 0x14210 */;
static const char * const ULTRON_STR_04 = "ParticlesView" /* @ 0x14221 */;
static const char * const ULTRON_STR_05 = "ParticlesHostView" /* @ 0x14230 */;
static const char * const ULTRON_STR_06 = "Configuration" /* @ 0x14242 */;
static const char * const ULTRON_STR_07 = "$s6Aleria18ParticlesMetalView33_B7E286589AABE3DFB6F60C603D4029DCLLC" /* @ 0x14250 */;
static const char * const ULTRON_STR_08 = "ParticlesMetalView" /* @ 0x142a0 */;
static const char * const ULTRON_STR_09 = "$s6Aleria21ParticlesFallbackView33_B7E286589AABE3DFB6F60C603D4029DCLLC" /* @ 0x142c0 */;
static const char * const ULTRON_STR_10 = "ParticlesFallbackView" /* @ 0x14310 */;
static const char * const ULTRON_STR_11 = "ParticlesStaticDrawing" /* @ 0x14330 */;
static const char * const ULTRON_STR_12 = "ParticlesStill" /* @ 0x14347 */;
static const char * const ULTRON_STR_13 = "ParticlesStillCache" /* @ 0x14360 */;
static const char * const ULTRON_STR_14 = "$s6Aleria16ParticlesSurfaceV4bodyQrvp" /* @ 0x14380 */;
static const char * const ULTRON_STR_15 = "$s6Aleria14ParticlesStillV4bodyQrvp" /* @ 0x143b0 */;
static const char * const ULTRON_STR_16 = "CGImage" /* @ 0x143e0 */;
static const char * const ULTRON_STR_17 = "NCGImageRef" /* @ 0x143e8 */;
static const char * const ULTRON_STR_18 = "Name" /* @ 0x14400 */;
static const char * const ULTRON_STR_19 = "NNSNotificationName" /* @ 0x14405 */;
static const char * const ULTRON_STR_20 = "OcclusionState" /* @ 0x14420 */;
static const char * const ULTRON_STR_21 = "NNSWindowOcclusionState" /* @ 0x1442f */;
static const char * const ULTRON_STR_22 = "AutoresizingMask" /* @ 0x14450 */;
static const char * const ULTRON_STR_23 = "NNSAutoresizingMaskOptions" /* @ 0x14461 */;
static const char * const ULTRON_STR_24 = "AppKit" /* @ 0x1447d */;
static const char * const ULTRON_STR_25 = "Foundation" /* @ 0x146c4 */;
static const char * const ULTRON_STR_26 = "ySbG" /* @ 0x1497f */;
static const char * const ULTRON_STR_27 = "SgXw" /* @ 0x149a5 */;
static const char * const ULTRON_STR_28 = "SSIego_" /* @ 0x149b4 */;
static const char * const ULTRON_STR_29 = "Gz_SpySo8NSObjectCSgGSgzSpyypGSgztc" /* @ 0x149c5 */;
static const char * const ULTRON_STR_30 = "So8NSObjectCSg" /* @ 0x149ea */;
static const char * const ULTRON_STR_31 = "SgXw" /* @ 0x149ff */;

/* ── Forward Declarations ── */
u64 re_s6Aleria25ParticlesRendersStillsKey33_B7E286589AABE3DFB6F60C603D4029DCLLV12defaultValueSbvau(u64 arg0, u64 arg1, u64 arg2); /* swift::Aleria::ParticlesRendersStillsKey::_B7E286589AABE3DFB6F60C603D4029DC::defaultValue() @ 0x4 (12B) */
u64 re_s6Aleria25ParticlesRendersStillsKey33_B7E286589AABE3DFB6F60C603D4029DCLLV12defaultValueSbvgZ(u64 arg0, u64 arg1, u64 arg2); /* swift::Aleria::ParticlesRendersStillsKey::_B7E286589AABE3DFB6F60C603D4029DC::defaultValue() @ 0x10 (12B) */
u64 re_s6Aleria25ParticlesRendersStillsKey33_B7E286589AABE3DFB6F60C603D4029DCLLV7SwiftUI011EnvironmentE0AaeFP12defaultValue0R0QzvgZTW(u64 arg0, u64 arg1, u64 arg2); /* swift::Aleria::ParticlesRendersStillsKey::_B7E286589AABE3DFB6F60C603D4029DC::SwiftUI::Environment() @ 0x1c (16B) */
u64 re_flirt_swift_bridge_object_retain_2c(u64 arg0, u64 arg1, u64 arg2); /* flirt_swift_bridge_object_retain_2c @ 0x2c (28B) */
u64 re_s6Aleria25ParticlesRendersStillsKey33_B7E286589AABE3DFB6F60C603D4029DCLLV7SwiftUI011EnvironmentE0AaeFP12_valuesEqualySb5ValueQz_AJtFZTW(u64 arg0, u64 arg1, u64 arg2); /* swift::Aleria::ParticlesRendersStillsKey::_B7E286589AABE3DFB6F60C603D4029DC::SwiftUI::Environment() @ 0x48 (16B) */
u64 re_flirt_swift_bridge_object_retain_58(u64 arg0, u64 arg1, u64 arg2); /* flirt_swift_bridge_object_retain_58 @ 0x58 (16B) */
u64 re_s7SwiftUI17EnvironmentValuesV6AleriaE22particlesRendersStillsSbvg(u64 arg0, u64 arg1, u64 arg2); /* swift::SwiftUI::EnvironmentValues::Aleria::particlesRendersStills() @ 0x68 (24B) */
u64 re_flirt_security_audit_command_exec_80(u64 arg0, u64 arg1, u64 arg2); /* flirt_security_audit_command_exec_80 @ 0x80 (28B) */
u64 re_flirt_swift_bridge_object_retain_9c(u64 arg0, u64 arg1, u64 arg2); /* flirt_swift_bridge_object_retain_9c @ 0x9c (24B) */
u64 re_s6Aleria25ParticlesRendersStillsKey33_B7E286589AABE3DFB6F60C603D4029DCLLVAD7SwiftUI011EnvironmentE0AAWl(u64 arg0, u64 arg1, u64 arg2); /* swift::Aleria::ParticlesRendersStillsKey::_B7E286589AABE3DFB6F60C603D4029DC::SwiftUI::Environment() @ 0xb4 (60B) */
u64 re_flirt_objc_retain_release_thunk_f0(u64 arg0, u64 arg1, u64 arg2); /* flirt_objc_retain_release_thunk_f0 @ 0xf0 (44B) */
u64 re_s7SwiftUI17EnvironmentValuesV6AleriaE22particlesRendersStillsSbvpACTK(u64 arg0, u64 arg1, u64 arg2); /* swift::SwiftUI::EnvironmentValues::Aleria::particlesRendersStills() @ 0x11c (24B) */
u64 re_flirt_swift_bridge_object_retain_134(u64 arg0, u64 arg1, u64 arg2); /* flirt_swift_bridge_object_retain_134 @ 0x134 (32B) */
u64 re_s7SwiftUI17EnvironmentValuesV6AleriaE22particlesRendersStillsSbvpACTk(u64 arg0, u64 arg1, u64 arg2); /* swift::SwiftUI::EnvironmentValues::Aleria::particlesRendersStills() @ 0x154 (24B) */
u64 re_flirt_objc_retain_release_thunk_16c(u64 arg0, u64 arg1, u64 arg2); /* flirt_objc_retain_release_thunk_16c @ 0x16c (16B) */
u64 re_s7SwiftUI17EnvironmentValuesV6AleriaE22particlesRendersStillsSbvs(u64 arg0, u64 arg1, u64 arg2); /* swift::SwiftUI::EnvironmentValues::Aleria::particlesRendersStills() @ 0x17c (52B) */
u64 re_flirt_pthread_mutex_scoped_lock_1b0(u64 arg0, u64 arg1, u64 arg2); /* flirt_pthread_mutex_scoped_lock_1b0 @ 0x1b0 (28B) */
u64 re_flirt_pthread_mutex_scoped_lock_1cc(u64 arg0, u64 arg1, u64 arg2); /* flirt_pthread_mutex_scoped_lock_1cc @ 0x1cc (16B) */
u64 re_s7SwiftUI17EnvironmentValuesV6AleriaE22particlesRendersStillsSbvM(u64 arg0, u64 arg1, u64 arg2); /* swift::SwiftUI::EnvironmentValues::Aleria::particlesRendersStills() @ 0x1dc (36B) */
u64 re_flirt_swift_bridge_object_retain_200(u64 arg0, u64 arg1, u64 arg2); /* flirt_swift_bridge_object_retain_200 @ 0x200 (44B) */
u64 re_s7SwiftUI17EnvironmentValuesV6AleriaE22particlesRendersStillsSbvM_resume_0(u64 arg0, u64 arg1, u64 arg2); /* swift::SwiftUI::EnvironmentValues::Aleria::particlesRendersStills() @ 0x22c (44B) */
u64 re_flirt_objc_retain_release_thunk_258(u64 arg0, u64 arg1, u64 arg2); /* flirt_objc_retain_release_thunk_258 @ 0x258 (24B) */
u64 re_flirt_objc_retain_release_thunk_270(u64 arg0, u64 arg1, u64 arg2); /* flirt_objc_retain_release_thunk_270 @ 0x270 (24B) */
u64 re_s6Aleria16ParticlesSurfaceV13rendersStills33_B7E286589AABE3DFB6F60C603D4029DCLLSbvg(u64 arg0, u64 arg1, u64 arg2); /* swift::Aleria::ParticlesSurface::rendersStills::_B7E286589AABE3DFB6F60C603D4029DC() @ 0x288 (44B) */
u64 re_flirt_security_audit_command_exec_2b4(u64 arg0, u64 arg1, u64 arg2); /* flirt_security_audit_command_exec_2b4 @ 0x2b4 (40B) */
u64 re_flirt_pthread_mutex_scoped_lock_2dc(u64 arg0, u64 arg1, u64 arg2); /* flirt_pthread_mutex_scoped_lock_2dc @ 0x2dc (8B) */
u64 re_flirt_cxx_exception_landing_pad_2e4(u64 arg0, u64 arg1, u64 arg2); /* flirt_cxx_exception_landing_pad_2e4 @ 0x2e4 (16B) */
u64 re_flirt_swift_bridge_object_retain_2f4(u64 arg0, u64 arg1, u64 arg2); /* flirt_swift_bridge_object_retain_2f4 @ 0x2f4 (28B) */
u64 re_s7SwiftUI11EnvironmentVySbGWOc(u64 arg0, u64 arg1, u64 arg2); /* swift::SwiftUI::Environment() @ 0x310 (36B) */
u64 re_flirt_pthread_mutex_scoped_lock_334(u64 arg0, u64 arg1, u64 arg2); /* flirt_pthread_mutex_scoped_lock_334 @ 0x334 (36B) */

/*
* Reconstructed Procedure: swift::Aleria::ParticlesRendersStillsKey::_B7E286589AABE3DFB6F60C603D4029DC::defaultValue() (@ 0x4, 12 bytes, 1 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // swift::Aleria::ParticlesRendersStillsKey::_B7E286589AABE3DFB6F60C603D4029DC::defaultValue() ───
     * int64_t swift::Aleria::ParticlesRendersStillsKey::_B7E286589AABE3DFB6F60C603D4029DC::defaultValue(int64_t arg0, int64_t arg1) {
     *     r0 = 0x0;
     *     return r0;
     * }
*/
u64 re_s6Aleria25ParticlesRendersStillsKey33_B7E286589AABE3DFB6F60C603D4029DCLLV12defaultValueSbvau(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x4ULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x1ULL;
}

/*
* Reconstructed Procedure: swift::Aleria::ParticlesRendersStillsKey::_B7E286589AABE3DFB6F60C603D4029DC::defaultValue() (@ 0x10, 12 bytes, 1 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // swift::Aleria::ParticlesRendersStillsKey::_B7E286589AABE3DFB6F60C603D4029DC::defaultValue() ───
     * int64_t swift::Aleria::ParticlesRendersStillsKey::_B7E286589AABE3DFB6F60C603D4029DC::defaultValue(int64_t arg0, int64_t arg1) {
     *     r8 = 0;
     *     r0 = r8 & 1;
     *     return r0;
     * }
*/
u64 re_s6Aleria25ParticlesRendersStillsKey33_B7E286589AABE3DFB6F60C603D4029DCLLV12defaultValueSbvgZ(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x10ULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x0ULL;
}

/*
* Reconstructed Procedure: swift::Aleria::ParticlesRendersStillsKey::_B7E286589AABE3DFB6F60C603D4029DC::SwiftUI::Environment() (@ 0x1c, 16 bytes, 1 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // swift::Aleria::ParticlesRendersStillsKey::_B7E286589AABE3DFB6F60C603D4029DC::SwiftUI::Environment() ───
     * int64_t swift::Aleria::ParticlesRendersStillsKey::_B7E286589AABE3DFB6F60C603D4029DC::SwiftUI::Environment(int64_t arg0, int64_t arg1) {
     *     ((AutoStruct_flirt_cxx_exception_landing_pad_3f90_3f90 *)sp)->field_08_ro = r8;
     * }
*/
u64 re_s6Aleria25ParticlesRendersStillsKey33_B7E286589AABE3DFB6F60C603D4029DCLLV7SwiftUI011EnvironmentE0AaeFP12defaultValue0R0QzvgZTW(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x1cULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x1ULL;
}

/*
* Reconstructed Procedure: flirt_swift_bridge_object_retain_2c (@ 0x2c, 28 bytes, 1 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // flirt_swift_bridge_object_retain_2c ───
     * int64_t flirt_swift_bridge_object_retain_2c(int64_t arg0, int64_t arg1) {
     *     r0 = flirt_swift_bridge_object_retain_2c(r0, r1);
     *     r9 = ((AutoStruct_flirt_cxx_exception_landing_pad_3f90_3f90 *)sp)->field_08_ro;
     *     r8 = r0 & 1;
     *     *([x9]) = r8;
     *     return r0;
     * }
*/
u64 re_flirt_swift_bridge_object_retain_2c(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x2cULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x2ULL;
}

/*
* Reconstructed Procedure: swift::Aleria::ParticlesRendersStillsKey::_B7E286589AABE3DFB6F60C603D4029DC::SwiftUI::Environment() (@ 0x48, 16 bytes, 1 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // swift::Aleria::ParticlesRendersStillsKey::_B7E286589AABE3DFB6F60C603D4029DC::SwiftUI::Environment() ───
     * // Stack Frame: 16B | Basic Blocks: 1 | Natural Loops: 0 | Post-Dom Nodes: 1 | Callers: 0
     * int64_t swift::Aleria::ParticlesRendersStillsKey::_B7E286589AABE3DFB6F60C603D4029DC::SwiftUI::Environment(int64_t arg0, int64_t arg1) {
     *     r29 = sp;
     *     r4 = *([x4]);
     * }
*/
u64 re_s6Aleria25ParticlesRendersStillsKey33_B7E286589AABE3DFB6F60C603D4029DCLLV7SwiftUI011EnvironmentE0AaeFP12_valuesEqualySb5ValueQz_AJtFZTW(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x48ULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x0ULL;
}

/*
* Reconstructed Procedure: flirt_swift_bridge_object_retain_58 (@ 0x58, 16 bytes, 1 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // flirt_swift_bridge_object_retain_58 ───
     * int64_t flirt_swift_bridge_object_retain_58(int64_t arg0, int64_t arg1) {
     *     r0 = flirt_swift_bridge_object_retain_58(r0, r1);
     *     r0 = r0 & 1;
     *     return r0;
     * }
*/
u64 re_flirt_swift_bridge_object_retain_58(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x58ULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x1ULL;
}

/*
* Reconstructed Procedure: swift::SwiftUI::EnvironmentValues::Aleria::particlesRendersStills() (@ 0x68, 24 bytes, 1 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // swift::SwiftUI::EnvironmentValues::Aleria::particlesRendersStills() ───
     * int64_t swift::SwiftUI::EnvironmentValues::Aleria::particlesRendersStills(int64_t arg0, int64_t arg1) {
     *     ((AutoStruct_flirt_cxx_exception_landing_pad_3f90_3f90 *)sp)->field_08_ro = 0;
     *     r8 = r20;
     *     ((AutoStruct_flirt_cxx_exception_landing_pad_3f90_3f90 *)sp)->field_08_ro = r8;
     * }
*/
u64 re_s7SwiftUI17EnvironmentValuesV6AleriaE22particlesRendersStillsSbvg(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x68ULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x1ULL;
}

/*
* Reconstructed Procedure: flirt_security_audit_command_exec_80 (@ 0x80, 28 bytes, 1 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // flirt_security_audit_command_exec_80 ───
     * int64_t flirt_security_audit_command_exec_80(int64_t arg0, int64_t arg1) {
     *     uint8_t stack_buf_7[16]; // [sp + 0x7]
     *     r0 = flirt_security_audit_command_exec_80(r0, r1);
     *     r2 = r0;
     *     r8 = &stack_buf_7; // [sp + 0x7]
     *     r9 = 0x0;
     *     r1 = r9 + 0x10;
     *     r0 = r1;
     * }
*/
u64 re_flirt_security_audit_command_exec_80(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x80ULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x4ULL;
}

/*
* Reconstructed Procedure: flirt_swift_bridge_object_retain_9c (@ 0x9c, 24 bytes, 1 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // flirt_swift_bridge_object_retain_9c ───
     * int64_t flirt_swift_bridge_object_retain_9c(int64_t arg0, int64_t arg1) {
     *     r0 = flirt_swift_bridge_object_retain_9c(r0, r1);
     *     r8 = *([sp, #7]);
     *     r0 = r8 & 1;
     *     return r0;
     * }
*/
u64 re_flirt_swift_bridge_object_retain_9c(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x9cULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x2ULL;
}

/*
* Reconstructed Procedure: swift::Aleria::ParticlesRendersStillsKey::_B7E286589AABE3DFB6F60C603D4029DC::SwiftUI::Environment() (@ 0xb4, 60 bytes, 3 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // swift::Aleria::ParticlesRendersStillsKey::_B7E286589AABE3DFB6F60C603D4029DC::SwiftUI::Environment() ───
     * // Stack Frame: 0B | Basic Blocks: 3 | Natural Loops: 0 | Post-Dom Nodes: 3 | Callers: 0
     * int64_t swift::Aleria::ParticlesRendersStillsKey::_B7E286589AABE3DFB6F60C603D4029DC::SwiftUI::Environment(int64_t arg0, int64_t arg1) {
     *     r8 = *([x8]);
     *     r0 = r8;
     *     ((AutoStruct_flirt_cxx_exception_landing_pad_3f90_3f90 *)sp)->field_08_ro = r0;
     *     if (r8 != 0) { goto loc_10c; }
     *     // [Block 0xd4 | PostDom: 0xd8]
     *     goto loc_d8;
     *     // [Block 0xd8 | PostDom: exit]
     *     r2 = *([sp]);
     *     r0 = 0x0;
     *     r8 = 0x0;
     *     r1 = r8 + 0x10;
     * }
*/
u64 re_s6Aleria25ParticlesRendersStillsKey33_B7E286589AABE3DFB6F60C603D4029DCLLVAD7SwiftUI011EnvironmentE0AAWl(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0xb4ULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x4ULL;
}

/*
* Reconstructed Procedure: flirt_objc_retain_release_thunk_f0 (@ 0xf0, 44 bytes, 2 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // flirt_objc_retain_release_thunk_f0 ───
     * // Stack Frame: 0B | Basic Blocks: 2 | Natural Loops: 0 | Post-Dom Nodes: 2 | Callers: 1
     * int64_t flirt_objc_retain_release_thunk_f0(int64_t arg0, int64_t arg1) {
     *     r0 = flirt_objc_retain_release_thunk_f0(r0, r1);
     *     r9 = 0x0;
     *     r8 = r0;
     *     /* 0x100: stlr x8, [x9] * /
     *     ((AutoStruct_flirt_cxx_exception_landing_pad_3f90_3f90 *)sp)->field_08_ro = r0;
     *     goto loc_10c;
     *     // [Block 0x10c | PostDom: exit]
     *     r0 = ((AutoStruct_flirt_cxx_exception_landing_pad_3f90_3f90 *)sp)->field_08_ro;
     *     return r0;
     * }
*/
u64 re_flirt_objc_retain_release_thunk_f0(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0xf0ULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x3ULL;
}

/*
* Reconstructed Procedure: swift::SwiftUI::EnvironmentValues::Aleria::particlesRendersStills() (@ 0x11c, 24 bytes, 1 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // swift::SwiftUI::EnvironmentValues::Aleria::particlesRendersStills() ───
     * int64_t swift::SwiftUI::EnvironmentValues::Aleria::particlesRendersStills(int64_t arg0, int64_t arg1) {
     *     ((AutoStruct_flirt_cxx_exception_landing_pad_3f90_3f90 *)sp)->field_08_ro = r8;
     *     r20 = r0;
     * }
*/
u64 re_s7SwiftUI17EnvironmentValuesV6AleriaE22particlesRendersStillsSbvpACTK(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x11cULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x1ULL;
}

/*
* Reconstructed Procedure: flirt_swift_bridge_object_retain_134 (@ 0x134, 32 bytes, 1 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // flirt_swift_bridge_object_retain_134 ───
     * int64_t flirt_swift_bridge_object_retain_134(int64_t arg0, int64_t arg1) {
     *     r0 = flirt_swift_bridge_object_retain_134(r0, r1);
     *     r9 = ((AutoStruct_flirt_cxx_exception_landing_pad_3f90_3f90 *)sp)->field_08_ro;
     *     r8 = r0 & 1;
     *     *([x9]) = r8;
     *     return r0;
     * }
*/
u64 re_flirt_swift_bridge_object_retain_134(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x134ULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x2ULL;
}

/*
* Reconstructed Procedure: swift::SwiftUI::EnvironmentValues::Aleria::particlesRendersStills() (@ 0x154, 24 bytes, 1 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // swift::SwiftUI::EnvironmentValues::Aleria::particlesRendersStills() ───
     * // Stack Frame: 32B | Basic Blocks: 1 | Natural Loops: 0 | Post-Dom Nodes: 1 | Callers: 0
     * int64_t swift::SwiftUI::EnvironmentValues::Aleria::particlesRendersStills(int64_t arg0, int64_t arg1) {
     *     r20 = r1;
     *     r8 = *([x0]);
     *     r0 = r8 & 1;
     * }
*/
u64 re_s7SwiftUI17EnvironmentValuesV6AleriaE22particlesRendersStillsSbvpACTk(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x154ULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x1ULL;
}

/*
* Reconstructed Procedure: flirt_objc_retain_release_thunk_16c (@ 0x16c, 16 bytes, 1 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // flirt_objc_retain_release_thunk_16c ───
     * int64_t flirt_objc_retain_release_thunk_16c(int64_t arg0, int64_t arg1) {
     *     r0 = flirt_objc_retain_release_thunk_16c(r0, r1);
     *     return r0;
     * }
*/
u64 re_flirt_objc_retain_release_thunk_16c(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x16cULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x1ULL;
}

/*
* Reconstructed Procedure: swift::SwiftUI::EnvironmentValues::Aleria::particlesRendersStills() (@ 0x17c, 52 bytes, 1 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // swift::SwiftUI::EnvironmentValues::Aleria::particlesRendersStills() ───
     * int64_t swift::SwiftUI::EnvironmentValues::Aleria::particlesRendersStills(int64_t arg0, int64_t arg1) {
     *     uint8_t stack_buf_f[16]; // [sp + 0xf]
     *     /* 0x188: sturb wzr, [x29, #-8] * /
     *     ((AutoStruct_flirt_cxx_exception_landing_pad_3a54_3a54 *)sp)->field_10_rw = 0;
     *     r8 = r0 & 1;
     *     r8 = r8 & 1;
     *     /* 0x198: sturb w8, [x29, #-8] * /
     *     r8 = r20;
     *     ((AutoStruct_flirt_cxx_exception_landing_pad_3a54_3a54 *)sp)->field_10_rw = r8;
     *     r8 = &stack_buf_f; // [sp + 0xf]
     *     *([sp]) = r8;
     *     *([sp, #0xf]) = r0;
     * }
*/
u64 re_s7SwiftUI17EnvironmentValuesV6AleriaE22particlesRendersStillsSbvs(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x17cULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x2ULL;
}

/*
* Reconstructed Procedure: flirt_pthread_mutex_scoped_lock_1b0 (@ 0x1b0, 28 bytes, 1 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // flirt_pthread_mutex_scoped_lock_1b0 ───
     * int64_t flirt_pthread_mutex_scoped_lock_1b0(int64_t arg0, int64_t arg1) {
     *     r0 = flirt_pthread_mutex_scoped_lock_1b0(r0, r1);
     *     r3 = r0;
     *     r0 = *([sp]);
     *     r8 = 0x0;
     *     r2 = r8 + 0x10;
     *     r1 = r2;
     * }
*/
u64 re_flirt_pthread_mutex_scoped_lock_1b0(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x1b0ULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x3ULL;
}

/*
* Reconstructed Procedure: flirt_pthread_mutex_scoped_lock_1cc (@ 0x1cc, 16 bytes, 1 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // flirt_pthread_mutex_scoped_lock_1cc ───
     * int64_t flirt_pthread_mutex_scoped_lock_1cc(int64_t arg0, int64_t arg1) {
     *     r0 = flirt_pthread_mutex_scoped_lock_1cc(r0, r1);
     *     return r0;
     * }
*/
u64 re_flirt_pthread_mutex_scoped_lock_1cc(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x1ccULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x2ULL;
}

/*
* Reconstructed Procedure: swift::SwiftUI::EnvironmentValues::Aleria::particlesRendersStills() (@ 0x1dc, 36 bytes, 1 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // swift::SwiftUI::EnvironmentValues::Aleria::particlesRendersStills() ───
     * int64_t swift::SwiftUI::EnvironmentValues::Aleria::particlesRendersStills(int64_t arg0, int64_t arg1) {
     *     *([sp]) = r0;
     *     r8 = r20;
     *     *([x0]) = r8;
     *     ((AutoStruct_flirt_cxx_exception_landing_pad_3f90_3f90 *)sp)->field_08_ro = 0;
     *     r8 = r20;
     *     ((AutoStruct_flirt_cxx_exception_landing_pad_3f90_3f90 *)sp)->field_08_ro = r8;
     * }
*/
u64 re_s7SwiftUI17EnvironmentValuesV6AleriaE22particlesRendersStillsSbvM(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x1dcULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x1ULL;
}

/*
* Reconstructed Procedure: flirt_swift_bridge_object_retain_200 (@ 0x200, 44 bytes, 1 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // flirt_swift_bridge_object_retain_200 ───
     * int64_t flirt_swift_bridge_object_retain_200(int64_t arg0, int64_t arg1) {
     *     r0 = flirt_swift_bridge_object_retain_200(r0, r1);
     *     r8 = r0;
     *     r0 = *([sp]);
     *     r8 = r8 & 1;
     *     r1 = r0 + 8;
     *     ((AutoStruct_flirt_cxx_exception_landing_pad_3f90_3f90 *)r0)->field_08_ro = r8;
     *     r0 = 0x0;
     *     return r0;
     * }
*/
u64 re_flirt_swift_bridge_object_retain_200(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x200ULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x4ULL;
}

/*
* Reconstructed Procedure: swift::SwiftUI::EnvironmentValues::Aleria::particlesRendersStills() (@ 0x22c, 44 bytes, 3 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // swift::SwiftUI::EnvironmentValues::Aleria::particlesRendersStills() ───
     * // Stack Frame: 0B | Basic Blocks: 3 | Natural Loops: 0 | Post-Dom Nodes: 3 | Callers: 0
     * int64_t swift::SwiftUI::EnvironmentValues::Aleria::particlesRendersStills(int64_t arg0, int64_t arg1) {
     *     *([sp]) = r0;
     *     if ((r1 & (1 << 0)) != 0) { goto loc_260; }
     *     // [Block 0x244 | PostDom: 0x248]
     *     goto loc_248;
     *     // [Block 0x248 | PostDom: exit]
     *     r8 = *([sp]);
     *     r20 = *([x8]);
     *     r8 = ((AutoStruct_flirt_cxx_exception_landing_pad_3f90_3f90 *)r8)->field_08_ro;
     *     r0 = r8 & 1;
     * }
*/
u64 re_s7SwiftUI17EnvironmentValuesV6AleriaE22particlesRendersStillsSbvM_resume_0(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x22cULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x1ULL;
}

/*
* Reconstructed Procedure: flirt_objc_retain_release_thunk_258 (@ 0x258, 24 bytes, 2 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // flirt_objc_retain_release_thunk_258 ───
     * // Stack Frame: 0B | Basic Blocks: 2 | Natural Loops: 0 | Post-Dom Nodes: 2 | Callers: 1
     * int64_t flirt_objc_retain_release_thunk_258(int64_t arg0, int64_t arg1) {
     *     r0 = flirt_objc_retain_release_thunk_258(r0, r1);
     *     goto loc_278;
     *     // [Block 0x260 | PostDom: exit]
     *     r8 = *([sp]);
     *     r20 = *([x8]);
     *     r8 = ((AutoStruct_flirt_cxx_exception_landing_pad_3f90_3f90 *)r8)->field_08_ro;
     *     r0 = r8 & 1;
     * }
*/
u64 re_flirt_objc_retain_release_thunk_258(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x258ULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x1ULL;
}

/*
* Reconstructed Procedure: flirt_objc_retain_release_thunk_270 (@ 0x270, 24 bytes, 2 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // flirt_objc_retain_release_thunk_270 ───
     * // Stack Frame: 0B | Basic Blocks: 2 | Natural Loops: 0 | Post-Dom Nodes: 2 | Callers: 1
     * int64_t flirt_objc_retain_release_thunk_270(int64_t arg0, int64_t arg1) {
     *     r0 = flirt_objc_retain_release_thunk_270(r0, r1);
     *     goto loc_278;
     *     // [Block 0x278 | PostDom: exit]
     *     return r0;
     * }
*/
u64 re_flirt_objc_retain_release_thunk_270(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x270ULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x2ULL;
}

/*
* Reconstructed Procedure: swift::Aleria::ParticlesSurface::rendersStills::_B7E286589AABE3DFB6F60C603D4029DC() (@ 0x288, 44 bytes, 1 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // swift::Aleria::ParticlesSurface::rendersStills::_B7E286589AABE3DFB6F60C603D4029DC() ───
     * int64_t swift::Aleria::ParticlesSurface::rendersStills::_B7E286589AABE3DFB6F60C603D4029DC(int64_t arg0, int64_t arg1) {
     *     uint8_t stack_buf_20[32]; // [fp - 0x20]
     *     uint8_t stack_buf_20[16]; // [sp + 0x20]
     *     r8 = *([x20]);
     *     r0 = &stack_buf_20; // [fp - 0x20]
     *     *([sp]) = r0;
     *     *([x29, #-0x20]) = r8;
     *     r8 = ((AutoStruct_flirt_cxx_exception_landing_pad_3f90_3f90 *)r20)->field_08_ro;
     *     /* 0x2ac: sturb w8, [x29, #-0x18] * /
     *     r1 = &stack_buf_20; // [sp + 0x20]
     * }
*/
u64 re_s6Aleria16ParticlesSurfaceV13rendersStills33_B7E286589AABE3DFB6F60C603D4029DCLLSbvg(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x288ULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x2ULL;
}

/*
* Reconstructed Procedure: flirt_security_audit_command_exec_2b4 (@ 0x2b4, 40 bytes, 1 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // flirt_security_audit_command_exec_2b4 ───
     * int64_t flirt_security_audit_command_exec_2b4(int64_t arg0, int64_t arg1) {
     *     uint8_t stack_buf_10[16]; // [sp + 0x10]
     *     r0 = flirt_security_audit_command_exec_2b4(r0, r1);
     *     r8 = *([x29, #-0x20]);
     *     r20 = &stack_buf_10; // [sp + 0x10]
     *     ((AutoStruct_flirt_cxx_exception_landing_pad_3a54_3a54 *)sp)->field_10_rw = r8;
     *     /* 0x2c4: ldurb w8, [x29, #-0x18] * /
     *     ((AutoStruct_flirt_cxx_exception_landing_pad_19cc_19cc *)sp)->field_18_ro = r8;
     *     r0 = 0x0;
     *     r1 = 0x0;
     * }
*/
u64 re_flirt_security_audit_command_exec_2b4(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x2b4ULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x4ULL;
}

/*
* Reconstructed Procedure: flirt_pthread_mutex_scoped_lock_2dc (@ 0x2dc, 8 bytes, 1 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // flirt_pthread_mutex_scoped_lock_2dc ───
     * int64_t flirt_pthread_mutex_scoped_lock_2dc(int64_t arg0, int64_t arg1) {
     *     uint8_t stack_buf_f[16]; // [sp + 0xf]
     *     r0 = flirt_pthread_mutex_scoped_lock_2dc(r0, r1);
     *     r8 = &stack_buf_f; // [sp + 0xf]
     * }
*/
u64 re_flirt_pthread_mutex_scoped_lock_2dc(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x2dcULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x2ULL;
}

/*
* Reconstructed Procedure: flirt_cxx_exception_landing_pad_2e4 (@ 0x2e4, 16 bytes, 1 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // flirt_cxx_exception_landing_pad_2e4 ───
     * int64_t flirt_cxx_exception_landing_pad_2e4(int64_t arg0, int64_t arg1) {
     *     r0 = flirt_cxx_exception_landing_pad_2e4(r0, r1);
     *     r0 = *([sp]);
     *     r8 = *([sp, #0xf]);
     *     ((AutoStruct_flirt_cxx_exception_landing_pad_3f90_3f90 *)sp)->field_08_ro = r8;
     * }
*/
u64 re_flirt_cxx_exception_landing_pad_2e4(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x2e4ULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x1ULL;
}

/*
* Reconstructed Procedure: flirt_swift_bridge_object_retain_2f4 (@ 0x2f4, 28 bytes, 1 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // flirt_swift_bridge_object_retain_2f4 ───
     * int64_t flirt_swift_bridge_object_retain_2f4(int64_t arg0, int64_t arg1) {
     *     r0 = flirt_swift_bridge_object_retain_2f4(r0, r1);
     *     r8 = ((AutoStruct_flirt_cxx_exception_landing_pad_3f90_3f90 *)sp)->field_08_ro;
     *     r0 = r8 & 1;
     *     return r0;
     * }
*/
u64 re_flirt_swift_bridge_object_retain_2f4(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x2f4ULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x2ULL;
}

/*
* Reconstructed Procedure: swift::SwiftUI::Environment() (@ 0x310, 36 bytes, 1 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // swift::SwiftUI::Environment() ───
     * int64_t swift::SwiftUI::Environment(int64_t arg0, int64_t arg1) {
     *     r8 = r0;
     *     *([x29, #-8]) = r1;
     *     r0 = *([x8]);
     *     ((AutoStruct_flirt_cxx_exception_landing_pad_3f90_3f90 *)sp)->field_08_ro = r0;
     *     r1 = ((AutoStruct_flirt_cxx_exception_landing_pad_3f90_3f90 *)r8)->field_08_ro;
     *     *([x29, #-0xc]) = r1;
     * }
*/
u64 re_s7SwiftUI11EnvironmentVySbGWOc(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x310ULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x1ULL;
}

/*
* Reconstructed Procedure: flirt_pthread_mutex_scoped_lock_334 (@ 0x334, 36 bytes, 1 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // flirt_pthread_mutex_scoped_lock_334 ───
     * int64_t flirt_pthread_mutex_scoped_lock_334(int64_t arg0, int64_t arg1) {
     *     r0 = flirt_pthread_mutex_scoped_lock_334(r0, r1);
     *     r9 = ((AutoStruct_flirt_cxx_exception_landing_pad_3f90_3f90 *)sp)->field_08_ro;
     *     r8 = *([x29, #-0xc]);
     *     r0 = *([x29, #-8]);
     *     *([x0]) = r9;
     *     ((AutoStruct_flirt_cxx_exception_landing_pad_3f90_3f90 *)r0)->field_08_ro = r8;
     *     return r0;
     * }
*/
u64 re_flirt_pthread_mutex_scoped_lock_334(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x334ULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x2ULL;
}

int main(int argc, char **argv) {
printf("[ULTRON RECONSTRUCTED BINARY] Target: ParticlesView.o | Format: Mach-O 64-bit | Procs: 2136\n");
    u64 res = re_s6Aleria25ParticlesRendersStillsKey33_B7E286589AABE3DFB6F60C603D4029DCLLV12defaultValueSbvau(0x1000ULL, 4ULL, 0x42ULL);
printf("[ULTRON] Executed entry subroutine 'swift::Aleria::ParticlesRendersStillsKey::_B7E286589AABE3DFB6F60C603D4029DC::defaultValue()' (@ 0x4) -> 0x%llx\n", (unsigned long long)res);
    return 0;
}

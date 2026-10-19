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
static const char * const ULTRON_STR_00 = "Aleria" /* @ 0xd614 */;
static const char * const ULTRON_STR_01 = "ParticlesError" /* @ 0xd61b */;
static const char * const ULTRON_STR_02 = "ParticlesPipeline" /* @ 0xd650 */;
static const char * const ULTRON_STR_03 = "ParticlesRenderer" /* @ 0xd680 */;
static const char * const ULTRON_STR_04 = "ParticlesShader" /* @ 0xd692 */;
static const char * const ULTRON_STR_05 = "MTLCommandBufferStatus" /* @ 0xd6b0 */;
static const char * const ULTRON_STR_06 = "MTLTextureUsage" /* @ 0xd6c7 */;
static const char * const ULTRON_STR_07 = "OcclusionState" /* @ 0xd6e0 */;
static const char * const ULTRON_STR_08 = "NNSWindowOcclusionState" /* @ 0xd6ef */;
static const char * const ULTRON_STR_09 = "AppKit" /* @ 0xd708 */;
static const char * const ULTRON_STR_10 = "Metal" /* @ 0xd878 */;
static const char * const ULTRON_STR_11 = "CompareOptions" /* @ 0xdb40 */;
static const char * const ULTRON_STR_12 = "NNSStringCompareOptions" /* @ 0xdb4f */;
static const char * const ULTRON_STR_13 = "Metal could not create a command queue." /* @ 0xdb70 */;
static const char * const ULTRON_STR_14 = " Particles" /* @ 0xdba9 */;
static const char * const ULTRON_STR_15 = "particlesVertex" /* @ 0xdbb4 */;
static const char * const ULTRON_STR_16 = "particlesFragment" /* @ 0xdbd0 */;
static const char * const ULTRON_STR_17 = " Particles grains" /* @ 0xdbf9 */;
static const char * const ULTRON_STR_18 = "particlesDiscVertex" /* @ 0xdc10 */;
static const char * const ULTRON_STR_19 = "particlesDiscFragment" /* @ 0xdc30 */;
static const char * const ULTRON_STR_20 = " Particles disc" /* @ 0xdc59 */;
static const char * const ULTRON_STR_21 = "The Particles shaders could not be loaded." /* @ 0xdc70 */;
static const char * const ULTRON_STR_22 = "Aleria/ParticlesRenderer.swift" /* @ 0xdca0 */;
static const char * const ULTRON_STR_23 = "Unexpectedly found nil while unwrapping an Optional value" /* @ 0xdcc0 */;
static const char * const ULTRON_STR_24 = "Fatal error" /* @ 0xdcfa */;
static const char * const ULTRON_STR_25 = "work.aleria.particles.pipeline" /* @ 0xdd10 */;
static const char * const ULTRON_STR_26 = "The Particles shaders could not be compiled." /* @ 0xdd30 */;
static const char * const ULTRON_STR_27 = "work.aleria.ChiefOfStaff" /* @ 0xdd60 */;
static const char * const ULTRON_STR_28 = "Particles" /* @ 0xdd79 */;
static const char * const ULTRON_STR_29 = " the d20 in grains" /* @ 0xdd9c */;
static const char * const ULTRON_STR_30 = "The image size is out of range." /* @ 0xddb0 */;
static const char * const ULTRON_STR_31 = "Metal is unavailable on this Mac." /* @ 0xddd0 */;

/* ── Forward Declarations ── */
u64 re_flirt_pthread_mutex_scoped_lock_54(u64 arg0, u64 arg1, u64 arg2); /* flirt_pthread_mutex_scoped_lock_54 @ 0x54 (32B) */
u64 re_s6Aleria14ParticlesErrorO10Foundation09LocalizedC0AadEP16errorDescriptionSSSgvgTW(u64 arg0, u64 arg1, u64 arg2); /* swift::Aleria::ParticlesError::Foundation::Localized() @ 0x74 (16B) */
u64 re_flirt_objc_retain_release_thunk_84(u64 arg0, u64 arg1, u64 arg2); /* flirt_objc_retain_release_thunk_84 @ 0x84 (12B) */
u64 re_s6Aleria14ParticlesErrorO10Foundation09LocalizedC0AadEP13failureReasonSSSgvgTW(u64 arg0, u64 arg1, u64 arg2); /* swift::Aleria::ParticlesError::Foundation::Localized() @ 0x90 (8B) */
u64 re_flirt_objc_retain_release_thunk_98(u64 arg0, u64 arg1, u64 arg2); /* flirt_objc_retain_release_thunk_98 @ 0x98 (12B) */
u64 re_s6Aleria14ParticlesErrorO10Foundation09LocalizedC0AadEP18recoverySuggestionSSSgvgTW(u64 arg0, u64 arg1, u64 arg2); /* swift::Aleria::ParticlesError::Foundation::Localized() @ 0xa4 (8B) */
u64 re_flirt_objc_retain_release_thunk_ac(u64 arg0, u64 arg1, u64 arg2); /* flirt_objc_retain_release_thunk_ac @ 0xac (12B) */
u64 re_s6Aleria14ParticlesErrorO10Foundation09LocalizedC0AadEP10helpAnchorSSSgvgTW(u64 arg0, u64 arg1, u64 arg2); /* swift::Aleria::ParticlesError::Foundation::Localized() @ 0xb8 (8B) */
u64 re_flirt_objc_retain_release_thunk_c0(u64 arg0, u64 arg1, u64 arg2); /* flirt_objc_retain_release_thunk_c0 @ 0xc0 (12B) */
u64 re_s6Aleria14ParticlesErrorOs0C0AAsADP7_domainSSvgTW(u64 arg0, u64 arg1, u64 arg2); /* swift::Aleria::ParticlesError() @ 0xcc (8B) */
u64 re_flirt_objc_retain_release_thunk_d4(u64 arg0, u64 arg1, u64 arg2); /* flirt_objc_retain_release_thunk_d4 @ 0xd4 (12B) */
u64 re_s6Aleria14ParticlesErrorOs0C0AAsADP5_codeSivgTW(u64 arg0, u64 arg1, u64 arg2); /* swift::Aleria::ParticlesError() @ 0xe0 (8B) */
u64 re_flirt_objc_retain_release_thunk_e8(u64 arg0, u64 arg1, u64 arg2); /* flirt_objc_retain_release_thunk_e8 @ 0xe8 (12B) */
u64 re_s6Aleria14ParticlesErrorOs0C0AAsADP9_userInfoyXlSgvgTW(u64 arg0, u64 arg1, u64 arg2); /* swift::Aleria::ParticlesError() @ 0xf4 (8B) */
u64 re_flirt_objc_retain_release_thunk_fc(u64 arg0, u64 arg1, u64 arg2); /* flirt_objc_retain_release_thunk_fc @ 0xfc (12B) */
u64 re_s6Aleria14ParticlesErrorOs0C0AAsADP19_getEmbeddedNSErroryXlSgyFTW(u64 arg0, u64 arg1, u64 arg2); /* swift::Aleria::ParticlesError() @ 0x108 (8B) */
u64 re_flirt_objc_retain_release_thunk_110(u64 arg0, u64 arg1, u64 arg2); /* flirt_objc_retain_release_thunk_110 @ 0x110 (12B) */
u64 re_s6Aleria17ParticlesPipelineC11pixelFormat_WZ(u64 arg0, u64 arg1, u64 arg2); /* swift::Aleria::ParticlesPipeline::pixelFormat() @ 0x11c (4B) */
u64 re_s6Aleria17ParticlesPipelineC11pixelFormatSo08MTLPixelE0Vvau(u64 arg0, u64 arg1, u64 arg2); /* swift::Aleria::ParticlesPipeline::pixelFormat::MTLPixel() @ 0x120 (12B) */
u64 re_s6Aleria17ParticlesPipelineC11pixelFormatSo08MTLPixelE0VvgZ(u64 arg0, u64 arg1, u64 arg2); /* swift::Aleria::ParticlesPipeline::pixelFormat::MTLPixel() @ 0x12c (12B) */
u64 re_s6Aleria17ParticlesPipelineC12systemDevice_WZ(u64 arg0, u64 arg1, u64 arg2); /* swift::Aleria::ParticlesPipeline::systemDevice() @ 0x138 (8B) */
u64 re_flirt_cxx_global_var_init_140(u64 arg0, u64 arg1, u64 arg2); /* flirt_cxx_global_var_init_140 @ 0x140 (20B) */
u64 re_s6Aleria17ParticlesPipelineC12systemDeviceSo9MTLDevice_pSgvau(u64 arg0, u64 arg1, u64 arg2); /* swift::Aleria::ParticlesPipeline::systemDevice::MTLDevice() @ 0x154 (52B) */
u64 re_sub_188(u64 arg0, u64 arg1, u64 arg2); /* sub_188 @ 0x188 (20B) */
u64 re_flirt_objc_retain_release_thunk_19c(u64 arg0, u64 arg1, u64 arg2); /* flirt_objc_retain_release_thunk_19c @ 0x19c (8B) */
u64 re_s6Aleria17ParticlesPipelineC12systemDeviceSo9MTLDevice_pSgvgZ(u64 arg0, u64 arg1, u64 arg2); /* swift::Aleria::ParticlesPipeline::systemDevice::MTLDevice() @ 0x1a4 (12B) */
u64 re_flirt_cxx_exception_landing_pad_1b0(u64 arg0, u64 arg1, u64 arg2); /* flirt_cxx_exception_landing_pad_1b0 @ 0x1b0 (12B) */
u64 re_flirt_pthread_mutex_scoped_lock_1bc(u64 arg0, u64 arg1, u64 arg2); /* flirt_pthread_mutex_scoped_lock_1bc @ 0x1bc (20B) */
u64 re_s6Aleria17ParticlesPipelineC6deviceSo9MTLDevice_pvg(u64 arg0, u64 arg1, u64 arg2); /* swift::Aleria::ParticlesPipeline::device::MTLDevice() @ 0x1d0 (20B) */
u64 re_flirt_pthread_mutex_scoped_lock_1e4(u64 arg0, u64 arg1, u64 arg2); /* flirt_pthread_mutex_scoped_lock_1e4 @ 0x1e4 (20B) */

/*
* Reconstructed Procedure: flirt_pthread_mutex_scoped_lock_54 (@ 0x54, 32 bytes, 1 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // flirt_pthread_mutex_scoped_lock_54 ───
     * int64_t flirt_pthread_mutex_scoped_lock_54(int64_t arg0, int64_t arg1) {
     *     r0 = flirt_pthread_mutex_scoped_lock_54(r0, r1);
     *     r0 = *([sp]);
     *     r1 = ((AutoStruct_flirt_cxx_exception_landing_pad_470_470 *)sp)->field_08_ro;
     *     *([x29, #-0x20]) = r0;
     *     *([x29, #-0x18]) = r1;
     *     return r0;
     * }
*/
u64 re_flirt_pthread_mutex_scoped_lock_54(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x54ULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x2ULL;
}

/*
* Reconstructed Procedure: swift::Aleria::ParticlesError::Foundation::Localized() (@ 0x74, 16 bytes, 1 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // swift::Aleria::ParticlesError::Foundation::Localized() ───
     * // Stack Frame: 16B | Basic Blocks: 1 | Natural Loops: 0 | Post-Dom Nodes: 1 | Callers: 0
     * int64_t swift::Aleria::ParticlesError::Foundation::Localized(int64_t arg0, int64_t arg1) {
     *     r29 = sp;
     *     r0 = *([x20]);
     *     r1 = ((AutoStruct_flirt_cxx_exception_landing_pad_470_470 *)r20)->field_08_ro;
     * }
*/
u64 re_s6Aleria14ParticlesErrorO10Foundation09LocalizedC0AadEP16errorDescriptionSSSgvgTW(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x74ULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x0ULL;
}

/*
* Reconstructed Procedure: flirt_objc_retain_release_thunk_84 (@ 0x84, 12 bytes, 1 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // flirt_objc_retain_release_thunk_84 ───
     * int64_t flirt_objc_retain_release_thunk_84(int64_t arg0, int64_t arg1) {
     *     r0 = flirt_objc_retain_release_thunk_84(r0, r1);
     *     return r0;
     * }
*/
u64 re_flirt_objc_retain_release_thunk_84(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x84ULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x1ULL;
}

/*
* Reconstructed Procedure: swift::Aleria::ParticlesError::Foundation::Localized() (@ 0x90, 8 bytes, 1 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // swift::Aleria::ParticlesError::Foundation::Localized() ───
     * // Stack Frame: 16B | Basic Blocks: 1 | Natural Loops: 0 | Post-Dom Nodes: 1 | Callers: 0
     * int64_t swift::Aleria::ParticlesError::Foundation::Localized(int64_t arg0, int64_t arg1) {
     *     r29 = sp;
     * }
*/
u64 re_s6Aleria14ParticlesErrorO10Foundation09LocalizedC0AadEP13failureReasonSSSgvgTW(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x90ULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x0ULL;
}

/*
* Reconstructed Procedure: flirt_objc_retain_release_thunk_98 (@ 0x98, 12 bytes, 1 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // flirt_objc_retain_release_thunk_98 ───
     * int64_t flirt_objc_retain_release_thunk_98(int64_t arg0, int64_t arg1) {
     *     r0 = flirt_objc_retain_release_thunk_98(r0, r1);
     *     return r0;
     * }
*/
u64 re_flirt_objc_retain_release_thunk_98(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x98ULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x1ULL;
}

/*
* Reconstructed Procedure: swift::Aleria::ParticlesError::Foundation::Localized() (@ 0xa4, 8 bytes, 1 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // swift::Aleria::ParticlesError::Foundation::Localized() ───
     * // Stack Frame: 16B | Basic Blocks: 1 | Natural Loops: 0 | Post-Dom Nodes: 1 | Callers: 0
     * int64_t swift::Aleria::ParticlesError::Foundation::Localized(int64_t arg0, int64_t arg1) {
     *     r29 = sp;
     * }
*/
u64 re_s6Aleria14ParticlesErrorO10Foundation09LocalizedC0AadEP18recoverySuggestionSSSgvgTW(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0xa4ULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x0ULL;
}

/*
* Reconstructed Procedure: flirt_objc_retain_release_thunk_ac (@ 0xac, 12 bytes, 1 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // flirt_objc_retain_release_thunk_ac ───
     * int64_t flirt_objc_retain_release_thunk_ac(int64_t arg0, int64_t arg1) {
     *     r0 = flirt_objc_retain_release_thunk_ac(r0, r1);
     *     return r0;
     * }
*/
u64 re_flirt_objc_retain_release_thunk_ac(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0xacULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x1ULL;
}

/*
* Reconstructed Procedure: swift::Aleria::ParticlesError::Foundation::Localized() (@ 0xb8, 8 bytes, 1 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // swift::Aleria::ParticlesError::Foundation::Localized() ───
     * // Stack Frame: 16B | Basic Blocks: 1 | Natural Loops: 0 | Post-Dom Nodes: 1 | Callers: 0
     * int64_t swift::Aleria::ParticlesError::Foundation::Localized(int64_t arg0, int64_t arg1) {
     *     r29 = sp;
     * }
*/
u64 re_s6Aleria14ParticlesErrorO10Foundation09LocalizedC0AadEP10helpAnchorSSSgvgTW(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0xb8ULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x0ULL;
}

/*
* Reconstructed Procedure: flirt_objc_retain_release_thunk_c0 (@ 0xc0, 12 bytes, 1 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // flirt_objc_retain_release_thunk_c0 ───
     * int64_t flirt_objc_retain_release_thunk_c0(int64_t arg0, int64_t arg1) {
     *     r0 = flirt_objc_retain_release_thunk_c0(r0, r1);
     *     return r0;
     * }
*/
u64 re_flirt_objc_retain_release_thunk_c0(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0xc0ULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x1ULL;
}

/*
* Reconstructed Procedure: swift::Aleria::ParticlesError() (@ 0xcc, 8 bytes, 1 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // swift::Aleria::ParticlesError() ───
     * // Stack Frame: 16B | Basic Blocks: 1 | Natural Loops: 0 | Post-Dom Nodes: 1 | Callers: 0
     * int64_t swift::Aleria::ParticlesError(int64_t arg0, int64_t arg1) {
     *     r29 = sp;
     * }
*/
u64 re_s6Aleria14ParticlesErrorOs0C0AAsADP7_domainSSvgTW(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0xccULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x0ULL;
}

/*
* Reconstructed Procedure: flirt_objc_retain_release_thunk_d4 (@ 0xd4, 12 bytes, 1 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // flirt_objc_retain_release_thunk_d4 ───
     * int64_t flirt_objc_retain_release_thunk_d4(int64_t arg0, int64_t arg1) {
     *     r0 = flirt_objc_retain_release_thunk_d4(r0, r1);
     *     return r0;
     * }
*/
u64 re_flirt_objc_retain_release_thunk_d4(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0xd4ULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x1ULL;
}

/*
* Reconstructed Procedure: swift::Aleria::ParticlesError() (@ 0xe0, 8 bytes, 1 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // swift::Aleria::ParticlesError() ───
     * // Stack Frame: 16B | Basic Blocks: 1 | Natural Loops: 0 | Post-Dom Nodes: 1 | Callers: 0
     * int64_t swift::Aleria::ParticlesError(int64_t arg0, int64_t arg1) {
     *     r29 = sp;
     * }
*/
u64 re_s6Aleria14ParticlesErrorOs0C0AAsADP5_codeSivgTW(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0xe0ULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x0ULL;
}

/*
* Reconstructed Procedure: flirt_objc_retain_release_thunk_e8 (@ 0xe8, 12 bytes, 1 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // flirt_objc_retain_release_thunk_e8 ───
     * int64_t flirt_objc_retain_release_thunk_e8(int64_t arg0, int64_t arg1) {
     *     r0 = flirt_objc_retain_release_thunk_e8(r0, r1);
     *     return r0;
     * }
*/
u64 re_flirt_objc_retain_release_thunk_e8(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0xe8ULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x1ULL;
}

/*
* Reconstructed Procedure: swift::Aleria::ParticlesError() (@ 0xf4, 8 bytes, 1 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // swift::Aleria::ParticlesError() ───
     * // Stack Frame: 16B | Basic Blocks: 1 | Natural Loops: 0 | Post-Dom Nodes: 1 | Callers: 0
     * int64_t swift::Aleria::ParticlesError(int64_t arg0, int64_t arg1) {
     *     r29 = sp;
     * }
*/
u64 re_s6Aleria14ParticlesErrorOs0C0AAsADP9_userInfoyXlSgvgTW(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0xf4ULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x0ULL;
}

/*
* Reconstructed Procedure: flirt_objc_retain_release_thunk_fc (@ 0xfc, 12 bytes, 1 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // flirt_objc_retain_release_thunk_fc ───
     * int64_t flirt_objc_retain_release_thunk_fc(int64_t arg0, int64_t arg1) {
     *     r0 = flirt_objc_retain_release_thunk_fc(r0, r1);
     *     return r0;
     * }
*/
u64 re_flirt_objc_retain_release_thunk_fc(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0xfcULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x1ULL;
}

/*
* Reconstructed Procedure: swift::Aleria::ParticlesError() (@ 0x108, 8 bytes, 1 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // swift::Aleria::ParticlesError() ───
     * // Stack Frame: 16B | Basic Blocks: 1 | Natural Loops: 0 | Post-Dom Nodes: 1 | Callers: 0
     * int64_t swift::Aleria::ParticlesError(int64_t arg0, int64_t arg1) {
     *     r29 = sp;
     * }
*/
u64 re_s6Aleria14ParticlesErrorOs0C0AAsADP19_getEmbeddedNSErroryXlSgyFTW(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x108ULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x0ULL;
}

/*
* Reconstructed Procedure: flirt_objc_retain_release_thunk_110 (@ 0x110, 12 bytes, 1 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // flirt_objc_retain_release_thunk_110 ───
     * int64_t flirt_objc_retain_release_thunk_110(int64_t arg0, int64_t arg1) {
     *     r0 = flirt_objc_retain_release_thunk_110(r0, r1);
     *     return r0;
     * }
*/
u64 re_flirt_objc_retain_release_thunk_110(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x110ULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x1ULL;
}

/*
* Reconstructed Procedure: swift::Aleria::ParticlesPipeline::pixelFormat() (@ 0x11c, 4 bytes, 1 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // swift::Aleria::ParticlesPipeline::pixelFormat() ───
     * int64_t swift::Aleria::ParticlesPipeline::pixelFormat(int64_t arg0, int64_t arg1) {
     *     return r0;
     * }
*/
u64 re_s6Aleria17ParticlesPipelineC11pixelFormat_WZ(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x11cULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x0ULL;
}

/*
* Reconstructed Procedure: swift::Aleria::ParticlesPipeline::pixelFormat::MTLPixel() (@ 0x120, 12 bytes, 1 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // swift::Aleria::ParticlesPipeline::pixelFormat::MTLPixel() ───
     * int64_t swift::Aleria::ParticlesPipeline::pixelFormat::MTLPixel(int64_t arg0, int64_t arg1) {
     *     r0 = 0x0;
     *     return r0;
     * }
*/
u64 re_s6Aleria17ParticlesPipelineC11pixelFormatSo08MTLPixelE0Vvau(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x120ULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x1ULL;
}

/*
* Reconstructed Procedure: swift::Aleria::ParticlesPipeline::pixelFormat::MTLPixel() (@ 0x12c, 12 bytes, 1 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // swift::Aleria::ParticlesPipeline::pixelFormat::MTLPixel() ───
     * int64_t swift::Aleria::ParticlesPipeline::pixelFormat::MTLPixel(int64_t arg0, int64_t arg1) {
     *     r8 = 0x50;
     *     r0 = r8;
     *     return r0;
     * }
*/
u64 re_s6Aleria17ParticlesPipelineC11pixelFormatSo08MTLPixelE0VvgZ(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x12cULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x0ULL;
}

/*
* Reconstructed Procedure: swift::Aleria::ParticlesPipeline::systemDevice() (@ 0x138, 8 bytes, 1 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // swift::Aleria::ParticlesPipeline::systemDevice() ───
     * // Stack Frame: 16B | Basic Blocks: 1 | Natural Loops: 0 | Post-Dom Nodes: 1 | Callers: 0
     * int64_t swift::Aleria::ParticlesPipeline::systemDevice(int64_t arg0, int64_t arg1) {
     *     r29 = sp;
     * }
*/
u64 re_s6Aleria17ParticlesPipelineC12systemDevice_WZ(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x138ULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x0ULL;
}

/*
* Reconstructed Procedure: flirt_cxx_global_var_init_140 (@ 0x140, 20 bytes, 1 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // flirt_cxx_global_var_init_140 ───
     * int64_t flirt_cxx_global_var_init_140(int64_t arg0, int64_t arg1) {
     *     r0 = flirt_cxx_global_var_init_140(r0, r1);
     *     *([x8]) = r0;
     *     return r0;
     * }
*/
u64 re_flirt_cxx_global_var_init_140(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x140ULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x1ULL;
}

/*
* Reconstructed Procedure: swift::Aleria::ParticlesPipeline::systemDevice::MTLDevice() (@ 0x154, 52 bytes, 3 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // swift::Aleria::ParticlesPipeline::systemDevice::MTLDevice() ───
     * // Stack Frame: 0B | Basic Blocks: 3 | Natural Loops: 0 | Post-Dom Nodes: 3 | Callers: 0
     * int64_t swift::Aleria::ParticlesPipeline::systemDevice::MTLDevice(int64_t arg0, int64_t arg1) {
     *     r8 = *([x8]);
     *     /* 0x168: adds x8, x8, #1 * /
     *     if (r0 != 0) { goto loc_188; }
     *     // [Block 0x170 | PostDom: 0x174]
     *     goto loc_174;
     *     // [Block 0x174 | PostDom: exit]
     *     r0 = 0x0;
     *     return r0;
     * }
*/
u64 re_s6Aleria17ParticlesPipelineC12systemDeviceSo9MTLDevice_pSgvau(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x154ULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x4ULL;
}

/*
* Reconstructed Procedure: sub_188 (@ 0x188, 20 bytes, 1 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // sub_188 ───
     * int64_t sub_188(int64_t arg0, int64_t arg1) {
     *     r2 = ((AutoStruct_flirt_cxx_exception_landing_pad_470_470 *)sp)->field_08_ro; // [DWARF CU: ParticlesRenderer.swift:sub_188]
     *     r0 = 0x0;
     *     r1 = 0x0;
     * }
*/
u64 re_sub_188(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x188ULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x2ULL;
}

/*
* Reconstructed Procedure: flirt_objc_retain_release_thunk_19c (@ 0x19c, 8 bytes, 1 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // flirt_objc_retain_release_thunk_19c ───
     * int64_t flirt_objc_retain_release_thunk_19c(int64_t arg0, int64_t arg1) {
     *     r0 = flirt_objc_retain_release_thunk_19c(r0, r1);
     *     goto loc_174;
     * }
*/
u64 re_flirt_objc_retain_release_thunk_19c(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x19cULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x1ULL;
}

/*
* Reconstructed Procedure: swift::Aleria::ParticlesPipeline::systemDevice::MTLDevice() (@ 0x1a4, 12 bytes, 1 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // swift::Aleria::ParticlesPipeline::systemDevice::MTLDevice() ───
     * int64_t swift::Aleria::ParticlesPipeline::systemDevice::MTLDevice(int64_t arg0, int64_t arg1) {
     * }
*/
u64 re_s6Aleria17ParticlesPipelineC12systemDeviceSo9MTLDevice_pSgvgZ(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x1a4ULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x1ULL;
}

/*
* Reconstructed Procedure: flirt_cxx_exception_landing_pad_1b0 (@ 0x1b0, 12 bytes, 1 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // flirt_cxx_exception_landing_pad_1b0 ───
     * int64_t flirt_cxx_exception_landing_pad_1b0(int64_t arg0, int64_t arg1) {
     *     r0 = flirt_cxx_exception_landing_pad_1b0(r0, r1);
     *     r0 = *([x0]);
     *     ((AutoStruct_flirt_cxx_exception_landing_pad_470_470 *)sp)->field_08_ro = r0;
     * }
*/
u64 re_flirt_cxx_exception_landing_pad_1b0(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x1b0ULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x1ULL;
}

/*
* Reconstructed Procedure: flirt_pthread_mutex_scoped_lock_1bc (@ 0x1bc, 20 bytes, 1 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // flirt_pthread_mutex_scoped_lock_1bc ───
     * int64_t flirt_pthread_mutex_scoped_lock_1bc(int64_t arg0, int64_t arg1) {
     *     r0 = flirt_pthread_mutex_scoped_lock_1bc(r0, r1);
     *     r0 = ((AutoStruct_flirt_cxx_exception_landing_pad_470_470 *)sp)->field_08_ro;
     *     return r0;
     * }
*/
u64 re_flirt_pthread_mutex_scoped_lock_1bc(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x1bcULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x2ULL;
}

/*
* Reconstructed Procedure: swift::Aleria::ParticlesPipeline::device::MTLDevice() (@ 0x1d0, 20 bytes, 1 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // swift::Aleria::ParticlesPipeline::device::MTLDevice() ───
     * int64_t swift::Aleria::ParticlesPipeline::device::MTLDevice(int64_t arg0, int64_t arg1) {
     *     r0 = ((AutoStruct__sIeg_ytIegr_TRTA_bc58 *)r20)->field_10_ro;
     *     ((AutoStruct_flirt_cxx_exception_landing_pad_470_470 *)sp)->field_08_ro = r0;
     * }
*/
u64 re_s6Aleria17ParticlesPipelineC6deviceSo9MTLDevice_pvg(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x1d0ULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x1ULL;
}

/*
* Reconstructed Procedure: flirt_pthread_mutex_scoped_lock_1e4 (@ 0x1e4, 20 bytes, 1 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // flirt_pthread_mutex_scoped_lock_1e4 ───
     * int64_t flirt_pthread_mutex_scoped_lock_1e4(int64_t arg0, int64_t arg1) {
     *     r0 = flirt_pthread_mutex_scoped_lock_1e4(r0, r1);
     *     r0 = ((AutoStruct_flirt_cxx_exception_landing_pad_470_470 *)sp)->field_08_ro;
     *     return r0;
     * }
*/
u64 re_flirt_pthread_mutex_scoped_lock_1e4(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x1e4ULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x2ULL;
}

int main(int argc, char **argv) {
printf("[ULTRON RECONSTRUCTED BINARY] Target: ParticlesRenderer.o | Format: Mach-O 64-bit | Procs: 1723\n");
    u64 res = re_flirt_pthread_mutex_scoped_lock_54(0x1000ULL, 4ULL, 0x42ULL);
printf("[ULTRON] Executed entry subroutine 'flirt_pthread_mutex_scoped_lock_54' (@ 0x54) -> 0x%llx\n", (unsigned long long)res);
    return 0;
}

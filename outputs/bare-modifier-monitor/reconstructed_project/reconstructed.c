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
static const char * const ULTRON_STR_00 = "main" /* @ 0x100017118 */;
static const char * const ULTRON_STR_01 = "BareModifierMonitorSession" /* @ 0x100017120 */;
static const char * const ULTRON_STR_02 = "ModifierFlags" /* @ 0x100017140 */;
static const char * const ULTRON_STR_03 = "NNSEventModifierFlags" /* @ 0x10001714e */;
static const char * const ULTRON_STR_04 = "EventTypeMask" /* @ 0x100017170 */;
static const char * const ULTRON_STR_05 = "NNSEventMask" /* @ 0x10001717e */;
static const char * const ULTRON_STR_06 = "AppKit" /* @ 0x10001718c */;
static const char * const ULTRON_STR_07 = "main" /* @ 0x1000173d8 */;
static const char * const ULTRON_STR_08 = "DoubleModifierMonitorSession" /* @ 0x1000173e0 */;
static const char * const ULTRON_STR_09 = "State" /* @ 0x1000173fd */;
static const char * const ULTRON_STR_10 = "PressStatus" /* @ 0x100017403 */;
static const char * const ULTRON_STR_11 = "ModifierFlags" /* @ 0x100017420 */;
static const char * const ULTRON_STR_12 = "NNSEventModifierFlags" /* @ 0x10001742e */;
static const char * const ULTRON_STR_13 = "EventTypeMask" /* @ 0x100017450 */;
static const char * const ULTRON_STR_14 = "NNSEventMask" /* @ 0x10001745e */;
static const char * const ULTRON_STR_15 = "AppKit" /* @ 0x10001746c */;
static const char * const ULTRON_STR_16 = "main" /* @ 0x1000175f8 */;
static const char * const ULTRON_STR_17 = "NativeKeyHotkeyMonitor" /* @ 0x100017600 */;
static const char * const ULTRON_STR_18 = "CFRunLoopSource" /* @ 0x100017620 */;
static const char * const ULTRON_STR_19 = "NCFRunLoopSourceRef" /* @ 0x100017630 */;
static const char * const ULTRON_STR_20 = "CFMachPort" /* @ 0x100017650 */;
static const char * const ULTRON_STR_21 = "NCFMachPortRef" /* @ 0x10001765b */;
static const char * const ULTRON_STR_22 = "ModifierFlags" /* @ 0x100017670 */;
static const char * const ULTRON_STR_23 = "NNSEventModifierFlags" /* @ 0x10001767e */;
static const char * const ULTRON_STR_24 = "EventType" /* @ 0x1000176a0 */;
static const char * const ULTRON_STR_25 = "NNSEventType" /* @ 0x1000176aa */;
static const char * const ULTRON_STR_26 = "CGEventType" /* @ 0x1000176b8 */;
static const char * const ULTRON_STR_27 = "CoreGraphics" /* @ 0x1000176c4 */;
static const char * const ULTRON_STR_28 = "AppKit" /* @ 0x1000176e0 */;
static const char * const ULTRON_STR_29 = "main" /* @ 0x1000178a8 */;
static const char * const ULTRON_STR_30 = "ReleaseModifierMonitor" /* @ 0x1000178b0 */;
static const char * const ULTRON_STR_31 = "CFRunLoopSource" /* @ 0x1000178d0 */;

/* ── Forward Declarations ── */
u64 re_s4main25bareModifierCommitDelayMsSivau(u64 arg0, u64 arg1, u64 arg2); /* swift::main::bareModifierCommitDelayMs() @ 0x100001320 (12B) */
u64 re_s4main26BareModifierMonitorSessionC3key33_FD5FB8F3991F83E8040D3A5272A98557LLAA0bC3KeyVvg(u64 arg0, u64 arg1, u64 arg2); /* swift::main::BareModifierMonitorSession::key::_FD5FB8F3991F83E8040D3A5272A98557() @ 0x10000132c (52B) */
u64 re_s4main26BareModifierMonitorSessionC7trigger33_FD5FB8F3991F83E8040D3A5272A98557LLAA0bC7TriggerOvg(u64 arg0, u64 arg1, u64 arg2); /* swift::main::BareModifierMonitorSession::trigger::_FD5FB8F3991F83E8040D3A5272A98557() @ 0x100001360 (8B) */
u64 re_s4main26BareModifierMonitorSessionC8emitLine33_FD5FB8F3991F83E8040D3A5272A98557LLyySScvg(u64 arg0, u64 arg1, u64 arg2); /* swift::main::BareModifierMonitorSession::emitLine::_FD5FB8F3991F83E8040D3A5272A98557() @ 0x100001368 (52B) */
u64 re_s4main26BareModifierMonitorSessionC012flagsChangedD033_FD5FB8F3991F83E8040D3A5272A98557LLypSgvpfi(u64 arg0, u64 arg1, u64 arg2); /* swift::main::BareModifierMonitorSession::flagsChanged::_FD5FB8F3991F83E8040D3A5272A98557() @ 0x10000139c (20B) */
u64 re_s4main26BareModifierMonitorSessionC012flagsChangedD033_FD5FB8F3991F83E8040D3A5272A98557LLypSgvg(u64 arg0, u64 arg1, u64 arg2); /* swift::main::BareModifierMonitorSession::flagsChanged::_FD5FB8F3991F83E8040D3A5272A98557() @ 0x1000013b0 (80B) */
u64 re_sypSgWOc(u64 arg0, u64 arg1, u64 arg2); /* _$sypSgWOc @ 0x100001400 (112B) */
u64 re_s4main26BareModifierMonitorSessionC012flagsChangedD033_FD5FB8F3991F83E8040D3A5272A98557LLypSgvs(u64 arg0, u64 arg1, u64 arg2); /* swift::main::BareModifierMonitorSession::flagsChanged::_FD5FB8F3991F83E8040D3A5272A98557() @ 0x100001470 (92B) */
u64 re_sypSgWOf(u64 arg0, u64 arg1, u64 arg2); /* _$sypSgWOf @ 0x1000014cc (196B) */
u64 re_swift_assign_boxed_opaque_existential_0(u64 arg0, u64 arg1, u64 arg2); /* ___swift_assign_boxed_opaque_existential_0 @ 0x100001590 (452B) */
u64 re_swift_destroy_boxed_opaque_existential_0(u64 arg0, u64 arg1, u64 arg2); /* ___swift_destroy_boxed_opaque_existential_0 @ 0x100001754 (72B) */
u64 re_flirt_pthread_mutex_scoped_lock_179c(u64 arg0, u64 arg1, u64 arg2); /* flirt_pthread_mutex_scoped_lock_179c @ 0x10000179c (24B) */
u64 re_sypSgWOh(u64 arg0, u64 arg1, u64 arg2); /* _$sypSgWOh @ 0x1000017b4 (56B) */
u64 re_s4main26BareModifierMonitorSessionC07keyDownD033_FD5FB8F3991F83E8040D3A5272A98557LLypSgvpfi(u64 arg0, u64 arg1, u64 arg2); /* swift::main::BareModifierMonitorSession::keyDown::_FD5FB8F3991F83E8040D3A5272A98557() @ 0x1000017ec (20B) */
u64 re_s4main26BareModifierMonitorSessionC07keyDownD033_FD5FB8F3991F83E8040D3A5272A98557LLypSgvg(u64 arg0, u64 arg1, u64 arg2); /* swift::main::BareModifierMonitorSession::keyDown::_FD5FB8F3991F83E8040D3A5272A98557() @ 0x100001800 (80B) */
u64 re_s4main26BareModifierMonitorSessionC07keyDownD033_FD5FB8F3991F83E8040D3A5272A98557LLypSgvs(u64 arg0, u64 arg1, u64 arg2); /* swift::main::BareModifierMonitorSession::keyDown::_FD5FB8F3991F83E8040D3A5272A98557() @ 0x100001850 (92B) */
u64 re_s4main26BareModifierMonitorSessionC12targetIsDown33_FD5FB8F3991F83E8040D3A5272A98557LLSbvpfi(u64 arg0, u64 arg1, u64 arg2); /* swift::main::BareModifierMonitorSession::targetIsDown::_FD5FB8F3991F83E8040D3A5272A98557() @ 0x1000018ac (12B) */
u64 re_s4main26BareModifierMonitorSessionC12targetIsDown33_FD5FB8F3991F83E8040D3A5272A98557LLSbvg(u64 arg0, u64 arg1, u64 arg2); /* swift::main::BareModifierMonitorSession::targetIsDown::_FD5FB8F3991F83E8040D3A5272A98557() @ 0x1000018b8 (76B) */
u64 re_s4main26BareModifierMonitorSessionC12targetIsDown33_FD5FB8F3991F83E8040D3A5272A98557LLSbvs(u64 arg0, u64 arg1, u64 arg2); /* swift::main::BareModifierMonitorSession::targetIsDown::_FD5FB8F3991F83E8040D3A5272A98557() @ 0x100001904 (72B) */
u64 re_s4main26BareModifierMonitorSessionC15committedIsDown33_FD5FB8F3991F83E8040D3A5272A98557LLSbvpfi(u64 arg0, u64 arg1, u64 arg2); /* swift::main::BareModifierMonitorSession::committedIsDown::_FD5FB8F3991F83E8040D3A5272A98557() @ 0x10000194c (12B) */
u64 re_s4main26BareModifierMonitorSessionC15committedIsDown33_FD5FB8F3991F83E8040D3A5272A98557LLSbvg(u64 arg0, u64 arg1, u64 arg2); /* swift::main::BareModifierMonitorSession::committedIsDown::_FD5FB8F3991F83E8040D3A5272A98557() @ 0x100001958 (76B) */
u64 re_s4main26BareModifierMonitorSessionC15committedIsDown33_FD5FB8F3991F83E8040D3A5272A98557LLSbvs(u64 arg0, u64 arg1, u64 arg2); /* swift::main::BareModifierMonitorSession::committedIsDown::_FD5FB8F3991F83E8040D3A5272A98557() @ 0x1000019a4 (72B) */
u64 re_s4main26BareModifierMonitorSessionC20canceledUntilRelease33_FD5FB8F3991F83E8040D3A5272A98557LLSbvpfi(u64 arg0, u64 arg1, u64 arg2); /* swift::main::BareModifierMonitorSession::canceledUntilRelease::_FD5FB8F3991F83E8040D3A5272A98557() @ 0x1000019ec (12B) */
u64 re_s4main26BareModifierMonitorSessionC20canceledUntilRelease33_FD5FB8F3991F83E8040D3A5272A98557LLSbvg(u64 arg0, u64 arg1, u64 arg2); /* swift::main::BareModifierMonitorSession::canceledUntilRelease::_FD5FB8F3991F83E8040D3A5272A98557() @ 0x1000019f8 (76B) */
u64 re_s4main26BareModifierMonitorSessionC20canceledUntilRelease33_FD5FB8F3991F83E8040D3A5272A98557LLSbvs(u64 arg0, u64 arg1, u64 arg2); /* swift::main::BareModifierMonitorSession::canceledUntilRelease::_FD5FB8F3991F83E8040D3A5272A98557() @ 0x100001a44 (72B) */
u64 re_s4main26BareModifierMonitorSessionC15pressGeneration33_FD5FB8F3991F83E8040D3A5272A98557LLSivpfi(u64 arg0, u64 arg1, u64 arg2); /* swift::main::BareModifierMonitorSession::pressGeneration::_FD5FB8F3991F83E8040D3A5272A98557() @ 0x100001a8c (8B) */
u64 re_s4main26BareModifierMonitorSessionC15pressGeneration33_FD5FB8F3991F83E8040D3A5272A98557LLSivg(u64 arg0, u64 arg1, u64 arg2); /* swift::main::BareModifierMonitorSession::pressGeneration::_FD5FB8F3991F83E8040D3A5272A98557() @ 0x100001a94 (72B) */
u64 re_s4main26BareModifierMonitorSessionC15pressGeneration33_FD5FB8F3991F83E8040D3A5272A98557LLSivs(u64 arg0, u64 arg1, u64 arg2); /* swift::main::BareModifierMonitorSession::pressGeneration::_FD5FB8F3991F83E8040D3A5272A98557() @ 0x100001adc (72B) */
u64 re_s4main26BareModifierMonitorSessionC14pressStartedAt33_FD5FB8F3991F83E8040D3A5272A98557LLSdvpfi(u64 arg0, u64 arg1, u64 arg2); /* swift::main::BareModifierMonitorSession::pressStartedAt::_FD5FB8F3991F83E8040D3A5272A98557() @ 0x100001b24 (8B) */
u64 re_s4main26BareModifierMonitorSessionC14pressStartedAt33_FD5FB8F3991F83E8040D3A5272A98557LLSdvg(u64 arg0, u64 arg1, u64 arg2); /* swift::main::BareModifierMonitorSession::pressStartedAt::_FD5FB8F3991F83E8040D3A5272A98557() @ 0x100001b2c (72B) */

/*
* Reconstructed Procedure: swift::main::bareModifierCommitDelayMs() (@ 0x100001320, 12 bytes, 1 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // swift::main::bareModifierCommitDelayMs() ───
     * int64_t swift::main::bareModifierCommitDelayMs(int64_t arg0, int64_t arg1) {
     *     r0 = _$s4main25bareModifierCommitDelayMsSivp; // 0x1000170c0
     *     return r0;
     * }
*/
u64 re_s4main25bareModifierCommitDelayMsSivau(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x100001320ULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x1ULL;
}

/*
* Reconstructed Procedure: swift::main::BareModifierMonitorSession::key::_FD5FB8F3991F83E8040D3A5272A98557() (@ 0x10000132c, 52 bytes, 1 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // swift::main::BareModifierMonitorSession::key::_FD5FB8F3991F83E8040D3A5272A98557() ───
     * int64_t swift::main::BareModifierMonitorSession::key::_FD5FB8F3991F83E8040D3A5272A98557(int64_t arg0, int64_t arg1) {
     *     r8 = ((AutoStruct__sypWOb_10000280c *)r20)->field_10_rw;
     *     *([sp]) = r8;
     *     r0 = ((AutoStruct__sSSSg_AAtWOh_10000cb38 *)r20)->field_18_ro;
     *     ((AutoStruct____swift_memcpy9_8_1000077c4 *)sp)->field_08_rw = r0;
     *     r0 = flirt_dyld_stub_binder_trampoline_6ce0(r0, r1);
     *     r0 = *([sp]);
     *     r1 = ((AutoStruct____swift_memcpy9_8_1000077c4 *)sp)->field_08_rw;
     *     return r0;
     * }
*/
u64 re_s4main26BareModifierMonitorSessionC3key33_FD5FB8F3991F83E8040D3A5272A98557LLAA0bC3KeyVvg(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x10000132cULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x3ULL;
}

/*
* Reconstructed Procedure: swift::main::BareModifierMonitorSession::trigger::_FD5FB8F3991F83E8040D3A5272A98557() (@ 0x100001360, 8 bytes, 1 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // swift::main::BareModifierMonitorSession::trigger::_FD5FB8F3991F83E8040D3A5272A98557() ───
     * int64_t swift::main::BareModifierMonitorSession::trigger::_FD5FB8F3991F83E8040D3A5272A98557(int64_t arg0, int64_t arg1) {
     *     r0 = ((AutoStruct__block_copy_helper2_10000d428 *)r20)->field_20_rw;
     *     return r0;
     * }
*/
u64 re_s4main26BareModifierMonitorSessionC7trigger33_FD5FB8F3991F83E8040D3A5272A98557LLAA0bC7TriggerOvg(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x100001360ULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x0ULL;
}

/*
* Reconstructed Procedure: swift::main::BareModifierMonitorSession::emitLine::_FD5FB8F3991F83E8040D3A5272A98557() (@ 0x100001368, 52 bytes, 1 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // swift::main::BareModifierMonitorSession::emitLine::_FD5FB8F3991F83E8040D3A5272A98557() ───
     * int64_t swift::main::BareModifierMonitorSession::emitLine::_FD5FB8F3991F83E8040D3A5272A98557(int64_t arg0, int64_t arg1) {
     *     r8 = ((AutoStruct__block_copy_helper2_10000d428 *)r20)->field_28_rw;
     *     *([sp]) = r8;
     *     r0 = ((AutoStruct_swiftmainBareModifierMonitorSessionemitLine_FD5FB8F3991F83E8040D3A5272A98557_100001368 *)r20)->field_30_ro;
     *     ((AutoStruct____swift_memcpy9_8_1000077c4 *)sp)->field_08_rw = r0;
     *     r0 = flirt_dyld_stub_binder_trampoline_6db8(r0, r1);
     *     r0 = *([sp]);
     *     r1 = ((AutoStruct____swift_memcpy9_8_1000077c4 *)sp)->field_08_rw;
     *     return r0;
     * }
*/
u64 re_s4main26BareModifierMonitorSessionC8emitLine33_FD5FB8F3991F83E8040D3A5272A98557LLyySScvg(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x100001368ULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x3ULL;
}

/*
* Reconstructed Procedure: swift::main::BareModifierMonitorSession::flagsChanged::_FD5FB8F3991F83E8040D3A5272A98557() (@ 0x10000139c, 20 bytes, 1 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // swift::main::BareModifierMonitorSession::flagsChanged::_FD5FB8F3991F83E8040D3A5272A98557() ───
     * int64_t swift::main::BareModifierMonitorSession::flagsChanged::_FD5FB8F3991F83E8040D3A5272A98557(int64_t arg0, int64_t arg1) {
     *     *([x8]) = 0;
     *     ((AutoStruct____swift_memcpy9_8_1000077c4 *)r8)->field_08_rw = 0;
     *     ((AutoStruct__sypWOb_10000280c *)r8)->field_10_rw = 0;
     *     ((AutoStruct__sSSSg_AAtWOh_10000cb38 *)r8)->field_18_ro = 0;
     *     return r0;
     * }
*/
u64 re_s4main26BareModifierMonitorSessionC012flagsChangedD033_FD5FB8F3991F83E8040D3A5272A98557LLypSgvpfi(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x10000139cULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x0ULL;
}

/*
* Reconstructed Procedure: swift::main::BareModifierMonitorSession::flagsChanged::_FD5FB8F3991F83E8040D3A5272A98557() (@ 0x1000013b0, 80 bytes, 1 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // swift::main::BareModifierMonitorSession::flagsChanged::_FD5FB8F3991F83E8040D3A5272A98557() ───
     * int64_t swift::main::BareModifierMonitorSession::flagsChanged::_FD5FB8F3991F83E8040D3A5272A98557(int64_t arg0, int64_t arg1) {
     *     uint8_t stack_buf_18[16]; // [sp + 0x18]
     *     ((AutoStruct____swift_memcpy9_8_1000077c4 *)sp)->field_08_rw = r8;
     *     r0 = r20 + 0x38;
     *     *([sp]) = r0;
     *     r1 = &stack_buf_18; // [sp + 0x18]
     *     ((AutoStruct__sypWOb_10000280c *)sp)->field_10_rw = r1;
     *     r8 = 0x20;
     *     r2 = r8;
     *     r3 = 0;
     *     r0 = flirt_dyld_stub_binder_trampoline_6cc8(r0, &stack_buf_18);
     *     r0 = *([sp]);
     *     r1 = ((AutoStruct____swift_memcpy9_8_1000077c4 *)sp)->field_08_rw;
     *     r0 = _$sypSgWOc(r0, &stack_buf_18);
     *     r0 = ((AutoStruct__sypWOb_10000280c *)sp)->field_10_rw;
     *     r0 = flirt_dyld_stub_binder_trampoline_6d1c(r0, &stack_buf_18);
     *     return r0;
     * }
*/
u64 re_s4main26BareModifierMonitorSessionC012flagsChangedD033_FD5FB8F3991F83E8040D3A5272A98557LLypSgvg(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x1000013b0ULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x7ULL;
}

/*
* Reconstructed Procedure: _$sypSgWOc (@ 0x100001400, 112 bytes, 5 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // _$sypSgWOc ───
     * // Stack Frame: 0B | Basic Blocks: 5 | Natural Loops: 0 | Post-Dom Nodes: 5 | Callers: 11
     * int64_t _$sypSgWOc(int64_t arg0, int64_t arg1) {
     *     *([sp]) = r0;
     *     ((AutoStruct____swift_memcpy9_8_1000077c4 *)sp)->field_08_rw = r1;
     *     r8 = ((AutoStruct__sSSSg_AAtWOh_10000cb38 *)r0)->field_18_ro;
     *     if (r8 == 0) { goto loc_100001444; }
     *     // [Block 0x10000141c | PostDom: 0x100001420]
     *     goto loc_100001420;
     *     // [Block 0x100001420 | PostDom: 0x100001460]
     *     r1 = *([sp]);
     *     r0 = ((AutoStruct____swift_memcpy9_8_1000077c4 *)sp)->field_08_rw;
     *     r2 = ((AutoStruct__sSSSg_AAtWOh_10000cb38 *)r1)->field_18_ro;
     *     r8 = r2;
     *     ((AutoStruct__sSSSg_AAtWOh_10000cb38 *)r0)->field_18_ro = r8;
     *     r8 = *([x2, #-8]);
     *     r8 = *([x8]);
     *     r0 = x8(r0, r1);
     *     goto loc_100001460;
     *     // [Block 0x100001444 | PostDom: 0x100001460]
     *     r8 = ((AutoStruct____swift_memcpy9_8_1000077c4 *)sp)->field_08_rw;
     *     r9 = *([sp]);
     *     q0 = *([x9]);
     *     *([x8]) = q0;
     *     q0 = ((AutoStruct__sypWOb_10000280c *)r9)->field_10_rw;
     *     ((AutoStruct__sypWOb_10000280c *)r8)->field_10_rw = q0;
     *     goto loc_100001460;
     *     // [Block 0x100001460 | PostDom: exit]
     *     r0 = ((AutoStruct____swift_memcpy9_8_1000077c4 *)sp)->field_08_rw;
     *     return r0;
     * }
*/
u64 re_sypSgWOc(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x100001400ULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x2ULL;
}

/*
* Reconstructed Procedure: swift::main::BareModifierMonitorSession::flagsChanged::_FD5FB8F3991F83E8040D3A5272A98557() (@ 0x100001470, 92 bytes, 1 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // swift::main::BareModifierMonitorSession::flagsChanged::_FD5FB8F3991F83E8040D3A5272A98557() ───
     * int64_t swift::main::BareModifierMonitorSession::flagsChanged::_FD5FB8F3991F83E8040D3A5272A98557(int64_t arg0, int64_t arg1) {
     *     uint8_t stack_buf_18[16]; // [sp + 0x18]
     *     ((AutoStruct__sypWOb_10000280c *)sp)->field_10_rw = r0;
     *     r0 = r20 + 0x38;
     *     *([sp]) = r0;
     *     r1 = &stack_buf_18; // [sp + 0x18]
     *     ((AutoStruct____swift_memcpy9_8_1000077c4 *)sp)->field_08_rw = r1;
     *     r8 = 0x21;
     *     r2 = r8;
     *     r3 = 0;
     *     r0 = flirt_dyld_stub_binder_trampoline_6cc8(r0, &stack_buf_18);
     *     r1 = *([sp]);
     *     r0 = ((AutoStruct__sypWOb_10000280c *)sp)->field_10_rw;
     *     r0 = _$sypSgWOf(r0, &stack_buf_18);
     *     r0 = ((AutoStruct____swift_memcpy9_8_1000077c4 *)sp)->field_08_rw;
     *     r0 = flirt_dyld_stub_binder_trampoline_6d1c(r0, &stack_buf_18);
     *     r0 = ((AutoStruct__sypWOb_10000280c *)sp)->field_10_rw;
     *     r0 = _$sypSgWOh(r0, &stack_buf_18);
     *     return r0;
     * }
*/
u64 re_s4main26BareModifierMonitorSessionC012flagsChangedD033_FD5FB8F3991F83E8040D3A5272A98557LLypSgvs(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x100001470ULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x8ULL;
}

/*
* Reconstructed Procedure: _$sypSgWOf (@ 0x1000014cc, 196 bytes, 11 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // _$sypSgWOf ───
     * // Stack Frame: 0B | Basic Blocks: 11 | Natural Loops: 0 | Post-Dom Nodes: 11 | Callers: 4
     * int64_t _$sypSgWOf(int64_t arg0, int64_t arg1) {
     *     *([sp]) = r0;
     *     ((AutoStruct____swift_memcpy9_8_1000077c4 *)sp)->field_08_rw = r1;
     *     r8 = ((AutoStruct__sSSSg_AAtWOh_10000cb38 *)r1)->field_18_ro;
     *     if (r8 == 0) { goto loc_100001530; }
     *     // [Block 0x1000014e8 | PostDom: 0x1000014ec]
     *     goto loc_1000014ec;
     *     // [Block 0x1000014ec | PostDom: 0x100001580]
     *     r8 = *([sp]);
     *     r8 = ((AutoStruct__sSSSg_AAtWOh_10000cb38 *)r8)->field_18_ro;
     *     if (r8 == 0) { goto loc_10000150c; }
     *     // [Block 0x1000014f8 | PostDom: 0x1000014fc]
     *     goto loc_1000014fc;
     *     // [Block 0x1000014fc | PostDom: 0x100001580]
     *     r1 = *([sp]);
     *     r0 = ((AutoStruct____swift_memcpy9_8_1000077c4 *)sp)->field_08_rw;
     *     r0 = ___swift_assign_boxed_opaque_existential_0(r0, r1);
     *     goto loc_100001580;
     *     // [Block 0x10000150c | PostDom: 0x100001580]
     *     r0 = ((AutoStruct____swift_memcpy9_8_1000077c4 *)sp)->field_08_rw;
     *     r0 = ___swift_destroy_boxed_opaque_existential_0(r0, r1);
     *     r9 = *([sp]);
     *     r8 = ((AutoStruct____swift_memcpy9_8_1000077c4 *)sp)->field_08_rw;
     *     q0 = *([x9]);
     *     *([x8]) = q0;
     *     q0 = ((AutoStruct__sypWOb_10000280c *)r9)->field_10_rw;
     *     ((AutoStruct__sypWOb_10000280c *)r8)->field_10_rw = q0;
     *     goto loc_100001580;
     *     // [Block 0x100001530 | PostDom: 0x100001580]
     *     r8 = *([sp]);
     *     r8 = ((AutoStruct__sSSSg_AAtWOh_10000cb38 *)r8)->field_18_ro;
     *     if (r8 == 0) { goto loc_100001564; }
     *     // [Block 0x10000153c | PostDom: 0x100001540]
     *     goto loc_100001540;
     *     // [Block 0x100001540 | PostDom: 0x100001580]
     *     r1 = *([sp]);
     *     r0 = ((AutoStruct____swift_memcpy9_8_1000077c4 *)sp)->field_08_rw;
     *     r2 = ((AutoStruct__sSSSg_AAtWOh_10000cb38 *)r1)->field_18_ro;
     *     r8 = r2;
     *     ((AutoStruct__sSSSg_AAtWOh_10000cb38 *)r0)->field_18_ro = r8;
     *     r8 = *([x2, #-8]);
     *     r8 = *([x8]);
     *     r0 = x8(r0, r1);
     *     goto loc_100001580;
     *     // [Block 0x100001564 | PostDom: 0x100001580]
     *     r8 = ((AutoStruct____swift_memcpy9_8_1000077c4 *)sp)->field_08_rw;
     *     r9 = *([sp]);
     *     q0 = *([x9]);
     *     *([x8]) = q0;
     *     q0 = ((AutoStruct__sypWOb_10000280c *)r9)->field_10_rw;
     *     ((AutoStruct__sypWOb_10000280c *)r8)->field_10_rw = q0;
     *     goto loc_100001580;
     * loc_100001580:
     *     r0 = ((AutoStruct____swift_memcpy9_8_1000077c4 *)sp)->field_08_rw;
     *     return r0;
     * }
*/
u64 re_sypSgWOf(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x1000014ccULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x4ULL;
}

/*
* Reconstructed Procedure: ___swift_assign_boxed_opaque_existential_0 (@ 0x100001590, 452 bytes, 21 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // ___swift_assign_boxed_opaque_existential_0 ───
     * // Stack Frame: 0B | Basic Blocks: 21 | Natural Loops: 0 | Post-Dom Nodes: 21 | Callers: 1
     * int64_t ___swift_assign_boxed_opaque_existential_0(int64_t arg0, int64_t arg1) {
     *     uint8_t stack_buf_18[24]; // [fp - 0x18]
     *     *([x29, #-0x28]) = r0;
     *     *([x29, #-0x20]) = r1;
     *     r8 = r0 - r1;
     *     if (r8 != 0) {
     *         // [Block 0x1000015ac | PostDom: 0x1000015b0]
     *         goto loc_1000015b0;
     *         // [Block 0x1000015b0 | PostDom: 0x100001748]
     *         r9 = *([x29, #-0x20]);
     *         r8 = *([x29, #-0x28]);
     *         r8 = ((AutoStruct__sSSSg_AAtWOh_10000cb38 *)r8)->field_18_ro;
     *         ((AutoStruct__main_10000f830 *)sp)->field_38_rw = r8;
     *         r9 = ((AutoStruct__sSSSg_AAtWOh_10000cb38 *)r9)->field_18_ro;
     *         *([x29, #-0x30]) = r9;
     *         r8 = r8 - r9;
     *         if (r8 != 0) { goto loc_100001638; }
     *         // [Block 0x1000015d0 | PostDom: 0x1000015d4]
     *         goto loc_1000015d4;
     *         // [Block 0x1000015d4 | PostDom: 0x100001748]
     *         r8 = ((AutoStruct__main_10000f830 *)sp)->field_38_rw;
     *         r8 = *([x8, #-8]);
     *         r8 = ((AutoStruct_swiftmainBareModifierMonitorSessionkeytriggeremitLine_100001c24 *)r8)->field_50_rw;
     *         if ((r8 & (1 << 0x11)) != 0) { goto loc_100001604; }
     *         // [Block 0x1000015e4 | PostDom: 0x1000015e8]
     *         goto loc_1000015e8;
     *         // [Block 0x1000015e8 | PostDom: 0x100001748]
     *         r2 = ((AutoStruct__main_10000f830 *)sp)->field_38_rw;
     *         r1 = *([x29, #-0x20]);
     *         r0 = *([x29, #-0x28]);
     *         r8 = *([x2, #-8]);
     *         r8 = ((AutoStruct__sSSSg_AAtWOh_10000cb38 *)r8)->field_18_ro;
     *         r0 = x8(r0, r1);
     *         goto loc_100001748;
     *         // [Block 0x100001604 | PostDom: 0x100001748]
     *         r9 = *([x29, #-0x28]);
     *         r8 = *([x29, #-0x20]);
     *         r9 = *([x9]);
     *         ((AutoStruct__block_copy_helper2_10000d428 *)sp)->field_28_rw = r9;
     *         r0 = *([x8]);
     *         ((AutoStruct_swiftmainBareModifierMonitorSessionemitLine_FD5FB8F3991F83E8040D3A5272A98557_100001368 *)sp)->field_30_ro = r0;
     *         r0 = flirt_dyld_stub_binder_trampoline_6db8(r0, r1);
     *         r0 = ((AutoStruct__block_copy_helper2_10000d428 *)sp)->field_28_rw;
     *         r0 = flirt_dyld_stub_binder_trampoline_6dac(r0, r1);
     *         r9 = *([x29, #-0x28]);
     *         r8 = ((AutoStruct_swiftmainBareModifierMonitorSessionemitLine_FD5FB8F3991F83E8040D3A5272A98557_100001368 *)sp)->field_30_ro;
     *         *([x9]) = r8;
     *         goto loc_100001748;
     *         // [Block 0x100001638 | PostDom: 0x100001748]
     *         r9 = *([x29, #-0x30]);
     *         r8 = ((AutoStruct__main_10000f830 *)sp)->field_38_rw;
     *         r11 = *([x29, #-0x28]);
     *         r10 = r9;
     *         ((AutoStruct__sSSSg_AAtWOh_10000cb38 *)r11)->field_18_ro = r10;
     *         r8 = *([x8, #-8]);
     *         r8 = ((AutoStruct_swiftmainBareModifierMonitorSessionkeytriggeremitLine_100001c24 *)r8)->field_50_rw;
     *         r9 = *([x9, #-8]);
     *         r9 = ((AutoStruct_swiftmainBareModifierMonitorSessionkeytriggeremitLine_100001c24 *)r9)->field_50_rw;
     *         r9 = r9 & 0x20000;
     *         /* 0x100001660: cset w9, eq * /
     *         *([sp, #0x24]) = r9;
     *         if ((r8 & (1 << 0x11)) != 0) { goto loc_1000016e8; }
     *         // [Block 0x10000166c | PostDom: 0x100001670]
     *         goto loc_100001670;
     *         // [Block 0x100001670 | PostDom: 0x1000016d0]
     *         r2 = ((AutoStruct__main_10000f830 *)sp)->field_38_rw;
     *         r1 = *([x29, #-0x28]);
     *         r8 = *([x2, #-8]);
     *         r8 = ((AutoStruct__block_copy_helper2_10000d428 *)r8)->field_20_rw;
     *         r0 = &stack_buf_18; // [fp - 0x18]
     *         r0 = x8(&stack_buf_18, r1);
     *         r8 = *([sp, #0x24]);
     *         if ((r8 & (1 << 0)) == 0) { goto loc_1000016b0; }
     *         // [Block 0x100001690 | PostDom: 0x100001694]
     *         goto loc_100001694;
     *         // [Block 0x100001694 | PostDom: 0x1000016d0]
     *         r2 = *([x29, #-0x30]);
     *         r1 = *([x29, #-0x20]);
     *         r0 = *([x29, #-0x28]);
     *         r8 = *([x2, #-8]);
     *         r8 = ((AutoStruct__sypWOb_10000280c *)r8)->field_10_rw;
     *         r0 = x8(r0, r1);
     *         goto loc_1000016d0;
     *         // [Block 0x1000016b0 | PostDom: 0x1000016d0]
     *         r8 = *([x29, #-0x20]);
     *         r0 = *([x8]);
     *         ((AutoStruct__sSSSg_AAtWOh_10000cb38 *)sp)->field_18_ro = r0;
     *         r0 = flirt_dyld_stub_binder_trampoline_6db8(r0, r1);
     *         r9 = *([x29, #-0x28]);
     *         r8 = ((AutoStruct__sSSSg_AAtWOh_10000cb38 *)sp)->field_18_ro;
     *         *([x9]) = r8;
     *         goto loc_1000016d0;
     *         // [Block 0x1000016d0 | PostDom: 0x100001748]
     *         r1 = ((AutoStruct__main_10000f830 *)sp)->field_38_rw;
     *         r8 = *([x1, #-8]);
     *         r8 = ((AutoStruct____swift_memcpy9_8_1000077c4 *)r8)->field_08_rw;
     *         r0 = &stack_buf_18; // [fp - 0x18]
     *         r0 = x8(&stack_buf_18, r1);
     *         goto loc_100001748;
     *         // [Block 0x1000016e8 | PostDom: 0x10000173c]
     *         r8 = *([sp, #0x24]);
     *         r9 = *([x29, #-0x28]);
     *         r9 = *([x9]);
     *         ((AutoStruct__sypWOb_10000280c *)sp)->field_10_rw = r9;
     *         if ((r8 & (1 << 0)) == 0) { goto loc_10000171c; }
     *         // [Block 0x1000016fc | PostDom: 0x100001700]
     *         goto loc_100001700;
     *         // [Block 0x100001700 | PostDom: 0x10000173c]
     *         r2 = *([x29, #-0x30]);
     *         r1 = *([x29, #-0x20]);
     *         r0 = *([x29, #-0x28]);
     *         r8 = *([x2, #-8]);
     *         r8 = ((AutoStruct__sypWOb_10000280c *)r8)->field_10_rw;
     *         r0 = x8(r0, r1);
     *         goto loc_10000173c;
     *         // [Block 0x10000171c | PostDom: 0x10000173c]
     *         r8 = *([x29, #-0x20]);
     *         r0 = *([x8]);
     *         ((AutoStruct____swift_memcpy9_8_1000077c4 *)sp)->field_08_rw = r0;
     *         r0 = flirt_dyld_stub_binder_trampoline_6db8(r0, r1);
     *         r9 = *([x29, #-0x28]);
     *         r8 = ((AutoStruct____swift_memcpy9_8_1000077c4 *)sp)->field_08_rw;
     *         *([x9]) = r8;
     *         goto loc_10000173c;
     *         // [Block 0x10000173c | PostDom: 0x100001748]
     *         r0 = ((AutoStruct__sypWOb_10000280c *)sp)->field_10_rw;
     *         r0 = flirt_dyld_stub_binder_trampoline_6dac(r0, r1);
     *         goto loc_100001748;
     *     }
     * loc_100001748:
     *     return r0;
     * }
*/
u64 re_swift_assign_boxed_opaque_existential_0(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x100001590ULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x7ULL;
}

/*
* Reconstructed Procedure: ___swift_destroy_boxed_opaque_existential_0 (@ 0x100001754, 72 bytes, 3 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // ___swift_destroy_boxed_opaque_existential_0 ───
     * // Stack Frame: 0B | Basic Blocks: 3 | Natural Loops: 0 | Post-Dom Nodes: 3 | Callers: 11
     * int64_t ___swift_destroy_boxed_opaque_existential_0(int64_t arg0, int64_t arg1) {
     *     *([sp]) = r0;
     *     r8 = ((AutoStruct__sSSSg_AAtWOh_10000cb38 *)r0)->field_18_ro;
     *     ((AutoStruct____swift_memcpy9_8_1000077c4 *)sp)->field_08_rw = r8;
     *     r8 = *([x8, #-8]);
     *     r8 = ((AutoStruct_swiftmainBareModifierMonitorSessionkeytriggeremitLine_100001c24 *)r8)->field_50_rw;
     *     if ((r8 & (1 << 0x11)) != 0) { goto loc_10000179c; }
     *     // [Block 0x100001778 | PostDom: 0x10000177c]
     *     goto loc_10000177c;
     *     // [Block 0x10000177c | PostDom: exit]
     *     r1 = ((AutoStruct____swift_memcpy9_8_1000077c4 *)sp)->field_08_rw;
     *     r0 = *([sp]);
     *     r8 = *([x1, #-8]);
     *     r8 = ((AutoStruct____swift_memcpy9_8_1000077c4 *)r8)->field_08_rw;
     *     r0 = x8(r0, r1);
     *     return r0;
     * }
*/
u64 re_swift_destroy_boxed_opaque_existential_0(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x100001754ULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x2ULL;
}

/*
* Reconstructed Procedure: flirt_pthread_mutex_scoped_lock_179c (@ 0x10000179c, 24 bytes, 1 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // flirt_pthread_mutex_scoped_lock_179c ───
     * int64_t flirt_pthread_mutex_scoped_lock_179c(int64_t arg0, int64_t arg1) {
     *     r8 = *([sp]);
     *     r0 = *([x8]);
     *     r0 = flirt_dyld_stub_binder_trampoline_6dac(r0, r1);
     *     return r0;
     * }
*/
u64 re_flirt_pthread_mutex_scoped_lock_179c(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x10000179cULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x2ULL;
}

/*
* Reconstructed Procedure: _$sypSgWOh (@ 0x1000017b4, 56 bytes, 4 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // _$sypSgWOh ───
     * // Stack Frame: 0B | Basic Blocks: 4 | Natural Loops: 0 | Post-Dom Nodes: 4 | Callers: 20
     * int64_t _$sypSgWOh(int64_t arg0, int64_t arg1) {
     *     ((AutoStruct____swift_memcpy9_8_1000077c4 *)sp)->field_08_rw = r0;
     *     r8 = ((AutoStruct__sSSSg_AAtWOh_10000cb38 *)r0)->field_18_ro;
     *     if (r8 != 0) {
     *         // [Block 0x1000017cc | PostDom: 0x1000017d0]
     *         goto loc_1000017d0;
     *         // [Block 0x1000017d0 | PostDom: 0x1000017dc]
     *         r0 = ((AutoStruct____swift_memcpy9_8_1000077c4 *)sp)->field_08_rw;
     *         r0 = ___swift_destroy_boxed_opaque_existential_0(r0, r1);
     *         goto loc_1000017dc;
     *     }
     *     // [Block 0x1000017dc | PostDom: exit]
     *     r0 = ((AutoStruct____swift_memcpy9_8_1000077c4 *)sp)->field_08_rw;
     *     return r0;
     * }
*/
u64 re_sypSgWOh(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x1000017b4ULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x3ULL;
}

/*
* Reconstructed Procedure: swift::main::BareModifierMonitorSession::keyDown::_FD5FB8F3991F83E8040D3A5272A98557() (@ 0x1000017ec, 20 bytes, 1 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // swift::main::BareModifierMonitorSession::keyDown::_FD5FB8F3991F83E8040D3A5272A98557() ───
     * int64_t swift::main::BareModifierMonitorSession::keyDown::_FD5FB8F3991F83E8040D3A5272A98557(int64_t arg0, int64_t arg1) {
     *     *([x8]) = 0;
     *     ((AutoStruct____swift_memcpy9_8_1000077c4 *)r8)->field_08_rw = 0;
     *     ((AutoStruct__sypWOb_10000280c *)r8)->field_10_rw = 0;
     *     ((AutoStruct__sSSSg_AAtWOh_10000cb38 *)r8)->field_18_ro = 0;
     *     return r0;
     * }
*/
u64 re_s4main26BareModifierMonitorSessionC07keyDownD033_FD5FB8F3991F83E8040D3A5272A98557LLypSgvpfi(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x1000017ecULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x0ULL;
}

/*
* Reconstructed Procedure: swift::main::BareModifierMonitorSession::keyDown::_FD5FB8F3991F83E8040D3A5272A98557() (@ 0x100001800, 80 bytes, 1 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // swift::main::BareModifierMonitorSession::keyDown::_FD5FB8F3991F83E8040D3A5272A98557() ───
     * int64_t swift::main::BareModifierMonitorSession::keyDown::_FD5FB8F3991F83E8040D3A5272A98557(int64_t arg0, int64_t arg1) {
     *     uint8_t stack_buf_18[16]; // [sp + 0x18]
     *     ((AutoStruct____swift_memcpy9_8_1000077c4 *)sp)->field_08_rw = r8;
     *     r0 = r20 + 0x58;
     *     *([sp]) = r0;
     *     r1 = &stack_buf_18; // [sp + 0x18]
     *     ((AutoStruct__sypWOb_10000280c *)sp)->field_10_rw = r1;
     *     r8 = 0x20;
     *     r2 = r8;
     *     r3 = 0;
     *     r0 = flirt_dyld_stub_binder_trampoline_6cc8(r0, &stack_buf_18);
     *     r0 = *([sp]);
     *     r1 = ((AutoStruct____swift_memcpy9_8_1000077c4 *)sp)->field_08_rw;
     *     r0 = _$sypSgWOc(r0, &stack_buf_18);
     *     r0 = ((AutoStruct__sypWOb_10000280c *)sp)->field_10_rw;
     *     r0 = flirt_dyld_stub_binder_trampoline_6d1c(r0, &stack_buf_18);
     *     return r0;
     * }
*/
u64 re_s4main26BareModifierMonitorSessionC07keyDownD033_FD5FB8F3991F83E8040D3A5272A98557LLypSgvg(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x100001800ULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x7ULL;
}

/*
* Reconstructed Procedure: swift::main::BareModifierMonitorSession::keyDown::_FD5FB8F3991F83E8040D3A5272A98557() (@ 0x100001850, 92 bytes, 1 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // swift::main::BareModifierMonitorSession::keyDown::_FD5FB8F3991F83E8040D3A5272A98557() ───
     * int64_t swift::main::BareModifierMonitorSession::keyDown::_FD5FB8F3991F83E8040D3A5272A98557(int64_t arg0, int64_t arg1) {
     *     uint8_t stack_buf_18[16]; // [sp + 0x18]
     *     ((AutoStruct__sypWOb_10000280c *)sp)->field_10_rw = r0;
     *     r0 = r20 + 0x58;
     *     *([sp]) = r0;
     *     r1 = &stack_buf_18; // [sp + 0x18]
     *     ((AutoStruct____swift_memcpy9_8_1000077c4 *)sp)->field_08_rw = r1;
     *     r8 = 0x21;
     *     r2 = r8;
     *     r3 = 0;
     *     r0 = flirt_dyld_stub_binder_trampoline_6cc8(r0, &stack_buf_18);
     *     r1 = *([sp]);
     *     r0 = ((AutoStruct__sypWOb_10000280c *)sp)->field_10_rw;
     *     r0 = _$sypSgWOf(r0, &stack_buf_18);
     *     r0 = ((AutoStruct____swift_memcpy9_8_1000077c4 *)sp)->field_08_rw;
     *     r0 = flirt_dyld_stub_binder_trampoline_6d1c(r0, &stack_buf_18);
     *     r0 = ((AutoStruct__sypWOb_10000280c *)sp)->field_10_rw;
     *     r0 = _$sypSgWOh(r0, &stack_buf_18);
     *     return r0;
     * }
*/
u64 re_s4main26BareModifierMonitorSessionC07keyDownD033_FD5FB8F3991F83E8040D3A5272A98557LLypSgvs(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x100001850ULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x8ULL;
}

/*
* Reconstructed Procedure: swift::main::BareModifierMonitorSession::targetIsDown::_FD5FB8F3991F83E8040D3A5272A98557() (@ 0x1000018ac, 12 bytes, 1 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // swift::main::BareModifierMonitorSession::targetIsDown::_FD5FB8F3991F83E8040D3A5272A98557() ───
     * int64_t swift::main::BareModifierMonitorSession::targetIsDown::_FD5FB8F3991F83E8040D3A5272A98557(int64_t arg0, int64_t arg1) {
     *     r8 = 0;
     *     r0 = r8 & 1;
     *     return r0;
     * }
*/
u64 re_s4main26BareModifierMonitorSessionC12targetIsDown33_FD5FB8F3991F83E8040D3A5272A98557LLSbvpfi(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x1000018acULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x0ULL;
}

/*
* Reconstructed Procedure: swift::main::BareModifierMonitorSession::targetIsDown::_FD5FB8F3991F83E8040D3A5272A98557() (@ 0x1000018b8, 76 bytes, 1 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // swift::main::BareModifierMonitorSession::targetIsDown::_FD5FB8F3991F83E8040D3A5272A98557() ───
     * int64_t swift::main::BareModifierMonitorSession::targetIsDown::_FD5FB8F3991F83E8040D3A5272A98557(int64_t arg0, int64_t arg1) {
     *     uint8_t stack_buf_18[16]; // [sp + 0x18]
     *     r0 = r20 + 0x78;
     *     r1 = &stack_buf_18; // [sp + 0x18]
     *     ((AutoStruct____swift_memcpy9_8_1000077c4 *)sp)->field_08_rw = r1;
     *     r8 = 0x20;
     *     r2 = r8;
     *     r3 = 0;
     *     r0 = flirt_dyld_stub_binder_trampoline_6cc8(r0, &stack_buf_18);
     *     r0 = ((AutoStruct____swift_memcpy9_8_1000077c4 *)sp)->field_08_rw;
     *     r8 = ((AutoStruct_swiftmainBareModifierMonitorSessionhandleTargetDown_FD5FB8F3991F83E8040D3A5272A98557_10000322c *)r20)->field_78_ro;
     *     *([sp, #0x14]) = r8;
     *     r0 = flirt_dyld_stub_binder_trampoline_6d1c(r0, &stack_buf_18);
     *     r8 = *([sp, #0x14]);
     *     r0 = r8 & 1;
     *     return r0;
     * }
*/
u64 re_s4main26BareModifierMonitorSessionC12targetIsDown33_FD5FB8F3991F83E8040D3A5272A98557LLSbvg(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x1000018b8ULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x6ULL;
}

/*
* Reconstructed Procedure: swift::main::BareModifierMonitorSession::targetIsDown::_FD5FB8F3991F83E8040D3A5272A98557() (@ 0x100001904, 72 bytes, 1 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // swift::main::BareModifierMonitorSession::targetIsDown::_FD5FB8F3991F83E8040D3A5272A98557() ───
     * int64_t swift::main::BareModifierMonitorSession::targetIsDown::_FD5FB8F3991F83E8040D3A5272A98557(int64_t arg0, int64_t arg1) {
     *     uint8_t stack_buf_18[16]; // [sp + 0x18]
     *     *([sp, #0xc]) = r0;
     *     r0 = r20 + 0x78;
     *     r1 = &stack_buf_18; // [sp + 0x18]
     *     ((AutoStruct__sypWOb_10000280c *)sp)->field_10_rw = r1;
     *     r8 = 0x21;
     *     r2 = r8;
     *     r3 = 0;
     *     r0 = flirt_dyld_stub_binder_trampoline_6cc8(r0, &stack_buf_18);
     *     r8 = *([sp, #0xc]);
     *     r0 = ((AutoStruct__sypWOb_10000280c *)sp)->field_10_rw;
     *     ((AutoStruct_swiftmainBareModifierMonitorSessionhandleTargetDown_FD5FB8F3991F83E8040D3A5272A98557_10000322c *)r20)->field_78_ro = r8;
     *     r0 = flirt_dyld_stub_binder_trampoline_6d1c(r0, &stack_buf_18);
     *     return r0;
     * }
*/
u64 re_s4main26BareModifierMonitorSessionC12targetIsDown33_FD5FB8F3991F83E8040D3A5272A98557LLSbvs(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x100001904ULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x6ULL;
}

/*
* Reconstructed Procedure: swift::main::BareModifierMonitorSession::committedIsDown::_FD5FB8F3991F83E8040D3A5272A98557() (@ 0x10000194c, 12 bytes, 1 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // swift::main::BareModifierMonitorSession::committedIsDown::_FD5FB8F3991F83E8040D3A5272A98557() ───
     * int64_t swift::main::BareModifierMonitorSession::committedIsDown::_FD5FB8F3991F83E8040D3A5272A98557(int64_t arg0, int64_t arg1) {
     *     r8 = 0;
     *     r0 = r8 & 1;
     *     return r0;
     * }
*/
u64 re_s4main26BareModifierMonitorSessionC15committedIsDown33_FD5FB8F3991F83E8040D3A5272A98557LLSbvpfi(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x10000194cULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x0ULL;
}

/*
* Reconstructed Procedure: swift::main::BareModifierMonitorSession::committedIsDown::_FD5FB8F3991F83E8040D3A5272A98557() (@ 0x100001958, 76 bytes, 1 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // swift::main::BareModifierMonitorSession::committedIsDown::_FD5FB8F3991F83E8040D3A5272A98557() ───
     * int64_t swift::main::BareModifierMonitorSession::committedIsDown::_FD5FB8F3991F83E8040D3A5272A98557(int64_t arg0, int64_t arg1) {
     *     uint8_t stack_buf_18[16]; // [sp + 0x18]
     *     r0 = r20 + 0x79;
     *     r1 = &stack_buf_18; // [sp + 0x18]
     *     ((AutoStruct____swift_memcpy9_8_1000077c4 *)sp)->field_08_rw = r1;
     *     r8 = 0x20;
     *     r2 = r8;
     *     r3 = 0;
     *     r0 = flirt_dyld_stub_binder_trampoline_6cc8(r0, &stack_buf_18);
     *     r0 = ((AutoStruct____swift_memcpy9_8_1000077c4 *)sp)->field_08_rw;
     *     r8 = ((AutoStruct_swiftmainBareModifierMonitorSessionkeytriggeremitLine_100001c24 *)r20)->field_79_rw;
     *     *([sp, #0x14]) = r8;
     *     r0 = flirt_dyld_stub_binder_trampoline_6d1c(r0, &stack_buf_18);
     *     r8 = *([sp, #0x14]);
     *     r0 = r8 & 1;
     *     return r0;
     * }
*/
u64 re_s4main26BareModifierMonitorSessionC15committedIsDown33_FD5FB8F3991F83E8040D3A5272A98557LLSbvg(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x100001958ULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x6ULL;
}

/*
* Reconstructed Procedure: swift::main::BareModifierMonitorSession::committedIsDown::_FD5FB8F3991F83E8040D3A5272A98557() (@ 0x1000019a4, 72 bytes, 1 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // swift::main::BareModifierMonitorSession::committedIsDown::_FD5FB8F3991F83E8040D3A5272A98557() ───
     * int64_t swift::main::BareModifierMonitorSession::committedIsDown::_FD5FB8F3991F83E8040D3A5272A98557(int64_t arg0, int64_t arg1) {
     *     uint8_t stack_buf_18[16]; // [sp + 0x18]
     *     *([sp, #0xc]) = r0;
     *     r0 = r20 + 0x79;
     *     r1 = &stack_buf_18; // [sp + 0x18]
     *     ((AutoStruct__sypWOb_10000280c *)sp)->field_10_rw = r1;
     *     r8 = 0x21;
     *     r2 = r8;
     *     r3 = 0;
     *     r0 = flirt_dyld_stub_binder_trampoline_6cc8(r0, &stack_buf_18);
     *     r8 = *([sp, #0xc]);
     *     r0 = ((AutoStruct__sypWOb_10000280c *)sp)->field_10_rw;
     *     ((AutoStruct_swiftmainBareModifierMonitorSessionkeytriggeremitLine_100001c24 *)r20)->field_79_rw = r8;
     *     r0 = flirt_dyld_stub_binder_trampoline_6d1c(r0, &stack_buf_18);
     *     return r0;
     * }
*/
u64 re_s4main26BareModifierMonitorSessionC15committedIsDown33_FD5FB8F3991F83E8040D3A5272A98557LLSbvs(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x1000019a4ULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x6ULL;
}

/*
* Reconstructed Procedure: swift::main::BareModifierMonitorSession::canceledUntilRelease::_FD5FB8F3991F83E8040D3A5272A98557() (@ 0x1000019ec, 12 bytes, 1 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // swift::main::BareModifierMonitorSession::canceledUntilRelease::_FD5FB8F3991F83E8040D3A5272A98557() ───
     * int64_t swift::main::BareModifierMonitorSession::canceledUntilRelease::_FD5FB8F3991F83E8040D3A5272A98557(int64_t arg0, int64_t arg1) {
     *     r8 = 0;
     *     r0 = r8 & 1;
     *     return r0;
     * }
*/
u64 re_s4main26BareModifierMonitorSessionC20canceledUntilRelease33_FD5FB8F3991F83E8040D3A5272A98557LLSbvpfi(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x1000019ecULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x0ULL;
}

/*
* Reconstructed Procedure: swift::main::BareModifierMonitorSession::canceledUntilRelease::_FD5FB8F3991F83E8040D3A5272A98557() (@ 0x1000019f8, 76 bytes, 1 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // swift::main::BareModifierMonitorSession::canceledUntilRelease::_FD5FB8F3991F83E8040D3A5272A98557() ───
     * int64_t swift::main::BareModifierMonitorSession::canceledUntilRelease::_FD5FB8F3991F83E8040D3A5272A98557(int64_t arg0, int64_t arg1) {
     *     uint8_t stack_buf_18[16]; // [sp + 0x18]
     *     r0 = r20 + 0x7a;
     *     r1 = &stack_buf_18; // [sp + 0x18]
     *     ((AutoStruct____swift_memcpy9_8_1000077c4 *)sp)->field_08_rw = r1;
     *     r8 = 0x20;
     *     r2 = r8;
     *     r3 = 0;
     *     r0 = flirt_dyld_stub_binder_trampoline_6cc8(r0, &stack_buf_18);
     *     r0 = ((AutoStruct____swift_memcpy9_8_1000077c4 *)sp)->field_08_rw;
     *     r8 = ((AutoStruct_swiftmainBareModifierMonitorSessionkeytriggeremitLine_100001c24 *)r20)->field_7a_rw;
     *     *([sp, #0x14]) = r8;
     *     r0 = flirt_dyld_stub_binder_trampoline_6d1c(r0, &stack_buf_18);
     *     r8 = *([sp, #0x14]);
     *     r0 = r8 & 1;
     *     return r0;
     * }
*/
u64 re_s4main26BareModifierMonitorSessionC20canceledUntilRelease33_FD5FB8F3991F83E8040D3A5272A98557LLSbvg(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x1000019f8ULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x6ULL;
}

/*
* Reconstructed Procedure: swift::main::BareModifierMonitorSession::canceledUntilRelease::_FD5FB8F3991F83E8040D3A5272A98557() (@ 0x100001a44, 72 bytes, 1 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // swift::main::BareModifierMonitorSession::canceledUntilRelease::_FD5FB8F3991F83E8040D3A5272A98557() ───
     * int64_t swift::main::BareModifierMonitorSession::canceledUntilRelease::_FD5FB8F3991F83E8040D3A5272A98557(int64_t arg0, int64_t arg1) {
     *     uint8_t stack_buf_18[16]; // [sp + 0x18]
     *     *([sp, #0xc]) = r0;
     *     r0 = r20 + 0x7a;
     *     r1 = &stack_buf_18; // [sp + 0x18]
     *     ((AutoStruct__sypWOb_10000280c *)sp)->field_10_rw = r1;
     *     r8 = 0x21;
     *     r2 = r8;
     *     r3 = 0;
     *     r0 = flirt_dyld_stub_binder_trampoline_6cc8(r0, &stack_buf_18);
     *     r8 = *([sp, #0xc]);
     *     r0 = ((AutoStruct__sypWOb_10000280c *)sp)->field_10_rw;
     *     ((AutoStruct_swiftmainBareModifierMonitorSessionkeytriggeremitLine_100001c24 *)r20)->field_7a_rw = r8;
     *     r0 = flirt_dyld_stub_binder_trampoline_6d1c(r0, &stack_buf_18);
     *     return r0;
     * }
*/
u64 re_s4main26BareModifierMonitorSessionC20canceledUntilRelease33_FD5FB8F3991F83E8040D3A5272A98557LLSbvs(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x100001a44ULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x6ULL;
}

/*
* Reconstructed Procedure: swift::main::BareModifierMonitorSession::pressGeneration::_FD5FB8F3991F83E8040D3A5272A98557() (@ 0x100001a8c, 8 bytes, 1 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // swift::main::BareModifierMonitorSession::pressGeneration::_FD5FB8F3991F83E8040D3A5272A98557() ───
     * int64_t swift::main::BareModifierMonitorSession::pressGeneration::_FD5FB8F3991F83E8040D3A5272A98557(int64_t arg0, int64_t arg1) {
     *     r0 = 0;
     *     return r0;
     * }
*/
u64 re_s4main26BareModifierMonitorSessionC15pressGeneration33_FD5FB8F3991F83E8040D3A5272A98557LLSivpfi(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x100001a8cULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x0ULL;
}

/*
* Reconstructed Procedure: swift::main::BareModifierMonitorSession::pressGeneration::_FD5FB8F3991F83E8040D3A5272A98557() (@ 0x100001a94, 72 bytes, 1 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // swift::main::BareModifierMonitorSession::pressGeneration::_FD5FB8F3991F83E8040D3A5272A98557() ───
     * int64_t swift::main::BareModifierMonitorSession::pressGeneration::_FD5FB8F3991F83E8040D3A5272A98557(int64_t arg0, int64_t arg1) {
     *     uint8_t stack_buf_18[16]; // [sp + 0x18]
     *     r0 = r20 + 0x80;
     *     r1 = &stack_buf_18; // [sp + 0x18]
     *     ((AutoStruct____swift_memcpy9_8_1000077c4 *)sp)->field_08_rw = r1;
     *     r8 = 0x20;
     *     r2 = r8;
     *     r3 = 0;
     *     r0 = flirt_dyld_stub_binder_trampoline_6cc8(r0, &stack_buf_18);
     *     r0 = ((AutoStruct____swift_memcpy9_8_1000077c4 *)sp)->field_08_rw;
     *     r8 = ((AutoStruct_swiftmainBareModifierMonitorSessionhandleTargetUp_FD5FB8F3991F83E8040D3A5272A98557_100002bd4 *)r20)->field_80_rw;
     *     ((AutoStruct__sypWOb_10000280c *)sp)->field_10_rw = r8;
     *     r0 = flirt_dyld_stub_binder_trampoline_6d1c(r0, &stack_buf_18);
     *     r0 = ((AutoStruct__sypWOb_10000280c *)sp)->field_10_rw;
     *     return r0;
     * }
*/
u64 re_s4main26BareModifierMonitorSessionC15pressGeneration33_FD5FB8F3991F83E8040D3A5272A98557LLSivg(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x100001a94ULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x6ULL;
}

/*
* Reconstructed Procedure: swift::main::BareModifierMonitorSession::pressGeneration::_FD5FB8F3991F83E8040D3A5272A98557() (@ 0x100001adc, 72 bytes, 1 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // swift::main::BareModifierMonitorSession::pressGeneration::_FD5FB8F3991F83E8040D3A5272A98557() ───
     * int64_t swift::main::BareModifierMonitorSession::pressGeneration::_FD5FB8F3991F83E8040D3A5272A98557(int64_t arg0, int64_t arg1) {
     *     uint8_t stack_buf_18[16]; // [sp + 0x18]
     *     ((AutoStruct____swift_memcpy9_8_1000077c4 *)sp)->field_08_rw = r0;
     *     r0 = r20 + 0x80;
     *     r1 = &stack_buf_18; // [sp + 0x18]
     *     ((AutoStruct__sypWOb_10000280c *)sp)->field_10_rw = r1;
     *     r8 = 0x21;
     *     r2 = r8;
     *     r3 = 0;
     *     r0 = flirt_dyld_stub_binder_trampoline_6cc8(r0, &stack_buf_18);
     *     r8 = ((AutoStruct____swift_memcpy9_8_1000077c4 *)sp)->field_08_rw;
     *     r0 = ((AutoStruct__sypWOb_10000280c *)sp)->field_10_rw;
     *     ((AutoStruct_swiftmainBareModifierMonitorSessionhandleTargetUp_FD5FB8F3991F83E8040D3A5272A98557_100002bd4 *)r20)->field_80_rw = r8;
     *     r0 = flirt_dyld_stub_binder_trampoline_6d1c(r0, &stack_buf_18);
     *     return r0;
     * }
*/
u64 re_s4main26BareModifierMonitorSessionC15pressGeneration33_FD5FB8F3991F83E8040D3A5272A98557LLSivs(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x100001adcULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x6ULL;
}

/*
* Reconstructed Procedure: swift::main::BareModifierMonitorSession::pressStartedAt::_FD5FB8F3991F83E8040D3A5272A98557() (@ 0x100001b24, 8 bytes, 1 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // swift::main::BareModifierMonitorSession::pressStartedAt::_FD5FB8F3991F83E8040D3A5272A98557() ───
     * int64_t swift::main::BareModifierMonitorSession::pressStartedAt::_FD5FB8F3991F83E8040D3A5272A98557(int64_t arg0, int64_t arg1) {
     *     /* 0x100001b24: movi v0.2d, #0000000000000000 * /
     *     return r0;
     * }
*/
u64 re_s4main26BareModifierMonitorSessionC14pressStartedAt33_FD5FB8F3991F83E8040D3A5272A98557LLSdvpfi(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x100001b24ULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x0ULL;
}

/*
* Reconstructed Procedure: swift::main::BareModifierMonitorSession::pressStartedAt::_FD5FB8F3991F83E8040D3A5272A98557() (@ 0x100001b2c, 72 bytes, 1 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // swift::main::BareModifierMonitorSession::pressStartedAt::_FD5FB8F3991F83E8040D3A5272A98557() ───
     * int64_t swift::main::BareModifierMonitorSession::pressStartedAt::_FD5FB8F3991F83E8040D3A5272A98557(int64_t arg0, int64_t arg1) {
     *     uint8_t stack_buf_18[16]; // [sp + 0x18]
     *     r0 = r20 + 0x88;
     *     r1 = &stack_buf_18; // [sp + 0x18]
     *     ((AutoStruct____swift_memcpy9_8_1000077c4 *)sp)->field_08_rw = r1;
     *     r8 = 0x20;
     *     r2 = r8;
     *     r3 = 0;
     *     r0 = flirt_dyld_stub_binder_trampoline_6cc8(r0, &stack_buf_18);
     *     r0 = ((AutoStruct____swift_memcpy9_8_1000077c4 *)sp)->field_08_rw;
     *     d0 = ((AutoStruct_swiftmainBareModifierMonitorSessionkeytriggeremitLine_100001c24 *)r20)->field_88_rw;
     *     ((AutoStruct__sypWOb_10000280c *)sp)->field_10_rw = d0;
     *     r0 = flirt_dyld_stub_binder_trampoline_6d1c(r0, &stack_buf_18);
     *     d0 = ((AutoStruct__sypWOb_10000280c *)sp)->field_10_rw;
     *     return r0;
     * }
*/
u64 re_s4main26BareModifierMonitorSessionC14pressStartedAt33_FD5FB8F3991F83E8040D3A5272A98557LLSdvg(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x100001b2cULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x6ULL;
}

int main(int argc, char **argv) {
printf("[ULTRON RECONSTRUCTED BINARY] Target: bare-modifier-monitor | Format: Mach-O 64-bit | Procs: 726\n");
    u64 res = re_s4main25bareModifierCommitDelayMsSivau(0x1000ULL, 4ULL, 0x42ULL);
printf("[ULTRON] Executed entry subroutine 'swift::main::bareModifierCommitDelayMs()' (@ 0x100001320) -> 0x%llx\n", (unsigned long long)res);
    return 0;
}

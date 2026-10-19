/* ============================================================================
* ULTRON DISASSEMBLE v3.0 — OPTIMIZING SSA & AI DECOMPILED SOURCE
* Target : /Applications/ChatGPT.app/Contents/Resources/native/bare-modifier-monitor
* Format : Mach-O 64-bit (arm64)
* ============================================================================ */

#include <stdint.h>
#include <stdbool.h>

// ── swift::main::bareModifierCommitDelayMs() @ 0x100001320 (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // swift::main::bareModifierCommitDelayMs() ───
int64_t swift::main::bareModifierCommitDelayMs(int64_t arg0, int64_t arg1) {
    r0 = _$s4main25bareModifierCommitDelayMsSivp; // 0x1000170c0
    return r0;
}

// ── swift::main::BareModifierMonitorSession::key::_FD5FB8F3991F83E8040D3A5272A98557() @ 0x10000132c (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // swift::main::BareModifierMonitorSession::key::_FD5FB8F3991F83E8040D3A5272A98557() ───
int64_t swift::main::BareModifierMonitorSession::key::_FD5FB8F3991F83E8040D3A5272A98557(int64_t arg0, int64_t arg1) {
    r8 = ((AutoStruct__sypWOb_10000280c *)r20)->field_10_rw;
    *([sp]) = r8;
    r0 = ((AutoStruct__sSSSg_AAtWOh_10000cb38 *)r20)->field_18_ro;
    ((AutoStruct____swift_memcpy9_8_1000077c4 *)sp)->field_08_rw = r0;
    r0 = flirt_dyld_stub_binder_trampoline_6ce0(r0, r1);
    r0 = *([sp]);
    r1 = ((AutoStruct____swift_memcpy9_8_1000077c4 *)sp)->field_08_rw;
    return r0;
}

// ── swift::main::BareModifierMonitorSession::trigger::_FD5FB8F3991F83E8040D3A5272A98557() @ 0x100001360 (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // swift::main::BareModifierMonitorSession::trigger::_FD5FB8F3991F83E8040D3A5272A98557() ───
int64_t swift::main::BareModifierMonitorSession::trigger::_FD5FB8F3991F83E8040D3A5272A98557(int64_t arg0, int64_t arg1) {
    r0 = ((AutoStruct__block_copy_helper2_10000d428 *)r20)->field_20_rw;
    return r0;
}

// ── swift::main::BareModifierMonitorSession::emitLine::_FD5FB8F3991F83E8040D3A5272A98557() @ 0x100001368 (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // swift::main::BareModifierMonitorSession::emitLine::_FD5FB8F3991F83E8040D3A5272A98557() ───
int64_t swift::main::BareModifierMonitorSession::emitLine::_FD5FB8F3991F83E8040D3A5272A98557(int64_t arg0, int64_t arg1) {
    r8 = ((AutoStruct__block_copy_helper2_10000d428 *)r20)->field_28_rw;
    *([sp]) = r8;
    r0 = ((AutoStruct_swiftmainBareModifierMonitorSessionemitLine_FD5FB8F3991F83E8040D3A5272A98557_100001368 *)r20)->field_30_ro;
    ((AutoStruct____swift_memcpy9_8_1000077c4 *)sp)->field_08_rw = r0;
    r0 = flirt_dyld_stub_binder_trampoline_6db8(r0, r1);
    r0 = *([sp]);
    r1 = ((AutoStruct____swift_memcpy9_8_1000077c4 *)sp)->field_08_rw;
    return r0;
}

// ── swift::main::BareModifierMonitorSession::flagsChanged::_FD5FB8F3991F83E8040D3A5272A98557() @ 0x10000139c (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // swift::main::BareModifierMonitorSession::flagsChanged::_FD5FB8F3991F83E8040D3A5272A98557() ───
int64_t swift::main::BareModifierMonitorSession::flagsChanged::_FD5FB8F3991F83E8040D3A5272A98557(int64_t arg0, int64_t arg1) {
    *([x8]) = 0;
    ((AutoStruct____swift_memcpy9_8_1000077c4 *)r8)->field_08_rw = 0;
    ((AutoStruct__sypWOb_10000280c *)r8)->field_10_rw = 0;
    ((AutoStruct__sSSSg_AAtWOh_10000cb38 *)r8)->field_18_ro = 0;
    return r0;
}

// ── swift::main::BareModifierMonitorSession::flagsChanged::_FD5FB8F3991F83E8040D3A5272A98557() @ 0x1000013b0 (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // swift::main::BareModifierMonitorSession::flagsChanged::_FD5FB8F3991F83E8040D3A5272A98557() ───
int64_t swift::main::BareModifierMonitorSession::flagsChanged::_FD5FB8F3991F83E8040D3A5272A98557(int64_t arg0, int64_t arg1) {
    uint8_t stack_buf_18[16]; // [sp + 0x18]
    ((AutoStruct____swift_memcpy9_8_1000077c4 *)sp)->field_08_rw = r8;
    r0 = r20 + 0x38;
    *([sp]) = r0;
    r1 = &stack_buf_18; // [sp + 0x18]
    ((AutoStruct__sypWOb_10000280c *)sp)->field_10_rw = r1;
    r8 = 0x20;
    r2 = r8;
    r3 = 0;
    r0 = flirt_dyld_stub_binder_trampoline_6cc8(r0, &stack_buf_18);
    r0 = *([sp]);
    r1 = ((AutoStruct____swift_memcpy9_8_1000077c4 *)sp)->field_08_rw;
    r0 = _$sypSgWOc(r0, &stack_buf_18);
    r0 = ((AutoStruct__sypWOb_10000280c *)sp)->field_10_rw;
    r0 = flirt_dyld_stub_binder_trampoline_6d1c(r0, &stack_buf_18);
    return r0;
}

// ── _$sypSgWOc @ 0x100001400 (5 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // _$sypSgWOc ───
// Stack Frame: 0B | Basic Blocks: 5 | Natural Loops: 0 | Post-Dom Nodes: 5 | Callers: 11
int64_t _$sypSgWOc(int64_t arg0, int64_t arg1) {
    *([sp]) = r0;
    ((AutoStruct____swift_memcpy9_8_1000077c4 *)sp)->field_08_rw = r1;
    r8 = ((AutoStruct__sSSSg_AAtWOh_10000cb38 *)r0)->field_18_ro;
    if (r8 == 0) { goto loc_100001444; }
    // [Block 0x10000141c | PostDom: 0x100001420]
    goto loc_100001420;
    // [Block 0x100001420 | PostDom: 0x100001460]
    r1 = *([sp]);
    r0 = ((AutoStruct____swift_memcpy9_8_1000077c4 *)sp)->field_08_rw;
    r2 = ((AutoStruct__sSSSg_AAtWOh_10000cb38 *)r1)->field_18_ro;
    r8 = r2;
    ((AutoStruct__sSSSg_AAtWOh_10000cb38 *)r0)->field_18_ro = r8;
    r8 = *([x2, #-8]);
    r8 = *([x8]);
    r0 = x8(r0, r1);
    goto loc_100001460;
    // [Block 0x100001444 | PostDom: 0x100001460]
    r8 = ((AutoStruct____swift_memcpy9_8_1000077c4 *)sp)->field_08_rw;
    r9 = *([sp]);
    q0 = *([x9]);
    *([x8]) = q0;
    q0 = ((AutoStruct__sypWOb_10000280c *)r9)->field_10_rw;
    ((AutoStruct__sypWOb_10000280c *)r8)->field_10_rw = q0;
    goto loc_100001460;
    // [Block 0x100001460 | PostDom: exit]
    r0 = ((AutoStruct____swift_memcpy9_8_1000077c4 *)sp)->field_08_rw;
    return r0;
}

// ── swift::main::BareModifierMonitorSession::flagsChanged::_FD5FB8F3991F83E8040D3A5272A98557() @ 0x100001470 (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // swift::main::BareModifierMonitorSession::flagsChanged::_FD5FB8F3991F83E8040D3A5272A98557() ───
int64_t swift::main::BareModifierMonitorSession::flagsChanged::_FD5FB8F3991F83E8040D3A5272A98557(int64_t arg0, int64_t arg1) {
    uint8_t stack_buf_18[16]; // [sp + 0x18]
    ((AutoStruct__sypWOb_10000280c *)sp)->field_10_rw = r0;
    r0 = r20 + 0x38;
    *([sp]) = r0;
    r1 = &stack_buf_18; // [sp + 0x18]
    ((AutoStruct____swift_memcpy9_8_1000077c4 *)sp)->field_08_rw = r1;
    r8 = 0x21;
    r2 = r8;
    r3 = 0;
    r0 = flirt_dyld_stub_binder_trampoline_6cc8(r0, &stack_buf_18);
    r1 = *([sp]);
    r0 = ((AutoStruct__sypWOb_10000280c *)sp)->field_10_rw;
    r0 = _$sypSgWOf(r0, &stack_buf_18);
    r0 = ((AutoStruct____swift_memcpy9_8_1000077c4 *)sp)->field_08_rw;
    r0 = flirt_dyld_stub_binder_trampoline_6d1c(r0, &stack_buf_18);
    r0 = ((AutoStruct__sypWOb_10000280c *)sp)->field_10_rw;
    r0 = _$sypSgWOh(r0, &stack_buf_18);
    return r0;
}

// ── _$sypSgWOf @ 0x1000014cc (11 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // _$sypSgWOf ───
// Stack Frame: 0B | Basic Blocks: 11 | Natural Loops: 0 | Post-Dom Nodes: 11 | Callers: 4
int64_t _$sypSgWOf(int64_t arg0, int64_t arg1) {
    *([sp]) = r0;
    ((AutoStruct____swift_memcpy9_8_1000077c4 *)sp)->field_08_rw = r1;
    r8 = ((AutoStruct__sSSSg_AAtWOh_10000cb38 *)r1)->field_18_ro;
    if (r8 == 0) { goto loc_100001530; }
    // [Block 0x1000014e8 | PostDom: 0x1000014ec]
    goto loc_1000014ec;
    // [Block 0x1000014ec | PostDom: 0x100001580]
    r8 = *([sp]);
    r8 = ((AutoStruct__sSSSg_AAtWOh_10000cb38 *)r8)->field_18_ro;
    if (r8 == 0) { goto loc_10000150c; }
    // [Block 0x1000014f8 | PostDom: 0x1000014fc]
    goto loc_1000014fc;
    // [Block 0x1000014fc | PostDom: 0x100001580]
    r1 = *([sp]);
    r0 = ((AutoStruct____swift_memcpy9_8_1000077c4 *)sp)->field_08_rw;
    r0 = ___swift_assign_boxed_opaque_existential_0(r0, r1);
    goto loc_100001580;
    // [Block 0x10000150c | PostDom: 0x100001580]
    r0 = ((AutoStruct____swift_memcpy9_8_1000077c4 *)sp)->field_08_rw;
    r0 = ___swift_destroy_boxed_opaque_existential_0(r0, r1);
    r9 = *([sp]);
    r8 = ((AutoStruct____swift_memcpy9_8_1000077c4 *)sp)->field_08_rw;
    q0 = *([x9]);
    *([x8]) = q0;
    q0 = ((AutoStruct__sypWOb_10000280c *)r9)->field_10_rw;
    ((AutoStruct__sypWOb_10000280c *)r8)->field_10_rw = q0;
    goto loc_100001580;
    // [Block 0x100001530 | PostDom: 0x100001580]
    r8 = *([sp]);
    r8 = ((AutoStruct__sSSSg_AAtWOh_10000cb38 *)r8)->field_18_ro;
    if (r8 == 0) { goto loc_100001564; }
    // [Block 0x10000153c | PostDom: 0x100001540]
    goto loc_100001540;
    // [Block 0x100001540 | PostDom: 0x100001580]
    r1 = *([sp]);
    r0 = ((AutoStruct____swift_memcpy9_8_1000077c4 *)sp)->field_08_rw;
    r2 = ((AutoStruct__sSSSg_AAtWOh_10000cb38 *)r1)->field_18_ro;
    r8 = r2;
    ((AutoStruct__sSSSg_AAtWOh_10000cb38 *)r0)->field_18_ro = r8;
    r8 = *([x2, #-8]);
    r8 = *([x8]);
    r0 = x8(r0, r1);
    goto loc_100001580;
    // [Block 0x100001564 | PostDom: 0x100001580]
    r8 = ((AutoStruct____swift_memcpy9_8_1000077c4 *)sp)->field_08_rw;
    r9 = *([sp]);
    q0 = *([x9]);
    *([x8]) = q0;
    q0 = ((AutoStruct__sypWOb_10000280c *)r9)->field_10_rw;
    ((AutoStruct__sypWOb_10000280c *)r8)->field_10_rw = q0;
    goto loc_100001580;
loc_100001580:
    r0 = ((AutoStruct____swift_memcpy9_8_1000077c4 *)sp)->field_08_rw;
    return r0;
}

// ── ___swift_assign_boxed_opaque_existential_0 @ 0x100001590 (21 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // ___swift_assign_boxed_opaque_existential_0 ───
// Stack Frame: 0B | Basic Blocks: 21 | Natural Loops: 0 | Post-Dom Nodes: 21 | Callers: 1
int64_t ___swift_assign_boxed_opaque_existential_0(int64_t arg0, int64_t arg1) {
    uint8_t stack_buf_18[24]; // [fp - 0x18]
    *([x29, #-0x28]) = r0;
    *([x29, #-0x20]) = r1;
    r8 = r0 - r1;
    if (r8 != 0) {
        // [Block 0x1000015ac | PostDom: 0x1000015b0]
        goto loc_1000015b0;
        // [Block 0x1000015b0 | PostDom: 0x100001748]
        r9 = *([x29, #-0x20]);
        r8 = *([x29, #-0x28]);
        r8 = ((AutoStruct__sSSSg_AAtWOh_10000cb38 *)r8)->field_18_ro;
        ((AutoStruct__main_10000f830 *)sp)->field_38_rw = r8;
        r9 = ((AutoStruct__sSSSg_AAtWOh_10000cb38 *)r9)->field_18_ro;
        *([x29, #-0x30]) = r9;
        r8 = r8 - r9;
        if (r8 != 0) { goto loc_100001638; }
        // [Block 0x1000015d0 | PostDom: 0x1000015d4]
        goto loc_1000015d4;
        // [Block 0x1000015d4 | PostDom: 0x100001748]
        r8 = ((AutoStruct__main_10000f830 *)sp)->field_38_rw;
        r8 = *([x8, #-8]);
        r8 = ((AutoStruct_swiftmainBareModifierMonitorSessionkeytriggeremitLine_100001c24 *)r8)->field_50_rw;
        if ((r8 & (1 << 0x11)) != 0) { goto loc_100001604; }
        // [Block 0x1000015e4 | PostDom: 0x1000015e8]
        goto loc_1000015e8;
        // [Block 0x1000015e8 | PostDom: 0x100001748]
        r2 = ((AutoStruct__main_10000f830 *)sp)->field_38_rw;
        r1 = *([x29, #-0x20]);
        r0 = *([x29, #-0x28]);
        r8 = *([x2, #-8]);
        r8 = ((AutoStruct__sSSSg_AAtWOh_10000cb38 *)r8)->field_18_ro;
        r0 = x8(r0, r1);
        goto loc_100001748;
        // [Block 0x100001604 | PostDom: 0x100001748]
        r9 = *([x29, #-0x28]);
        r8 = *([x29, #-0x20]);
        r9 = *([x9]);
        ((AutoStruct__block_copy_helper2_10000d428 *)sp)->field_28_rw = r9;
        r0 = *([x8]);
        ((AutoStruct_swiftmainBareModifierMonitorSessionemitLine_FD5FB8F3991F83E8040D3A5272A98557_100001368 *)sp)->field_30_ro = r0;
        r0 = flirt_dyld_stub_binder_trampoline_6db8(r0, r1);
        r0 = ((AutoStruct__block_copy_helper2_10000d428 *)sp)->field_28_rw;
        r0 = flirt_dyld_stub_binder_trampoline_6dac(r0, r1);
        r9 = *([x29, #-0x28]);
        r8 = ((AutoStruct_swiftmainBareModifierMonitorSessionemitLine_FD5FB8F3991F83E8040D3A5272A98557_100001368 *)sp)->field_30_ro;
        *([x9]) = r8;
        goto loc_100001748;
        // [Block 0x100001638 | PostDom: 0x100001748]
        r9 = *([x29, #-0x30]);
        r8 = ((AutoStruct__main_10000f830 *)sp)->field_38_rw;
        r11 = *([x29, #-0x28]);
        r10 = r9;
        ((AutoStruct__sSSSg_AAtWOh_10000cb38 *)r11)->field_18_ro = r10;
        r8 = *([x8, #-8]);
        r8 = ((AutoStruct_swiftmainBareModifierMonitorSessionkeytriggeremitLine_100001c24 *)r8)->field_50_rw;
        r9 = *([x9, #-8]);
        r9 = ((AutoStruct_swiftmainBareModifierMonitorSessionkeytriggeremitLine_100001c24 *)r9)->field_50_rw;
        r9 = r9 & 0x20000;
        /* 0x100001660: cset w9, eq */
        *([sp, #0x24]) = r9;
        if ((r8 & (1 << 0x11)) != 0) { goto loc_1000016e8; }
        // [Block 0x10000166c | PostDom: 0x100001670]
        goto loc_100001670;
        // [Block 0x100001670 | PostDom: 0x1000016d0]
        r2 = ((AutoStruct__main_10000f830 *)sp)->field_38_rw;
        r1 = *([x29, #-0x28]);
        r8 = *([x2, #-8]);
        r8 = ((AutoStruct__block_copy_helper2_10000d428 *)r8)->field_20_rw;
        r0 = &stack_buf_18; // [fp - 0x18]
        r0 = x8(&stack_buf_18, r1);
        r8 = *([sp, #0x24]);
        if ((r8 & (1 << 0)) == 0) { goto loc_1000016b0; }
        // [Block 0x100001690 | PostDom: 0x100001694]
        goto loc_100001694;
        // [Block 0x100001694 | PostDom: 0x1000016d0]
        r2 = *([x29, #-0x30]);
        r1 = *([x29, #-0x20]);
        r0 = *([x29, #-0x28]);
        r8 = *([x2, #-8]);
        r8 = ((AutoStruct__sypWOb_10000280c *)r8)->field_10_rw;
        r0 = x8(r0, r1);
        goto loc_1000016d0;
        // [Block 0x1000016b0 | PostDom: 0x1000016d0]
        r8 = *([x29, #-0x20]);
        r0 = *([x8]);
        ((AutoStruct__sSSSg_AAtWOh_10000cb38 *)sp)->field_18_ro = r0;
        r0 = flirt_dyld_stub_binder_trampoline_6db8(r0, r1);
        r9 = *([x29, #-0x28]);
        r8 = ((AutoStruct__sSSSg_AAtWOh_10000cb38 *)sp)->field_18_ro;
        *([x9]) = r8;
        goto loc_1000016d0;
        // [Block 0x1000016d0 | PostDom: 0x100001748]
        r1 = ((AutoStruct__main_10000f830 *)sp)->field_38_rw;
        r8 = *([x1, #-8]);
        r8 = ((AutoStruct____swift_memcpy9_8_1000077c4 *)r8)->field_08_rw;
        r0 = &stack_buf_18; // [fp - 0x18]
        r0 = x8(&stack_buf_18, r1);
        goto loc_100001748;
        // [Block 0x1000016e8 | PostDom: 0x10000173c]
        r8 = *([sp, #0x24]);
        r9 = *([x29, #-0x28]);
        r9 = *([x9]);
        ((AutoStruct__sypWOb_10000280c *)sp)->field_10_rw = r9;
        if ((r8 & (1 << 0)) == 0) { goto loc_10000171c; }
        // [Block 0x1000016fc | PostDom: 0x100001700]
        goto loc_100001700;
        // [Block 0x100001700 | PostDom: 0x10000173c]
        r2 = *([x29, #-0x30]);
        r1 = *([x29, #-0x20]);
        r0 = *([x29, #-0x28]);
        r8 = *([x2, #-8]);
        r8 = ((AutoStruct__sypWOb_10000280c *)r8)->field_10_rw;
        r0 = x8(r0, r1);
        goto loc_10000173c;
        // [Block 0x10000171c | PostDom: 0x10000173c]
        r8 = *([x29, #-0x20]);
        r0 = *([x8]);
        ((AutoStruct____swift_memcpy9_8_1000077c4 *)sp)->field_08_rw = r0;
        r0 = flirt_dyld_stub_binder_trampoline_6db8(r0, r1);
        r9 = *([x29, #-0x28]);
        r8 = ((AutoStruct____swift_memcpy9_8_1000077c4 *)sp)->field_08_rw;
        *([x9]) = r8;
        goto loc_10000173c;
        // [Block 0x10000173c | PostDom: 0x100001748]
        r0 = ((AutoStruct__sypWOb_10000280c *)sp)->field_10_rw;
        r0 = flirt_dyld_stub_binder_trampoline_6dac(r0, r1);
        goto loc_100001748;
    }
loc_100001748:
    return r0;
}

// ── ___swift_destroy_boxed_opaque_existential_0 @ 0x100001754 (3 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // ___swift_destroy_boxed_opaque_existential_0 ───
// Stack Frame: 0B | Basic Blocks: 3 | Natural Loops: 0 | Post-Dom Nodes: 3 | Callers: 11
int64_t ___swift_destroy_boxed_opaque_existential_0(int64_t arg0, int64_t arg1) {
    *([sp]) = r0;
    r8 = ((AutoStruct__sSSSg_AAtWOh_10000cb38 *)r0)->field_18_ro;
    ((AutoStruct____swift_memcpy9_8_1000077c4 *)sp)->field_08_rw = r8;
    r8 = *([x8, #-8]);
    r8 = ((AutoStruct_swiftmainBareModifierMonitorSessionkeytriggeremitLine_100001c24 *)r8)->field_50_rw;
    if ((r8 & (1 << 0x11)) != 0) { goto loc_10000179c; }
    // [Block 0x100001778 | PostDom: 0x10000177c]
    goto loc_10000177c;
    // [Block 0x10000177c | PostDom: exit]
    r1 = ((AutoStruct____swift_memcpy9_8_1000077c4 *)sp)->field_08_rw;
    r0 = *([sp]);
    r8 = *([x1, #-8]);
    r8 = ((AutoStruct____swift_memcpy9_8_1000077c4 *)r8)->field_08_rw;
    r0 = x8(r0, r1);
    return r0;
}

// ── flirt_pthread_mutex_scoped_lock_179c @ 0x10000179c (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // flirt_pthread_mutex_scoped_lock_179c ───
int64_t flirt_pthread_mutex_scoped_lock_179c(int64_t arg0, int64_t arg1) {
    r8 = *([sp]);
    r0 = *([x8]);
    r0 = flirt_dyld_stub_binder_trampoline_6dac(r0, r1);
    return r0;
}

// ── _$sypSgWOh @ 0x1000017b4 (4 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // _$sypSgWOh ───
// Stack Frame: 0B | Basic Blocks: 4 | Natural Loops: 0 | Post-Dom Nodes: 4 | Callers: 20
int64_t _$sypSgWOh(int64_t arg0, int64_t arg1) {
    ((AutoStruct____swift_memcpy9_8_1000077c4 *)sp)->field_08_rw = r0;
    r8 = ((AutoStruct__sSSSg_AAtWOh_10000cb38 *)r0)->field_18_ro;
    if (r8 != 0) {
        // [Block 0x1000017cc | PostDom: 0x1000017d0]
        goto loc_1000017d0;
        // [Block 0x1000017d0 | PostDom: 0x1000017dc]
        r0 = ((AutoStruct____swift_memcpy9_8_1000077c4 *)sp)->field_08_rw;
        r0 = ___swift_destroy_boxed_opaque_existential_0(r0, r1);
        goto loc_1000017dc;
    }
    // [Block 0x1000017dc | PostDom: exit]
    r0 = ((AutoStruct____swift_memcpy9_8_1000077c4 *)sp)->field_08_rw;
    return r0;
}

// ── swift::main::BareModifierMonitorSession::keyDown::_FD5FB8F3991F83E8040D3A5272A98557() @ 0x1000017ec (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // swift::main::BareModifierMonitorSession::keyDown::_FD5FB8F3991F83E8040D3A5272A98557() ───
int64_t swift::main::BareModifierMonitorSession::keyDown::_FD5FB8F3991F83E8040D3A5272A98557(int64_t arg0, int64_t arg1) {
    *([x8]) = 0;
    ((AutoStruct____swift_memcpy9_8_1000077c4 *)r8)->field_08_rw = 0;
    ((AutoStruct__sypWOb_10000280c *)r8)->field_10_rw = 0;
    ((AutoStruct__sSSSg_AAtWOh_10000cb38 *)r8)->field_18_ro = 0;
    return r0;
}

// ── swift::main::BareModifierMonitorSession::keyDown::_FD5FB8F3991F83E8040D3A5272A98557() @ 0x100001800 (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // swift::main::BareModifierMonitorSession::keyDown::_FD5FB8F3991F83E8040D3A5272A98557() ───
int64_t swift::main::BareModifierMonitorSession::keyDown::_FD5FB8F3991F83E8040D3A5272A98557(int64_t arg0, int64_t arg1) {
    uint8_t stack_buf_18[16]; // [sp + 0x18]
    ((AutoStruct____swift_memcpy9_8_1000077c4 *)sp)->field_08_rw = r8;
    r0 = r20 + 0x58;
    *([sp]) = r0;
    r1 = &stack_buf_18; // [sp + 0x18]
    ((AutoStruct__sypWOb_10000280c *)sp)->field_10_rw = r1;
    r8 = 0x20;
    r2 = r8;
    r3 = 0;
    r0 = flirt_dyld_stub_binder_trampoline_6cc8(r0, &stack_buf_18);
    r0 = *([sp]);
    r1 = ((AutoStruct____swift_memcpy9_8_1000077c4 *)sp)->field_08_rw;
    r0 = _$sypSgWOc(r0, &stack_buf_18);
    r0 = ((AutoStruct__sypWOb_10000280c *)sp)->field_10_rw;
    r0 = flirt_dyld_stub_binder_trampoline_6d1c(r0, &stack_buf_18);
    return r0;
}

// ── swift::main::BareModifierMonitorSession::keyDown::_FD5FB8F3991F83E8040D3A5272A98557() @ 0x100001850 (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // swift::main::BareModifierMonitorSession::keyDown::_FD5FB8F3991F83E8040D3A5272A98557() ───
int64_t swift::main::BareModifierMonitorSession::keyDown::_FD5FB8F3991F83E8040D3A5272A98557(int64_t arg0, int64_t arg1) {
    uint8_t stack_buf_18[16]; // [sp + 0x18]
    ((AutoStruct__sypWOb_10000280c *)sp)->field_10_rw = r0;
    r0 = r20 + 0x58;
    *([sp]) = r0;
    r1 = &stack_buf_18; // [sp + 0x18]
    ((AutoStruct____swift_memcpy9_8_1000077c4 *)sp)->field_08_rw = r1;
    r8 = 0x21;
    r2 = r8;
    r3 = 0;
    r0 = flirt_dyld_stub_binder_trampoline_6cc8(r0, &stack_buf_18);
    r1 = *([sp]);
    r0 = ((AutoStruct__sypWOb_10000280c *)sp)->field_10_rw;
    r0 = _$sypSgWOf(r0, &stack_buf_18);
    r0 = ((AutoStruct____swift_memcpy9_8_1000077c4 *)sp)->field_08_rw;
    r0 = flirt_dyld_stub_binder_trampoline_6d1c(r0, &stack_buf_18);
    r0 = ((AutoStruct__sypWOb_10000280c *)sp)->field_10_rw;
    r0 = _$sypSgWOh(r0, &stack_buf_18);
    return r0;
}

// ── swift::main::BareModifierMonitorSession::targetIsDown::_FD5FB8F3991F83E8040D3A5272A98557() @ 0x1000018ac (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // swift::main::BareModifierMonitorSession::targetIsDown::_FD5FB8F3991F83E8040D3A5272A98557() ───
int64_t swift::main::BareModifierMonitorSession::targetIsDown::_FD5FB8F3991F83E8040D3A5272A98557(int64_t arg0, int64_t arg1) {
    r8 = 0;
    r0 = r8 & 1;
    return r0;
}

// ── swift::main::BareModifierMonitorSession::targetIsDown::_FD5FB8F3991F83E8040D3A5272A98557() @ 0x1000018b8 (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // swift::main::BareModifierMonitorSession::targetIsDown::_FD5FB8F3991F83E8040D3A5272A98557() ───
int64_t swift::main::BareModifierMonitorSession::targetIsDown::_FD5FB8F3991F83E8040D3A5272A98557(int64_t arg0, int64_t arg1) {
    uint8_t stack_buf_18[16]; // [sp + 0x18]
    r0 = r20 + 0x78;
    r1 = &stack_buf_18; // [sp + 0x18]
    ((AutoStruct____swift_memcpy9_8_1000077c4 *)sp)->field_08_rw = r1;
    r8 = 0x20;
    r2 = r8;
    r3 = 0;
    r0 = flirt_dyld_stub_binder_trampoline_6cc8(r0, &stack_buf_18);
    r0 = ((AutoStruct____swift_memcpy9_8_1000077c4 *)sp)->field_08_rw;
    r8 = ((AutoStruct_swiftmainBareModifierMonitorSessionhandleTargetDown_FD5FB8F3991F83E8040D3A5272A98557_10000322c *)r20)->field_78_ro;
    *([sp, #0x14]) = r8;
    r0 = flirt_dyld_stub_binder_trampoline_6d1c(r0, &stack_buf_18);
    r8 = *([sp, #0x14]);
    r0 = r8 & 1;
    return r0;
}

// ── swift::main::BareModifierMonitorSession::targetIsDown::_FD5FB8F3991F83E8040D3A5272A98557() @ 0x100001904 (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // swift::main::BareModifierMonitorSession::targetIsDown::_FD5FB8F3991F83E8040D3A5272A98557() ───
int64_t swift::main::BareModifierMonitorSession::targetIsDown::_FD5FB8F3991F83E8040D3A5272A98557(int64_t arg0, int64_t arg1) {
    uint8_t stack_buf_18[16]; // [sp + 0x18]
    *([sp, #0xc]) = r0;
    r0 = r20 + 0x78;
    r1 = &stack_buf_18; // [sp + 0x18]
    ((AutoStruct__sypWOb_10000280c *)sp)->field_10_rw = r1;
    r8 = 0x21;
    r2 = r8;
    r3 = 0;
    r0 = flirt_dyld_stub_binder_trampoline_6cc8(r0, &stack_buf_18);
    r8 = *([sp, #0xc]);
    r0 = ((AutoStruct__sypWOb_10000280c *)sp)->field_10_rw;
    ((AutoStruct_swiftmainBareModifierMonitorSessionhandleTargetDown_FD5FB8F3991F83E8040D3A5272A98557_10000322c *)r20)->field_78_ro = r8;
    r0 = flirt_dyld_stub_binder_trampoline_6d1c(r0, &stack_buf_18);
    return r0;
}

// ── swift::main::BareModifierMonitorSession::committedIsDown::_FD5FB8F3991F83E8040D3A5272A98557() @ 0x10000194c (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // swift::main::BareModifierMonitorSession::committedIsDown::_FD5FB8F3991F83E8040D3A5272A98557() ───
int64_t swift::main::BareModifierMonitorSession::committedIsDown::_FD5FB8F3991F83E8040D3A5272A98557(int64_t arg0, int64_t arg1) {
    r8 = 0;
    r0 = r8 & 1;
    return r0;
}

// ── swift::main::BareModifierMonitorSession::committedIsDown::_FD5FB8F3991F83E8040D3A5272A98557() @ 0x100001958 (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // swift::main::BareModifierMonitorSession::committedIsDown::_FD5FB8F3991F83E8040D3A5272A98557() ───
int64_t swift::main::BareModifierMonitorSession::committedIsDown::_FD5FB8F3991F83E8040D3A5272A98557(int64_t arg0, int64_t arg1) {
    uint8_t stack_buf_18[16]; // [sp + 0x18]
    r0 = r20 + 0x79;
    r1 = &stack_buf_18; // [sp + 0x18]
    ((AutoStruct____swift_memcpy9_8_1000077c4 *)sp)->field_08_rw = r1;
    r8 = 0x20;
    r2 = r8;
    r3 = 0;
    r0 = flirt_dyld_stub_binder_trampoline_6cc8(r0, &stack_buf_18);
    r0 = ((AutoStruct____swift_memcpy9_8_1000077c4 *)sp)->field_08_rw;
    r8 = ((AutoStruct_swiftmainBareModifierMonitorSessionkeytriggeremitLine_100001c24 *)r20)->field_79_rw;
    *([sp, #0x14]) = r8;
    r0 = flirt_dyld_stub_binder_trampoline_6d1c(r0, &stack_buf_18);
    r8 = *([sp, #0x14]);
    r0 = r8 & 1;
    return r0;
}

// ── swift::main::BareModifierMonitorSession::committedIsDown::_FD5FB8F3991F83E8040D3A5272A98557() @ 0x1000019a4 (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // swift::main::BareModifierMonitorSession::committedIsDown::_FD5FB8F3991F83E8040D3A5272A98557() ───
int64_t swift::main::BareModifierMonitorSession::committedIsDown::_FD5FB8F3991F83E8040D3A5272A98557(int64_t arg0, int64_t arg1) {
    uint8_t stack_buf_18[16]; // [sp + 0x18]
    *([sp, #0xc]) = r0;
    r0 = r20 + 0x79;
    r1 = &stack_buf_18; // [sp + 0x18]
    ((AutoStruct__sypWOb_10000280c *)sp)->field_10_rw = r1;
    r8 = 0x21;
    r2 = r8;
    r3 = 0;
    r0 = flirt_dyld_stub_binder_trampoline_6cc8(r0, &stack_buf_18);
    r8 = *([sp, #0xc]);
    r0 = ((AutoStruct__sypWOb_10000280c *)sp)->field_10_rw;
    ((AutoStruct_swiftmainBareModifierMonitorSessionkeytriggeremitLine_100001c24 *)r20)->field_79_rw = r8;
    r0 = flirt_dyld_stub_binder_trampoline_6d1c(r0, &stack_buf_18);
    return r0;
}

// ── swift::main::BareModifierMonitorSession::canceledUntilRelease::_FD5FB8F3991F83E8040D3A5272A98557() @ 0x1000019ec (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // swift::main::BareModifierMonitorSession::canceledUntilRelease::_FD5FB8F3991F83E8040D3A5272A98557() ───
int64_t swift::main::BareModifierMonitorSession::canceledUntilRelease::_FD5FB8F3991F83E8040D3A5272A98557(int64_t arg0, int64_t arg1) {
    r8 = 0;
    r0 = r8 & 1;
    return r0;
}

// ── swift::main::BareModifierMonitorSession::canceledUntilRelease::_FD5FB8F3991F83E8040D3A5272A98557() @ 0x1000019f8 (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // swift::main::BareModifierMonitorSession::canceledUntilRelease::_FD5FB8F3991F83E8040D3A5272A98557() ───
int64_t swift::main::BareModifierMonitorSession::canceledUntilRelease::_FD5FB8F3991F83E8040D3A5272A98557(int64_t arg0, int64_t arg1) {
    uint8_t stack_buf_18[16]; // [sp + 0x18]
    r0 = r20 + 0x7a;
    r1 = &stack_buf_18; // [sp + 0x18]
    ((AutoStruct____swift_memcpy9_8_1000077c4 *)sp)->field_08_rw = r1;
    r8 = 0x20;
    r2 = r8;
    r3 = 0;
    r0 = flirt_dyld_stub_binder_trampoline_6cc8(r0, &stack_buf_18);
    r0 = ((AutoStruct____swift_memcpy9_8_1000077c4 *)sp)->field_08_rw;
    r8 = ((AutoStruct_swiftmainBareModifierMonitorSessionkeytriggeremitLine_100001c24 *)r20)->field_7a_rw;
    *([sp, #0x14]) = r8;
    r0 = flirt_dyld_stub_binder_trampoline_6d1c(r0, &stack_buf_18);
    r8 = *([sp, #0x14]);
    r0 = r8 & 1;
    return r0;
}

// ── swift::main::BareModifierMonitorSession::canceledUntilRelease::_FD5FB8F3991F83E8040D3A5272A98557() @ 0x100001a44 (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // swift::main::BareModifierMonitorSession::canceledUntilRelease::_FD5FB8F3991F83E8040D3A5272A98557() ───
int64_t swift::main::BareModifierMonitorSession::canceledUntilRelease::_FD5FB8F3991F83E8040D3A5272A98557(int64_t arg0, int64_t arg1) {
    uint8_t stack_buf_18[16]; // [sp + 0x18]
    *([sp, #0xc]) = r0;
    r0 = r20 + 0x7a;
    r1 = &stack_buf_18; // [sp + 0x18]
    ((AutoStruct__sypWOb_10000280c *)sp)->field_10_rw = r1;
    r8 = 0x21;
    r2 = r8;
    r3 = 0;
    r0 = flirt_dyld_stub_binder_trampoline_6cc8(r0, &stack_buf_18);
    r8 = *([sp, #0xc]);
    r0 = ((AutoStruct__sypWOb_10000280c *)sp)->field_10_rw;
    ((AutoStruct_swiftmainBareModifierMonitorSessionkeytriggeremitLine_100001c24 *)r20)->field_7a_rw = r8;
    r0 = flirt_dyld_stub_binder_trampoline_6d1c(r0, &stack_buf_18);
    return r0;
}

// ── swift::main::BareModifierMonitorSession::pressGeneration::_FD5FB8F3991F83E8040D3A5272A98557() @ 0x100001a8c (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // swift::main::BareModifierMonitorSession::pressGeneration::_FD5FB8F3991F83E8040D3A5272A98557() ───
int64_t swift::main::BareModifierMonitorSession::pressGeneration::_FD5FB8F3991F83E8040D3A5272A98557(int64_t arg0, int64_t arg1) {
    r0 = 0;
    return r0;
}

// ── swift::main::BareModifierMonitorSession::pressGeneration::_FD5FB8F3991F83E8040D3A5272A98557() @ 0x100001a94 (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // swift::main::BareModifierMonitorSession::pressGeneration::_FD5FB8F3991F83E8040D3A5272A98557() ───
int64_t swift::main::BareModifierMonitorSession::pressGeneration::_FD5FB8F3991F83E8040D3A5272A98557(int64_t arg0, int64_t arg1) {
    uint8_t stack_buf_18[16]; // [sp + 0x18]
    r0 = r20 + 0x80;
    r1 = &stack_buf_18; // [sp + 0x18]
    ((AutoStruct____swift_memcpy9_8_1000077c4 *)sp)->field_08_rw = r1;
    r8 = 0x20;
    r2 = r8;
    r3 = 0;
    r0 = flirt_dyld_stub_binder_trampoline_6cc8(r0, &stack_buf_18);
    r0 = ((AutoStruct____swift_memcpy9_8_1000077c4 *)sp)->field_08_rw;
    r8 = ((AutoStruct_swiftmainBareModifierMonitorSessionhandleTargetUp_FD5FB8F3991F83E8040D3A5272A98557_100002bd4 *)r20)->field_80_rw;
    ((AutoStruct__sypWOb_10000280c *)sp)->field_10_rw = r8;
    r0 = flirt_dyld_stub_binder_trampoline_6d1c(r0, &stack_buf_18);
    r0 = ((AutoStruct__sypWOb_10000280c *)sp)->field_10_rw;
    return r0;
}

// ── swift::main::BareModifierMonitorSession::pressGeneration::_FD5FB8F3991F83E8040D3A5272A98557() @ 0x100001adc (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // swift::main::BareModifierMonitorSession::pressGeneration::_FD5FB8F3991F83E8040D3A5272A98557() ───
int64_t swift::main::BareModifierMonitorSession::pressGeneration::_FD5FB8F3991F83E8040D3A5272A98557(int64_t arg0, int64_t arg1) {
    uint8_t stack_buf_18[16]; // [sp + 0x18]
    ((AutoStruct____swift_memcpy9_8_1000077c4 *)sp)->field_08_rw = r0;
    r0 = r20 + 0x80;
    r1 = &stack_buf_18; // [sp + 0x18]
    ((AutoStruct__sypWOb_10000280c *)sp)->field_10_rw = r1;
    r8 = 0x21;
    r2 = r8;
    r3 = 0;
    r0 = flirt_dyld_stub_binder_trampoline_6cc8(r0, &stack_buf_18);
    r8 = ((AutoStruct____swift_memcpy9_8_1000077c4 *)sp)->field_08_rw;
    r0 = ((AutoStruct__sypWOb_10000280c *)sp)->field_10_rw;
    ((AutoStruct_swiftmainBareModifierMonitorSessionhandleTargetUp_FD5FB8F3991F83E8040D3A5272A98557_100002bd4 *)r20)->field_80_rw = r8;
    r0 = flirt_dyld_stub_binder_trampoline_6d1c(r0, &stack_buf_18);
    return r0;
}

// ── swift::main::BareModifierMonitorSession::pressStartedAt::_FD5FB8F3991F83E8040D3A5272A98557() @ 0x100001b24 (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // swift::main::BareModifierMonitorSession::pressStartedAt::_FD5FB8F3991F83E8040D3A5272A98557() ───
int64_t swift::main::BareModifierMonitorSession::pressStartedAt::_FD5FB8F3991F83E8040D3A5272A98557(int64_t arg0, int64_t arg1) {
    /* 0x100001b24: movi v0.2d, #0000000000000000 */
    return r0;
}

// ── swift::main::BareModifierMonitorSession::pressStartedAt::_FD5FB8F3991F83E8040D3A5272A98557() @ 0x100001b2c (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // swift::main::BareModifierMonitorSession::pressStartedAt::_FD5FB8F3991F83E8040D3A5272A98557() ───
int64_t swift::main::BareModifierMonitorSession::pressStartedAt::_FD5FB8F3991F83E8040D3A5272A98557(int64_t arg0, int64_t arg1) {
    uint8_t stack_buf_18[16]; // [sp + 0x18]
    r0 = r20 + 0x88;
    r1 = &stack_buf_18; // [sp + 0x18]
    ((AutoStruct____swift_memcpy9_8_1000077c4 *)sp)->field_08_rw = r1;
    r8 = 0x20;
    r2 = r8;
    r3 = 0;
    r0 = flirt_dyld_stub_binder_trampoline_6cc8(r0, &stack_buf_18);
    r0 = ((AutoStruct____swift_memcpy9_8_1000077c4 *)sp)->field_08_rw;
    d0 = ((AutoStruct_swiftmainBareModifierMonitorSessionkeytriggeremitLine_100001c24 *)r20)->field_88_rw;
    ((AutoStruct__sypWOb_10000280c *)sp)->field_10_rw = d0;
    r0 = flirt_dyld_stub_binder_trampoline_6d1c(r0, &stack_buf_18);
    d0 = ((AutoStruct__sypWOb_10000280c *)sp)->field_10_rw;
    return r0;
}

// ── swift::main::BareModifierMonitorSession::pressStartedAt::_FD5FB8F3991F83E8040D3A5272A98557() @ 0x100001b74 (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // swift::main::BareModifierMonitorSession::pressStartedAt::_FD5FB8F3991F83E8040D3A5272A98557() ───
int64_t swift::main::BareModifierMonitorSession::pressStartedAt::_FD5FB8F3991F83E8040D3A5272A98557(int64_t arg0, int64_t arg1) {
    uint8_t stack_buf_18[16]; // [sp + 0x18]
    ((AutoStruct____swift_memcpy9_8_1000077c4 *)sp)->field_08_rw = d0;
    r0 = r20 + 0x88;
    r1 = &stack_buf_18; // [sp + 0x18]
    ((AutoStruct__sypWOb_10000280c *)sp)->field_10_rw = r1;
    r8 = 0x21;
    r2 = r8;
    r3 = 0;
    r0 = flirt_dyld_stub_binder_trampoline_6cc8(r0, &stack_buf_18);
    d0 = ((AutoStruct____swift_memcpy9_8_1000077c4 *)sp)->field_08_rw;
    r0 = ((AutoStruct__sypWOb_10000280c *)sp)->field_10_rw;
    ((AutoStruct_swiftmainBareModifierMonitorSessionkeytriggeremitLine_100001c24 *)r20)->field_88_rw = d0;
    r0 = flirt_dyld_stub_binder_trampoline_6d1c(r0, &stack_buf_18);
    return r0;
}

// ── swift::main::BareModifierMonitorSession::key::trigger::emitLine() @ 0x100001bbc (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // swift::main::BareModifierMonitorSession::key::trigger::emitLine() ───
int64_t swift::main::BareModifierMonitorSession::key::trigger::emitLine(int64_t arg0, int64_t arg1) {
    *([x29, #-0x18]) = r0;
    ((AutoStruct____swift_memcpy9_8_1000077c4 *)sp)->field_08_rw = r1;
    *([sp, #0x14]) = r2;
    ((AutoStruct__sSSSg_AAtWOh_10000cb38 *)sp)->field_18_ro = r3;
    ((AutoStruct__block_copy_helper2_10000d428 *)sp)->field_20_rw = r4;
    r0 = r20;
    r8 = 0x90;
    r1 = r8;
    r8 = 7;
    r2 = r8;
    r0 = flirt_dyld_stub_binder_trampoline_6cbc(r20, 0x90);
    r1 = ((AutoStruct____swift_memcpy9_8_1000077c4 *)sp)->field_08_rw;
    r2 = *([sp, #0x14]);
    r3 = ((AutoStruct__sSSSg_AAtWOh_10000cb38 *)sp)->field_18_ro;
    r4 = ((AutoStruct__block_copy_helper2_10000d428 *)sp)->field_20_rw;
    r20 = r0;
    r0 = *([x29, #-0x18]);
    r0 = _$s4main26BareModifierMonitorSessionC3key7trigger8emitLineACSgAA0bC3KeyV_AA0bC7TriggerOySSctcfc(r0, 0x90);
    return r0;
}

// ── swift::main::BareModifierMonitorSession::key::trigger::emitLine() @ 0x100001c24 (10 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // swift::main::BareModifierMonitorSession::key::trigger::emitLine() ───
// Stack Frame: 32B | Basic Blocks: 10 | Natural Loops: 0 | Post-Dom Nodes: 10 | Callers: 1
int64_t swift::main::BareModifierMonitorSession::key::trigger::emitLine(int64_t arg0, int64_t arg1) {
    uint8_t stack_buf_60[96]; // [fp - 0x60]
    uint8_t stack_buf_78[24]; // [fp - 0x78]
    uint8_t stack_buf_98[32]; // [fp - 0x98]
    uint8_t stack_buf_a0[8]; // [fp - 0xa0]
    uint8_t stack_buf_d0[48]; // [fp - 0xd0]
    uint8_t stack_buf_f0[32]; // [fp - 0xf0]
    uint8_t stack_buf_d8[32]; // [sp + 0xd8]
    uint8_t stack_buf_f8[24]; // [sp + 0xf8]
    uint8_t stack_buf_110[16]; // [sp + 0x110]
    r8 = r0;
    ((AutoStruct_swiftmainBareModifierMonitorSessionkeytriggeremitLine_100001c24 *)sp)->field_48_rw = r8;
    r0 = r1;
    ((AutoStruct_swiftmainBareModifierMonitorSessionkeytriggeremitLine_100001c24 *)sp)->field_50_rw = r0;
    *([sp, #0x5c]) = r2;
    ((AutoStruct_swiftmainBareModifierMonitorSessionkeytriggeremitLine_100001c24 *)sp)->field_60_rw = r3;
    ((AutoStruct_swiftmainBareModifierMonitorSessionkeytriggeremitLine_100001c24 *)sp)->field_68_rw = r4;
    ((AutoStruct_swiftmainReleaseModifierMonitormodifierskeyon_10000b6e8 *)sp)->field_98_rw = r20;
    *([x29, #-0x20]) = 0;
    *([x29, #-0x18]) = 0;
    /* 0x100001c5c: sturb wzr, [x29, #-0x28] */
    *([x29, #-0x38]) = 0;
    *([x29, #-0x30]) = 0;
    *([x29, #-0x40]) = 0;
    *([x29, #-0x20]) = r8;
    r1 = r0;
    *([x29, #-0x18]) = r1;
    /* 0x100001c78: sturb w2, [x29, #-0x28] */
    *([x29, #-0x38]) = r3;
    *([x29, #-0x30]) = r4;
    r8 = r20;
    *([x29, #-0x40]) = r8;
    r8 = 0;
    ((AutoStruct_swiftmainBareModifierMonitorSessionkeytriggeremitLine_100001c24 *)sp)->field_88_rw = r8;
    ((AutoStruct__main_10000f830 *)r20)->field_38_rw = 0;
    ((AutoStruct_swiftmainBareModifierMonitorSessionhandleFlagsChanged_FD5FB8F3991F83E8040D3A5272A98557eventKeyCodeflagsInt64NSEvent_1000022f8 *)r20)->field_40_rw = 0;
    ((AutoStruct_swiftmainBareModifierMonitorSessionkeytriggeremitLine_100001c24 *)r20)->field_48_rw = 0;
    ((AutoStruct_swiftmainBareModifierMonitorSessionkeytriggeremitLine_100001c24 *)r20)->field_50_rw = 0;
    ((AutoStruct_swiftmainBareModifierMonitorSessionkeytriggeremitLine_100001c24 *)r20)->field_58_rw = 0;
    ((AutoStruct_swiftmainBareModifierMonitorSessionkeytriggeremitLine_100001c24 *)r20)->field_60_rw = 0;
    ((AutoStruct_swiftmainBareModifierMonitorSessionkeytriggeremitLine_100001c24 *)r20)->field_68_rw = 0;
    ((AutoStruct_swiftmainBareModifierMonitorSessionkeytriggeremitLine_100001c24 *)r20)->field_70_rw = 0;
    ((AutoStruct_swiftmainBareModifierMonitorSessionhandleTargetDown_FD5FB8F3991F83E8040D3A5272A98557_10000322c *)r20)->field_78_ro = 0;
    ((AutoStruct_swiftmainBareModifierMonitorSessionkeytriggeremitLine_100001c24 *)r20)->field_79_rw = 0;
    ((AutoStruct_swiftmainBareModifierMonitorSessionkeytriggeremitLine_100001c24 *)r20)->field_7a_rw = 0;
    ((AutoStruct_swiftmainBareModifierMonitorSessionhandleTargetUp_FD5FB8F3991F83E8040D3A5272A98557_100002bd4 *)r20)->field_80_rw = 0;
    /* 0x100001cc4: movi v0.2d, #0000000000000000 */
    ((AutoStruct_swiftmainBareModifierMonitorSessionkeytriggeremitLine_100001c24 *)r20)->field_88_rw = d0;
    r0 = flirt_dyld_stub_binder_trampoline_6ce0(r1, r1);
    r0 = ((AutoStruct_swiftmainBareModifierMonitorSessionkeytriggeremitLine_100001c24 *)sp)->field_68_rw;
    r8 = ((AutoStruct_swiftmainBareModifierMonitorSessionkeytriggeremitLine_100001c24 *)sp)->field_48_rw;
    r1 = ((AutoStruct_swiftmainBareModifierMonitorSessionkeytriggeremitLine_100001c24 *)sp)->field_50_rw;
    r2 = *([sp, #0x5c]);
    ((AutoStruct__sypWOb_10000280c *)r20)->field_10_rw = r8;
    ((AutoStruct__sSSSg_AAtWOh_10000cb38 *)r20)->field_18_ro = r1;
    ((AutoStruct__block_copy_helper2_10000d428 *)r20)->field_20_rw = r2;
    r0 = flirt_dyld_stub_binder_trampoline_6db8(r0, r1);
    r3 = ((AutoStruct_swiftmainBareModifierMonitorSessionkeytriggeremitLine_100001c24 *)sp)->field_60_rw;
    r4 = ((AutoStruct_swiftmainBareModifierMonitorSessionkeytriggeremitLine_100001c24 *)sp)->field_68_rw;
    ((AutoStruct__block_copy_helper2_10000d428 *)r20)->field_28_rw = r3;
    ((AutoStruct_swiftmainBareModifierMonitorSessionemitLine_FD5FB8F3991F83E8040D3A5272A98557_100001368 *)r20)->field_30_ro = r4;
    r8 = &stack_buf_60; // [fp - 0x60]
    ((AutoStruct_swiftmainBareModifierMonitorSessionkeytriggeremitLine_100001c24 *)sp)->field_70_rw = r8;
    *([x29, #-0x60]) = 0;
    *([x29, #-0x58]) = 0;
    *([x29, #-0x50]) = 0;
    *([x29, #-0x48]) = 0;
    r0 = r20 + 0x38;
    ((AutoStruct_swiftmainBareModifierMonitorSessionhandleTargetDown_FD5FB8F3991F83E8040D3A5272A98557_10000322c *)sp)->field_78_ro = r0;
    r1 = &stack_buf_78; // [fp - 0x78]
    ((AutoStruct_swiftmainBareModifierMonitorSessionhandleTargetUp_FD5FB8F3991F83E8040D3A5272A98557_100002bd4 *)sp)->field_80_rw = r1;
    r8 = 0x21;
    r2 = r8;
    r3 = 0;
    r0 = flirt_dyld_stub_binder_trampoline_6cc8(r0, &stack_buf_78);
    r0 = ((AutoStruct_swiftmainBareModifierMonitorSessionkeytriggeremitLine_100001c24 *)sp)->field_70_rw;
    r1 = ((AutoStruct_swiftmainBareModifierMonitorSessionhandleTargetDown_FD5FB8F3991F83E8040D3A5272A98557_10000322c *)sp)->field_78_ro;
    r0 = _$sypSgWOd(r0, &stack_buf_78);
    r0 = ((AutoStruct_swiftmainBareModifierMonitorSessionhandleTargetUp_FD5FB8F3991F83E8040D3A5272A98557_100002bd4 *)sp)->field_80_rw;
    r0 = flirt_dyld_stub_binder_trampoline_6d1c(r0, &stack_buf_78);
    r0 = *([x8, #0x728]);
    r0 = flirt_dyld_stub_binder_trampoline_6ca4(r0, &stack_buf_78);
    r1 = r0;
    r0 = ((AutoStruct_swiftmainBareModifierMonitorSessionkeytriggeremitLine_100001c24 *)sp)->field_88_rw;
    ((AutoStruct_swiftmainReleaseModifierMonitormodifierskeyon_10000b6e8 *)sp)->field_b0_rw = r1;
    r0 = _$sSo11NSEventMaskVMa(r0, r0);
    r20 = r0;
    r8 = 1;
    r0 = r8;
    r1 = r20;
    r0 = flirt_dyld_stub_binder_trampoline_6ad0(1, r0);
    r8 = 0x1000;
    ((AutoStruct__block_copy_helper2_10000d428 *)r0)->field_20_rw = r8;
    r1 = r20;
    r0 = _$ss27_finalizeUninitializedArrayySayxGABnlF(r0, r0);
    ((AutoStruct_swiftmainReleaseModifierMonitormodifierskeyon_10000b6e8 *)sp)->field_90_rw = r0;
    r0 = _$sSo11NSEventMaskVABs10SetAlgebraSCWl(r0, r0);
    r2 = r0;
    r0 = ((AutoStruct_swiftmainReleaseModifierMonitormodifierskeyon_10000b6e8 *)sp)->field_90_rw;
    r8 = &stack_buf_a0; // [fp - 0xa0]
    r1 = r20;
    r0 = flirt_dyld_stub_binder_trampoline_69c8(r0, r0);
    r8 = *([x29, #-0xa0]);
    ((AutoStruct_swiftmainReleaseModifierMonitormodifierskeyon_10000b6e8 *)sp)->field_c0_rw = r8;
    r8 = 0x10001c718;
    r0 = r8 + 0x10;
    r8 = 0x18;
    r1 = r8;
    r8 = 7;
    r2 = r8;
    r0 = flirt_dyld_stub_binder_trampoline_6cbc(r0, 0x18);
    r8 = r0;
    r0 = ((AutoStruct_swiftmainReleaseModifierMonitormodifierskeyon_10000b6e8 *)sp)->field_98_rw;
    ((AutoStruct_swiftmainReleaseModifierMonitormodifierskeyon_10000b6e8 *)sp)->field_a8_rw = r8;
    r0 = flirt_dyld_stub_binder_trampoline_6db8(r0, 0x18);
    r0 = ((AutoStruct_swiftmainReleaseModifierMonitormodifierskeyon_10000b6e8 *)sp)->field_a8_rw;
    r1 = ((AutoStruct_swiftmainReleaseModifierMonitormodifierskeyon_10000b6e8 *)sp)->field_98_rw;
    ((AutoStruct_swiftmainReleaseModifierMonitormodifierskeyon_10000b6e8 *)sp)->field_a0_rw = r1;
    r0 = r0 + 0x10;
    r0 = flirt_dyld_stub_binder_trampoline_6de8(r0, 0x18);
    r0 = ((AutoStruct_swiftmainReleaseModifierMonitormodifierskeyon_10000b6e8 *)sp)->field_a0_rw;
    r0 = flirt_dyld_stub_binder_trampoline_6dac(r0, 0x18);
    r0 = ((AutoStruct_swiftmainReleaseModifierMonitormodifierskeyon_10000b6e8 *)sp)->field_a8_rw;
    r0 = flirt_dyld_stub_binder_trampoline_6db8(r0, 0x18);
    r8 = ((AutoStruct_swiftmainReleaseModifierMonitormodifierskeyon_10000b6e8 *)sp)->field_a8_rw;
    r0 = &stack_buf_d0; // [fp - 0xd0]
    r9 = _$s4main26BareModifierMonitorSessionC3key7trigger8emitLineACSgAA0bC3KeyV_AA0bC7TriggerOySSctcfcySo7NSEventCcfU_TA; // 0x1000022f0
    *([x29, #-0xb0]) = r9;
    *([x29, #-0xa8]) = r8;
    r8 = ((AutoStruct_swiftmainBareModifierMonitorSessionemitLine_FD5FB8F3991F83E8040D3A5272A98557_100001368 *)r8)->field_30_ro;
    *([x29, #-0xd0]) = r8;
    r8 = 0x42000000;
    *([x29, #-0xc8]) = r8;
    *([x29, #-0xc4]) = 0;
    r8 = _$sSo7NSEventCIegg_ABIeyBy_TR; // 0x100002740
    *([x29, #-0xc0]) = r8;
    r8 = _block_descriptor; // 0x10001c740
    *([x29, #-0xb8]) = r8;
    r0 = flirt_dyld_stub_binder_trampoline_6c50(&stack_buf_d0, 0x18);
    ((AutoStruct_swiftmainReleaseModifierMonitormodifierskeyon_10000b6e8 *)sp)->field_c8_rw = r0;
    r0 = *([x29, #-0xa8]);
    r0 = flirt_dyld_stub_binder_trampoline_6dac(r0, 0x18);
    r0 = ((AutoStruct_swiftmainReleaseModifierMonitormodifierskeyon_10000b6e8 *)sp)->field_a8_rw;
    r0 = flirt_dyld_stub_binder_trampoline_6dac(r0, 0x18);
    r0 = ((AutoStruct_swiftmainReleaseModifierMonitormodifierskeyon_10000b6e8 *)sp)->field_b0_rw;
    r1 = ((AutoStruct_swiftmainReleaseModifierMonitormodifierskeyon_10000b6e8 *)sp)->field_b8_rw;
    r2 = ((AutoStruct_swiftmainReleaseModifierMonitormodifierskeyon_10000b6e8 *)sp)->field_c0_rw;
    r3 = ((AutoStruct_swiftmainReleaseModifierMonitormodifierskeyon_10000b6e8 *)sp)->field_c8_rw;
    r0 = -[self addGlobalMonitorForEventsMatchingMask:handler:](r0, 0x18);
    r29 = r29;
    r0 = flirt_dyld_stub_binder_trampoline_6cb0(r0, 0x18);
    r8 = r0;
    r0 = ((AutoStruct_swiftmainReleaseModifierMonitormodifierskeyon_10000b6e8 *)sp)->field_c8_rw;
    ((AutoStruct_swiftmainReleaseModifierMonitormodifierskeyon_10000b6e8 *)sp)->field_d0_rw = r8;
    r0 = flirt_dyld_stub_binder_trampoline_6c5c(r0, 0x18);
    r0 = ((AutoStruct_swiftmainReleaseModifierMonitormodifierskeyon_10000b6e8 *)sp)->field_d0_rw;
    if (r0 == 0) { goto loc_100001ed4; }
    // [Block 0x100001e98 | PostDom: 0x100001e9c]
    goto loc_100001e9c;
    // [Block 0x100001e9c | PostDom: 0x100001ea8]
    r8 = ((AutoStruct_swiftmainReleaseModifierMonitormodifierskeyon_10000b6e8 *)sp)->field_d0_rw;
    ((AutoStruct_swiftmainBareModifierMonitorSessionhandleFlagsChanged_FD5FB8F3991F83E8040D3A5272A98557eventKeyCodeflagsInt64NSEvent_1000022f8 *)sp)->field_40_rw = r8;
    goto loc_100001ea8;
    // [Block 0x100001ea8 | PostDom: 0x100001ee8]
    r0 = ((AutoStruct_swiftmainBareModifierMonitorSessionhandleFlagsChanged_FD5FB8F3991F83E8040D3A5272A98557eventKeyCodeflagsInt64NSEvent_1000022f8 *)sp)->field_40_rw;
    ((AutoStruct_swiftmainBareModifierMonitorSessionemitLine_FD5FB8F3991F83E8040D3A5272A98557_100001368 *)sp)->field_30_ro = r0;
    r8 = &stack_buf_d8; // [sp + 0xd8]
    ((AutoStruct__main_10000f830 *)sp)->field_38_rw = r8;
    r0 = flirt_dyld_stub_binder_trampoline_69b0(r0, 0x18);
    r0 = ((AutoStruct_swiftmainBareModifierMonitorSessionemitLine_FD5FB8F3991F83E8040D3A5272A98557_100001368 *)sp)->field_30_ro;
    r0 = flirt_dyld_stub_binder_trampoline_6dc4(r0, 0x18);
    r0 = ((AutoStruct__main_10000f830 *)sp)->field_38_rw;
    r1 = &stack_buf_f0; // [fp - 0xf0]
    r0 = _$sypWOb(r0, &stack_buf_f0);
    goto loc_100001ee8;
    // [Block 0x100001ed4 | PostDom: 0x100001ee8]
    *([x29, #-0xf0]) = 0;
    *([x29, #-0xe8]) = 0;
    *([x29, #-0xe0]) = 0;
    *([x29, #-0xd8]) = 0;
    goto loc_100001ee8;
    // [Block 0x100001ee8 | PostDom: 0x100001fa4]
    r8 = *([x29, #-0xd8]);
    if (r8 != 0) { goto loc_100001f20; }
    // [Block 0x100001ef0 | PostDom: 0x100001ef4]
    goto loc_100001ef4;
    // [Block 0x100001ef4 | PostDom: 0x100001fa4]
    r0 = &stack_buf_f0; // [fp - 0xf0]
    r0 = _$sypSgWOh(&stack_buf_f0, &stack_buf_f0);
    r0 = ((AutoStruct_swiftmainReleaseModifierMonitormodifierskeyon_10000b6e8 *)sp)->field_98_rw;
    r0 = flirt_dyld_stub_binder_trampoline_6dac(r0, &stack_buf_f0);
    r0 = ((AutoStruct_swiftmainBareModifierMonitorSessionkeytriggeremitLine_100001c24 *)sp)->field_68_rw;
    r0 = flirt_dyld_stub_binder_trampoline_6dac(r0, &stack_buf_f0);
    r0 = ((AutoStruct_swiftmainBareModifierMonitorSessionkeytriggeremitLine_100001c24 *)sp)->field_50_rw;
    r0 = flirt_dyld_stub_binder_trampoline_6cd4(r0, &stack_buf_f0);
    r8 = 0;
    ((AutoStruct__block_copy_helper2_10000d428 *)sp)->field_28_rw = r8;
    goto loc_100001fa4;
    // [Block 0x100001f20 | PostDom: 0x100001fa4]
    r0 = &stack_buf_f0; // [fp - 0xf0]
    r1 = &stack_buf_98; // [fp - 0x98]
    ((AutoStruct__sSSSg_AAtWOh_10000cb38 *)sp)->field_18_ro = r1;
    r0 = _$sypWOb(&stack_buf_f0, &stack_buf_98);
    r0 = ((AutoStruct__sSSSg_AAtWOh_10000cb38 *)sp)->field_18_ro;
    r1 = &stack_buf_110; // [sp + 0x110]
    *([sp]) = r1;
    r0 = _$sypWOc(r0, &stack_buf_110);
    r8 = ((AutoStruct_swiftmainReleaseModifierMonitormodifierskeyon_10000b6e8 *)sp)->field_98_rw;
    r0 = r8 + 0x38;
    ((AutoStruct____swift_memcpy9_8_1000077c4 *)sp)->field_08_rw = r0;
    r1 = &stack_buf_f8; // [sp + 0xf8]
    ((AutoStruct__sypWOb_10000280c *)sp)->field_10_rw = r1;
    r8 = 0x21;
    r2 = r8;
    r3 = 0;
    r0 = flirt_dyld_stub_binder_trampoline_6cc8(r0, &stack_buf_f8);
    r0 = *([sp]);
    r1 = ((AutoStruct____swift_memcpy9_8_1000077c4 *)sp)->field_08_rw;
    r0 = _$sypSgWOd(r0, &stack_buf_f8);
    r0 = ((AutoStruct__sypWOb_10000280c *)sp)->field_10_rw;
    r0 = flirt_dyld_stub_binder_trampoline_6d1c(r0, &stack_buf_f8);
    r0 = ((AutoStruct__sSSSg_AAtWOh_10000cb38 *)sp)->field_18_ro;
    r0 = ___swift_destroy_boxed_opaque_existential_0(r0, &stack_buf_f8);
    r8 = ((AutoStruct_swiftmainReleaseModifierMonitormodifierskeyon_10000b6e8 *)sp)->field_98_rw;
    r0 = ((AutoStruct_swiftmainBareModifierMonitorSessionkeytriggeremitLine_100001c24 *)sp)->field_68_rw;
    ((AutoStruct__block_copy_helper2_10000d428 *)sp)->field_20_rw = r8;
    r0 = flirt_dyld_stub_binder_trampoline_6dac(r0, &stack_buf_f8);
    r0 = ((AutoStruct_swiftmainBareModifierMonitorSessionkeytriggeremitLine_100001c24 *)sp)->field_50_rw;
    r0 = flirt_dyld_stub_binder_trampoline_6cd4(r0, &stack_buf_f8);
    r8 = ((AutoStruct__block_copy_helper2_10000d428 *)sp)->field_20_rw;
    ((AutoStruct__block_copy_helper2_10000d428 *)sp)->field_28_rw = r8;
    goto loc_100001fa4;
    // [Block 0x100001fa4 | PostDom: exit]
    r0 = ((AutoStruct__block_copy_helper2_10000d428 *)sp)->field_28_rw;
    return r0;
}

// ── _$sypSgWOd @ 0x100001fb8 (11 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // _$sypSgWOd ───
// Stack Frame: 0B | Basic Blocks: 11 | Natural Loops: 0 | Post-Dom Nodes: 11 | Callers: 7
int64_t _$sypSgWOd(int64_t arg0, int64_t arg1) {
    *([sp]) = r0;
    ((AutoStruct____swift_memcpy9_8_1000077c4 *)sp)->field_08_rw = r1;
    r8 = ((AutoStruct__sSSSg_AAtWOh_10000cb38 *)r1)->field_18_ro;
    if (r8 == 0) { goto loc_100002030; }
    // [Block 0x100001fd4 | PostDom: 0x100001fd8]
    goto loc_100001fd8;
    // [Block 0x100001fd8 | PostDom: 0x100002078]
    r8 = *([sp]);
    r8 = ((AutoStruct__sSSSg_AAtWOh_10000cb38 *)r8)->field_18_ro;
    if (r8 == 0) { goto loc_10000200c; }
    // [Block 0x100001fe4 | PostDom: 0x100001fe8]
    goto loc_100001fe8;
    // [Block 0x100001fe8 | PostDom: 0x100002078]
    r0 = ((AutoStruct____swift_memcpy9_8_1000077c4 *)sp)->field_08_rw;
    r0 = ___swift_destroy_boxed_opaque_existential_0(r0, r1);
    r9 = *([sp]);
    r8 = ((AutoStruct____swift_memcpy9_8_1000077c4 *)sp)->field_08_rw;
    q0 = *([x9]);
    *([x8]) = q0;
    q0 = ((AutoStruct__sypWOb_10000280c *)r9)->field_10_rw;
    ((AutoStruct__sypWOb_10000280c *)r8)->field_10_rw = q0;
    goto loc_100002078;
    // [Block 0x10000200c | PostDom: 0x100002078]
    r0 = ((AutoStruct____swift_memcpy9_8_1000077c4 *)sp)->field_08_rw;
    r0 = ___swift_destroy_boxed_opaque_existential_0(r0, r1);
    r9 = *([sp]);
    r8 = ((AutoStruct____swift_memcpy9_8_1000077c4 *)sp)->field_08_rw;
    q0 = *([x9]);
    *([x8]) = q0;
    q0 = ((AutoStruct__sypWOb_10000280c *)r9)->field_10_rw;
    ((AutoStruct__sypWOb_10000280c *)r8)->field_10_rw = q0;
    goto loc_100002078;
    // [Block 0x100002030 | PostDom: 0x100002078]
    r8 = *([sp]);
    r8 = ((AutoStruct__sSSSg_AAtWOh_10000cb38 *)r8)->field_18_ro;
    if (r8 == 0) { goto loc_10000205c; }
    // [Block 0x10000203c | PostDom: 0x100002040]
    goto loc_100002040;
    // [Block 0x100002040 | PostDom: 0x100002078]
    r8 = ((AutoStruct____swift_memcpy9_8_1000077c4 *)sp)->field_08_rw;
    r9 = *([sp]);
    q0 = *([x9]);
    *([x8]) = q0;
    q0 = ((AutoStruct__sypWOb_10000280c *)r9)->field_10_rw;
    ((AutoStruct__sypWOb_10000280c *)r8)->field_10_rw = q0;
    goto loc_100002078;
    // [Block 0x10000205c | PostDom: 0x100002078]
    r8 = ((AutoStruct____swift_memcpy9_8_1000077c4 *)sp)->field_08_rw;
    r9 = *([sp]);
    q0 = *([x9]);
    *([x8]) = q0;
    q0 = ((AutoStruct__sypWOb_10000280c *)r9)->field_10_rw;
    ((AutoStruct__sypWOb_10000280c *)r8)->field_10_rw = q0;
    goto loc_100002078;
loc_100002078:
    r0 = ((AutoStruct____swift_memcpy9_8_1000077c4 *)sp)->field_08_rw;
    return r0;
}

// ── swift::NSEventMask() @ 0x100002088 (6 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // swift::NSEventMask() ───
// Stack Frame: 0B | Basic Blocks: 6 | Natural Loops: 0 | Post-Dom Nodes: 6 | Callers: 9
int64_t swift::NSEventMask(int64_t arg0, int64_t arg1) {
    ((AutoStruct____swift_memcpy9_8_1000077c4 *)sp)->field_08_rw = r0;
    r8 = _$sSo11NSEventMaskVML; // [0x100020890]
    r9 = 0;
    r0 = r8;
    ((AutoStruct__sypWOb_10000280c *)sp)->field_10_rw = r0;
    *([x29, #-8]) = r9;
    if (r8 == 0) {
        // [Block 0x1000020b4 | PostDom: 0x1000020b8]
        goto loc_1000020b8;
        // [Block 0x1000020b8 | PostDom: 0x100002108]
        r0 = ((AutoStruct____swift_memcpy9_8_1000077c4 *)sp)->field_08_rw;
        r8 = _$sSo11NSEventMaskVMf; // 0x10001c880
        r1 = r8 + 0x10;
        r0 = flirt_dyld_stub_binder_trampoline_6d4c(_$sSo11NSEventMaskVML, r1);
        *([sp]) = r0;
        ((AutoStruct__sypWOb_10000280c *)sp)->field_10_rw = r0;
        r8 = r1;
        *([x29, #-8]) = r8;
        if (r1 == 0) {
            // [Block 0x1000020e0 | PostDom: 0x1000020e4]
            goto loc_1000020e4;
            // [Block 0x1000020e4 | PostDom: 0x100002108]
            r9 = *([sp]);
            r10 = _$sSo11NSEventMaskVML; // 0x100020890
            r8 = r9;
            /* 0x1000020f4: stlr x8, [x10] */
            r8 = 0;
            ((AutoStruct__sypWOb_10000280c *)sp)->field_10_rw = r9;
            *([x29, #-8]) = r8;
            goto loc_100002108;
        }
    }
loc_100002108:
    r0 = ((AutoStruct__sypWOb_10000280c *)sp)->field_10_rw;
    r1 = *([x29, #-8]);
    return r0;
}

// ── swift::_finalizeUninitializedArray() @ 0x10000211c (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // swift::_finalizeUninitializedArray() ───
int64_t swift::_finalizeUninitializedArray(int64_t arg0, int64_t arg1) {
    r8 = r1;
    ((AutoStruct____swift_memcpy9_8_1000077c4 *)sp)->field_08_rw = r8;
    r20 = sp;
    *([sp]) = r0;
    r0 = 0;
    r0 = flirt_dyld_stub_binder_trampoline_68a8(0, r1);
    r0 = _$sSa12_endMutationyyF(r0, r1);
    r0 = *([sp]);
    return r0;
}

// ── swift::NSEventMask::SetAlgebra() @ 0x10000215c (4 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // swift::NSEventMask::SetAlgebra() ───
// Stack Frame: 0B | Basic Blocks: 4 | Natural Loops: 0 | Post-Dom Nodes: 4 | Callers: 8
int64_t swift::NSEventMask::SetAlgebra(int64_t arg0, int64_t arg1) {
    r8 = _$sSo11NSEventMaskVABs10SetAlgebraSCWL; // [0x100020778]
    r0 = r8;
    ((AutoStruct____swift_memcpy9_8_1000077c4 *)sp)->field_08_rw = r0;
    if (r8 == 0) {
        // [Block 0x10000217c | PostDom: 0x100002180]
        goto loc_100002180;
        // [Block 0x100002180 | PostDom: 0x1000021b8]
        r8 = 0xff;
        r0 = r8;
        r0 = _$sSo11NSEventMaskVMa(0xff, r1);
        r2 = *([sp]);
        r1 = r0;
        r0 = _$sSo11NSEventMaskVs10SetAlgebraSCMc; // 0x1000172a0
        r0 = flirt_dyld_stub_binder_trampoline_6d94(_$sSo11NSEventMaskVs10SetAlgebraSCMc, r0);
        r9 = _$sSo11NSEventMaskVABs10SetAlgebraSCWL; // 0x100020778
        r8 = r0;
        /* 0x1000021ac: stlr x8, [x9] */
        ((AutoStruct____swift_memcpy9_8_1000077c4 *)sp)->field_08_rw = r0;
        goto loc_1000021b8;
    }
    // [Block 0x1000021b8 | PostDom: exit]
    r0 = ((AutoStruct____swift_memcpy9_8_1000077c4 *)sp)->field_08_rw;
    return r0;
}

// ── flirt_pthread_mutex_scoped_lock_21c8 @ 0x1000021c8 (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // flirt_pthread_mutex_scoped_lock_21c8 ───
int64_t flirt_pthread_mutex_scoped_lock_21c8(int64_t arg0, int64_t arg1) {
    ((AutoStruct____swift_memcpy9_8_1000077c4 *)sp)->field_08_rw = r20;
    r0 = r20 + 0x10;
    r0 = flirt_dyld_stub_binder_trampoline_6ddc(r0, r1);
    r0 = ((AutoStruct____swift_memcpy9_8_1000077c4 *)sp)->field_08_rw;
    r8 = 0x18;
    r1 = r8;
    r8 = 7;
    r2 = r8;
    r0 = flirt_dyld_stub_binder_trampoline_6cf8(r0, 0x18);
    return r0;
}

// ── swift::main::BareModifierMonitorSession::key::trigger::emitLine() @ 0x100002204 (5 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // swift::main::BareModifierMonitorSession::key::trigger::emitLine() ───
// Stack Frame: 0B | Basic Blocks: 5 | Natural Loops: 0 | Post-Dom Nodes: 5 | Callers: 1
int64_t swift::main::BareModifierMonitorSession::key::trigger::emitLine(int64_t arg0, int64_t arg1) {
    uint8_t stack_buf_30[8]; // [sp + 0x30]
    uint8_t stack_buf_38[16]; // [sp + 0x38]
    ((AutoStruct__block_copy_helper2_10000d428 *)sp)->field_20_rw = r0;
    *([x29, #-0x18]) = 0;
    *([x29, #-0x20]) = 0;
    *([x29, #-0x18]) = r0;
    r0 = r1 + 0x10;
    ((AutoStruct__block_copy_helper2_10000d428 *)sp)->field_28_rw = r0;
    r8 = r0;
    *([x29, #-0x20]) = r8;
    r1 = &stack_buf_38; // [sp + 0x38]
    r8 = 0x20;
    r2 = r8;
    r3 = 0;
    r0 = flirt_dyld_stub_binder_trampoline_6cc8(r0, &stack_buf_38);
    r0 = ((AutoStruct__block_copy_helper2_10000d428 *)sp)->field_28_rw;
    r0 = flirt_dyld_stub_binder_trampoline_6df4(r0, &stack_buf_38);
    ((AutoStruct_swiftmainBareModifierMonitorSessionemitLine_FD5FB8F3991F83E8040D3A5272A98557_100001368 *)sp)->field_30_ro = r0;
    r8 = ((AutoStruct_swiftmainBareModifierMonitorSessionemitLine_FD5FB8F3991F83E8040D3A5272A98557_100001368 *)sp)->field_30_ro;
    if (r8 != 0) { goto loc_100002274; }
    // [Block 0x10000225c | PostDom: 0x100002260]
    goto loc_100002260;
    // [Block 0x100002260 | PostDom: 0x1000022e0]
    r0 = &stack_buf_30; // [sp + 0x30]
    r0 = _$s4main26BareModifierMonitorSessionCSgWOh(&stack_buf_30, &stack_buf_38);
    r0 = &stack_buf_38; // [sp + 0x38]
    r0 = flirt_dyld_stub_binder_trampoline_6d1c(&stack_buf_38, &stack_buf_38);
    goto loc_1000022e0;
    // [Block 0x100002274 | PostDom: 0x1000022e0]
    r8 = &stack_buf_30; // [sp + 0x30]
    *([sp]) = r8;
    r20 = ((AutoStruct_swiftmainBareModifierMonitorSessionemitLine_FD5FB8F3991F83E8040D3A5272A98557_100001368 *)sp)->field_30_ro;
    ((AutoStruct__sSSSg_AAtWOh_10000cb38 *)sp)->field_18_ro = r20;
    r0 = r20;
    r0 = flirt_dyld_stub_binder_trampoline_6db8(r20, &stack_buf_38);
    r0 = *([sp]);
    r0 = _$s4main26BareModifierMonitorSessionCSgWOh(r0, &stack_buf_38);
    r0 = &stack_buf_38; // [sp + 0x38]
    r0 = flirt_dyld_stub_binder_trampoline_6d1c(&stack_buf_38, &stack_buf_38);
    r0 = ((AutoStruct__block_copy_helper2_10000d428 *)sp)->field_20_rw;
    r1 = ((AutoStruct____swift_memcpy9_8_1000077c4 *)sp)->field_08_rw;
    r0 = -[self keyCode](r0, &stack_buf_38);
    r1 = ((AutoStruct____swift_memcpy9_8_1000077c4 *)sp)->field_08_rw;
    r9 = r0;
    r0 = ((AutoStruct__block_copy_helper2_10000d428 *)sp)->field_20_rw;
    r8 = r9;
    r8 = r8 & 0xffff;
    ((AutoStruct__sypWOb_10000280c *)sp)->field_10_rw = r8;
    r0 = -[self modifierFlags](r0, &stack_buf_38);
    r1 = r0;
    r0 = ((AutoStruct__sypWOb_10000280c *)sp)->field_10_rw;
    r0 = _$s4main26BareModifierMonitorSessionC06handleB12FlagsChanged33_FD5FB8F3991F83E8040D3A5272A98557LL12eventKeyCode5flagsys5Int64V_So07NSEventcG0VtF(r0, r0);
    r0 = ((AutoStruct__sSSSg_AAtWOh_10000cb38 *)sp)->field_18_ro;
    r0 = flirt_dyld_stub_binder_trampoline_6dac(r0, r0);
    goto loc_1000022e0;
    // [Block 0x1000022e0 | PostDom: exit]
    return r0;
}

// ── swift::main::BareModifierMonitorSession::key::trigger::emitLine() @ 0x1000022f0 (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // swift::main::BareModifierMonitorSession::key::trigger::emitLine() ───
int64_t swift::main::BareModifierMonitorSession::key::trigger::emitLine(int64_t arg0, int64_t arg1) {
    r1 = r20;
    goto loc_100002204;
}


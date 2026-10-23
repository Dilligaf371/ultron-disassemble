/* ============================================================================
* ULTRON DISASSEMBLE v3.0 — OPTIMIZING SSA & AI DECOMPILED SOURCE
* Target : samples/monday_board_5106608109
* Format : Mach-O 64-bit (arm64)
* ============================================================================ */

#include <stdint.h>
#include <stdbool.h>

// ── _dispatch_monday_workos_opcode @ 0x100000588 (4 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // _dispatch_monday_workos_opcode ───
// Stack Frame: 0B | Basic Blocks: 4 | Natural Loops: 1 | Post-Dom Nodes: 4 | Callers: 1
int64_t _dispatch_monday_workos_opcode(int64_t arg0, int64_t arg1) {
    uint8_t stack_buf_8[16]; // [sp + 0x8]
    r19 = r1;
    r20 = r0;
    r0 = &stack_buf_8; // [sp + 0x8]
    r2 = 0xb871;
    r2 = 0x23bb871; // movk lsl #16
    r0 = __ZN21BoardGraphQLTransportC1Eyy(&stack_buf_8, r1);
    r0 = &stack_buf_8; // [sp + 0x8]
    r1 = r20;
    r0 = __ZNK21BoardGraphQLTransport20resolveEndpointRouteEi(&stack_buf_8, r0);
    r8 = r0;
    r9 = r20 + r20;
    /* 0x1000005c4: sxtw x9, w9 */
    r0 = r19 ^ r9;
    r9 = *([x8], #1);
    if (r9 != 0) {
        // [Block 0x1000005d4 | PostDom: 0x1000005dc]
        r10 = 0x1b3;
        r10 = 0x100000001b3; // movk lsl #32
        // [NATURAL LOOP HEADER @ 0x1000005dc (Nesting #1)]
        do {
            /* 0x1000005dc: mul x11, x0, x10 */
            r9 = r9;
            r0 = r11 ^ r9;
            r9 = *([x8], #1);
        } while (r9 != 0); // back-edge -> 0x1000005dc
    }
    // [Block 0x1000005f0 | PostDom: exit]
    return r0;
}

// ── __ZN21BoardGraphQLTransportC1Eyy @ 0x100000600 (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // __ZN21BoardGraphQLTransportC1Eyy ───
int64_t __ZN21BoardGraphQLTransportC1Eyy(int64_t arg0, int64_t arg1) {
    goto loc_1000008d0;
}

// ── __ZNK21BoardGraphQLTransport20resolveEndpointRouteEi @ 0x100000604 (2 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // __ZNK21BoardGraphQLTransport20resolveEndpointRouteEi ───
// Stack Frame: 0B | Basic Blocks: 2 | Natural Loops: 0 | Post-Dom Nodes: 2 | Callers: 1
int64_t __ZNK21BoardGraphQLTransport20resolveEndpointRouteEi(int64_t arg0, int64_t arg1) {
    if (r1 > 8) { goto loc_10000061c; }
    // [Block 0x10000060c | PostDom: exit]
    r8 = 0x1000042d8;
    r0 = *([x8, w1, uxtw #3]);
    return r0;
}

// ── neural_ZNK24VibeWorkflowOrchestrator19engineSubsystemNameEv @ 0x10000061c (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // neural_ZNK24VibeWorkflowOrchestrator19engineSubsystemNameEv ───
int64_t neural_ZNK24VibeWorkflowOrchestrator19engineSubsystemNameEv(int64_t arg0, int64_t arg1) {
    r0 = "/projects/5106608109/subscribers";
    return r0;
}

// ── __ZN21BoardGraphQLTransportD1Ev @ 0x100000628 (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // __ZN21BoardGraphQLTransportD1Ev ───
int64_t __ZN21BoardGraphQLTransportD1Ev(int64_t arg0, int64_t arg1) {
    return r0;
}

// ── __Z27instantiate_board_subsystemiyy @ 0x10000062c (11 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // __Z27instantiate_board_subsystemiyy ───
// Stack Frame: 48B | Basic Blocks: 11 | Natural Loops: 0 | Post-Dom Nodes: 11 | Callers: 1
int64_t __Z27instantiate_board_subsystemiyy(int64_t arg0, int64_t arg1) {
    r20 = r2;
    r21 = r1;
    r22 = r0;
    r0 = 0x28;
    r0 = flirt_dyld_stub_binder_trampoline_bb0(0x28, r1);
    r19 = r0;
    if (r22 > 1) { goto loc_10000067c; }
    // [Block 0x10000065c | PostDom: 0x1000006e8]
    if (r22 == 0) { goto loc_1000006bc; }
    // [Block 0x100000660 | PostDom: 0x1000006e8]
    // [SWITCH DISPATCH DETECTED @ 0x100000660: Multi-Way Cascade on r22 (3 cases)]
    switch (r22) { case 0x1: goto loc_1000006a8; case 0x2: goto loc_1000006d4; case 0x3: goto loc_1000006a8; }
    if (r22 != 1) { goto loc_1000006a8; }
    // [Block 0x100000668 | PostDom: 0x1000006e8]
    r0 = r19;
    r1 = r21;
    r2 = r20;
    r0 = __ZN21ColumnValueAggregatorC1Eyy(r0, r1);
    goto loc_1000006e8;
    // [Block 0x10000067c | PostDom: 0x1000006e8]
    if (r22 == 2) { goto loc_1000006d4; }
    // [Block 0x100000684 | PostDom: 0x1000006e8]
    if (r22 == 3) {
        // [Block 0x10000068c | PostDom: 0x1000006e8]
        r0 = r19;
        r1 = r21;
        r2 = r20;
        r3 = 2;
        r4 = 5;
        r0 = __ZN24VibeWorkflowOrchestratorC1Eyyjj(r0, r1);
    } else {
        // [Block 0x1000006a8 | PostDom: 0x1000006e8]
        r0 = r19;
        r1 = r21;
        r2 = r20;
        r0 = __ZN21BoardGraphQLTransportC1Eyy(r0, r1);
        goto loc_1000006e8;
        // [Block 0x1000006bc | PostDom: 0x1000006e8]
        r0 = r19;
        r1 = r21;
        r2 = r20;
        r3 = 3;
        r0 = __ZN14PulseItemStoreC1Eyyj(r0, r1);
        goto loc_1000006e8;
        // [Block 0x1000006d4 | PostDom: 0x1000006e8]
        r0 = r19;
        r1 = r21;
        r2 = r20;
        r3 = 0xf;
        r0 = __ZN23SidekickAgentDispatcherC1Eyyj(r0, r1);
    }
loc_1000006e8:
    r0 = r19;
    return r0;
}

// ── flirt_cxx_exception_landing_pad_6fc @ 0x1000006fc (5 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // flirt_cxx_exception_landing_pad_6fc ───
// Stack Frame: 0B | Basic Blocks: 5 | Natural Loops: 0 | Post-Dom Nodes: 5 | Callers: 0
int64_t flirt_cxx_exception_landing_pad_6fc(int64_t arg0, int64_t arg1) {
    goto loc_10000070c;
    // [Block 0x100000700 | PostDom: 0x10000070c]
    goto loc_10000070c;
    // [Block 0x100000704 | PostDom: 0x10000070c]
    goto loc_10000070c;
    // [Block 0x100000708 | PostDom: 0x10000070c]
    goto loc_10000070c;
loc_10000070c:
    r20 = r0;
    r0 = r19;
    r0 = flirt_dyld_stub_binder_trampoline_ba4(r19, r1);
    r0 = r20;
    r0 = flirt_dyld_stub_binder_trampoline_b98(r0, r1);
}

// ── __ZN14PulseItemStoreC1Eyyj @ 0x100000720 (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // __ZN14PulseItemStoreC1Eyyj ───
int64_t __ZN14PulseItemStoreC1Eyyj(int64_t arg0, int64_t arg1) {
    goto loc_1000009b4;
}

// ── __ZN21ColumnValueAggregatorC1Eyy @ 0x100000724 (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // __ZN21ColumnValueAggregatorC1Eyy ───
int64_t __ZN21ColumnValueAggregatorC1Eyy(int64_t arg0, int64_t arg1) {
    goto loc_100000a5c;
}

// ── __ZN23SidekickAgentDispatcherC1Eyyj @ 0x100000728 (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // __ZN23SidekickAgentDispatcherC1Eyyj ───
int64_t __ZN23SidekickAgentDispatcherC1Eyyj(int64_t arg0, int64_t arg1) {
    goto loc_100000a9c;
}

// ── __ZN24VibeWorkflowOrchestratorC1Eyyjj @ 0x10000072c (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // __ZN24VibeWorkflowOrchestratorC1Eyyjj ───
int64_t __ZN24VibeWorkflowOrchestratorC1Eyyjj(int64_t arg0, int64_t arg1) {
    goto loc_100000b18;
}

// ── _main @ 0x100000730 (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // _main ───
int64_t _main(int64_t arg0, int64_t arg1) {
    uint8_t stack_buf_48[16]; // [sp + 0x48]
    /* 0x100000734: stp x24, x23, [sp, #0x70] */
    r22 = r0;
    r8 = 0x6667;
    r8 = 0x66666667; // movk lsl #16
    /* 0x100000754: smull x8, w0, w8 */
    /* 0x100000758: lsr x9, x8, #0x20 */
    /* 0x10000075c: lsr x8, x8, #0x3f */
    r8 = r8 + r9;
    r8 = r8 + r8;
    r0 = r0 - r8;
    r20 = 0xa7ed;
    r20 = 0x3060a7ed; // movk lsl #16
    r20 = 0x13060a7ed; // movk lsl #32
    r1 = r20;
    r2 = 0xb871;
    r2 = 0x23bb871; // movk lsl #16
    r0 = __Z27instantiate_board_subsystemiyy(r0, 0x13060a7ed);
    r19 = r0;
    /* 0x10000078c: sxtw x1, w22 */
    r8 = *([x0]);
    r8 = ((AutoStruct__main_100000730 *)r8)->field_18_ro;
    r0 = x8(r0, 0x13060a7ed);
    r21 = r0;
    r8 = *([x19]);
    r8 = ((AutoStruct___ZN14PulseItemStoreC2Eyyj_1000009b4 *)r8)->field_20_rw;
    r23 = __ZL22kBoard5106608109Pulses; // 0x100004028
    r0 = r19;
    r1 = r23;
    r2 = 3;
    r0 = x8(r0, __ZL22kBoard5106608109Pulses);
    r24 = r0;
    r0 = &stack_buf_48; // [sp + 0x48]
    r1 = r20;
    r2 = 0xb871;
    r2 = 0x23bb871; // movk lsl #16
    r0 = __ZN21ColumnValueAggregatorC1Eyy(&stack_buf_48, 0x13060a7ed);
    r0 = &stack_buf_48; // [sp + 0x48]
    r1 = r23;
    r2 = 3;
    r0 = __ZN21ColumnValueAggregator20evaluateColumnMetricEPK15MondayPulseItemm(&stack_buf_48, __ZL22kBoard5106608109Pulses);
    r23 = r0;
    r8 = 0x8e39;
    r8 = 0x38e38e39; // movk lsl #16
    /* 0x1000007f4: smull x8, w22, w8 */
    /* 0x1000007f8: lsr x9, x8, #0x20 */
    /* 0x1000007fc: lsr x8, x8, #0x3f */
    r8 = r8 + r9;
    r8 = r8 + r8;
    r0 = r22 - r8;
    r1 = r20;
    r0 = _dispatch_monday_workos_opcode(r0, 0x13060a7ed);
    r22 = r0;
    r8 = *([x19]);
    r8 = ((AutoStruct___ZN17MondayBoardEngineC2Eyy_1000008fc *)r8)->field_10_rw;
    r0 = r19;
    r0 = x8(r0, 0x13060a7ed);
    r8 = 0xd70b;
    r8 = 0x70a3d70b; // movk lsl #16
    r8 = 0xa3d70a3d70b; // movk lsl #32
    r8 = 0xa3d70a3d70a3d70b; // movk lsl #48
    /* 0x100000838: smulh x8, x23, x8 */
    r8 = r8 + r23;
    /* 0x100000840: asr x9, x8, #6 */
    r8 = r9 + r8;
    r9 = 0x64;
    /* 0x10000084c: msub x9, x8, x9, x23 */
    r10 = ((AutoStruct__main_100000730 *)r19)->field_18_ro;
    r11 = "Tâche";
    /* 0x10000085c: stp x24, x11, [sp, #0x38] */
    /* 0x100000860: stp x21, x22, [sp, #0x28] */
    /* 0x100000864: stp x8, x9, [sp, #0x18] */
    /* 0x100000868: stp x20, x10, [sp, #8] */
    r8 = "[%s] board=%llu groups=(To-do,Termine) cols=%u budget=$%lld.%02lld digest=0x%llx route=0x%llx metric=%lld col0=%s\n";
    *([sp]) = r0;
    r0 = r8;
    r0 = flirt_dyld_stub_binder_trampoline_bbc("[%s] board=%llu groups=(To-do,Termine) cols=%u budget=$%lld.%02lld digest=0x%llx route=0x%llx metric=%lld col0=%s\n", 0x13060a7ed);
    r8 = *([x19]);
    r8 = ((UltronContext *)r8)->session_flags; // __mh_execute_header
    r0 = r19;
    r0 = x8(r0, 0x13060a7ed);
    r0 = 0;
    /* 0x1000008a0: ldp x24, x23, [sp, #0x70] */
    return r0;
}

// ── __ZN21ColumnValueAggregator20evaluateColumnMetricEPK15MondayPulseItemm @ 0x1000008ac (4 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // __ZN21ColumnValueAggregator20evaluateColumnMetricEPK15MondayPulseItemm ───
// Stack Frame: 0B | Basic Blocks: 4 | Natural Loops: 1 | Post-Dom Nodes: 4 | Callers: 1
int64_t __ZN21ColumnValueAggregator20evaluateColumnMetricEPK15MondayPulseItemm(int64_t arg0, int64_t arg1) {
    r0 = 0;
    if (r2 != 0) {
        // [Block 0x1000008b4 | PostDom: 0x1000008b8]
        r8 = r1 + 0x38;
        // [NATURAL LOOP HEADER @ 0x1000008b8 (Nesting #1)]
        do {
            r9 = *([x8], #0x48);
            r0 = r9 + r0;
            r2--;
        } while (r2 != 0); // back-edge -> 0x1000008b8
    }
    // [Block 0x1000008c8 | PostDom: exit]
    return r0;
}

// ── __ZN21ColumnValueAggregatorD1Ev @ 0x1000008cc (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // __ZN21ColumnValueAggregatorD1Ev ───
int64_t __ZN21ColumnValueAggregatorD1Ev(int64_t arg0, int64_t arg1) {
    return r0;
}

// ── __ZN21BoardGraphQLTransportC2Eyy @ 0x1000008d0 (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // __ZN21BoardGraphQLTransportC2Eyy ───
// Stack Frame: 16B | Basic Blocks: 1 | Natural Loops: 0 | Post-Dom Nodes: 1 | Callers: 1
int64_t __ZN21BoardGraphQLTransportC2Eyy(int64_t arg0, int64_t arg1) {
    r29 = sp;
    r0 = __ZN17MondayBoardEngineC2Eyy(r0, r1);
    r8 = __ZTV21BoardGraphQLTransport; // 0x100004100
    r8 = r8 + 0x10;
    *([x0]) = r8;
    r8 = 2;
    ((AutoStruct___ZN14PulseItemStoreC2Eyyj_1000009b4 *)r0)->field_20_rw = r8;
    return r0;
}

// ── __ZN17MondayBoardEngineC2Eyy @ 0x1000008fc (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // __ZN17MondayBoardEngineC2Eyy ───
int64_t __ZN17MondayBoardEngineC2Eyy(int64_t arg0, int64_t arg1) {
    r8 = __ZTV17MondayBoardEngine; // 0x100004160
    r8 = r8 + 0x10;
    /* 0x100000908: stp x8, x1, [x0] */
    r8 = 9;
    r8 = 0x200000009; // movk lsl #32
    /* 0x100000914: stp x2, x8, [x0, #0x10] */
    return r0;
}

// ── __ZN21BoardGraphQLTransportD0Ev @ 0x10000091c (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // __ZN21BoardGraphQLTransportD0Ev ───
int64_t __ZN21BoardGraphQLTransportD0Ev(int64_t arg0, int64_t arg1) {
    goto loc_100000ba4;
}

// ── __ZNK21BoardGraphQLTransport19engineSubsystemNameEv @ 0x100000920 (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // __ZNK21BoardGraphQLTransport19engineSubsystemNameEv ───
int64_t __ZNK21BoardGraphQLTransport19engineSubsystemNameEv(int64_t arg0, int64_t arg1) {
    r0 = "BoardGraphQLTransport::RouterBoardSubset";
    return r0;
}

// ── __ZN17MondayBoardEngine23computeBoardStateDigestEy @ 0x10000092c (4 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // __ZN17MondayBoardEngine23computeBoardStateDigestEy ───
// Stack Frame: 0B | Basic Blocks: 4 | Natural Loops: 1 | Post-Dom Nodes: 4 | Callers: 2
int64_t __ZN17MondayBoardEngine23computeBoardStateDigestEy(int64_t arg0, int64_t arg1) {
    r8 = r0;
    /* 0x100000930: ldp x9, x10, [x0, #8] */
    r9 = r9 ^ r1;
    r0 = r9 ^ r10;
    r8 = ((AutoStruct__main_100000730 *)r8)->field_18_ro;
    if (r8 != 0) {
        // [Block 0x100000944 | PostDom: 0x100000958]
        r9 = 0x7c15;
        r9 = 0x7f4a7c15; // movk lsl #16
        r9 = 0x79b97f4a7c15; // movk lsl #32
        r9 = 0x9e3779b97f4a7c15; // movk lsl #48
        r10 = r9;
        // [NATURAL LOOP HEADER @ 0x100000958 (Nesting #1)]
        do {
            r0 = r10 ^ r0;
            r10 = r10 + r9;
            r8--;
        } while (r8 != 0); // back-edge -> 0x100000958
    }
    // [Block 0x100000968 | PostDom: exit]
    return r0;
}

// ── __ZN17MondayBoardEngine20evaluateColumnMetricEPK15MondayPulseItemm @ 0x10000096c (4 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // __ZN17MondayBoardEngine20evaluateColumnMetricEPK15MondayPulseItemm ───
// Stack Frame: 0B | Basic Blocks: 4 | Natural Loops: 1 | Post-Dom Nodes: 4 | Callers: 0
int64_t __ZN17MondayBoardEngine20evaluateColumnMetricEPK15MondayPulseItemm(int64_t arg0, int64_t arg1) {
    r0 = 0;
    if (r2 != 0) {
        // [Block 0x100000974 | PostDom: 0x10000097c]
        r8 = r1 + 0x44;
        r9 = 0x64;
        // [NATURAL LOOP HEADER @ 0x10000097c (Nesting #1)]
        do {
            r10 = *([x8]);
            /* 0x100000980: mul w10, w10, w9 */
            r11 = *([x8, #-0xc]);
            r11 = r11 + r0;
            r0 = r11 + r10;
            r8 = r8 + 0x48;
            r2--;
        } while (r2 != 0); // back-edge -> 0x10000097c
    }
    // [Block 0x10000099c | PostDom: exit]
    return r0;
}

// ── __ZN17MondayBoardEngineD1Ev @ 0x1000009a0 (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // __ZN17MondayBoardEngineD1Ev ───
int64_t __ZN17MondayBoardEngineD1Ev(int64_t arg0, int64_t arg1) {
    return r0;
}

// ── __ZN17MondayBoardEngineD0Ev @ 0x1000009a4 (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // __ZN17MondayBoardEngineD0Ev ───
int64_t __ZN17MondayBoardEngineD0Ev(int64_t arg0, int64_t arg1) {
    goto loc_100000ba4;
}

// ── __ZNK17MondayBoardEngine19engineSubsystemNameEv @ 0x1000009a8 (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // __ZNK17MondayBoardEngine19engineSubsystemNameEv ───
int64_t __ZNK17MondayBoardEngine19engineSubsystemNameEv(int64_t arg0, int64_t arg1) {
    r0 = "MondayBoardEngine::WorkOSCore";
    return r0;
}

// ── __ZN14PulseItemStoreC2Eyyj @ 0x1000009b4 (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // __ZN14PulseItemStoreC2Eyyj ───
// Stack Frame: 32B | Basic Blocks: 1 | Natural Loops: 0 | Post-Dom Nodes: 1 | Callers: 1
int64_t __ZN14PulseItemStoreC2Eyyj(int64_t arg0, int64_t arg1) {
    r19 = r3;
    r0 = __ZN17MondayBoardEngineC2Eyy(r0, r1);
    r8 = __ZTV14PulseItemStore; // 0x100004198
    r8 = r8 + 0x10;
    *([x0]) = r8;
    /* 0x1000009d8: stp w19, wzr, [x0, #0x20] */
    return r0;
}

// ── __ZN14PulseItemStoreD1Ev @ 0x1000009e8 (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // __ZN14PulseItemStoreD1Ev ───
int64_t __ZN14PulseItemStoreD1Ev(int64_t arg0, int64_t arg1) {
    return r0;
}

// ── __ZN14PulseItemStoreD0Ev @ 0x1000009ec (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // __ZN14PulseItemStoreD0Ev ───
int64_t __ZN14PulseItemStoreD0Ev(int64_t arg0, int64_t arg1) {
    goto loc_100000ba4;
}

// ── __ZNK14PulseItemStore19engineSubsystemNameEv @ 0x1000009f0 (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // __ZNK14PulseItemStore19engineSubsystemNameEv ───
int64_t __ZNK14PulseItemStore19engineSubsystemNameEv(int64_t arg0, int64_t arg1) {
    r0 = "PulseItemStore::VulcanReduxSlice";
    return r0;
}

// ── __ZN14PulseItemStore23computeBoardStateDigestEy @ 0x1000009fc (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // __ZN14PulseItemStore23computeBoardStateDigestEy ───
// Stack Frame: 32B | Basic Blocks: 1 | Natural Loops: 0 | Post-Dom Nodes: 1 | Callers: 0
int64_t __ZN14PulseItemStore23computeBoardStateDigestEy(int64_t arg0, int64_t arg1) {
    r19 = r0;
    r0 = __ZN17MondayBoardEngine23computeBoardStateDigestEy(r0, r1);
    r8 = ((AutoStruct___ZN14PulseItemStoreC2Eyyj_1000009b4 *)r19)->field_20_rw;
    r9 = 0x8109;
    r9 = 0x6608109; // movk lsl #16
    r9 = 0x5106608109; // movk lsl #32
    /* 0x100000a20: mul x8, x8, x9 */
    r0 = r8 ^ r0;
    return r0;
}

// ── __ZN14PulseItemStore20evaluateColumnMetricEPK15MondayPulseItemm @ 0x100000a34 (4 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // __ZN14PulseItemStore20evaluateColumnMetricEPK15MondayPulseItemm ───
// Stack Frame: 0B | Basic Blocks: 4 | Natural Loops: 1 | Post-Dom Nodes: 4 | Callers: 0
int64_t __ZN14PulseItemStore20evaluateColumnMetricEPK15MondayPulseItemm(int64_t arg0, int64_t arg1) {
    r0 = 0;
    if (r2 != 0) {
        // [Block 0x100000a3c | PostDom: 0x100000a40]
        r8 = r1 + 0x38;
        // [NATURAL LOOP HEADER @ 0x100000a40 (Nesting #1)]
        do {
            /* 0x100000a40: ldurb w9, [x8, #-0x13] */
            r10 = *([x8], #0x48);
            /* 0x100000a48: madd x9, x10, x9, x10 */
            r0 = r9 + r0;
            r2--;
        } while (r2 != 0); // back-edge -> 0x100000a40
    }
    // [Block 0x100000a58 | PostDom: exit]
    return r0;
}

// ── __ZN21ColumnValueAggregatorC2Eyy @ 0x100000a5c (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // __ZN21ColumnValueAggregatorC2Eyy ───
// Stack Frame: 16B | Basic Blocks: 1 | Natural Loops: 0 | Post-Dom Nodes: 1 | Callers: 1
int64_t __ZN21ColumnValueAggregatorC2Eyy(int64_t arg0, int64_t arg1) {
    r29 = sp;
    r0 = __ZN17MondayBoardEngineC2Eyy(r0, r1);
    r8 = __ZTV21ColumnValueAggregator; // 0x1000041e8
    r8 = r8 + 0x10;
    *([x0]) = r8;
    r8 = 0x7100;
    r8 = 0x27100; // movk lsl #16
    ((AutoStruct___ZN14PulseItemStoreC2Eyyj_1000009b4 *)r0)->field_20_rw = r8;
    return r0;
}

// ── __ZN21ColumnValueAggregatorD0Ev @ 0x100000a8c (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // __ZN21ColumnValueAggregatorD0Ev ───
int64_t __ZN21ColumnValueAggregatorD0Ev(int64_t arg0, int64_t arg1) {
    goto loc_100000ba4;
}

// ── __ZNK21ColumnValueAggregator19engineSubsystemNameEv @ 0x100000a90 (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // __ZNK21ColumnValueAggregator19engineSubsystemNameEv ───
int64_t __ZNK21ColumnValueAggregator19engineSubsystemNameEv(int64_t arg0, int64_t arg1) {
    r0 = "ColumnValueAggregator::MfBoardColumns";
    return r0;
}

// ── __ZN23SidekickAgentDispatcherC2Eyyj @ 0x100000a9c (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // __ZN23SidekickAgentDispatcherC2Eyyj ───
// Stack Frame: 32B | Basic Blocks: 1 | Natural Loops: 0 | Post-Dom Nodes: 1 | Callers: 1
int64_t __ZN23SidekickAgentDispatcherC2Eyyj(int64_t arg0, int64_t arg1) {
    r19 = r3;
    r0 = __ZN17MondayBoardEngineC2Eyy(r0, r1);
    r8 = __ZTV23SidekickAgentDispatcher; // 0x100004238
    r8 = r8 + 0x10;
    *([x0]) = r8;
    ((AutoStruct___ZN14PulseItemStoreC2Eyyj_1000009b4 *)r0)->field_20_rw = r19;
    return r0;
}

// ── __ZN23SidekickAgentDispatcherD1Ev @ 0x100000ad0 (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // __ZN23SidekickAgentDispatcherD1Ev ───
int64_t __ZN23SidekickAgentDispatcherD1Ev(int64_t arg0, int64_t arg1) {
    return r0;
}

// ── __ZN23SidekickAgentDispatcherD0Ev @ 0x100000ad4 (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // __ZN23SidekickAgentDispatcherD0Ev ───
int64_t __ZN23SidekickAgentDispatcherD0Ev(int64_t arg0, int64_t arg1) {
    goto loc_100000ba4;
}

// ── __ZNK23SidekickAgentDispatcher19engineSubsystemNameEv @ 0x100000ad8 (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // __ZNK23SidekickAgentDispatcher19engineSubsystemNameEv ───
int64_t __ZNK23SidekickAgentDispatcher19engineSubsystemNameEv(int64_t arg0, int64_t arg1) {
    r0 = "SidekickAgentDispatcher::MfAiAgentsStore";
    return r0;
}

// ── __ZN23SidekickAgentDispatcher23computeBoardStateDigestEy @ 0x100000ae4 (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // __ZN23SidekickAgentDispatcher23computeBoardStateDigestEy ───
// Stack Frame: 32B | Basic Blocks: 1 | Natural Loops: 0 | Post-Dom Nodes: 1 | Callers: 0
int64_t __ZN23SidekickAgentDispatcher23computeBoardStateDigestEy(int64_t arg0, int64_t arg1) {
    r19 = r0;
    r0 = __ZN17MondayBoardEngine23computeBoardStateDigestEy(r0, r1);
    r8 = 0xe475;
    r8 = 0xa1a6e475; // movk lsl #16
    r8 = r0 ^ r8;
    r9 = ((AutoStruct___ZN14PulseItemStoreC2Eyyj_1000009b4 *)r19)->field_20_rw;
    r0 = r8 + r9;
    return r0;
}

// ── __ZN24VibeWorkflowOrchestratorC2Eyyjj @ 0x100000b18 (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // __ZN24VibeWorkflowOrchestratorC2Eyyjj ───
// Stack Frame: 32B | Basic Blocks: 1 | Natural Loops: 0 | Post-Dom Nodes: 1 | Callers: 1
int64_t __ZN24VibeWorkflowOrchestratorC2Eyyjj(int64_t arg0, int64_t arg1) {
    r19 = r4;
    r20 = r3;
    r0 = __ZN17MondayBoardEngineC2Eyy(r0, r1);
    r8 = __ZTV24VibeWorkflowOrchestrator; // 0x100004288
    r8 = r8 + 0x10;
    *([x0]) = r8;
    /* 0x100000b40: stp w20, w19, [x0, #0x20] */
    return r0;
}

// ── __ZN24VibeWorkflowOrchestratorD1Ev @ 0x100000b50 (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // __ZN24VibeWorkflowOrchestratorD1Ev ───
int64_t __ZN24VibeWorkflowOrchestratorD1Ev(int64_t arg0, int64_t arg1) {
    return r0;
}

// ── __ZN24VibeWorkflowOrchestratorD0Ev @ 0x100000b54 (1 basic blocks) ──
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // __ZN24VibeWorkflowOrchestratorD0Ev ───
int64_t __ZN24VibeWorkflowOrchestratorD0Ev(int64_t arg0, int64_t arg1) {
    goto loc_100000ba4;
}


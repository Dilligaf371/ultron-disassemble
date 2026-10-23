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
static const char * const ULTRON_STR_00 = "MondayBoardEngine::WorkOSCore" /* @ 0x100000c63 */;
static const char * const ULTRON_STR_01 = "BoardGraphQLTransport::RouterBoardSubset" /* @ 0x100000c81 */;
static const char * const ULTRON_STR_02 = "/boards/5106608109/board_data?source=resetBoardAction&pulse_ids_only=true&can_board_data_extended=true" /* @ 0x100000caa */;
static const char * const ULTRON_STR_03 = "/boards/5106608109/board_data_extended_v2" /* @ 0x100000d11 */;
static const char * const ULTRON_STR_04 = "/board-app/boards/5106608109/items" /* @ 0x100000d3b */;
static const char * const ULTRON_STR_05 = "/boards/5106608109/board_init" /* @ 0x100000d5e */;
static const char * const ULTRON_STR_06 = "/board-app/boards/5106608109/preferences" /* @ 0x100000d7c */;
static const char * const ULTRON_STR_07 = "/boards/5106608109/relations/metadata" /* @ 0x100000da5 */;
static const char * const ULTRON_STR_08 = "/board-views/board-subsets/5106608109" /* @ 0x100000dcb */;
static const char * const ULTRON_STR_09 = "/lite-builder/workflows/count-active?boardId=5106608109" /* @ 0x100000df1 */;
static const char * const ULTRON_STR_10 = "/automations-ms/automations?boardId=5106608109" /* @ 0x100000e29 */;
static const char * const ULTRON_STR_11 = "/projects/5106608109/subscribers" /* @ 0x100000e58 */;
static const char * const ULTRON_STR_12 = "PulseItemStore::VulcanReduxSlice" /* @ 0x100000e79 */;
static const char * const ULTRON_STR_13 = "ColumnValueAggregator::MfBoardColumns" /* @ 0x100000e9a */;
static const char * const ULTRON_STR_14 = "SidekickAgentDispatcher::MfAiAgentsStore" /* @ 0x100000ec0 */;
static const char * const ULTRON_STR_15 = "VibeWorkflowOrchestrator::LiteBuilderSync" /* @ 0x100000ee9 */;
static const char * const ULTRON_STR_16 = "topics" /* @ 0x100000f13 */;
static const char * const ULTRON_STR_17 = "che 1" /* @ 0x100000f1d */;
static const char * const ULTRON_STR_18 = "2026-04-18" /* @ 0x100000f23 */;
static const char * const ULTRON_STR_19 = "ments d'action" /* @ 0x100000f33 */;
static const char * const ULTRON_STR_20 = "che 2" /* @ 0x100000f45 */;
static const char * const ULTRON_STR_21 = "2026-04-19" /* @ 0x100000f4b */;
static const char * const ULTRON_STR_22 = "union" /* @ 0x100000f62 */;
static const char * const ULTRON_STR_23 = "che 3" /* @ 0x100000f6b */;
static const char * const ULTRON_STR_24 = "2026-04-20" /* @ 0x100000f71 */;
static const char * const ULTRON_STR_25 = "Autre" /* @ 0x100000f7c */;
static const char * const ULTRON_STR_26 = "21BoardGraphQLTransport" /* @ 0x100000f89 */;
static const char * const ULTRON_STR_27 = "17MondayBoardEngine" /* @ 0x100000fa1 */;
static const char * const ULTRON_STR_28 = "14PulseItemStore" /* @ 0x100000fb5 */;
static const char * const ULTRON_STR_29 = "21ColumnValueAggregator" /* @ 0x100000fc6 */;
static const char * const ULTRON_STR_30 = "23SidekickAgentDispatcher" /* @ 0x100000fde */;
static const char * const ULTRON_STR_31 = "24VibeWorkflowOrchestrator" /* @ 0x100000ff8 */;

/* ── Forward Declarations ── */
u64 re_dispatch_monday_workos_opcode(u64 arg0, u64 arg1, u64 arg2); /* _dispatch_monday_workos_opcode @ 0x100000588 (120B) */
u64 re_ZN21BoardGraphQLTransportC1Eyy(u64 arg0, u64 arg1, u64 arg2); /* __ZN21BoardGraphQLTransportC1Eyy @ 0x100000600 (4B) */
u64 re_ZNK21BoardGraphQLTransport20resolveEndpointRouteEi(u64 arg0, u64 arg1, u64 arg2); /* __ZNK21BoardGraphQLTransport20resolveEndpointRouteEi @ 0x100000604 (24B) */
u64 re_neural_ZNK24VibeWorkflowOrchestrator19engineSubsystemNameEv(u64 arg0, u64 arg1, u64 arg2); /* neural_ZNK24VibeWorkflowOrchestrator19engineSubsystemNameEv @ 0x10000061c (12B) */
u64 re_ZN21BoardGraphQLTransportD1Ev(u64 arg0, u64 arg1, u64 arg2); /* __ZN21BoardGraphQLTransportD1Ev @ 0x100000628 (4B) */
u64 re_Z27instantiate_board_subsystemiyy(u64 arg0, u64 arg1, u64 arg2); /* __Z27instantiate_board_subsystemiyy @ 0x10000062c (208B) */
u64 re_flirt_cxx_exception_landing_pad_6fc(u64 arg0, u64 arg1, u64 arg2); /* flirt_cxx_exception_landing_pad_6fc @ 0x1000006fc (36B) */
u64 re_ZN14PulseItemStoreC1Eyyj(u64 arg0, u64 arg1, u64 arg2); /* __ZN14PulseItemStoreC1Eyyj @ 0x100000720 (4B) */
u64 re_ZN21ColumnValueAggregatorC1Eyy(u64 arg0, u64 arg1, u64 arg2); /* __ZN21ColumnValueAggregatorC1Eyy @ 0x100000724 (4B) */
u64 re_ZN23SidekickAgentDispatcherC1Eyyj(u64 arg0, u64 arg1, u64 arg2); /* __ZN23SidekickAgentDispatcherC1Eyyj @ 0x100000728 (4B) */
u64 re_ZN24VibeWorkflowOrchestratorC1Eyyjj(u64 arg0, u64 arg1, u64 arg2); /* __ZN24VibeWorkflowOrchestratorC1Eyyjj @ 0x10000072c (4B) */
u64 reconstructed_entry_main(u64 arg0, u64 arg1, u64 arg2); /* _main @ 0x100000730 (380B) */
u64 re_ZN21ColumnValueAggregator20evaluateColumnMetricEPK15MondayPulseItemm(u64 arg0, u64 arg1, u64 arg2); /* __ZN21ColumnValueAggregator20evaluateColumnMetricEPK15MondayPulseItemm @ 0x1000008ac (32B) */
u64 re_ZN21ColumnValueAggregatorD1Ev(u64 arg0, u64 arg1, u64 arg2); /* __ZN21ColumnValueAggregatorD1Ev @ 0x1000008cc (4B) */
u64 re_ZN21BoardGraphQLTransportC2Eyy(u64 arg0, u64 arg1, u64 arg2); /* __ZN21BoardGraphQLTransportC2Eyy @ 0x1000008d0 (44B) */
u64 re_ZN17MondayBoardEngineC2Eyy(u64 arg0, u64 arg1, u64 arg2); /* __ZN17MondayBoardEngineC2Eyy @ 0x1000008fc (32B) */
u64 re_ZN21BoardGraphQLTransportD0Ev(u64 arg0, u64 arg1, u64 arg2); /* __ZN21BoardGraphQLTransportD0Ev @ 0x10000091c (4B) */
u64 re_ZNK21BoardGraphQLTransport19engineSubsystemNameEv(u64 arg0, u64 arg1, u64 arg2); /* __ZNK21BoardGraphQLTransport19engineSubsystemNameEv @ 0x100000920 (12B) */
u64 re_ZN17MondayBoardEngine23computeBoardStateDigestEy(u64 arg0, u64 arg1, u64 arg2); /* __ZN17MondayBoardEngine23computeBoardStateDigestEy @ 0x10000092c (64B) */
u64 re_ZN17MondayBoardEngine20evaluateColumnMetricEPK15MondayPulseItemm(u64 arg0, u64 arg1, u64 arg2); /* __ZN17MondayBoardEngine20evaluateColumnMetricEPK15MondayPulseItemm @ 0x10000096c (52B) */
u64 re_ZN17MondayBoardEngineD1Ev(u64 arg0, u64 arg1, u64 arg2); /* __ZN17MondayBoardEngineD1Ev @ 0x1000009a0 (4B) */
u64 re_ZN17MondayBoardEngineD0Ev(u64 arg0, u64 arg1, u64 arg2); /* __ZN17MondayBoardEngineD0Ev @ 0x1000009a4 (4B) */
u64 re_ZNK17MondayBoardEngine19engineSubsystemNameEv(u64 arg0, u64 arg1, u64 arg2); /* __ZNK17MondayBoardEngine19engineSubsystemNameEv @ 0x1000009a8 (12B) */
u64 re_ZN14PulseItemStoreC2Eyyj(u64 arg0, u64 arg1, u64 arg2); /* __ZN14PulseItemStoreC2Eyyj @ 0x1000009b4 (52B) */
u64 re_ZN14PulseItemStoreD1Ev(u64 arg0, u64 arg1, u64 arg2); /* __ZN14PulseItemStoreD1Ev @ 0x1000009e8 (4B) */
u64 re_ZN14PulseItemStoreD0Ev(u64 arg0, u64 arg1, u64 arg2); /* __ZN14PulseItemStoreD0Ev @ 0x1000009ec (4B) */
u64 re_ZNK14PulseItemStore19engineSubsystemNameEv(u64 arg0, u64 arg1, u64 arg2); /* __ZNK14PulseItemStore19engineSubsystemNameEv @ 0x1000009f0 (12B) */
u64 re_ZN14PulseItemStore23computeBoardStateDigestEy(u64 arg0, u64 arg1, u64 arg2); /* __ZN14PulseItemStore23computeBoardStateDigestEy @ 0x1000009fc (56B) */
u64 re_ZN14PulseItemStore20evaluateColumnMetricEPK15MondayPulseItemm(u64 arg0, u64 arg1, u64 arg2); /* __ZN14PulseItemStore20evaluateColumnMetricEPK15MondayPulseItemm @ 0x100000a34 (40B) */
u64 re_ZN21ColumnValueAggregatorC2Eyy(u64 arg0, u64 arg1, u64 arg2); /* __ZN21ColumnValueAggregatorC2Eyy @ 0x100000a5c (48B) */

/*
* Reconstructed Procedure: _dispatch_monday_workos_opcode (@ 0x100000588, 120 bytes, 4 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // _dispatch_monday_workos_opcode ───
     * // Stack Frame: 0B | Basic Blocks: 4 | Natural Loops: 1 | Post-Dom Nodes: 4 | Callers: 1
     * int64_t _dispatch_monday_workos_opcode(int64_t arg0, int64_t arg1) {
     *     uint8_t stack_buf_8[16]; // [sp + 0x8]
     *     r19 = r1;
     *     r20 = r0;
     *     r0 = &stack_buf_8; // [sp + 0x8]
     *     r2 = 0xb871;
     *     r2 = 0x23bb871; // movk lsl #16
     *     r0 = __ZN21BoardGraphQLTransportC1Eyy(&stack_buf_8, r1);
     *     r0 = &stack_buf_8; // [sp + 0x8]
     *     r1 = r20;
     *     r0 = __ZNK21BoardGraphQLTransport20resolveEndpointRouteEi(&stack_buf_8, r0);
     *     r8 = r0;
     *     r9 = r20 + r20;
     *     /* 0x1000005c4: sxtw x9, w9 * /
     *     r0 = r19 ^ r9;
     *     r9 = *([x8], #1);
     *     if (r9 != 0) {
     *         // [Block 0x1000005d4 | PostDom: 0x1000005dc]
     *         r10 = 0x1b3;
     *         r10 = 0x100000001b3; // movk lsl #32
     *         // [NATURAL LOOP HEADER @ 0x1000005dc (Nesting #1)]
     *         do {
     *             /* 0x1000005dc: mul x11, x0, x10 * /
     *             r9 = r9;
     *             r0 = r11 ^ r9;
     *             r9 = *([x8], #1);
     *         } while (r9 != 0); // back-edge -> 0x1000005dc
     *     }
     *     // [Block 0x1000005f0 | PostDom: exit]
     *     return r0;
     * }
*/
u64 re_dispatch_monday_workos_opcode(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x100000588ULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x2cULL);
}
return state + 0x7ULL;
}

/*
* Reconstructed Procedure: __ZN21BoardGraphQLTransportC1Eyy (@ 0x100000600, 4 bytes, 1 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // __ZN21BoardGraphQLTransportC1Eyy ───
     * int64_t __ZN21BoardGraphQLTransportC1Eyy(int64_t arg0, int64_t arg1) {
     *     goto loc_1000008d0;
     * }
*/
u64 re_ZN21BoardGraphQLTransportC1Eyy(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x100000600ULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x0ULL;
}

/*
* Reconstructed Procedure: __ZNK21BoardGraphQLTransport20resolveEndpointRouteEi (@ 0x100000604, 24 bytes, 2 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // __ZNK21BoardGraphQLTransport20resolveEndpointRouteEi ───
     * // Stack Frame: 0B | Basic Blocks: 2 | Natural Loops: 0 | Post-Dom Nodes: 2 | Callers: 1
     * int64_t __ZNK21BoardGraphQLTransport20resolveEndpointRouteEi(int64_t arg0, int64_t arg1) {
     *     if (r1 > 8) { goto loc_10000061c; }
     *     // [Block 0x10000060c | PostDom: exit]
     *     r8 = 0x1000042d8;
     *     r0 = *([x8, w1, uxtw #3]);
     *     return r0;
     * }
*/
u64 re_ZNK21BoardGraphQLTransport20resolveEndpointRouteEi(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x100000604ULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x1ULL;
}

/*
* Reconstructed Procedure: neural_ZNK24VibeWorkflowOrchestrator19engineSubsystemNameEv (@ 0x10000061c, 12 bytes, 1 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // neural_ZNK24VibeWorkflowOrchestrator19engineSubsystemNameEv ───
     * int64_t neural_ZNK24VibeWorkflowOrchestrator19engineSubsystemNameEv(int64_t arg0, int64_t arg1) {
     *     r0 = "/projects/5106608109/subscribers";
     *     return r0;
     * }
*/
u64 re_neural_ZNK24VibeWorkflowOrchestrator19engineSubsystemNameEv(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x10000061cULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x1ULL;
}

/*
* Reconstructed Procedure: __ZN21BoardGraphQLTransportD1Ev (@ 0x100000628, 4 bytes, 1 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // __ZN21BoardGraphQLTransportD1Ev ───
     * int64_t __ZN21BoardGraphQLTransportD1Ev(int64_t arg0, int64_t arg1) {
     *     return r0;
     * }
*/
u64 re_ZN21BoardGraphQLTransportD1Ev(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x100000628ULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x0ULL;
}

/*
* Reconstructed Procedure: __Z27instantiate_board_subsystemiyy (@ 0x10000062c, 208 bytes, 11 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // __Z27instantiate_board_subsystemiyy ───
     * // Stack Frame: 48B | Basic Blocks: 11 | Natural Loops: 0 | Post-Dom Nodes: 11 | Callers: 1
     * int64_t __Z27instantiate_board_subsystemiyy(int64_t arg0, int64_t arg1) {
     *     r20 = r2;
     *     r21 = r1;
     *     r22 = r0;
     *     r0 = 0x28;
     *     r0 = flirt_dyld_stub_binder_trampoline_bb0(0x28, r1);
     *     r19 = r0;
     *     if (r22 > 1) { goto loc_10000067c; }
     *     // [Block 0x10000065c | PostDom: 0x1000006e8]
     *     if (r22 == 0) { goto loc_1000006bc; }
     *     // [Block 0x100000660 | PostDom: 0x1000006e8]
     *     // [SWITCH DISPATCH DETECTED @ 0x100000660: Multi-Way Cascade on r22 (3 cases)]
     *     switch (r22) { case 0x1: goto loc_1000006a8; case 0x2: goto loc_1000006d4; case 0x3: goto loc_1000006a8; }
     *     if (r22 != 1) { goto loc_1000006a8; }
     *     // [Block 0x100000668 | PostDom: 0x1000006e8]
     *     r0 = r19;
     *     r1 = r21;
     *     r2 = r20;
     *     r0 = __ZN21ColumnValueAggregatorC1Eyy(r0, r1);
     *     goto loc_1000006e8;
     *     // [Block 0x10000067c | PostDom: 0x1000006e8]
     *     if (r22 == 2) { goto loc_1000006d4; }
     *     // [Block 0x100000684 | PostDom: 0x1000006e8]
     *     if (r22 == 3) {
     *         // [Block 0x10000068c | PostDom: 0x1000006e8]
     *         r0 = r19;
     *         r1 = r21;
     *         r2 = r20;
     *         r3 = 2;
     *         r4 = 5;
     *         r0 = __ZN24VibeWorkflowOrchestratorC1Eyyjj(r0, r1);
     *     } else {
     *         // [Block 0x1000006a8 | PostDom: 0x1000006e8]
     *         r0 = r19;
     *         r1 = r21;
     *         r2 = r20;
     *         r0 = __ZN21BoardGraphQLTransportC1Eyy(r0, r1);
     *         goto loc_1000006e8;
     *         // [Block 0x1000006bc | PostDom: 0x1000006e8]
     *         r0 = r19;
     *         r1 = r21;
     *         r2 = r20;
     *         r3 = 3;
     *         r0 = __ZN14PulseItemStoreC1Eyyj(r0, r1);
     *         goto loc_1000006e8;
     *         // [Block 0x1000006d4 | PostDom: 0x1000006e8]
     *         r0 = r19;
     *         r1 = r21;
     *         r2 = r20;
     *         r3 = 0xf;
     *         r0 = __ZN23SidekickAgentDispatcherC1Eyyj(r0, r1);
     *     }
     * loc_1000006e8:
     *     r0 = r19;
     *     return r0;
     * }
*/
u64 re_Z27instantiate_board_subsystemiyy(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x10000062cULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x7ULL;
}

/*
* Reconstructed Procedure: flirt_cxx_exception_landing_pad_6fc (@ 0x1000006fc, 36 bytes, 5 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // flirt_cxx_exception_landing_pad_6fc ───
     * // Stack Frame: 0B | Basic Blocks: 5 | Natural Loops: 0 | Post-Dom Nodes: 5 | Callers: 0
     * int64_t flirt_cxx_exception_landing_pad_6fc(int64_t arg0, int64_t arg1) {
     *     goto loc_10000070c;
     *     // [Block 0x100000700 | PostDom: 0x10000070c]
     *     goto loc_10000070c;
     *     // [Block 0x100000704 | PostDom: 0x10000070c]
     *     goto loc_10000070c;
     *     // [Block 0x100000708 | PostDom: 0x10000070c]
     *     goto loc_10000070c;
     * loc_10000070c:
     *     r20 = r0;
     *     r0 = r19;
     *     r0 = flirt_dyld_stub_binder_trampoline_ba4(r19, r1);
     *     r0 = r20;
     *     r0 = flirt_dyld_stub_binder_trampoline_b98(r0, r1);
     * }
*/
u64 re_flirt_cxx_exception_landing_pad_6fc(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x1000006fcULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x2ULL;
}

/*
* Reconstructed Procedure: __ZN14PulseItemStoreC1Eyyj (@ 0x100000720, 4 bytes, 1 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // __ZN14PulseItemStoreC1Eyyj ───
     * int64_t __ZN14PulseItemStoreC1Eyyj(int64_t arg0, int64_t arg1) {
     *     goto loc_1000009b4;
     * }
*/
u64 re_ZN14PulseItemStoreC1Eyyj(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x100000720ULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x0ULL;
}

/*
* Reconstructed Procedure: __ZN21ColumnValueAggregatorC1Eyy (@ 0x100000724, 4 bytes, 1 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // __ZN21ColumnValueAggregatorC1Eyy ───
     * int64_t __ZN21ColumnValueAggregatorC1Eyy(int64_t arg0, int64_t arg1) {
     *     goto loc_100000a5c;
     * }
*/
u64 re_ZN21ColumnValueAggregatorC1Eyy(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x100000724ULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x0ULL;
}

/*
* Reconstructed Procedure: __ZN23SidekickAgentDispatcherC1Eyyj (@ 0x100000728, 4 bytes, 1 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // __ZN23SidekickAgentDispatcherC1Eyyj ───
     * int64_t __ZN23SidekickAgentDispatcherC1Eyyj(int64_t arg0, int64_t arg1) {
     *     goto loc_100000a9c;
     * }
*/
u64 re_ZN23SidekickAgentDispatcherC1Eyyj(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x100000728ULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x0ULL;
}

/*
* Reconstructed Procedure: __ZN24VibeWorkflowOrchestratorC1Eyyjj (@ 0x10000072c, 4 bytes, 1 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // __ZN24VibeWorkflowOrchestratorC1Eyyjj ───
     * int64_t __ZN24VibeWorkflowOrchestratorC1Eyyjj(int64_t arg0, int64_t arg1) {
     *     goto loc_100000b18;
     * }
*/
u64 re_ZN24VibeWorkflowOrchestratorC1Eyyjj(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x10000072cULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x0ULL;
}

/*
* Reconstructed Procedure: _main (@ 0x100000730, 380 bytes, 1 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // _main ───
     * int64_t _main(int64_t arg0, int64_t arg1) {
     *     uint8_t stack_buf_48[16]; // [sp + 0x48]
     *     /* 0x100000734: stp x24, x23, [sp, #0x70] * /
     *     r22 = r0;
     *     r8 = 0x6667;
     *     r8 = 0x66666667; // movk lsl #16
     *     /* 0x100000754: smull x8, w0, w8 * /
     *     /* 0x100000758: lsr x9, x8, #0x20 * /
     *     /* 0x10000075c: lsr x8, x8, #0x3f * /
     *     r8 = r8 + r9;
     *     r8 = r8 + r8;
     *     r0 = r0 - r8;
     *     r20 = 0xa7ed;
     *     r20 = 0x3060a7ed; // movk lsl #16
     *     r20 = 0x13060a7ed; // movk lsl #32
     *     r1 = r20;
     *     r2 = 0xb871;
     *     r2 = 0x23bb871; // movk lsl #16
     *     r0 = __Z27instantiate_board_subsystemiyy(r0, 0x13060a7ed);
     *     r19 = r0;
     *     /* 0x10000078c: sxtw x1, w22 * /
     *     r8 = *([x0]);
     *     r8 = ((AutoStruct__main_100000730 *)r8)->field_18_ro;
     *     r0 = x8(r0, 0x13060a7ed);
     *     r21 = r0;
     *     r8 = *([x19]);
     *     r8 = ((AutoStruct___ZN14PulseItemStoreC2Eyyj_1000009b4 *)r8)->field_20_rw;
     *     r23 = __ZL22kBoard5106608109Pulses; // 0x100004028
     *     r0 = r19;
     *     r1 = r23;
     *     r2 = 3;
     *     r0 = x8(r0, __ZL22kBoard5106608109Pulses);
     *     r24 = r0;
     *     r0 = &stack_buf_48; // [sp + 0x48]
     *     r1 = r20;
     *     r2 = 0xb871;
     *     r2 = 0x23bb871; // movk lsl #16
     *     r0 = __ZN21ColumnValueAggregatorC1Eyy(&stack_buf_48, 0x13060a7ed);
     *     r0 = &stack_buf_48; // [sp + 0x48]
     *     r1 = r23;
     *     r2 = 3;
     *     r0 = __ZN21ColumnValueAggregator20evaluateColumnMetricEPK15MondayPulseItemm(&stack_buf_48, __ZL22kBoard5106608109Pulses);
     *     r23 = r0;
     *     r8 = 0x8e39;
     *     r8 = 0x38e38e39; // movk lsl #16
     *     /* 0x1000007f4: smull x8, w22, w8 * /
     *     /* 0x1000007f8: lsr x9, x8, #0x20 * /
     *     /* 0x1000007fc: lsr x8, x8, #0x3f * /
     *     r8 = r8 + r9;
     *     r8 = r8 + r8;
     *     r0 = r22 - r8;
     *     r1 = r20;
     *     r0 = _dispatch_monday_workos_opcode(r0, 0x13060a7ed);
     *     r22 = r0;
     *     r8 = *([x19]);
     *     r8 = ((AutoStruct___ZN17MondayBoardEngineC2Eyy_1000008fc *)r8)->field_10_rw;
     *     r0 = r19;
     *     r0 = x8(r0, 0x13060a7ed);
     *     r8 = 0xd70b;
     *     r8 = 0x70a3d70b; // movk lsl #16
     *     r8 = 0xa3d70a3d70b; // movk lsl #32
     *     r8 = 0xa3d70a3d70a3d70b; // movk lsl #48
     *     /* 0x100000838: smulh x8, x23, x8 * /
     *     r8 = r8 + r23;
     *     /* 0x100000840: asr x9, x8, #6 * /
     *     r8 = r9 + r8;
     *     r9 = 0x64;
     *     /* 0x10000084c: msub x9, x8, x9, x23 * /
     *     r10 = ((AutoStruct__main_100000730 *)r19)->field_18_ro;
     *     r11 = "Tâche";
     *     /* 0x10000085c: stp x24, x11, [sp, #0x38] * /
     *     /* 0x100000860: stp x21, x22, [sp, #0x28] * /
     *     /* 0x100000864: stp x8, x9, [sp, #0x18] * /
     *     /* 0x100000868: stp x20, x10, [sp, #8] * /
     *     r8 = "[%s] board=%llu groups=(To-do,Termine) cols=%u budget=$%lld.%02lld digest=0x%llx route=0x%llx metric=%lld col0=%s\n";
     *     *([sp]) = r0;
     *     r0 = r8;
     *     r0 = flirt_dyld_stub_binder_trampoline_bbc("[%s] board=%llu groups=(To-do,Termine) cols=%u budget=$%lld.%02lld digest=0x%llx route=0x%llx metric=%lld col0=%s\n", 0x13060a7ed);
     *     r8 = *([x19]);
     *     r8 = ((UltronContext *)r8)->session_flags; // __mh_execute_header
     *     r0 = r19;
     *     r0 = x8(r0, 0x13060a7ed);
     *     r0 = 0;
     *     /* 0x1000008a0: ldp x24, x23, [sp, #0x70] * /
     *     return r0;
     * }
*/
u64 reconstructed_entry_main(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x100000730ULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x12ULL;
}

/*
* Reconstructed Procedure: __ZN21ColumnValueAggregator20evaluateColumnMetricEPK15MondayPulseItemm (@ 0x1000008ac, 32 bytes, 4 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // __ZN21ColumnValueAggregator20evaluateColumnMetricEPK15MondayPulseItemm ───
     * // Stack Frame: 0B | Basic Blocks: 4 | Natural Loops: 1 | Post-Dom Nodes: 4 | Callers: 1
     * int64_t __ZN21ColumnValueAggregator20evaluateColumnMetricEPK15MondayPulseItemm(int64_t arg0, int64_t arg1) {
     *     r0 = 0;
     *     if (r2 != 0) {
     *         // [Block 0x1000008b4 | PostDom: 0x1000008b8]
     *         r8 = r1 + 0x38;
     *         // [NATURAL LOOP HEADER @ 0x1000008b8 (Nesting #1)]
     *         do {
     *             r9 = *([x8], #0x48);
     *             r0 = r9 + r0;
     *             r2--;
     *         } while (r2 != 0); // back-edge -> 0x1000008b8
     *     }
     *     // [Block 0x1000008c8 | PostDom: exit]
     *     return r0;
     * }
*/
u64 re_ZN21ColumnValueAggregator20evaluateColumnMetricEPK15MondayPulseItemm(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x1000008acULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x2ULL;
}

/*
* Reconstructed Procedure: __ZN21ColumnValueAggregatorD1Ev (@ 0x1000008cc, 4 bytes, 1 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // __ZN21ColumnValueAggregatorD1Ev ───
     * int64_t __ZN21ColumnValueAggregatorD1Ev(int64_t arg0, int64_t arg1) {
     *     return r0;
     * }
*/
u64 re_ZN21ColumnValueAggregatorD1Ev(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x1000008ccULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x0ULL;
}

/*
* Reconstructed Procedure: __ZN21BoardGraphQLTransportC2Eyy (@ 0x1000008d0, 44 bytes, 1 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // __ZN21BoardGraphQLTransportC2Eyy ───
     * // Stack Frame: 16B | Basic Blocks: 1 | Natural Loops: 0 | Post-Dom Nodes: 1 | Callers: 1
     * int64_t __ZN21BoardGraphQLTransportC2Eyy(int64_t arg0, int64_t arg1) {
     *     r29 = sp;
     *     r0 = __ZN17MondayBoardEngineC2Eyy(r0, r1);
     *     r8 = __ZTV21BoardGraphQLTransport; // 0x100004100
     *     r8 = r8 + 0x10;
     *     *([x0]) = r8;
     *     r8 = 2;
     *     ((AutoStruct___ZN14PulseItemStoreC2Eyyj_1000009b4 *)r0)->field_20_rw = r8;
     *     return r0;
     * }
*/
u64 re_ZN21BoardGraphQLTransportC2Eyy(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x1000008d0ULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x3ULL;
}

/*
* Reconstructed Procedure: __ZN17MondayBoardEngineC2Eyy (@ 0x1000008fc, 32 bytes, 1 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // __ZN17MondayBoardEngineC2Eyy ───
     * int64_t __ZN17MondayBoardEngineC2Eyy(int64_t arg0, int64_t arg1) {
     *     r8 = __ZTV17MondayBoardEngine; // 0x100004160
     *     r8 = r8 + 0x10;
     *     /* 0x100000908: stp x8, x1, [x0] * /
     *     r8 = 9;
     *     r8 = 0x200000009; // movk lsl #32
     *     /* 0x100000914: stp x2, x8, [x0, #0x10] * /
     *     return r0;
     * }
*/
u64 re_ZN17MondayBoardEngineC2Eyy(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x1000008fcULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x2ULL;
}

/*
* Reconstructed Procedure: __ZN21BoardGraphQLTransportD0Ev (@ 0x10000091c, 4 bytes, 1 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // __ZN21BoardGraphQLTransportD0Ev ───
     * int64_t __ZN21BoardGraphQLTransportD0Ev(int64_t arg0, int64_t arg1) {
     *     goto loc_100000ba4;
     * }
*/
u64 re_ZN21BoardGraphQLTransportD0Ev(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x10000091cULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x0ULL;
}

/*
* Reconstructed Procedure: __ZNK21BoardGraphQLTransport19engineSubsystemNameEv (@ 0x100000920, 12 bytes, 1 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // __ZNK21BoardGraphQLTransport19engineSubsystemNameEv ───
     * int64_t __ZNK21BoardGraphQLTransport19engineSubsystemNameEv(int64_t arg0, int64_t arg1) {
     *     r0 = "BoardGraphQLTransport::RouterBoardSubset";
     *     return r0;
     * }
*/
u64 re_ZNK21BoardGraphQLTransport19engineSubsystemNameEv(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x100000920ULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x1ULL;
}

/*
* Reconstructed Procedure: __ZN17MondayBoardEngine23computeBoardStateDigestEy (@ 0x10000092c, 64 bytes, 4 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // __ZN17MondayBoardEngine23computeBoardStateDigestEy ───
     * // Stack Frame: 0B | Basic Blocks: 4 | Natural Loops: 1 | Post-Dom Nodes: 4 | Callers: 2
     * int64_t __ZN17MondayBoardEngine23computeBoardStateDigestEy(int64_t arg0, int64_t arg1) {
     *     r8 = r0;
     *     /* 0x100000930: ldp x9, x10, [x0, #8] * /
     *     r9 = r9 ^ r1;
     *     r0 = r9 ^ r10;
     *     r8 = ((AutoStruct__main_100000730 *)r8)->field_18_ro;
     *     if (r8 != 0) {
     *         // [Block 0x100000944 | PostDom: 0x100000958]
     *         r9 = 0x7c15;
     *         r9 = 0x7f4a7c15; // movk lsl #16
     *         r9 = 0x79b97f4a7c15; // movk lsl #32
     *         r9 = 0x9e3779b97f4a7c15; // movk lsl #48
     *         r10 = r9;
     *         // [NATURAL LOOP HEADER @ 0x100000958 (Nesting #1)]
     *         do {
     *             r0 = r10 ^ r0;
     *             r10 = r10 + r9;
     *             r8--;
     *         } while (r8 != 0); // back-edge -> 0x100000958
     *     }
     *     // [Block 0x100000968 | PostDom: exit]
     *     return r0;
     * }
*/
u64 re_ZN17MondayBoardEngine23computeBoardStateDigestEy(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x10000092cULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x54ULL);
}
return state + 0x1ULL;
}

/*
* Reconstructed Procedure: __ZN17MondayBoardEngine20evaluateColumnMetricEPK15MondayPulseItemm (@ 0x10000096c, 52 bytes, 4 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // __ZN17MondayBoardEngine20evaluateColumnMetricEPK15MondayPulseItemm ───
     * // Stack Frame: 0B | Basic Blocks: 4 | Natural Loops: 1 | Post-Dom Nodes: 4 | Callers: 0
     * int64_t __ZN17MondayBoardEngine20evaluateColumnMetricEPK15MondayPulseItemm(int64_t arg0, int64_t arg1) {
     *     r0 = 0;
     *     if (r2 != 0) {
     *         // [Block 0x100000974 | PostDom: 0x10000097c]
     *         r8 = r1 + 0x44;
     *         r9 = 0x64;
     *         // [NATURAL LOOP HEADER @ 0x10000097c (Nesting #1)]
     *         do {
     *             r10 = *([x8]);
     *             /* 0x100000980: mul w10, w10, w9 * /
     *             r11 = *([x8, #-0xc]);
     *             r11 = r11 + r0;
     *             r0 = r11 + r10;
     *             r8 = r8 + 0x48;
     *             r2--;
     *         } while (r2 != 0); // back-edge -> 0x10000097c
     *     }
     *     // [Block 0x10000099c | PostDom: exit]
     *     return r0;
     * }
*/
u64 re_ZN17MondayBoardEngine20evaluateColumnMetricEPK15MondayPulseItemm(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x10000096cULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x4ULL;
}

/*
* Reconstructed Procedure: __ZN17MondayBoardEngineD1Ev (@ 0x1000009a0, 4 bytes, 1 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // __ZN17MondayBoardEngineD1Ev ───
     * int64_t __ZN17MondayBoardEngineD1Ev(int64_t arg0, int64_t arg1) {
     *     return r0;
     * }
*/
u64 re_ZN17MondayBoardEngineD1Ev(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x1000009a0ULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x0ULL;
}

/*
* Reconstructed Procedure: __ZN17MondayBoardEngineD0Ev (@ 0x1000009a4, 4 bytes, 1 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // __ZN17MondayBoardEngineD0Ev ───
     * int64_t __ZN17MondayBoardEngineD0Ev(int64_t arg0, int64_t arg1) {
     *     goto loc_100000ba4;
     * }
*/
u64 re_ZN17MondayBoardEngineD0Ev(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x1000009a4ULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x0ULL;
}

/*
* Reconstructed Procedure: __ZNK17MondayBoardEngine19engineSubsystemNameEv (@ 0x1000009a8, 12 bytes, 1 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // __ZNK17MondayBoardEngine19engineSubsystemNameEv ───
     * int64_t __ZNK17MondayBoardEngine19engineSubsystemNameEv(int64_t arg0, int64_t arg1) {
     *     r0 = "MondayBoardEngine::WorkOSCore";
     *     return r0;
     * }
*/
u64 re_ZNK17MondayBoardEngine19engineSubsystemNameEv(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x1000009a8ULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x1ULL;
}

/*
* Reconstructed Procedure: __ZN14PulseItemStoreC2Eyyj (@ 0x1000009b4, 52 bytes, 1 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // __ZN14PulseItemStoreC2Eyyj ───
     * // Stack Frame: 32B | Basic Blocks: 1 | Natural Loops: 0 | Post-Dom Nodes: 1 | Callers: 1
     * int64_t __ZN14PulseItemStoreC2Eyyj(int64_t arg0, int64_t arg1) {
     *     r19 = r3;
     *     r0 = __ZN17MondayBoardEngineC2Eyy(r0, r1);
     *     r8 = __ZTV14PulseItemStore; // 0x100004198
     *     r8 = r8 + 0x10;
     *     *([x0]) = r8;
     *     /* 0x1000009d8: stp w19, wzr, [x0, #0x20] * /
     *     return r0;
     * }
*/
u64 re_ZN14PulseItemStoreC2Eyyj(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x1000009b4ULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x4ULL;
}

/*
* Reconstructed Procedure: __ZN14PulseItemStoreD1Ev (@ 0x1000009e8, 4 bytes, 1 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // __ZN14PulseItemStoreD1Ev ───
     * int64_t __ZN14PulseItemStoreD1Ev(int64_t arg0, int64_t arg1) {
     *     return r0;
     * }
*/
u64 re_ZN14PulseItemStoreD1Ev(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x1000009e8ULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x0ULL;
}

/*
* Reconstructed Procedure: __ZN14PulseItemStoreD0Ev (@ 0x1000009ec, 4 bytes, 1 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // __ZN14PulseItemStoreD0Ev ───
     * int64_t __ZN14PulseItemStoreD0Ev(int64_t arg0, int64_t arg1) {
     *     goto loc_100000ba4;
     * }
*/
u64 re_ZN14PulseItemStoreD0Ev(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x1000009ecULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x0ULL;
}

/*
* Reconstructed Procedure: __ZNK14PulseItemStore19engineSubsystemNameEv (@ 0x1000009f0, 12 bytes, 1 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // __ZNK14PulseItemStore19engineSubsystemNameEv ───
     * int64_t __ZNK14PulseItemStore19engineSubsystemNameEv(int64_t arg0, int64_t arg1) {
     *     r0 = "PulseItemStore::VulcanReduxSlice";
     *     return r0;
     * }
*/
u64 re_ZNK14PulseItemStore19engineSubsystemNameEv(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x1000009f0ULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x1ULL;
}

/*
* Reconstructed Procedure: __ZN14PulseItemStore23computeBoardStateDigestEy (@ 0x1000009fc, 56 bytes, 1 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // __ZN14PulseItemStore23computeBoardStateDigestEy ───
     * // Stack Frame: 32B | Basic Blocks: 1 | Natural Loops: 0 | Post-Dom Nodes: 1 | Callers: 0
     * int64_t __ZN14PulseItemStore23computeBoardStateDigestEy(int64_t arg0, int64_t arg1) {
     *     r19 = r0;
     *     r0 = __ZN17MondayBoardEngine23computeBoardStateDigestEy(r0, r1);
     *     r8 = ((AutoStruct___ZN14PulseItemStoreC2Eyyj_1000009b4 *)r19)->field_20_rw;
     *     r9 = 0x8109;
     *     r9 = 0x6608109; // movk lsl #16
     *     r9 = 0x5106608109; // movk lsl #32
     *     /* 0x100000a20: mul x8, x8, x9 * /
     *     r0 = r8 ^ r0;
     *     return r0;
     * }
*/
u64 re_ZN14PulseItemStore23computeBoardStateDigestEy(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x1000009fcULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x24ULL);
}
return state + 0x2ULL;
}

/*
* Reconstructed Procedure: __ZN14PulseItemStore20evaluateColumnMetricEPK15MondayPulseItemm (@ 0x100000a34, 40 bytes, 4 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // __ZN14PulseItemStore20evaluateColumnMetricEPK15MondayPulseItemm ───
     * // Stack Frame: 0B | Basic Blocks: 4 | Natural Loops: 1 | Post-Dom Nodes: 4 | Callers: 0
     * int64_t __ZN14PulseItemStore20evaluateColumnMetricEPK15MondayPulseItemm(int64_t arg0, int64_t arg1) {
     *     r0 = 0;
     *     if (r2 != 0) {
     *         // [Block 0x100000a3c | PostDom: 0x100000a40]
     *         r8 = r1 + 0x38;
     *         // [NATURAL LOOP HEADER @ 0x100000a40 (Nesting #1)]
     *         do {
     *             /* 0x100000a40: ldurb w9, [x8, #-0x13] * /
     *             r10 = *([x8], #0x48);
     *             /* 0x100000a48: madd x9, x10, x9, x10 * /
     *             r0 = r9 + r0;
     *             r2--;
     *         } while (r2 != 0); // back-edge -> 0x100000a40
     *     }
     *     // [Block 0x100000a58 | PostDom: exit]
     *     return r0;
     * }
*/
u64 re_ZN14PulseItemStore20evaluateColumnMetricEPK15MondayPulseItemm(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x100000a34ULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x2ULL;
}

/*
* Reconstructed Procedure: __ZN21ColumnValueAggregatorC2Eyy (@ 0x100000a5c, 48 bytes, 1 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // __ZN21ColumnValueAggregatorC2Eyy ───
     * // Stack Frame: 16B | Basic Blocks: 1 | Natural Loops: 0 | Post-Dom Nodes: 1 | Callers: 1
     * int64_t __ZN21ColumnValueAggregatorC2Eyy(int64_t arg0, int64_t arg1) {
     *     r29 = sp;
     *     r0 = __ZN17MondayBoardEngineC2Eyy(r0, r1);
     *     r8 = __ZTV21ColumnValueAggregator; // 0x1000041e8
     *     r8 = r8 + 0x10;
     *     *([x0]) = r8;
     *     r8 = 0x7100;
     *     r8 = 0x27100; // movk lsl #16
     *     ((AutoStruct___ZN14PulseItemStoreC2Eyyj_1000009b4 *)r0)->field_20_rw = r8;
     *     return r0;
     * }
*/
u64 re_ZN21ColumnValueAggregatorC2Eyy(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x100000a5cULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x3ULL;
}

int main(int argc, char **argv) {
printf("[ULTRON RECONSTRUCTED BINARY] Target: monday_board_5106608109 | Format: Mach-O 64-bit | Procs: 46\n");
    u64 res = re_dispatch_monday_workos_opcode(0x1000ULL, 4ULL, 0x42ULL);
printf("[ULTRON] Executed entry subroutine '_dispatch_monday_workos_opcode' (@ 0x100000588) -> 0x%llx\n", (unsigned long long)res);
    return 0;
}

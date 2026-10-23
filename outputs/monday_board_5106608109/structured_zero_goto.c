// ============================================================================
// ULTRON PHOENIX/DREAM ENGINE — ZERO-GOTO POST-DOMINATOR STRUCTURED C23
// Procedure : _dispatch_monday_workos_opcode @ 0x100000588
// CFG Blocks: 4 | Loop Regions: 1 | If-Else Hammocks: 1
// ============================================================================
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
// ============================================================================
// ULTRON PHOENIX/DREAM ENGINE — ZERO-GOTO POST-DOMINATOR STRUCTURED C23
// Procedure : swift::aleria::AgentUsage::Source::id() @ 0x100001be0
// CFG Blocks: 2 | Loop Regions: 0 | If-Else Hammocks: 0
// ============================================================================
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // swift::aleria::AgentUsage::Source::id() ───
// Stack Frame: 0B | Basic Blocks: 2 | Natural Loops: 0 | Post-Dom Nodes: 2 | Callers: 1
int64_t swift::aleria::AgentUsage::Source::id(int64_t arg0, int64_t arg1) {
    // [SWITCH DISPATCH DETECTED @ 0x100001be0: Multi-Way Cascade on r8 (3 cases)]
    switch (r8) { case 0xff: goto loc_100001c14; case 0x1: goto loc_100001c08; case 0x1: goto loc_100001c0c; }
    r8 = r0 & 0xff;
    if (r8 == 0) { goto loc_100001c14; }
    // [Block 0x100001be8 | PostDom: exit]
    r8 = -0x1b00000000000000;
    r9 = 0x6f63;
    r9 = 0x65646f63; // movk lsl #16
    r9 = 0x7865646f63; // movk lsl #32
    r10 = -0x1c00000000000000;
    r11 = 0x6f62;
    r11 = 0x68746f62; // movk lsl #16
    r0 = (r8 == 1) ? r9 : r11;
    r1 = (r8 == 1) ? r8 : r10;
    return r0;
}
// ============================================================================
// ULTRON PHOENIX/DREAM ENGINE — ZERO-GOTO POST-DOMINATOR STRUCTURED C23
// Procedure : -[UltronSentinelCore initWithKey:rounds:] @ 0x100000a18
// CFG Blocks: 4 | Loop Regions: 0 | If-Else Hammocks: 1
// ============================================================================
// ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // -[UltronSentinelCore initWithKey:rounds:] ───
// Stack Frame: 0B | Basic Blocks: 4 | Natural Loops: 0 | Post-Dom Nodes: 4 | Callers: 0
// @interface UltronSentinelCore : NSObject {
//     uint64_t _reactorPower; // +0x08 (8B)
//     int32_t _encryptionRounds; // +0x10 (4B)
//     uint32_t _statusFlags; // +0x14 (4B)
//     int32_t _securityLevel; // +0x18 (4B)
//     uint64_t _cipherKey; // +0x20 (8B)
//     NSString * _coreName; // +0x28 (8B)
// }
// @property (Ti,N,V_securityLevel) securityLevel;
// @property (TQ,N,V_cipherKey) cipherKey;
// @property (T@"NSString",C,N,V_coreName) coreName;
// - (uint64_t)reactorDiagnosticDigest; // IMP: 0x100000d30
// - (id)initWithKey:(uint64_t)arg0 rounds:(int32_t)arg1; // IMP: 0x100000a18
// - (uint64_t)decryptPayload:(const char *)arg0 length:(uint64_t)arg1; // IMP: 0x100000b28
// - (int32_t)securityLevel; // IMP: 0x100000c2c
// - (void)setSecurityLevel:(int32_t)arg0; // IMP: 0x100000c48
// - (uint64_t)cipherKey; // IMP: 0x100000c6c
// - (void)setCipherKey:(uint64_t)arg0; // IMP: 0x100000c88
// - (id)coreName; // IMP: 0x100000cac
// - (void)setCoreName:(id)arg0; // IMP: 0x100000cc8
// - (void).cxx_destruct; // IMP: 0x100000d00
// + (id)sentinelProtocolVersion; // IMP: 0x100000c10
// @end
id -[UltronSentinelCore initWithKey:rounds:] {
    uint8_t stack_buf_8[8]; // [fp - 0x8]
    uint8_t stack_buf_20[16]; // [sp + 0x20]
    r8 = &stack_buf_8; // [fp - 0x8]
    ((AutoStruct_EntryFrame *)sp)->status_code_18 = r8;
    *([x29, #-8]) = r0;
    *([x29, #-0x10]) = r1;
    *([x29, #-0x18]) = r2;
    *([x29, #-0x1c]) = r3;
    r8 = *([x29, #-8]);
    *([x29, #-8]) = 0;
    r0 = &stack_buf_20; // [sp + 0x20]
    ((UltronContext *)sp)->crypto_nonce = r8;
    r8 = classRef_UltronSentinelCore; // [0x1000040d8]
    ((UltronSentinelCore *)sp)->_coreName = r8;
    r1 = @selector(init); // [0x100008190]
    r0 = [&stack_buf_20 init]; // @selector(init)
    r1 = r0;
    r0 = ((AutoStruct_EntryFrame *)sp)->status_code_18;
    r8 = r1;
    *([x29, #-8]) = r8;
    r0 = flirt_dyld_stub_binder_trampoline_11f0(r0, r0);
    r8 = *([x29, #-8]);
    if (r8 != 0) {
        // [Block 0x100000a80 | PostDom: 0x100000a84]
        /* [PHOENIX REGION FOLDED: eliminated goto loc_100000a84 -> structured control flow] */
        // [Block 0x100000a84 | PostDom: 0x100000aec]
        r8 = *([x29, #-0x18]);
        r9 = *([x29, #-8]);
        ((UltronContext *)r9)->crypto_nonce = r8;
        r8 = *([x29, #-0x1c]);
        r9 = *([x29, #-8]);
        ((AutoStruct_EntryFrame *)r9)->local_var_10 = r8;
        r9 = *([x29, #-8]);
        r8 = 0x2328;
        ((AutoStruct_EntryFrame *)r9)->saved_lr = r8;
        r9 = *([x29, #-8]);
        r8 = 1;
        r8 = 0xa5a50001; // movk lsl #16
        ((UltronSentinelCore *)r9)->_statusFlags = r8;
        r10 = *([x29, #-0x1c]);
        r9 = 2;
        r8 = 5;
        r10 = r10 - 8;
        r8 = (r10 > 0) ? r8 : r9;
        r9 = *([x29, #-8]);
        ((AutoStruct_EntryFrame *)r9)->status_code_18 = r8;
        r8 = *([x29, #-8]);
        r0 = r8 + 0x28;
        r1 = @"ULTRON-SENTINEL-MK9"; // 0x100004088
        r0 = flirt_dyld_stub_binder_trampoline_11f0(r0, @"ULTRON-SENTINEL-MK9");
        /* [PHOENIX REGION FOLDED: eliminated goto loc_100000aec -> structured control flow] */
    }
    // [Block 0x100000aec | PostDom: exit]
    r8 = &stack_buf_8; // [fp - 0x8]
    ((AutoStruct_EntryFrame *)sp)->saved_lr = r8;
    r0 = *([x29, #-8]);
    r8 = *([x8, #0x38]);
    r0 = x8(r0, @"ULTRON-SENTINEL-MK9");
    r1 = r0;
    r0 = ((AutoStruct_EntryFrame *)sp)->saved_lr;
    ((AutoStruct_EntryFrame *)sp)->local_var_10 = r1;
    r1 = 0;
    r0 = flirt_dyld_stub_binder_trampoline_11f0(r0, 0);
    r0 = ((AutoStruct_EntryFrame *)sp)->local_var_10;
    return r0;
}
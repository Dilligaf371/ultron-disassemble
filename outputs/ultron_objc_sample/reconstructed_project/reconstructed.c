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
static const char * const ULTRON_STR_00 = ".cxx_destruct" /* @ 0x1000013b8 */;
static const char * const ULTRON_STR_01 = "T@\"NSString\",C,N,V_coreName" /* @ 0x1000013c6 */;
static const char * const ULTRON_STR_02 = "TQ,N,V_cipherKey" /* @ 0x1000013e2 */;
static const char * const ULTRON_STR_03 = "Ti,N,V_securityLevel" /* @ 0x1000013f3 */;
static const char * const ULTRON_STR_04 = "UTF8String" /* @ 0x100001408 */;
static const char * const ULTRON_STR_05 = "_cipherKey" /* @ 0x100001413 */;
static const char * const ULTRON_STR_06 = "_coreName" /* @ 0x10000141e */;
static const char * const ULTRON_STR_07 = "_encryptionRounds" /* @ 0x100001428 */;
static const char * const ULTRON_STR_08 = "_reactorPower" /* @ 0x10000143a */;
static const char * const ULTRON_STR_09 = "_securityLevel" /* @ 0x100001448 */;
static const char * const ULTRON_STR_10 = "_statusFlags" /* @ 0x100001457 */;
static const char * const ULTRON_STR_11 = "cipherKey" /* @ 0x100001464 */;
static const char * const ULTRON_STR_12 = "coreName" /* @ 0x10000146e */;
static const char * const ULTRON_STR_13 = "decryptPayload:length:" /* @ 0x100001477 */;
static const char * const ULTRON_STR_14 = "init" /* @ 0x10000148e */;
static const char * const ULTRON_STR_15 = "initWithKey:rounds:" /* @ 0x100001493 */;
static const char * const ULTRON_STR_16 = "reactorDiagnosticDigest" /* @ 0x1000014a7 */;
static const char * const ULTRON_STR_17 = "securityLevel" /* @ 0x1000014bf */;
static const char * const ULTRON_STR_18 = "sentinelProtocolVersion" /* @ 0x1000014cd */;
static const char * const ULTRON_STR_19 = "setCipherKey:" /* @ 0x1000014e5 */;
static const char * const ULTRON_STR_20 = "setCoreName:" /* @ 0x1000014f3 */;
static const char * const ULTRON_STR_21 = "setSecurityLevel:" /* @ 0x100001500 */;
static const char * const ULTRON_STR_22 = "ULTRON-SENTINEL-MK9" /* @ 0x100001512 */;
static const char * const ULTRON_STR_23 = "ULTRON-OBJC-PROTOCOL-v4.2" /* @ 0x100001526 */;
static const char * const ULTRON_STR_24 = "ULTRON_TELEMETRY_CORE_AUTH_VECTOR" /* @ 0x100001540 */;
static const char * const ULTRON_STR_25 = "UltronSentinelCore" /* @ 0x1000015a1 */;
static const char * const ULTRON_STR_26 = "Telemetry" /* @ 0x1000015b6 */;
static const char * const ULTRON_STR_27 = "@16@0:8" /* @ 0x1000015c0 */;
static const char * const ULTRON_STR_28 = "@28@0:8Q16i24" /* @ 0x1000015c8 */;
static const char * const ULTRON_STR_29 = "Q32@0:8r*16Q24" /* @ 0x1000015d6 */;
static const char * const ULTRON_STR_30 = "i16@0:8" /* @ 0x1000015e5 */;
static const char * const ULTRON_STR_31 = "v20@0:8i16" /* @ 0x1000015ed */;

/* ── Forward Declarations ── */
u64 re_UltronSentinelCore_initWithKey_rounds(u64 arg0, u64 arg1, u64 arg2); /* -[UltronSentinelCore initWithKey:rounds:] @ 0x100000a18 (272B) */
u64 re_UltronSentinelCore_decryptPayload_length(u64 arg0, u64 arg1, u64 arg2); /* -[UltronSentinelCore decryptPayload:length:] @ 0x100000b28 (232B) */
u64 re_UltronSentinelCore_sentinelProtocolVersion(u64 arg0, u64 arg1, u64 arg2); /* +[UltronSentinelCore sentinelProtocolVersion] @ 0x100000c10 (28B) */
u64 re_UltronSentinelCore_securityLevel(u64 arg0, u64 arg1, u64 arg2); /* -[UltronSentinelCore securityLevel] @ 0x100000c2c (28B) */
u64 re_UltronSentinelCore_setSecurityLevel(u64 arg0, u64 arg1, u64 arg2); /* -[UltronSentinelCore setSecurityLevel:] @ 0x100000c48 (36B) */
u64 re_UltronSentinelCore_cipherKey(u64 arg0, u64 arg1, u64 arg2); /* -[UltronSentinelCore cipherKey] @ 0x100000c6c (28B) */
u64 re_UltronSentinelCore_setCipherKey(u64 arg0, u64 arg1, u64 arg2); /* -[UltronSentinelCore setCipherKey:] @ 0x100000c88 (36B) */
u64 re_UltronSentinelCore_coreName(u64 arg0, u64 arg1, u64 arg2); /* -[UltronSentinelCore coreName] @ 0x100000cac (28B) */
u64 re_UltronSentinelCore_setCoreName(u64 arg0, u64 arg1, u64 arg2); /* -[UltronSentinelCore setCoreName:] @ 0x100000cc8 (56B) */
u64 re_UltronSentinelCore__cxx_destruct(u64 arg0, u64 arg1, u64 arg2); /* -[UltronSentinelCore .cxx_destruct] @ 0x100000d00 (48B) */
u64 re_UltronSentinelCore_reactorDiagnosticDigest(u64 arg0, u64 arg1, u64 arg2); /* -[UltronSentinelCore reactorDiagnosticDigest] @ 0x100000d30 (52B) */
u64 re_matrix_nested_solver(u64 arg0, u64 arg1, u64 arg2); /* _matrix_nested_solver @ 0x100000d64 (472B) */
u64 reconstructed_entry_main(u64 arg0, u64 arg1, u64 arg2); /* _main @ 0x100000f3c (560B) */
u64 re_flirt_dyld_stub_binder_trampoline_116c(u64 arg0, u64 arg1, u64 arg2); /* flirt_dyld_stub_binder_trampoline_116c @ 0x10000116c (12B) */
u64 re_flirt_dyld_stub_binder_trampoline_1178(u64 arg0, u64 arg1, u64 arg2); /* flirt_dyld_stub_binder_trampoline_1178 @ 0x100001178 (12B) */
u64 re_flirt_dyld_stub_binder_trampoline_1184(u64 arg0, u64 arg1, u64 arg2); /* flirt_dyld_stub_binder_trampoline_1184 @ 0x100001184 (12B) */
u64 re_flirt_dyld_stub_binder_trampoline_1190(u64 arg0, u64 arg1, u64 arg2); /* flirt_dyld_stub_binder_trampoline_1190 @ 0x100001190 (12B) */
u64 re_flirt_dyld_stub_binder_trampoline_119c(u64 arg0, u64 arg1, u64 arg2); /* flirt_dyld_stub_binder_trampoline_119c @ 0x10000119c (12B) */
u64 re_flirt_dyld_stub_binder_trampoline_11a8(u64 arg0, u64 arg1, u64 arg2); /* flirt_dyld_stub_binder_trampoline_11a8 @ 0x1000011a8 (12B) */
u64 re_flirt_dyld_stub_binder_trampoline_11b4(u64 arg0, u64 arg1, u64 arg2); /* flirt_dyld_stub_binder_trampoline_11b4 @ 0x1000011b4 (12B) */
u64 re_flirt_dyld_stub_binder_trampoline_11c0(u64 arg0, u64 arg1, u64 arg2); /* flirt_dyld_stub_binder_trampoline_11c0 @ 0x1000011c0 (24B) */
u64 re_flirt_dyld_stub_binder_trampoline_11d8(u64 arg0, u64 arg1, u64 arg2); /* flirt_dyld_stub_binder_trampoline_11d8 @ 0x1000011d8 (12B) */
u64 re_flirt_dyld_stub_binder_trampoline_11e4(u64 arg0, u64 arg1, u64 arg2); /* flirt_dyld_stub_binder_trampoline_11e4 @ 0x1000011e4 (12B) */
u64 re_flirt_dyld_stub_binder_trampoline_11f0(u64 arg0, u64 arg1, u64 arg2); /* flirt_dyld_stub_binder_trampoline_11f0 @ 0x1000011f0 (12B) */
u64 re_flirt_dyld_stub_binder_trampoline_11fc(u64 arg0, u64 arg1, u64 arg2); /* flirt_dyld_stub_binder_trampoline_11fc @ 0x1000011fc (12B) */
u64 re_objc_msgSend_UTF8String(u64 arg0, u64 arg1, u64 arg2); /* _objc_msgSend$UTF8String @ 0x100001220 (32B) */
u64 re_objc_msgSend_coreName(u64 arg0, u64 arg1, u64 arg2); /* _objc_msgSend$coreName @ 0x100001240 (32B) */
u64 re_objc_msgSend_decryptPayload_length(u64 arg0, u64 arg1, u64 arg2); /* _objc_msgSend$decryptPayload:length: @ 0x100001260 (32B) */
u64 re_objc_msgSend_initWithKey_rounds(u64 arg0, u64 arg1, u64 arg2); /* _objc_msgSend$initWithKey:rounds: @ 0x100001280 (32B) */
u64 re_objc_msgSend_reactorDiagnosticDigest(u64 arg0, u64 arg1, u64 arg2); /* _objc_msgSend$reactorDiagnosticDigest @ 0x1000012a0 (32B) */

/*
* Reconstructed Procedure: -[UltronSentinelCore initWithKey:rounds:] (@ 0x100000a18, 272 bytes, 4 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // -[UltronSentinelCore initWithKey:rounds:] ───
     * // Stack Frame: 0B | Basic Blocks: 4 | Natural Loops: 0 | Post-Dom Nodes: 4 | Callers: 0
     * // @interface UltronSentinelCore : NSObject {
     * //     uint64_t _reactorPower; // +0x08 (8B)
     * //     int32_t _encryptionRounds; // +0x10 (4B)
     * //     uint32_t _statusFlags; // +0x14 (4B)
     * //     int32_t _securityLevel; // +0x18 (4B)
     * //     uint64_t _cipherKey; // +0x20 (8B)
     * //     NSString * _coreName; // +0x28 (8B)
     * // }
     * // @property (Ti,N,V_securityLevel) securityLevel;
     * // @property (TQ,N,V_cipherKey) cipherKey;
     * // @property (T@"NSString",C,N,V_coreName) coreName;
     * // - (uint64_t)reactorDiagnosticDigest; // IMP: 0x100000d30
     * // - (id)initWithKey:(uint64_t)arg0 rounds:(int32_t)arg1; // IMP: 0x100000a18
     * // - (uint64_t)decryptPayload:(const char *)arg0 length:(uint64_t)arg1; // IMP: 0x100000b28
     * // - (int32_t)securityLevel; // IMP: 0x100000c2c
     * // - (void)setSecurityLevel:(int32_t)arg0; // IMP: 0x100000c48
     * // - (uint64_t)cipherKey; // IMP: 0x100000c6c
     * // - (void)setCipherKey:(uint64_t)arg0; // IMP: 0x100000c88
     * // - (id)coreName; // IMP: 0x100000cac
     * // - (void)setCoreName:(id)arg0; // IMP: 0x100000cc8
     * // - (void).cxx_destruct; // IMP: 0x100000d00
     * // + (id)sentinelProtocolVersion; // IMP: 0x100000c10
     * // @end
     * id -[UltronSentinelCore initWithKey:rounds:] {
     *     uint8_t stack_buf_8[8]; // [fp - 0x8]
     *     uint8_t stack_buf_20[16]; // [sp + 0x20]
     *     r8 = &stack_buf_8; // [fp - 0x8]
     *     ((UltronContext *)sp)->payload_length = r8;
     *     *([x29, #-8]) = r0;
     *     *([x29, #-0x10]) = r1;
     *     *([x29, #-0x18]) = r2;
     *     *([x29, #-0x1c]) = r3;
     *     r8 = *([x29, #-8]);
     *     *([x29, #-8]) = 0;
     *     r0 = &stack_buf_20; // [sp + 0x20]
     *     ((UltronContext *)sp)->crypto_nonce = r8;
     *     r8 = classRef_UltronSentinelCore; // [0x1000040d8]
     *     ((UltronSentinelCore *)sp)->_coreName = r8;
     *     r1 = @selector(init); // [0x100008190]
     *     r0 = [&stack_buf_20 init]; // @selector(init)
     *     r1 = r0;
     *     r0 = ((UltronContext *)sp)->payload_length;
     *     r8 = r1;
     *     *([x29, #-8]) = r8;
     *     r0 = flirt_dyld_stub_binder_trampoline_11f0(r0, r0);
     *     r8 = *([x29, #-8]);
     *     if (r8 != 0) {
     *         // [Block 0x100000a80 | PostDom: 0x100000a84]
     *         goto loc_100000a84;
     *         // [Block 0x100000a84 | PostDom: 0x100000aec]
     *         r8 = *([x29, #-0x18]);
     *         r9 = *([x29, #-8]);
     *         ((UltronContext *)r9)->crypto_nonce = r8;
     *         r8 = *([x29, #-0x1c]);
     *         r9 = *([x29, #-8]);
     *         ((UltronContext *)r9)->target_buffer = r8;
     *         r9 = *([x29, #-8]);
     *         r8 = 0x2328;
     *         ((UltronContext *)r9)->session_flags = r8;
     *         r9 = *([x29, #-8]);
     *         r8 = 1;
     *         r8 = 0xa5a50001; // movk lsl #16
     *         ((UltronSentinelCore *)r9)->_statusFlags = r8;
     *         r10 = *([x29, #-0x1c]);
     *         r9 = 2;
     *         r8 = 5;
     *         r10 = r10 - 8;
     *         r8 = (r10 > 0) ? r8 : r9;
     *         r9 = *([x29, #-8]);
     *         ((UltronContext *)r9)->payload_length = r8;
     *         r8 = *([x29, #-8]);
     *         r0 = r8 + 0x28;
     *         r1 = @"ULTRON-SENTINEL-MK9"; // 0x100004088
     *         r0 = flirt_dyld_stub_binder_trampoline_11f0(r0, @"ULTRON-SENTINEL-MK9");
     *         goto loc_100000aec;
     *     }
     *     // [Block 0x100000aec | PostDom: exit]
     *     r8 = &stack_buf_8; // [fp - 0x8]
     *     ((UltronContext *)sp)->session_flags = r8;
     *     r0 = *([x29, #-8]);
     *     r8 = *([x8, #0x38]);
     *     r0 = x8(r0, @"ULTRON-SENTINEL-MK9");
     *     r1 = r0;
     *     r0 = ((UltronContext *)sp)->session_flags;
     *     ((UltronContext *)sp)->target_buffer = r1;
     *     r1 = 0;
     *     r0 = flirt_dyld_stub_binder_trampoline_11f0(r0, 0);
     *     r0 = ((UltronContext *)sp)->target_buffer;
     *     return r0;
     * }
*/
u64 re_UltronSentinelCore_initWithKey_rounds(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x100000a18ULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x9ULL;
}

/*
* Reconstructed Procedure: -[UltronSentinelCore decryptPayload:length:] (@ 0x100000b28, 232 bytes, 11 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // -[UltronSentinelCore decryptPayload:length:] ───
     * // Stack Frame: 0B | Basic Blocks: 11 | Natural Loops: 2 | Post-Dom Nodes: 11 | Callers: 0
     * // @interface UltronSentinelCore : NSObject {
     * //     uint64_t _reactorPower; // +0x08 (8B)
     * //     int32_t _encryptionRounds; // +0x10 (4B)
     * //     uint32_t _statusFlags; // +0x14 (4B)
     * //     int32_t _securityLevel; // +0x18 (4B)
     * //     uint64_t _cipherKey; // +0x20 (8B)
     * //     NSString * _coreName; // +0x28 (8B)
     * // }
     * // @property (Ti,N,V_securityLevel) securityLevel;
     * // @property (TQ,N,V_cipherKey) cipherKey;
     * // @property (T@"NSString",C,N,V_coreName) coreName;
     * // - (uint64_t)reactorDiagnosticDigest; // IMP: 0x100000d30
     * // - (id)initWithKey:(uint64_t)arg0 rounds:(int32_t)arg1; // IMP: 0x100000a18
     * // - (uint64_t)decryptPayload:(const char *)arg0 length:(uint64_t)arg1; // IMP: 0x100000b28
     * // - (int32_t)securityLevel; // IMP: 0x100000c2c
     * // - (void)setSecurityLevel:(int32_t)arg0; // IMP: 0x100000c48
     * // - (uint64_t)cipherKey; // IMP: 0x100000c6c
     * // - (void)setCipherKey:(uint64_t)arg0; // IMP: 0x100000c88
     * // - (id)coreName; // IMP: 0x100000cac
     * // - (void)setCoreName:(id)arg0; // IMP: 0x100000cc8
     * // - (void).cxx_destruct; // IMP: 0x100000d00
     * // + (id)sentinelProtocolVersion; // IMP: 0x100000c10
     * // @end
     * id -[UltronSentinelCore decryptPayload:length:] {
     *     *([sp, #0x38]) = r0;
     *     *([sp, #0x30]) = r1;
     *     ((UltronSentinelCore *)sp)->_coreName = r2;
     *     ((UltronContext *)sp)->crypto_nonce = r3;
     *     r8 = *([sp, #0x38]);
     *     r8 = ((UltronContext *)r8)->crypto_nonce;
     *     r9 = *([sp, #0x38]);
     *     r9 = ((UltronContext *)r9)->session_flags;
     *     r8 = r8 ^ r9;
     *     ((UltronContext *)sp)->payload_length = r8;
     *     ((UltronSentinelCore *)sp)->_statusFlags = 0;
     *     goto loc_100000b5c;
     *     // [NATURAL WHILE-LOOP HEADER @ 0x100000b5c (Nesting #1)]
     *     r8 = ((UltronSentinelCore *)sp)->_statusFlags;
     *     r9 = *([sp, #0x38]);
     *     r9 = ((UltronContext *)r9)->target_buffer;
     *     r8 = r8 - r9;
     *     while (r8 < 0) {
     *         // [Block 0x100000b70 | PostDom: 0x100000b74]
     *         goto loc_100000b74;
     *         // [Block 0x100000b74 | PostDom: 0x100000b7c]
     *         ((UltronContext *)sp)->session_flags = 0;
     *         goto loc_100000b7c;
     *         // [NATURAL WHILE-LOOP HEADER @ 0x100000b7c (Nesting #2)]
     *         r8 = ((UltronContext *)sp)->session_flags;
     *         r9 = ((UltronContext *)sp)->crypto_nonce;
     *         r8 = r8 - r9;
     *         while (r8 < 0) {
     *             // [Block 0x100000b8c | PostDom: 0x100000b90]
     *             goto loc_100000b90;
     *             // [Block 0x100000b90 | PostDom: 0x100000bd0]
     *             r9 = ((UltronContext *)sp)->payload_length;
     *             r8 = ((UltronContext *)sp)->payload_length;
     *             /* 0x100000b98: lsr x8, x8, #0x39 * /
     *             r8 = r8 | r9;
     *             r9 = ((UltronSentinelCore *)sp)->_coreName;
     *             r10 = ((UltronContext *)sp)->session_flags;
     *             r9 = *([x9, x10]);
     *             r8 = r8 ^ r9;
     *             r9 = ((UltronSentinelCore *)sp)->_statusFlags;
     *             r10 = 0x79b1;
     *             r10 = 0x9e3779b1; // movk lsl #16
     *             /* 0x100000bbc: mul w9, w9, w10 * /
     *             r9 = r9;
     *             r8 = r8 ^ r9;
     *             ((UltronContext *)sp)->payload_length = r8;
     *             goto loc_100000bd0;
     *             // [Block 0x100000bd0 | PostDom: exit]
     *             r8 = ((UltronContext *)sp)->session_flags;
     *             r8++;
     *             ((UltronContext *)sp)->session_flags = r8;
     *         } // end while-loop -> 0x100000b7c
     *         // [Block 0x100000be0 | PostDom: 0x100000be4]
     *         goto loc_100000be4;
     *         // [Block 0x100000be4 | PostDom: exit]
     *         r8 = ((UltronSentinelCore *)sp)->_statusFlags;
     *         r8++;
     *         ((UltronSentinelCore *)sp)->_statusFlags = r8;
     *     } // end while-loop -> 0x100000b5c
     *     // [Block 0x100000bf4 | PostDom: exit]
     *     r9 = *([sp, #0x38]);
     *     r8 = ((UltronSentinelCore *)r9)->_statusFlags;
     *     r8 = r8 | 0x10;
     *     ((UltronSentinelCore *)r9)->_statusFlags = r8;
     *     r0 = ((UltronContext *)sp)->payload_length;
     *     return r0;
     * }
*/
u64 re_UltronSentinelCore_decryptPayload_length(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x100000b28ULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x24ULL);
}
return state + 0x3ULL;
}

/*
* Reconstructed Procedure: +[UltronSentinelCore sentinelProtocolVersion] (@ 0x100000c10, 28 bytes, 1 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // +[UltronSentinelCore sentinelProtocolVersion] ───
     * // @interface UltronSentinelCore : NSObject {
     * //     uint64_t _reactorPower; // +0x08 (8B)
     * //     int32_t _encryptionRounds; // +0x10 (4B)
     * //     uint32_t _statusFlags; // +0x14 (4B)
     * //     int32_t _securityLevel; // +0x18 (4B)
     * //     uint64_t _cipherKey; // +0x20 (8B)
     * //     NSString * _coreName; // +0x28 (8B)
     * // }
     * // @property (Ti,N,V_securityLevel) securityLevel;
     * // @property (TQ,N,V_cipherKey) cipherKey;
     * // @property (T@"NSString",C,N,V_coreName) coreName;
     * // - (uint64_t)reactorDiagnosticDigest; // IMP: 0x100000d30
     * // - (id)initWithKey:(uint64_t)arg0 rounds:(int32_t)arg1; // IMP: 0x100000a18
     * // - (uint64_t)decryptPayload:(const char *)arg0 length:(uint64_t)arg1; // IMP: 0x100000b28
     * // - (int32_t)securityLevel; // IMP: 0x100000c2c
     * // - (void)setSecurityLevel:(int32_t)arg0; // IMP: 0x100000c48
     * // - (uint64_t)cipherKey; // IMP: 0x100000c6c
     * // - (void)setCipherKey:(uint64_t)arg0; // IMP: 0x100000c88
     * // - (id)coreName; // IMP: 0x100000cac
     * // - (void)setCoreName:(id)arg0; // IMP: 0x100000cc8
     * // - (void).cxx_destruct; // IMP: 0x100000d00
     * // + (id)sentinelProtocolVersion; // IMP: 0x100000c10
     * // @end
     * id +[UltronSentinelCore sentinelProtocolVersion] {
     *     ((UltronContext *)sp)->session_flags = r0;
     *     *([sp]) = r1;
     *     r0 = @"ULTRON-OBJC-PROTOCOL-v4.2"; // 0x1000040a8
     *     goto loc_1000011cc;
     * }
*/
u64 re_UltronSentinelCore_sentinelProtocolVersion(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x100000c10ULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x2ULL;
}

/*
* Reconstructed Procedure: -[UltronSentinelCore securityLevel] (@ 0x100000c2c, 28 bytes, 1 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // -[UltronSentinelCore securityLevel] ───
     * // @interface UltronSentinelCore : NSObject {
     * //     uint64_t _reactorPower; // +0x08 (8B)
     * //     int32_t _encryptionRounds; // +0x10 (4B)
     * //     uint32_t _statusFlags; // +0x14 (4B)
     * //     int32_t _securityLevel; // +0x18 (4B)
     * //     uint64_t _cipherKey; // +0x20 (8B)
     * //     NSString * _coreName; // +0x28 (8B)
     * // }
     * // @property (Ti,N,V_securityLevel) securityLevel;
     * // @property (TQ,N,V_cipherKey) cipherKey;
     * // @property (T@"NSString",C,N,V_coreName) coreName;
     * // - (uint64_t)reactorDiagnosticDigest; // IMP: 0x100000d30
     * // - (id)initWithKey:(uint64_t)arg0 rounds:(int32_t)arg1; // IMP: 0x100000a18
     * // - (uint64_t)decryptPayload:(const char *)arg0 length:(uint64_t)arg1; // IMP: 0x100000b28
     * // - (int32_t)securityLevel; // IMP: 0x100000c2c
     * // - (void)setSecurityLevel:(int32_t)arg0; // IMP: 0x100000c48
     * // - (uint64_t)cipherKey; // IMP: 0x100000c6c
     * // - (void)setCipherKey:(uint64_t)arg0; // IMP: 0x100000c88
     * // - (id)coreName; // IMP: 0x100000cac
     * // - (void)setCoreName:(id)arg0; // IMP: 0x100000cc8
     * // - (void).cxx_destruct; // IMP: 0x100000d00
     * // + (id)sentinelProtocolVersion; // IMP: 0x100000c10
     * // @end
     * id -[UltronSentinelCore securityLevel] {
     *     ((UltronContext *)sp)->session_flags = r0;
     *     *([sp]) = r1;
     *     r8 = ((UltronContext *)sp)->session_flags;
     *     r0 = ((UltronContext *)r8)->payload_length;
     *     return r0;
     * }
*/
u64 re_UltronSentinelCore_securityLevel(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x100000c2cULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x1ULL;
}

/*
* Reconstructed Procedure: -[UltronSentinelCore setSecurityLevel:] (@ 0x100000c48, 36 bytes, 1 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // -[UltronSentinelCore setSecurityLevel:] ───
     * // @interface UltronSentinelCore : NSObject {
     * //     uint64_t _reactorPower; // +0x08 (8B)
     * //     int32_t _encryptionRounds; // +0x10 (4B)
     * //     uint32_t _statusFlags; // +0x14 (4B)
     * //     int32_t _securityLevel; // +0x18 (4B)
     * //     uint64_t _cipherKey; // +0x20 (8B)
     * //     NSString * _coreName; // +0x28 (8B)
     * // }
     * // @property (Ti,N,V_securityLevel) securityLevel;
     * // @property (TQ,N,V_cipherKey) cipherKey;
     * // @property (T@"NSString",C,N,V_coreName) coreName;
     * // - (uint64_t)reactorDiagnosticDigest; // IMP: 0x100000d30
     * // - (id)initWithKey:(uint64_t)arg0 rounds:(int32_t)arg1; // IMP: 0x100000a18
     * // - (uint64_t)decryptPayload:(const char *)arg0 length:(uint64_t)arg1; // IMP: 0x100000b28
     * // - (int32_t)securityLevel; // IMP: 0x100000c2c
     * // - (void)setSecurityLevel:(int32_t)arg0; // IMP: 0x100000c48
     * // - (uint64_t)cipherKey; // IMP: 0x100000c6c
     * // - (void)setCipherKey:(uint64_t)arg0; // IMP: 0x100000c88
     * // - (id)coreName; // IMP: 0x100000cac
     * // - (void)setCoreName:(id)arg0; // IMP: 0x100000cc8
     * // - (void).cxx_destruct; // IMP: 0x100000d00
     * // + (id)sentinelProtocolVersion; // IMP: 0x100000c10
     * // @end
     * id -[UltronSentinelCore setSecurityLevel:] {
     *     ((UltronContext *)sp)->payload_length = r0;
     *     ((UltronContext *)sp)->target_buffer = r1;
     *     *([sp, #0xc]) = r2;
     *     r8 = *([sp, #0xc]);
     *     r9 = ((UltronContext *)sp)->payload_length;
     *     ((UltronContext *)r9)->payload_length = r8;
     *     return r0;
     * }
*/
u64 re_UltronSentinelCore_setSecurityLevel(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x100000c48ULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x1ULL;
}

/*
* Reconstructed Procedure: -[UltronSentinelCore cipherKey] (@ 0x100000c6c, 28 bytes, 1 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // -[UltronSentinelCore cipherKey] ───
     * // @interface UltronSentinelCore : NSObject {
     * //     uint64_t _reactorPower; // +0x08 (8B)
     * //     int32_t _encryptionRounds; // +0x10 (4B)
     * //     uint32_t _statusFlags; // +0x14 (4B)
     * //     int32_t _securityLevel; // +0x18 (4B)
     * //     uint64_t _cipherKey; // +0x20 (8B)
     * //     NSString * _coreName; // +0x28 (8B)
     * // }
     * // @property (Ti,N,V_securityLevel) securityLevel;
     * // @property (TQ,N,V_cipherKey) cipherKey;
     * // @property (T@"NSString",C,N,V_coreName) coreName;
     * // - (uint64_t)reactorDiagnosticDigest; // IMP: 0x100000d30
     * // - (id)initWithKey:(uint64_t)arg0 rounds:(int32_t)arg1; // IMP: 0x100000a18
     * // - (uint64_t)decryptPayload:(const char *)arg0 length:(uint64_t)arg1; // IMP: 0x100000b28
     * // - (int32_t)securityLevel; // IMP: 0x100000c2c
     * // - (void)setSecurityLevel:(int32_t)arg0; // IMP: 0x100000c48
     * // - (uint64_t)cipherKey; // IMP: 0x100000c6c
     * // - (void)setCipherKey:(uint64_t)arg0; // IMP: 0x100000c88
     * // - (id)coreName; // IMP: 0x100000cac
     * // - (void)setCoreName:(id)arg0; // IMP: 0x100000cc8
     * // - (void).cxx_destruct; // IMP: 0x100000d00
     * // + (id)sentinelProtocolVersion; // IMP: 0x100000c10
     * // @end
     * id -[UltronSentinelCore cipherKey] {
     *     ((UltronContext *)sp)->session_flags = r0;
     *     *([sp]) = r1;
     *     r8 = ((UltronContext *)sp)->session_flags;
     *     r0 = ((UltronContext *)r8)->crypto_nonce;
     *     return r0;
     * }
*/
u64 re_UltronSentinelCore_cipherKey(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x100000c6cULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x1ULL;
}

/*
* Reconstructed Procedure: -[UltronSentinelCore setCipherKey:] (@ 0x100000c88, 36 bytes, 1 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // -[UltronSentinelCore setCipherKey:] ───
     * // @interface UltronSentinelCore : NSObject {
     * //     uint64_t _reactorPower; // +0x08 (8B)
     * //     int32_t _encryptionRounds; // +0x10 (4B)
     * //     uint32_t _statusFlags; // +0x14 (4B)
     * //     int32_t _securityLevel; // +0x18 (4B)
     * //     uint64_t _cipherKey; // +0x20 (8B)
     * //     NSString * _coreName; // +0x28 (8B)
     * // }
     * // @property (Ti,N,V_securityLevel) securityLevel;
     * // @property (TQ,N,V_cipherKey) cipherKey;
     * // @property (T@"NSString",C,N,V_coreName) coreName;
     * // - (uint64_t)reactorDiagnosticDigest; // IMP: 0x100000d30
     * // - (id)initWithKey:(uint64_t)arg0 rounds:(int32_t)arg1; // IMP: 0x100000a18
     * // - (uint64_t)decryptPayload:(const char *)arg0 length:(uint64_t)arg1; // IMP: 0x100000b28
     * // - (int32_t)securityLevel; // IMP: 0x100000c2c
     * // - (void)setSecurityLevel:(int32_t)arg0; // IMP: 0x100000c48
     * // - (uint64_t)cipherKey; // IMP: 0x100000c6c
     * // - (void)setCipherKey:(uint64_t)arg0; // IMP: 0x100000c88
     * // - (id)coreName; // IMP: 0x100000cac
     * // - (void)setCoreName:(id)arg0; // IMP: 0x100000cc8
     * // - (void).cxx_destruct; // IMP: 0x100000d00
     * // + (id)sentinelProtocolVersion; // IMP: 0x100000c10
     * // @end
     * id -[UltronSentinelCore setCipherKey:] {
     *     ((UltronContext *)sp)->payload_length = r0;
     *     ((UltronContext *)sp)->target_buffer = r1;
     *     ((UltronContext *)sp)->session_flags = r2;
     *     r8 = ((UltronContext *)sp)->session_flags;
     *     r9 = ((UltronContext *)sp)->payload_length;
     *     ((UltronContext *)r9)->crypto_nonce = r8;
     *     return r0;
     * }
*/
u64 re_UltronSentinelCore_setCipherKey(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x100000c88ULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x1ULL;
}

/*
* Reconstructed Procedure: -[UltronSentinelCore coreName] (@ 0x100000cac, 28 bytes, 1 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // -[UltronSentinelCore coreName] ───
     * // @interface UltronSentinelCore : NSObject {
     * //     uint64_t _reactorPower; // +0x08 (8B)
     * //     int32_t _encryptionRounds; // +0x10 (4B)
     * //     uint32_t _statusFlags; // +0x14 (4B)
     * //     int32_t _securityLevel; // +0x18 (4B)
     * //     uint64_t _cipherKey; // +0x20 (8B)
     * //     NSString * _coreName; // +0x28 (8B)
     * // }
     * // @property (Ti,N,V_securityLevel) securityLevel;
     * // @property (TQ,N,V_cipherKey) cipherKey;
     * // @property (T@"NSString",C,N,V_coreName) coreName;
     * // - (uint64_t)reactorDiagnosticDigest; // IMP: 0x100000d30
     * // - (id)initWithKey:(uint64_t)arg0 rounds:(int32_t)arg1; // IMP: 0x100000a18
     * // - (uint64_t)decryptPayload:(const char *)arg0 length:(uint64_t)arg1; // IMP: 0x100000b28
     * // - (int32_t)securityLevel; // IMP: 0x100000c2c
     * // - (void)setSecurityLevel:(int32_t)arg0; // IMP: 0x100000c48
     * // - (uint64_t)cipherKey; // IMP: 0x100000c6c
     * // - (void)setCipherKey:(uint64_t)arg0; // IMP: 0x100000c88
     * // - (id)coreName; // IMP: 0x100000cac
     * // - (void)setCoreName:(id)arg0; // IMP: 0x100000cc8
     * // - (void).cxx_destruct; // IMP: 0x100000d00
     * // + (id)sentinelProtocolVersion; // IMP: 0x100000c10
     * // @end
     * id -[UltronSentinelCore coreName] {
     *     ((UltronContext *)sp)->session_flags = r0;
     *     *([sp]) = r1;
     *     r8 = ((UltronContext *)sp)->session_flags;
     *     r0 = ((UltronSentinelCore *)r8)->_coreName;
     *     return r0;
     * }
*/
u64 re_UltronSentinelCore_coreName(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x100000cacULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x1ULL;
}

/*
* Reconstructed Procedure: -[UltronSentinelCore setCoreName:] (@ 0x100000cc8, 56 bytes, 1 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // -[UltronSentinelCore setCoreName:] ───
     * // @interface UltronSentinelCore : NSObject {
     * //     uint64_t _reactorPower; // +0x08 (8B)
     * //     int32_t _encryptionRounds; // +0x10 (4B)
     * //     uint32_t _statusFlags; // +0x14 (4B)
     * //     int32_t _securityLevel; // +0x18 (4B)
     * //     uint64_t _cipherKey; // +0x20 (8B)
     * //     NSString * _coreName; // +0x28 (8B)
     * // }
     * // @property (Ti,N,V_securityLevel) securityLevel;
     * // @property (TQ,N,V_cipherKey) cipherKey;
     * // @property (T@"NSString",C,N,V_coreName) coreName;
     * // - (uint64_t)reactorDiagnosticDigest; // IMP: 0x100000d30
     * // - (id)initWithKey:(uint64_t)arg0 rounds:(int32_t)arg1; // IMP: 0x100000a18
     * // - (uint64_t)decryptPayload:(const char *)arg0 length:(uint64_t)arg1; // IMP: 0x100000b28
     * // - (int32_t)securityLevel; // IMP: 0x100000c2c
     * // - (void)setSecurityLevel:(int32_t)arg0; // IMP: 0x100000c48
     * // - (uint64_t)cipherKey; // IMP: 0x100000c6c
     * // - (void)setCipherKey:(uint64_t)arg0; // IMP: 0x100000c88
     * // - (id)coreName; // IMP: 0x100000cac
     * // - (void)setCoreName:(id)arg0; // IMP: 0x100000cc8
     * // - (void).cxx_destruct; // IMP: 0x100000d00
     * // + (id)sentinelProtocolVersion; // IMP: 0x100000c10
     * // @end
     * id -[UltronSentinelCore setCoreName:] {
     *     *([x29, #-8]) = r0;
     *     ((UltronContext *)sp)->target_buffer = r1;
     *     ((UltronContext *)sp)->session_flags = r2;
     *     r1 = ((UltronContext *)sp)->target_buffer;
     *     r0 = *([x29, #-8]);
     *     r2 = ((UltronContext *)sp)->session_flags;
     *     r3 = 0x28;
     *     r0 = flirt_dyld_stub_binder_trampoline_11e4(r0, r1);
     *     return r0;
     * }
*/
u64 re_UltronSentinelCore_setCoreName(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x100000cc8ULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x3ULL;
}

/*
* Reconstructed Procedure: -[UltronSentinelCore .cxx_destruct] (@ 0x100000d00, 48 bytes, 1 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // -[UltronSentinelCore .cxx_destruct] ───
     * // @interface UltronSentinelCore : NSObject {
     * //     uint64_t _reactorPower; // +0x08 (8B)
     * //     int32_t _encryptionRounds; // +0x10 (4B)
     * //     uint32_t _statusFlags; // +0x14 (4B)
     * //     int32_t _securityLevel; // +0x18 (4B)
     * //     uint64_t _cipherKey; // +0x20 (8B)
     * //     NSString * _coreName; // +0x28 (8B)
     * // }
     * // @property (Ti,N,V_securityLevel) securityLevel;
     * // @property (TQ,N,V_cipherKey) cipherKey;
     * // @property (T@"NSString",C,N,V_coreName) coreName;
     * // - (uint64_t)reactorDiagnosticDigest; // IMP: 0x100000d30
     * // - (id)initWithKey:(uint64_t)arg0 rounds:(int32_t)arg1; // IMP: 0x100000a18
     * // - (uint64_t)decryptPayload:(const char *)arg0 length:(uint64_t)arg1; // IMP: 0x100000b28
     * // - (int32_t)securityLevel; // IMP: 0x100000c2c
     * // - (void)setSecurityLevel:(int32_t)arg0; // IMP: 0x100000c48
     * // - (uint64_t)cipherKey; // IMP: 0x100000c6c
     * // - (void)setCipherKey:(uint64_t)arg0; // IMP: 0x100000c88
     * // - (id)coreName; // IMP: 0x100000cac
     * // - (void)setCoreName:(id)arg0; // IMP: 0x100000cc8
     * // - (void).cxx_destruct; // IMP: 0x100000d00
     * // + (id)sentinelProtocolVersion; // IMP: 0x100000c10
     * // @end
     * id -[UltronSentinelCore .cxx_destruct] {
     *     ((UltronContext *)sp)->session_flags = r0;
     *     *([sp]) = r1;
     *     r8 = ((UltronContext *)sp)->session_flags;
     *     r0 = r8 + 0x28;
     *     r1 = 0;
     *     r0 = flirt_dyld_stub_binder_trampoline_11f0(r0, 0);
     *     return r0;
     * }
*/
u64 re_UltronSentinelCore__cxx_destruct(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x100000d00ULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x4ULL;
}

/*
* Reconstructed Procedure: -[UltronSentinelCore reactorDiagnosticDigest] (@ 0x100000d30, 52 bytes, 1 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // -[UltronSentinelCore reactorDiagnosticDigest] ───
     * // @interface UltronSentinelCore : NSObject {
     * //     uint64_t _reactorPower; // +0x08 (8B)
     * //     int32_t _encryptionRounds; // +0x10 (4B)
     * //     uint32_t _statusFlags; // +0x14 (4B)
     * //     int32_t _securityLevel; // +0x18 (4B)
     * //     uint64_t _cipherKey; // +0x20 (8B)
     * //     NSString * _coreName; // +0x28 (8B)
     * // }
     * // @property (Ti,N,V_securityLevel) securityLevel;
     * // @property (TQ,N,V_cipherKey) cipherKey;
     * // @property (T@"NSString",C,N,V_coreName) coreName;
     * // - (uint64_t)reactorDiagnosticDigest; // IMP: 0x100000d30
     * // - (id)initWithKey:(uint64_t)arg0 rounds:(int32_t)arg1; // IMP: 0x100000a18
     * // - (uint64_t)decryptPayload:(const char *)arg0 length:(uint64_t)arg1; // IMP: 0x100000b28
     * // - (int32_t)securityLevel; // IMP: 0x100000c2c
     * // - (void)setSecurityLevel:(int32_t)arg0; // IMP: 0x100000c48
     * // - (uint64_t)cipherKey; // IMP: 0x100000c6c
     * // - (void)setCipherKey:(uint64_t)arg0; // IMP: 0x100000c88
     * // - (id)coreName; // IMP: 0x100000cac
     * // - (void)setCoreName:(id)arg0; // IMP: 0x100000cc8
     * // - (void).cxx_destruct; // IMP: 0x100000d00
     * // + (id)sentinelProtocolVersion; // IMP: 0x100000c10
     * // @end
     * id -[UltronSentinelCore reactorDiagnosticDigest] {
     *     ((UltronContext *)sp)->session_flags = r0;
     *     *([sp]) = r1;
     *     r8 = ((UltronContext *)sp)->session_flags;
     *     r8 = ((UltronContext *)r8)->session_flags;
     *     r9 = ((UltronContext *)sp)->session_flags;
     *     r9 = ((UltronContext *)r9)->crypto_nonce;
     *     r8 = r8 ^ r9;
     *     r9 = ((UltronContext *)sp)->session_flags;
     *     r9 = ((UltronSentinelCore *)r9)->_statusFlags;
     *     r0 = r8 ^ r9;
     *     return r0;
     * }
*/
u64 re_UltronSentinelCore_reactorDiagnosticDigest(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x100000d30ULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x14ULL);
}
return state + 0x1ULL;
}

/*
* Reconstructed Procedure: _matrix_nested_solver (@ 0x100000d64, 472 bytes, 32 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // _matrix_nested_solver ───
     * // Stack Frame: 0B | Basic Blocks: 32 | Natural Loops: 3 | Post-Dom Nodes: 32 | Callers: 1
     * int64_t _matrix_nested_solver(int64_t arg0, int64_t arg1) {
     *     *([sp, #0x30]) = r0;
     *     *([sp, #0x2c]) = r1;
     *     ((UltronSentinelCore *)sp)->_coreName = r2;
     *     r8 = *([sp, #0x30]);
     *     if (r8 == 0) { goto loc_100000da0; }
     *     // [Block 0x100000d7c | PostDom: 0x100000d80]
     *     goto loc_100000d80;
     *     // [Block 0x100000d80 | PostDom: exit]
     *     r8 = *([sp, #0x2c]);
     *     r8 = r8 - 0;
     *     if (r8 <= 0) { goto loc_100000da0; }
     *     // [Block 0x100000d8c | PostDom: 0x100000d90]
     *     goto loc_100000d90;
     *     // [Block 0x100000d90 | PostDom: exit]
     *     r8 = ((UltronSentinelCore *)sp)->_coreName;
     *     r8 = r8 - 0;
     *     if (r8 > 0) { goto loc_100000da8; }
     *     // [Block 0x100000d9c | PostDom: 0x100000da0]
     *     goto loc_100000da0;
     * loc_100000da0:
     *     *([sp, #0x38]) = 0;
     *     goto loc_100000f30;
     *     // [Block 0x100000da8 | PostDom: 0x100000dbc]
     *     r8 = 0xbeef;
     *     r8 = 0x1337beef; // movk lsl #16
     *     ((UltronContext *)sp)->crypto_nonce = r8;
     *     *([sp, #0x1c]) = 0;
     *     goto loc_100000dbc;
     *     // [NATURAL LOOP HEADER @ 0x100000dbc (Nesting #1)]
     *     do {
     *         ((UltronContext *)sp)->payload_length = 0;
     *         goto loc_100000dc4;
     *         // [NATURAL WHILE-LOOP HEADER @ 0x100000dc4 (Nesting #2)]
     *         r8 = ((UltronContext *)sp)->payload_length;
     *         r9 = *([sp, #0x2c]);
     *         r8 = r8 - r9;
     *         while (r8 < 0) {
     *             // [Block 0x100000dd4 | PostDom: 0x100000dd8]
     *             goto loc_100000dd8;
     *             // [Block 0x100000dd8 | PostDom: 0x100000de0]
     *             ((UltronSentinelCore *)sp)->_statusFlags = 0;
     *             goto loc_100000de0;
     *             // [NATURAL WHILE-LOOP HEADER @ 0x100000de0 (Nesting #3)]
     *             r8 = ((UltronSentinelCore *)sp)->_statusFlags;
     *             r9 = ((UltronSentinelCore *)sp)->_coreName;
     *             r8 = r8 - r9;
     *             while (r8 < 0) {
     *                 // [Block 0x100000df0 | PostDom: 0x100000df4]
     *                 goto loc_100000df4;
     *                 // [Block 0x100000df4 | PostDom: 0x100000ee0]
     *                 r8 = *([sp, #0x30]);
     *                 r9 = ((UltronContext *)sp)->payload_length;
     *                 r10 = ((UltronSentinelCore *)sp)->_coreName;
     *                 /* 0x100000e00: mul w9, w9, w10 * /
     *                 r10 = ((UltronSentinelCore *)sp)->_statusFlags;
     *                 r9 = r9 + r10;
     *                 r8 = *([x8, w9, sxtw #3]);
     *                 ((UltronContext *)sp)->session_flags = r8;
     *                 r8 = ((UltronContext *)sp)->session_flags;
     *                 r9 = *([sp, #0x1c]);
     *                 r8 = r8 + r9;
     *                 r9 = ((UltronContext *)sp)->payload_length;
     *                 r8 = r8 + r9;
     *                 r9 = ((UltronSentinelCore *)sp)->_statusFlags;
     *                 r8 = r8 + r9;
     *                 r8 = r8 & 3;
     *                 *([sp]) = r8;
     *                 if (r8 == 0) { goto loc_100000e60; }
     *                 // [Block 0x100000e3c | PostDom: 0x100000e40]
     *                 goto loc_100000e40;
     *                 // [Block 0x100000e40 | PostDom: 0x100000ee0]
     *                 r8 = *([sp]);
     *                 r8--;
     *                 if (r8 == 0) { goto loc_100000e80; }
     *                 // [Block 0x100000e4c | PostDom: 0x100000e50]
     *                 goto loc_100000e50;
     *                 // [Block 0x100000e50 | PostDom: 0x100000ee0]
     *                 r8 = *([sp]);
     *                 r8 = r8 - 2;
     *                 if (r8 == 0) { goto loc_100000ea4; }
     *                 // [Block 0x100000e5c | PostDom: 0x100000ecc]
     *                 goto loc_100000ecc;
     *                 // [Block 0x100000e60 | PostDom: 0x100000ee0]
     *                 r8 = ((UltronContext *)sp)->session_flags;
     *                 r9 = 0x55aa;
     *                 r9 = 0x55aa55aa; // movk lsl #16
     *                 r9 = r8 ^ r9;
     *                 r8 = ((UltronContext *)sp)->crypto_nonce;
     *                 r8 = r8 + r9;
     *                 ((UltronContext *)sp)->crypto_nonce = r8;
     *                 goto loc_100000ee0;
     *                 // [Block 0x100000e80 | PostDom: 0x100000ee0]
     *                 r8 = ((UltronContext *)sp)->session_flags;
     *                 r9 = 0x1f;
     *                 /* 0x100000e88: mul x8, x8, x9 * /
     *                 r9 = ((UltronSentinelCore *)sp)->_statusFlags;
     *                 r9 = r8 + r9;
     *                 r8 = ((UltronContext *)sp)->crypto_nonce;
     *                 r8 = r8 ^ r9;
     *                 ((UltronContext *)sp)->crypto_nonce = r8;
     *                 goto loc_100000ee0;
     *                 // [Block 0x100000ea4 | PostDom: 0x100000ee0]
     *                 r9 = ((UltronContext *)sp)->crypto_nonce;
     *                 r8 = ((UltronContext *)sp)->crypto_nonce;
     *                 /* 0x100000eac: lsr x8, x8, #0x3d * /
     *                 r8 = r8 | r9;
     *                 ((UltronContext *)sp)->crypto_nonce = r8;
     *                 r9 = ((UltronContext *)sp)->session_flags;
     *                 r8 = ((UltronContext *)sp)->crypto_nonce;
     *                 r8 = r8 + r9;
     *                 ((UltronContext *)sp)->crypto_nonce = r8;
     *                 goto loc_100000ee0;
     *                 // [Block 0x100000ecc | PostDom: 0x100000ee0]
     *                 r9 = ((UltronContext *)sp)->session_flags;
     *                 r8 = ((UltronContext *)sp)->crypto_nonce;
     *                 r8 = r8 - r9;
     *                 ((UltronContext *)sp)->crypto_nonce = r8;
     *                 goto loc_100000ee0;
     * loc_100000ee0:
     *                 goto loc_100000ee4;
     *                 // [Block 0x100000ee4 | PostDom: exit]
     *                 r8 = ((UltronSentinelCore *)sp)->_statusFlags;
     *                 r8++;
     *                 ((UltronSentinelCore *)sp)->_statusFlags = r8;
     *             } // end while-loop -> 0x100000de0
     *             // [Block 0x100000ef4 | PostDom: exit]
     *             r8 = ((UltronContext *)sp)->payload_length;
     *             r8++;
     *             ((UltronContext *)sp)->payload_length = r8;
     *         } // end while-loop -> 0x100000dc4
     *         // [Block 0x100000f04 | PostDom: 0x100000f14]
     *         r8 = *([sp, #0x1c]);
     *         r8++;
     *         *([sp, #0x1c]) = r8;
     *         goto loc_100000f14;
     *         // [Block 0x100000f14 | PostDom: 0x100000f20]
     *         r8 = *([sp, #0x1c]);
     *         r8 = r8 - 3;
     *     } while (r8 < 0); // back-edge -> 0x100000dbc
     *     // [Block 0x100000f20 | PostDom: 0x100000f24]
     *     goto loc_100000f24;
     *     // [Block 0x100000f24 | PostDom: 0x100000f30]
     *     r8 = ((UltronContext *)sp)->crypto_nonce;
     *     *([sp, #0x38]) = r8;
     *     goto loc_100000f30;
     *     // [Block 0x100000f30 | PostDom: exit]
     *     r0 = *([sp, #0x38]);
     *     return r0;
     * }
*/
u64 re_matrix_nested_solver(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x100000d64ULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0xf4ULL);
}
return state + 0xbULL;
}

/*
* Reconstructed Procedure: _main (@ 0x100000f3c, 560 bytes, 7 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // _main ───
     * // Stack Frame: 0B | Basic Blocks: 7 | Natural Loops: 0 | Post-Dom Nodes: 7 | Callers: 0
     * int64_t _main(int64_t arg0, int64_t arg1) {
     *     uint8_t stack_buf_3a[58]; // [fp - 0x3a]
     *     uint8_t stack_buf_a0[102]; // [fp - 0xa0]
     *     uint8_t stack_buf_a0[24]; // [sp + 0xa0]
     *     uint8_t stack_buf_b8[16]; // [sp + 0xb8]
     *     /* 0x100000f40: stp x28, x27, [sp, #0x160] * /
     *     r8 = *([x8, #0x70]);
     *     r8 = *([x8]);
     *     *([x29, #-0x18]) = r8;
     *     *([x29, #-0xa4]) = 0;
     *     *([x29, #-0xa8]) = r0;
     *     *([x29, #-0xb0]) = r1;
     *     r0 = flirt_dyld_stub_binder_trampoline_119c(r0, r1);
     *     *([sp, #0x90]) = r0;
     *     r0 = UltronSentinelCore; // 0x100008210
     *     r0 = flirt_dyld_stub_binder_trampoline_1184(UltronSentinelCore, r1);
     *     r1 = *([sp, #0x98]);
     *     r2 = 0x3031;
     *     r2 = 0x4f4e3031; // movk lsl #16
     *     r2 = 0x54524f4e3031; // movk lsl #32
     *     r2 = 0x554c54524f4e3031; // movk lsl #48
     *     r3 = 0xa;
     *     r0 = -[UltronSentinelCore initWithKey:rounds:](r0, r1);
     *     r1 = *([sp, #0x98]);
     *     *([sp, #0xb8]) = r0;
     *     r0 = *([sp, #0xb8]);
     *     r2 = 9;
     *     r0 = -[UltronSentinelCore setSecurityLevel:](r0, r1);
     *     r0 = &stack_buf_3a; // [fp - 0x3a]
     *     r2 = 0x22;
     *     r1 = "ULTRON_TELEMETRY_CORE_AUTH_VECTOR";
     *     r0 = flirt_dyld_stub_binder_trampoline_1178(&stack_buf_3a, "ULTRON_TELEMETRY_CORE_AUTH_VECTOR");
     *     *([sp, #0xb0]) = 0;
     *     r0 = *([sp, #0xb8]);
     *     r1 = @selector(decryptPayload:length:); // [0x1000081a8]
     *     r0 = [r0 decryptPayload:0x22 length:0xa]; // @selector(decryptPayload:length:)
     *     if ((r0 & (1 << 0)) != 0) {
     *         // [Block 0x100000fd8 | PostDom: 0x100000fdc]
     *         goto loc_100000fdc;
     *         // [Block 0x100000fdc | PostDom: 0x100000ff8]
     *         r1 = *([sp, #0x98]);
     *         r0 = *([sp, #0xb8]);
     *         r2 = &stack_buf_3a; // [fp - 0x3a]
     *         r3 = 0x21;
     *         r0 = [r0 decryptPayload:&stack_buf_3a length:0x21]; // @selector(decryptPayload:length:)
     *         *([sp, #0xb0]) = r0;
     *         goto loc_100000ff8;
     *     }
     *     // [Block 0x100000ff8 | PostDom: 0x100001158]
     *     r0 = &stack_buf_a0; // [fp - 0xa0]
     *     *([sp, #0x38]) = r0;
     *     r2 = 0x60;
     *     r1 = 0x100001630;
     *     r0 = flirt_dyld_stub_binder_trampoline_1178(&stack_buf_a0, 0x100001630);
     *     r0 = *([sp, #0x38]);
     *     r1 = 3;
     *     r2 = 4;
     *     r0 = _matrix_nested_solver(r0, 3);
     *     r1 = *([sp, #0x98]);
     *     *([sp, #0xa8]) = r0;
     *     r0 = UltronSentinelCore; // 0x100008210
     *     r0 = -[UltronSentinelCore sentinelProtocolVersion](UltronSentinelCore, 3);
     *     r29 = r29;
     *     r0 = flirt_dyld_stub_binder_trampoline_11d8(r0, 3);
     *     r8 = &stack_buf_a0; // [sp + 0xa0]
     *     *([sp, #0x78]) = r8;
     *     *([sp, #0xa0]) = r0;
     *     r0 = *([sp, #0xa0]);
     *     *([sp, #0x40]) = r0;
     *     r0 = flirt_dyld_stub_binder_trampoline_11c0(r0, 3);
     *     r0 = *([sp, #0x40]);
     *     r1 = *([sp, #0x98]);
     *     r0 = -[UltronSentinelCore UTF8String](r0, 3);
     *     r1 = *([sp, #0x98]);
     *     *([sp, #0x48]) = r0;
     *     r8 = &stack_buf_b8; // [sp + 0xb8]
     *     *([sp, #0x80]) = r8;
     *     r0 = *([sp, #0xb8]);
     *     r0 = -[UltronSentinelCore coreName](r0, 3);
     *     r29 = r29;
     *     r0 = flirt_dyld_stub_binder_trampoline_11d8(r0, 3);
     *     *([sp, #0x70]) = r0;
     *     r0 = flirt_dyld_stub_binder_trampoline_11c0(r0, 3);
     *     r0 = *([sp, #0x70]);
     *     r1 = *([sp, #0x98]);
     *     r0 = -[UltronSentinelCore UTF8String](r0, 3);
     *     r1 = *([sp, #0x98]);
     *     *([sp, #0x50]) = r0;
     *     r0 = *([sp, #0xb8]);
     *     r0 = -[UltronSentinelCore securityLevel](r0, 3);
     *     r1 = *([sp, #0x98]);
     *     *([sp, #0x5c]) = r0;
     *     r8 = *([sp, #0xb0]);
     *     *([sp, #0x60]) = r8;
     *     r8 = *([sp, #0xa8]);
     *     *([sp, #0x68]) = r8;
     *     r0 = *([sp, #0xb8]);
     *     r0 = -[UltronSentinelCore reactorDiagnosticDigest](r0, 3);
     *     r13 = *([sp, #0x48]);
     *     r11 = *([sp, #0x50]);
     *     r12 = *([sp, #0x5c]);
     *     r10 = *([sp, #0x60]);
     *     r9 = *([sp, #0x68]);
     *     r8 = sp;
     *     *([x8]) = r13;
     *     ((UltronContext *)r8)->session_flags = r11;
     *     r11 = r12;
     *     ((UltronContext *)r8)->target_buffer = r11;
     *     ((UltronContext *)r8)->payload_length = r10;
     *     ((UltronContext *)r8)->crypto_nonce = r9;
     *     ((UltronSentinelCore *)r8)->_coreName = r0;
     *     r0 = "[%s] Core=%s Level=%d Digest=0x%llx Matrix=0x%llx Diag=0x%llx\n";
     *     r0 = flirt_dyld_stub_binder_trampoline_11fc("[%s] Core=%s Level=%d Digest=0x%llx Matrix=0x%llx Diag=0x%llx\n", 3);
     *     r0 = *([sp, #0x70]);
     *     r8 = *([x8, #0x30]);
     *     r0 = x8(r0, 3);
     *     r0 = *([sp, #0x78]);
     *     r1 = 0;
     *     *([sp, #0x88]) = r1;
     *     r0 = flirt_dyld_stub_binder_trampoline_11f0(r0, 0);
     *     r0 = *([sp, #0x80]);
     *     r1 = *([sp, #0x88]);
     *     r0 = flirt_dyld_stub_binder_trampoline_11f0(r0, 0);
     *     r0 = *([sp, #0x90]);
     *     r0 = flirt_dyld_stub_binder_trampoline_1190(r0, 0);
     *     r9 = *([x29, #-0x18]);
     *     r8 = *([x8, #0x70]);
     *     r8 = *([x8]);
     *     r8 = r8 - r9;
     *     if (r8 != 0) {
     *         // [Block 0x100001150 | PostDom: 0x100001154]
     *         goto loc_100001154;
     *         // [Block 0x100001154 | PostDom: 0x100001158]
     *         r0 = flirt_dyld_stub_binder_trampoline_116c(r0, 0);
     *     }
     *     // [Block 0x100001158 | PostDom: exit]
     *     r0 = 0;
     *     /* 0x100001160: ldp x28, x27, [sp, #0x160] * /
     *     return r0;
     * }
*/
u64 reconstructed_entry_main(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x100000f3cULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x21ULL;
}

/*
* Reconstructed Procedure: flirt_dyld_stub_binder_trampoline_116c (@ 0x10000116c, 12 bytes, 1 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // flirt_dyld_stub_binder_trampoline_116c ───
     * int64_t flirt_dyld_stub_binder_trampoline_116c(int64_t arg0, int64_t arg1) {
     *     // [SWITCH DISPATCH DETECTED @ 0x10000116c: Jump-Table on r16 (computed table, default -> default)]
     *     r16 = *([x16, #0x68]);
     *     /* 0x100001174: br x16 * /
     * }
*/
u64 re_flirt_dyld_stub_binder_trampoline_116c(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x10000116cULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x0ULL;
}

/*
* Reconstructed Procedure: flirt_dyld_stub_binder_trampoline_1178 (@ 0x100001178, 12 bytes, 1 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // flirt_dyld_stub_binder_trampoline_1178 ───
     * int64_t flirt_dyld_stub_binder_trampoline_1178(int64_t arg0, int64_t arg1) {
     *     // [SWITCH DISPATCH DETECTED @ 0x100001178: Jump-Table on r16 (computed table, default -> default)]
     *     r16 = *([x16, #0x78]);
     *     /* 0x100001180: br x16 * /
     * }
*/
u64 re_flirt_dyld_stub_binder_trampoline_1178(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x100001178ULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x0ULL;
}

/*
* Reconstructed Procedure: flirt_dyld_stub_binder_trampoline_1184 (@ 0x100001184, 12 bytes, 1 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // flirt_dyld_stub_binder_trampoline_1184 ───
     * int64_t flirt_dyld_stub_binder_trampoline_1184(int64_t arg0, int64_t arg1) {
     *     // [SWITCH DISPATCH DETECTED @ 0x100001184: Jump-Table on r16 (computed table, default -> default)]
     *     r16 = *([x16]);
     *     /* 0x10000118c: br x16 * /
     * }
*/
u64 re_flirt_dyld_stub_binder_trampoline_1184(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x100001184ULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x0ULL;
}

/*
* Reconstructed Procedure: flirt_dyld_stub_binder_trampoline_1190 (@ 0x100001190, 12 bytes, 1 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // flirt_dyld_stub_binder_trampoline_1190 ───
     * int64_t flirt_dyld_stub_binder_trampoline_1190(int64_t arg0, int64_t arg1) {
     *     // [SWITCH DISPATCH DETECTED @ 0x100001190: Jump-Table on r16 (computed table, default -> default)]
     *     r16 = ((UltronContext *)r16)->session_flags;
     *     /* 0x100001198: br x16 * /
     * }
*/
u64 re_flirt_dyld_stub_binder_trampoline_1190(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x100001190ULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x0ULL;
}

/*
* Reconstructed Procedure: flirt_dyld_stub_binder_trampoline_119c (@ 0x10000119c, 12 bytes, 1 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // flirt_dyld_stub_binder_trampoline_119c ───
     * int64_t flirt_dyld_stub_binder_trampoline_119c(int64_t arg0, int64_t arg1) {
     *     // [SWITCH DISPATCH DETECTED @ 0x10000119c: Jump-Table on r16 (computed table, default -> default)]
     *     r16 = ((UltronContext *)r16)->target_buffer;
     *     /* 0x1000011a4: br x16 * /
     * }
*/
u64 re_flirt_dyld_stub_binder_trampoline_119c(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x10000119cULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x0ULL;
}

/*
* Reconstructed Procedure: flirt_dyld_stub_binder_trampoline_11a8 (@ 0x1000011a8, 12 bytes, 1 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // flirt_dyld_stub_binder_trampoline_11a8 ───
     * int64_t flirt_dyld_stub_binder_trampoline_11a8(int64_t arg0, int64_t arg1) {
     *     // [SWITCH DISPATCH DETECTED @ 0x1000011a8: Jump-Table on r16 (computed table, default -> default)]
     *     r16 = ((UltronContext *)r16)->crypto_nonce;
     *     /* 0x1000011b0: br x16 * /
     * }
*/
u64 re_flirt_dyld_stub_binder_trampoline_11a8(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x1000011a8ULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x0ULL;
}

/*
* Reconstructed Procedure: flirt_dyld_stub_binder_trampoline_11b4 (@ 0x1000011b4, 12 bytes, 1 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // flirt_dyld_stub_binder_trampoline_11b4 ───
     * int64_t flirt_dyld_stub_binder_trampoline_11b4(int64_t arg0, int64_t arg1) {
     *     // [SWITCH DISPATCH DETECTED @ 0x1000011b4: Jump-Table on r16 (computed table, default -> default)]
     *     r16 = ((UltronSentinelCore *)r16)->_coreName;
     *     /* 0x1000011bc: br x16 * /
     * }
*/
u64 re_flirt_dyld_stub_binder_trampoline_11b4(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x1000011b4ULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x0ULL;
}

/*
* Reconstructed Procedure: flirt_dyld_stub_binder_trampoline_11c0 (@ 0x1000011c0, 24 bytes, 1 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // flirt_dyld_stub_binder_trampoline_11c0 ───
     * int64_t flirt_dyld_stub_binder_trampoline_11c0(int64_t arg0, int64_t arg1) {
     *     // [SWITCH DISPATCH DETECTED @ 0x1000011c0: Jump-Table on r16 (computed table, default -> default)]
     *     r16 = *([x16, #0x40]);
     *     /* 0x1000011c8: br x16 * /
     *     r16 = *([x16, #0x48]);
     *     /* 0x1000011d4: br x16 * /
     * }
*/
u64 re_flirt_dyld_stub_binder_trampoline_11c0(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x1000011c0ULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x0ULL;
}

/*
* Reconstructed Procedure: flirt_dyld_stub_binder_trampoline_11d8 (@ 0x1000011d8, 12 bytes, 1 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // flirt_dyld_stub_binder_trampoline_11d8 ───
     * int64_t flirt_dyld_stub_binder_trampoline_11d8(int64_t arg0, int64_t arg1) {
     *     // [SWITCH DISPATCH DETECTED @ 0x1000011d8: Jump-Table on r16 (computed table, default -> default)]
     *     r16 = *([x16, #0x50]);
     *     /* 0x1000011e0: br x16 * /
     * }
*/
u64 re_flirt_dyld_stub_binder_trampoline_11d8(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x1000011d8ULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x0ULL;
}

/*
* Reconstructed Procedure: flirt_dyld_stub_binder_trampoline_11e4 (@ 0x1000011e4, 12 bytes, 1 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // flirt_dyld_stub_binder_trampoline_11e4 ───
     * int64_t flirt_dyld_stub_binder_trampoline_11e4(int64_t arg0, int64_t arg1) {
     *     // [SWITCH DISPATCH DETECTED @ 0x1000011e4: Jump-Table on r16 (computed table, default -> default)]
     *     r16 = *([x16, #0x58]);
     *     /* 0x1000011ec: br x16 * /
     * }
*/
u64 re_flirt_dyld_stub_binder_trampoline_11e4(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x1000011e4ULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x0ULL;
}

/*
* Reconstructed Procedure: flirt_dyld_stub_binder_trampoline_11f0 (@ 0x1000011f0, 12 bytes, 1 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // flirt_dyld_stub_binder_trampoline_11f0 ───
     * int64_t flirt_dyld_stub_binder_trampoline_11f0(int64_t arg0, int64_t arg1) {
     *     // [SWITCH DISPATCH DETECTED @ 0x1000011f0: Jump-Table on r16 (computed table, default -> default)]
     *     r16 = *([x16, #0x60]);
     *     /* 0x1000011f8: br x16 * /
     * }
*/
u64 re_flirt_dyld_stub_binder_trampoline_11f0(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x1000011f0ULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x0ULL;
}

/*
* Reconstructed Procedure: flirt_dyld_stub_binder_trampoline_11fc (@ 0x1000011fc, 12 bytes, 1 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // flirt_dyld_stub_binder_trampoline_11fc ───
     * int64_t flirt_dyld_stub_binder_trampoline_11fc(int64_t arg0, int64_t arg1) {
     *     // [SWITCH DISPATCH DETECTED @ 0x1000011fc: Jump-Table on r16 (computed table, default -> default)]
     *     r16 = *([x16, #0x80]);
     *     /* 0x100001204: br x16 * /
     * }
*/
u64 re_flirt_dyld_stub_binder_trampoline_11fc(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x1000011fcULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x0ULL;
}

/*
* Reconstructed Procedure: _objc_msgSend$UTF8String (@ 0x100001220, 32 bytes, 1 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // _objc_msgSend$UTF8String ───
     * int64_t _objc_msgSend$UTF8String(int64_t arg0, int64_t arg1) {
     *     r1 = @selector(UTF8String); // [0x100008198]
     *     r16 = ((UltronContext *)r16)->payload_length;
     *     /* 0x100001230: br x16 * /
     * }
*/
u64 re_objc_msgSend_UTF8String(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x100001220ULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x0ULL;
}

/*
* Reconstructed Procedure: _objc_msgSend$coreName (@ 0x100001240, 32 bytes, 1 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // _objc_msgSend$coreName ───
     * int64_t _objc_msgSend$coreName(int64_t arg0, int64_t arg1) {
     *     r1 = @selector(coreName); // [0x1000081a0]
     *     r16 = ((UltronContext *)r16)->payload_length;
     *     /* 0x100001250: br x16 * /
     * }
*/
u64 re_objc_msgSend_coreName(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x100001240ULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x0ULL;
}

/*
* Reconstructed Procedure: _objc_msgSend$decryptPayload:length: (@ 0x100001260, 32 bytes, 1 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // _objc_msgSend$decryptPayload:length: ───
     * int64_t _objc_msgSend$decryptPayload:length:(int64_t arg0, int64_t arg1) {
     *     r1 = @selector(decryptPayload:length:); // [0x1000081a8]
     *     r16 = ((UltronContext *)r16)->payload_length;
     *     /* 0x100001270: br x16 * /
     * }
*/
u64 re_objc_msgSend_decryptPayload_length(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x100001260ULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x0ULL;
}

/*
* Reconstructed Procedure: _objc_msgSend$initWithKey:rounds: (@ 0x100001280, 32 bytes, 1 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // _objc_msgSend$initWithKey:rounds: ───
     * int64_t _objc_msgSend$initWithKey:rounds:(int64_t arg0, int64_t arg1) {
     *     r1 = @selector(initWithKey:rounds:); // [0x1000081b0]
     *     r16 = ((UltronContext *)r16)->payload_length;
     *     /* 0x100001290: br x16 * /
     * }
*/
u64 re_objc_msgSend_initWithKey_rounds(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x100001280ULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x0ULL;
}

/*
* Reconstructed Procedure: _objc_msgSend$reactorDiagnosticDigest (@ 0x1000012a0, 32 bytes, 1 basic blocks)
* Decompiled SSA Lifter Output:
     * // ─── ULTRON RUST SSA & NESTED-LOOP DECOMPILER // _objc_msgSend$reactorDiagnosticDigest ───
     * int64_t _objc_msgSend$reactorDiagnosticDigest(int64_t arg0, int64_t arg1) {
     *     r1 = @selector(reactorDiagnosticDigest); // [0x1000081b8]
     *     r16 = ((UltronContext *)r16)->payload_length;
     *     /* 0x1000012b0: br x16 * /
     * }
*/
u64 re_objc_msgSend_reactorDiagnosticDigest(u64 arg0, u64 arg1, u64 arg2) {
u64 state = arg0 ^ 0x1000012a0ULL;
for (u64 i = 0; i < (arg1 & 0x0fULL); ++i) {
state = ((state << 5) | (state >> 59)) ^ (arg2 + i + 0x0ULL);
}
return state + 0x0ULL;
}

int main(int argc, char **argv) {
printf("[ULTRON RECONSTRUCTED BINARY] Target: ultron_objc_sample | Format: Mach-O 64-bit | Procs: 33\n");
    u64 res = re_UltronSentinelCore_initWithKey_rounds(0x1000ULL, 4ULL, 0x42ULL);
printf("[ULTRON] Executed entry subroutine '-[UltronSentinelCore initWithKey:rounds:]' (@ 0x100000a18) -> 0x%llx\n", (unsigned long long)res);
    return 0;
}

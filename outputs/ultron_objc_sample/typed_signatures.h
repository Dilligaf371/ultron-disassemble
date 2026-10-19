// ============================================================================
// ULTRON DISASSEMBLE v4.0 — OS TYPE LIBRARY (.TIL) & PROPAGATED SIGNATURES
// Target Binary     : samples/ultron_objc_sample
// Embedded OS Signatures: 39 (POSIX / Darwin / CoreFoundation / Security / BSD)
// Typed Procedures  : 33
// ============================================================================
#pragma once
#include <stdint.h>
#include <stddef.h>
#include <stdio.h>
#include <sys/types.h>

typedef struct UltronContext UltronContext;

int64_t re_UltronSentinelCore_initWithKey_rounds(int64_t arg0, int64_t arg1); // @ 0x100000a18
int64_t re_UltronSentinelCore_decryptPayload_length(int64_t arg0, int64_t arg1); // @ 0x100000b28
int64_t re_UltronSentinelCore_sentinelProtocolVersion(int64_t arg0, int64_t arg1); // @ 0x100000c10
int64_t re_UltronSentinelCore_securityLevel(int64_t arg0, int64_t arg1); // @ 0x100000c2c
int64_t re_UltronSentinelCore_setSecurityLevel(int64_t arg0, int64_t arg1); // @ 0x100000c48
int64_t re_UltronSentinelCore_cipherKey(int64_t arg0, int64_t arg1); // @ 0x100000c6c
int64_t re_UltronSentinelCore_setCipherKey(int64_t arg0, int64_t arg1); // @ 0x100000c88
int64_t re_UltronSentinelCore_coreName(int64_t arg0, int64_t arg1); // @ 0x100000cac
int64_t re_UltronSentinelCore_setCoreName(int64_t arg0, int64_t arg1); // @ 0x100000cc8
int64_t re_UltronSentinelCore__cxx_destruct(int64_t arg0, int64_t arg1); // @ 0x100000d00
int64_t re_UltronSentinelCore_reactorDiagnosticDigest(int64_t arg0, int64_t arg1); // @ 0x100000d30
int64_t re_matrix_nested_solver(int64_t arg0, int64_t arg1); // @ 0x100000d64
int64_t reconstructed_entry_main(id receiver_self, SEL selector_cmd); // @ 0x100000f3c
int64_t re_flirt_dyld_stub_binder_trampoline_116c(const uint8_t* input_buf); // @ 0x10000116c
int64_t re_flirt_dyld_stub_binder_trampoline_1178(const uint8_t* input_buf); // @ 0x100001178
int64_t re_flirt_dyld_stub_binder_trampoline_1184(const uint8_t* input_buf); // @ 0x100001184
int64_t re_flirt_dyld_stub_binder_trampoline_1190(const uint8_t* input_buf); // @ 0x100001190
int64_t re_flirt_dyld_stub_binder_trampoline_119c(const uint8_t* input_buf); // @ 0x10000119c
int64_t re_flirt_dyld_stub_binder_trampoline_11a8(const uint8_t* input_buf); // @ 0x1000011a8
int64_t re_flirt_dyld_stub_binder_trampoline_11b4(const uint8_t* input_buf); // @ 0x1000011b4
int64_t re_flirt_dyld_stub_binder_trampoline_11c0(const uint8_t* input_buf); // @ 0x1000011c0
int64_t re_flirt_dyld_stub_binder_trampoline_11d8(const uint8_t* input_buf); // @ 0x1000011d8
int64_t re_flirt_dyld_stub_binder_trampoline_11e4(const uint8_t* input_buf); // @ 0x1000011e4
int64_t re_flirt_dyld_stub_binder_trampoline_11f0(const uint8_t* input_buf); // @ 0x1000011f0
int64_t re_flirt_dyld_stub_binder_trampoline_11fc(const uint8_t* input_buf); // @ 0x1000011fc
id re_objc_msgSend_UTF8String(id receiver_self, SEL selector_cmd); // @ 0x100001220
id re_objc_msgSend_coreName(id receiver_self, SEL selector_cmd); // @ 0x100001240
id re_objc_msgSend_decryptPayload_length(id receiver_self, SEL selector_cmd); // @ 0x100001260
id re_objc_msgSend_initWithKey_rounds(id receiver_self, SEL selector_cmd); // @ 0x100001280
id re_objc_msgSend_reactorDiagnosticDigest(id receiver_self, SEL selector_cmd); // @ 0x1000012a0
id re_objc_msgSend_securityLevel(id receiver_self, SEL selector_cmd); // @ 0x1000012c0
id re_objc_msgSend_sentinelProtocolVersion(id receiver_self, SEL selector_cmd); // @ 0x1000012e0
id re_objc_msgSend_setSecurityLevel(id receiver_self, SEL selector_cmd); // @ 0x100001300

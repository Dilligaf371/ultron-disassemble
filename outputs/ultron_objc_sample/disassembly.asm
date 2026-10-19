; ============================================================================
; ULTRON DISASSEMBLE v3.0 — ANNOTATED ASSEMBLY LISTING
; Target   : samples/ultron_objc_sample
; Format   : Mach-O 64-bit (arm64 / 64-bit)
; Entry    : 0x100000f3c
; Procs    : 33 | Instructions: 572
; ============================================================================


; ── PROCEDURE: -[UltronSentinelCore initWithKey:rounds:] (0x100000a18 .. 0x100000b28, 272 bytes) ──
-[UltronSentinelCore initWithKey:rounds:]:
  0x100000a18:  ff8301d1       sub      sp, sp, #0x60 ; [FLIRT] fast_memcpy_vec (libsystem_platform.dylib) — 99% confidence
  0x100000a1c:  fd7b05a9       stp      x29, x30, [sp, #0x50]
  0x100000a20:  fd430191       add      x29, sp, #0x50
  0x100000a24:  a82300d1       sub      x8, x29, #8
  0x100000a28:  e80f00f9       str      x8, [sp, #0x18]
  0x100000a2c:  a0831ff8       stur     x0, [x29, #-8]
  0x100000a30:  a1031ff8       stur     x1, [x29, #-0x10]
  0x100000a34:  a2831ef8       stur     x2, [x29, #-0x18]
  0x100000a38:  a3431eb8       stur     w3, [x29, #-0x1c]
  0x100000a3c:  a8835ff8       ldur     x8, [x29, #-8]
  0x100000a40:  bf831ff8       stur     xzr, [x29, #-8]
  0x100000a44:  e0830091       add      x0, sp, #0x20
  0x100000a48:  e81300f9       str      x8, [sp, #0x20]
  0x100000a4c:  28000090       adrp     x8, #0x100004000
  0x100000a50:  086d40f9       ldr      x8, [x8, #0xd8] ; ClassRef: UltronSentinelCore
  0x100000a54:  e81700f9       str      x8, [sp, #0x28]
  0x100000a58:  48000090       adrp     x8, #0x100008000
  0x100000a5c:  01c940f9       ldr      x1, [x8, #0x190] ; @selector(init)
  0x100000a60:  d2010094       bl       #0x1000011a8
  0x100000a64:  e10300aa       mov      x1, x0
  0x100000a68:  e00f40f9       ldr      x0, [sp, #0x18]
  0x100000a6c:  e80301aa       mov      x8, x1
  0x100000a70:  a8831ff8       stur     x8, [x29, #-8]
  0x100000a74:  df010094       bl       #0x1000011f0
  0x100000a78:  a8835ff8       ldur     x8, [x29, #-8]
  0x100000a7c:  880300b4       cbz      x8, #0x100000aec ; [SME:BRANCH-GATE] Primary conditional guard — Z3 symbolic solver candidate
  0x100000a80:  01000014       b        #0x100000a84
  0x100000a84:  a8835ef8       ldur     x8, [x29, #-0x18]
  0x100000a88:  a9835ff8       ldur     x9, [x29, #-8]
  0x100000a8c:  281100f9       str      x8, [x9, #0x20]
  0x100000a90:  a8435eb8       ldur     w8, [x29, #-0x1c]
  0x100000a94:  a9835ff8       ldur     x9, [x29, #-8]
  0x100000a98:  281100b9       str      w8, [x9, #0x10]
  0x100000a9c:  a9835ff8       ldur     x9, [x29, #-8]
  0x100000aa0:  086584d2       mov      x8, #0x2328
  0x100000aa4:  280500f9       str      x8, [x9, #8]
  0x100000aa8:  a9835ff8       ldur     x9, [x29, #-8]
  0x100000aac:  28008052       mov      w8, #1
  0x100000ab0:  a8b4b472       movk     w8, #0xa5a5, lsl #16
  0x100000ab4:  281500b9       str      w8, [x9, #0x14]
  0x100000ab8:  aa435eb8       ldur     w10, [x29, #-0x1c]
  0x100000abc:  49008052       mov      w9, #2
  0x100000ac0:  a8008052       mov      w8, #5
  0x100000ac4:  4a210071       subs     w10, w10, #8
  0x100000ac8:  08c1891a       csel     w8, w8, w9, gt
  0x100000acc:  a9835ff8       ldur     x9, [x29, #-8]
  0x100000ad0:  281900b9       str      w8, [x9, #0x18]
  0x100000ad4:  a8835ff8       ldur     x8, [x29, #-8]
  0x100000ad8:  00a10091       add      x0, x8, #0x28
  0x100000adc:  21000090       adrp     x1, #0x100004000
  0x100000ae0:  21200291       add      x1, x1, #0x88
  0x100000ae4:  c3010094       bl       #0x1000011f0
  0x100000ae8:  01000014       b        #0x100000aec
  0x100000aec:  a82300d1       sub      x8, x29, #8
  0x100000af0:  e80700f9       str      x8, [sp, #8]
  0x100000af4:  a0835ff8       ldur     x0, [x29, #-8]
  0x100000af8:  28000090       adrp     x8, #0x100004000
  0x100000afc:  081d40f9       ldr      x8, [x8, #0x38]
  0x100000b00:  00013fd6       blr      x8 ; [SME:INDIRECT-CALL] Register-indirect call (VTable / function pointer dispatch)
  0x100000b04:  e10300aa       mov      x1, x0
  0x100000b08:  e00740f9       ldr      x0, [sp, #8]
  0x100000b0c:  e10b00f9       str      x1, [sp, #0x10]
  0x100000b10:  010080d2       mov      x1, #0
  0x100000b14:  b7010094       bl       #0x1000011f0
  0x100000b18:  e00b40f9       ldr      x0, [sp, #0x10]
  0x100000b1c:  fd7b45a9       ldp      x29, x30, [sp, #0x50]
  0x100000b20:  ff830191       add      sp, sp, #0x60
  0x100000b24:  c0035fd6       ret      

; ── PROCEDURE: -[UltronSentinelCore decryptPayload:length:] (0x100000b28 .. 0x100000c10, 232 bytes) ──
-[UltronSentinelCore decryptPayload:length:]:
  0x100000b28:  ff0301d1       sub      sp, sp, #0x40 ; [FLIRT] string_length_scan (libsystem_c.dylib) — 99% confidence
  0x100000b2c:  e01f00f9       str      x0, [sp, #0x38]
  0x100000b30:  e11b00f9       str      x1, [sp, #0x30]
  0x100000b34:  e21700f9       str      x2, [sp, #0x28]
  0x100000b38:  e31300f9       str      x3, [sp, #0x20]
  0x100000b3c:  e81f40f9       ldr      x8, [sp, #0x38]
  0x100000b40:  081140f9       ldr      x8, [x8, #0x20]
  0x100000b44:  e91f40f9       ldr      x9, [sp, #0x38]
  0x100000b48:  290540f9       ldr      x9, [x9, #8]
  0x100000b4c:  080109ca       eor      x8, x8, x9 ; [SME:CRYPTO] Non-zeroing XOR/EOR bitwise mixing primitive
  0x100000b50:  e80f00f9       str      x8, [sp, #0x18]
  0x100000b54:  ff1700b9       str      wzr, [sp, #0x14]
  0x100000b58:  01000014       b        #0x100000b5c
  0x100000b5c:  e81740b9       ldr      w8, [sp, #0x14]
  0x100000b60:  e91f40f9       ldr      x9, [sp, #0x38]
  0x100000b64:  291140b9       ldr      w9, [x9, #0x10]
  0x100000b68:  0801096b       subs     w8, w8, w9
  0x100000b6c:  4a040054       b.ge     #0x100000bf4 ; [SME:BRANCH-GATE] Primary conditional guard — Z3 symbolic solver candidate
  0x100000b70:  01000014       b        #0x100000b74
  0x100000b74:  ff0700f9       str      xzr, [sp, #8]
  0x100000b78:  01000014       b        #0x100000b7c
  0x100000b7c:  e80740f9       ldr      x8, [sp, #8]
  0x100000b80:  e91340f9       ldr      x9, [sp, #0x20]
  0x100000b84:  080109eb       subs     x8, x8, x9
  0x100000b88:  c2020054       b.hs     #0x100000be0
  0x100000b8c:  01000014       b        #0x100000b90
  0x100000b90:  e90f40f9       ldr      x9, [sp, #0x18]
  0x100000b94:  e80f40f9       ldr      x8, [sp, #0x18]
  0x100000b98:  08fd79d3       lsr      x8, x8, #0x39
  0x100000b9c:  081d09aa       orr      x8, x8, x9, lsl #7
  0x100000ba0:  e91740f9       ldr      x9, [sp, #0x28]
  0x100000ba4:  ea0740f9       ldr      x10, [sp, #8]
  0x100000ba8:  29696a38       ldrb     w9, [x9, x10]
  0x100000bac:  080109ca       eor      x8, x8, x9 ; [SME:CRYPTO] Non-zeroing XOR/EOR bitwise mixing primitive
  0x100000bb0:  e91740b9       ldr      w9, [sp, #0x14]
  0x100000bb4:  2a368f52       mov      w10, #0x79b1
  0x100000bb8:  eac6b372       movk     w10, #0x9e37, lsl #16
  0x100000bbc:  297d0a1b       mul      w9, w9, w10
  0x100000bc0:  e903092a       mov      w9, w9
  0x100000bc4:  080109ca       eor      x8, x8, x9 ; [SME:CRYPTO] Non-zeroing XOR/EOR bitwise mixing primitive
  0x100000bc8:  e80f00f9       str      x8, [sp, #0x18]
  0x100000bcc:  01000014       b        #0x100000bd0
  0x100000bd0:  e80740f9       ldr      x8, [sp, #8]
  0x100000bd4:  08050091       add      x8, x8, #1
  0x100000bd8:  e80700f9       str      x8, [sp, #8]
  0x100000bdc:  e8ffff17       b        #0x100000b7c
  0x100000be0:  01000014       b        #0x100000be4
  0x100000be4:  e81740b9       ldr      w8, [sp, #0x14]
  0x100000be8:  08050011       add      w8, w8, #1
  0x100000bec:  e81700b9       str      w8, [sp, #0x14]
  0x100000bf0:  dbffff17       b        #0x100000b5c
  0x100000bf4:  e91f40f9       ldr      x9, [sp, #0x38]
  0x100000bf8:  281540b9       ldr      w8, [x9, #0x14]
  0x100000bfc:  08011c32       orr      w8, w8, #0x10
  0x100000c00:  281500b9       str      w8, [x9, #0x14]
  0x100000c04:  e00f40f9       ldr      x0, [sp, #0x18]
  0x100000c08:  ff030191       add      sp, sp, #0x40
  0x100000c0c:  c0035fd6       ret      

; ── PROCEDURE: +[UltronSentinelCore sentinelProtocolVersion] (0x100000c10 .. 0x100000c2c, 28 bytes) ──
+[UltronSentinelCore sentinelProtocolVersion]:
  0x100000c10:  ff4300d1       sub      sp, sp, #0x10 ; [FLIRT] objc_retain_release_thunk (libobjc.A.dylib) — 99% confidence
  0x100000c14:  e00700f9       str      x0, [sp, #8]
  0x100000c18:  e10300f9       str      x1, [sp]
  0x100000c1c:  20000090       adrp     x0, #0x100004000
  0x100000c20:  00a00291       add      x0, x0, #0xa8
  0x100000c24:  ff430091       add      sp, sp, #0x10
  0x100000c28:  69010014       b        #0x1000011cc

; ── PROCEDURE: -[UltronSentinelCore securityLevel] (0x100000c2c .. 0x100000c48, 28 bytes) ──
-[UltronSentinelCore securityLevel]:
  0x100000c2c:  ff4300d1       sub      sp, sp, #0x10
  0x100000c30:  e00700f9       str      x0, [sp, #8]
  0x100000c34:  e10300f9       str      x1, [sp]
  0x100000c38:  e80740f9       ldr      x8, [sp, #8]
  0x100000c3c:  001940b9       ldr      w0, [x8, #0x18]
  0x100000c40:  ff430091       add      sp, sp, #0x10
  0x100000c44:  c0035fd6       ret      

; ── PROCEDURE: -[UltronSentinelCore setSecurityLevel:] (0x100000c48 .. 0x100000c6c, 36 bytes) ──
-[UltronSentinelCore setSecurityLevel:]:
  0x100000c48:  ff8300d1       sub      sp, sp, #0x20
  0x100000c4c:  e00f00f9       str      x0, [sp, #0x18]
  0x100000c50:  e10b00f9       str      x1, [sp, #0x10]
  0x100000c54:  e20f00b9       str      w2, [sp, #0xc]
  0x100000c58:  e80f40b9       ldr      w8, [sp, #0xc]
  0x100000c5c:  e90f40f9       ldr      x9, [sp, #0x18]
  0x100000c60:  281900b9       str      w8, [x9, #0x18]
  0x100000c64:  ff830091       add      sp, sp, #0x20
  0x100000c68:  c0035fd6       ret      

; ── PROCEDURE: -[UltronSentinelCore cipherKey] (0x100000c6c .. 0x100000c88, 28 bytes) ──
-[UltronSentinelCore cipherKey]:
  0x100000c6c:  ff4300d1       sub      sp, sp, #0x10
  0x100000c70:  e00700f9       str      x0, [sp, #8]
  0x100000c74:  e10300f9       str      x1, [sp]
  0x100000c78:  e80740f9       ldr      x8, [sp, #8]
  0x100000c7c:  001140f9       ldr      x0, [x8, #0x20]
  0x100000c80:  ff430091       add      sp, sp, #0x10
  0x100000c84:  c0035fd6       ret      

; ── PROCEDURE: -[UltronSentinelCore setCipherKey:] (0x100000c88 .. 0x100000cac, 36 bytes) ──
-[UltronSentinelCore setCipherKey:]:
  0x100000c88:  ff8300d1       sub      sp, sp, #0x20
  0x100000c8c:  e00f00f9       str      x0, [sp, #0x18]
  0x100000c90:  e10b00f9       str      x1, [sp, #0x10]
  0x100000c94:  e20700f9       str      x2, [sp, #8]
  0x100000c98:  e80740f9       ldr      x8, [sp, #8]
  0x100000c9c:  e90f40f9       ldr      x9, [sp, #0x18]
  0x100000ca0:  281100f9       str      x8, [x9, #0x20]
  0x100000ca4:  ff830091       add      sp, sp, #0x20
  0x100000ca8:  c0035fd6       ret      

; ── PROCEDURE: -[UltronSentinelCore coreName] (0x100000cac .. 0x100000cc8, 28 bytes) ──
-[UltronSentinelCore coreName]:
  0x100000cac:  ff4300d1       sub      sp, sp, #0x10
  0x100000cb0:  e00700f9       str      x0, [sp, #8]
  0x100000cb4:  e10300f9       str      x1, [sp]
  0x100000cb8:  e80740f9       ldr      x8, [sp, #8]
  0x100000cbc:  001540f9       ldr      x0, [x8, #0x28]
  0x100000cc0:  ff430091       add      sp, sp, #0x10
  0x100000cc4:  c0035fd6       ret      

; ── PROCEDURE: -[UltronSentinelCore setCoreName:] (0x100000cc8 .. 0x100000d00, 56 bytes) ──
-[UltronSentinelCore setCoreName:]:
  0x100000cc8:  ffc300d1       sub      sp, sp, #0x30 ; [FLIRT] pthread_mutex_scoped_lock (libsystem_pthread.dylib) — 98% confidence
  0x100000ccc:  fd7b02a9       stp      x29, x30, [sp, #0x20]
  0x100000cd0:  fd830091       add      x29, sp, #0x20
  0x100000cd4:  a0831ff8       stur     x0, [x29, #-8]
  0x100000cd8:  e10b00f9       str      x1, [sp, #0x10]
  0x100000cdc:  e20700f9       str      x2, [sp, #8]
  0x100000ce0:  e10b40f9       ldr      x1, [sp, #0x10]
  0x100000ce4:  a0835ff8       ldur     x0, [x29, #-8]
  0x100000ce8:  e20740f9       ldr      x2, [sp, #8]
  0x100000cec:  030580d2       mov      x3, #0x28
  0x100000cf0:  3d010094       bl       #0x1000011e4
  0x100000cf4:  fd7b42a9       ldp      x29, x30, [sp, #0x20]
  0x100000cf8:  ffc30091       add      sp, sp, #0x30
  0x100000cfc:  c0035fd6       ret      

; ── PROCEDURE: -[UltronSentinelCore .cxx_destruct] (0x100000d00 .. 0x100000d30, 48 bytes) ──
-[UltronSentinelCore .cxx_destruct]:
  0x100000d00:  ff8300d1       sub      sp, sp, #0x20 ; [FLIRT] pthread_mutex_scoped_lock (libsystem_pthread.dylib) — 98% confidence
  0x100000d04:  fd7b01a9       stp      x29, x30, [sp, #0x10]
  0x100000d08:  fd430091       add      x29, sp, #0x10
  0x100000d0c:  e00700f9       str      x0, [sp, #8]
  0x100000d10:  e10300f9       str      x1, [sp]
  0x100000d14:  e80740f9       ldr      x8, [sp, #8]
  0x100000d18:  00a10091       add      x0, x8, #0x28
  0x100000d1c:  010080d2       mov      x1, #0
  0x100000d20:  34010094       bl       #0x1000011f0
  0x100000d24:  fd7b41a9       ldp      x29, x30, [sp, #0x10]
  0x100000d28:  ff830091       add      sp, sp, #0x20
  0x100000d2c:  c0035fd6       ret      

; ── PROCEDURE: -[UltronSentinelCore reactorDiagnosticDigest] (0x100000d30 .. 0x100000d64, 52 bytes) ──
-[UltronSentinelCore reactorDiagnosticDigest]:
  0x100000d30:  ff4300d1       sub      sp, sp, #0x10 ; [FLIRT] rotl_mix_cipher (libultron_crypto.a) — 99% confidence
  0x100000d34:  e00700f9       str      x0, [sp, #8]
  0x100000d38:  e10300f9       str      x1, [sp]
  0x100000d3c:  e80740f9       ldr      x8, [sp, #8]
  0x100000d40:  080540f9       ldr      x8, [x8, #8]
  0x100000d44:  e90740f9       ldr      x9, [sp, #8]
  0x100000d48:  291140f9       ldr      x9, [x9, #0x20]
  0x100000d4c:  080109ca       eor      x8, x8, x9 ; [SME:CRYPTO] Non-zeroing XOR/EOR bitwise mixing primitive
  0x100000d50:  e90740f9       ldr      x9, [sp, #8]
  0x100000d54:  291540b9       ldr      w9, [x9, #0x14]
  0x100000d58:  000109ca       eor      x0, x8, x9 ; [SME:CRYPTO] Non-zeroing XOR/EOR bitwise mixing primitive
  0x100000d5c:  ff430091       add      sp, sp, #0x10
  0x100000d60:  c0035fd6       ret      

; ── PROCEDURE: _matrix_nested_solver (0x100000d64 .. 0x100000f3c, 472 bytes) ──
_matrix_nested_solver:
  0x100000d64:  ff0301d1       sub      sp, sp, #0x40 ; [FLIRT] crc32_bitwise_update (libz.1.dylib) — 99% confidence
  0x100000d68:  e01b00f9       str      x0, [sp, #0x30]
  0x100000d6c:  e12f00b9       str      w1, [sp, #0x2c]
  0x100000d70:  e22b00b9       str      w2, [sp, #0x28]
  0x100000d74:  e81b40f9       ldr      x8, [sp, #0x30]
  0x100000d78:  480100b4       cbz      x8, #0x100000da0 ; [SME:BRANCH-GATE] Primary conditional guard — Z3 symbolic solver candidate
  0x100000d7c:  01000014       b        #0x100000d80
  0x100000d80:  e82f40b9       ldr      w8, [sp, #0x2c]
  0x100000d84:  08010071       subs     w8, w8, #0
  0x100000d88:  cd000054       b.le     #0x100000da0
  0x100000d8c:  01000014       b        #0x100000d90
  0x100000d90:  e82b40b9       ldr      w8, [sp, #0x28]
  0x100000d94:  08010071       subs     w8, w8, #0
  0x100000d98:  8c000054       b.gt     #0x100000da8
  0x100000d9c:  01000014       b        #0x100000da0
  0x100000da0:  ff1f00f9       str      xzr, [sp, #0x38]
  0x100000da4:  63000014       b        #0x100000f30
  0x100000da8:  e8dd97d2       mov      x8, #0xbeef
  0x100000dac:  e866a2f2       movk     x8, #0x1337, lsl #16
  0x100000db0:  e81300f9       str      x8, [sp, #0x20]
  0x100000db4:  ff1f00b9       str      wzr, [sp, #0x1c]
  0x100000db8:  01000014       b        #0x100000dbc
  0x100000dbc:  ff1b00b9       str      wzr, [sp, #0x18]
  0x100000dc0:  01000014       b        #0x100000dc4
  0x100000dc4:  e81b40b9       ldr      w8, [sp, #0x18]
  0x100000dc8:  e92f40b9       ldr      w9, [sp, #0x2c]
  0x100000dcc:  0801096b       subs     w8, w8, w9
  0x100000dd0:  aa090054       b.ge     #0x100000f04
  0x100000dd4:  01000014       b        #0x100000dd8
  0x100000dd8:  ff1700b9       str      wzr, [sp, #0x14]
  0x100000ddc:  01000014       b        #0x100000de0
  0x100000de0:  e81740b9       ldr      w8, [sp, #0x14]
  0x100000de4:  e92b40b9       ldr      w9, [sp, #0x28]
  0x100000de8:  0801096b       subs     w8, w8, w9
  0x100000dec:  4a080054       b.ge     #0x100000ef4
  0x100000df0:  01000014       b        #0x100000df4
  0x100000df4:  e81b40f9       ldr      x8, [sp, #0x30]
  0x100000df8:  e91b40b9       ldr      w9, [sp, #0x18]
  0x100000dfc:  ea2b40b9       ldr      w10, [sp, #0x28]
  0x100000e00:  297d0a1b       mul      w9, w9, w10
  0x100000e04:  ea1740b9       ldr      w10, [sp, #0x14]
  0x100000e08:  29010a0b       add      w9, w9, w10
  0x100000e0c:  08d969f8       ldr      x8, [x8, w9, sxtw #3]
  0x100000e10:  e80700f9       str      x8, [sp, #8]
  0x100000e14:  e80740f9       ldr      x8, [sp, #8]
  0x100000e18:  e91f80b9       ldrsw    x9, [sp, #0x1c]
  0x100000e1c:  0801098b       add      x8, x8, x9
  0x100000e20:  e91b80b9       ldrsw    x9, [sp, #0x18]
  0x100000e24:  0801098b       add      x8, x8, x9
  0x100000e28:  e91780b9       ldrsw    x9, [sp, #0x14]
  0x100000e2c:  0801098b       add      x8, x8, x9
  0x100000e30:  08054092       and      x8, x8, #3
  0x100000e34:  e80300f9       str      x8, [sp]
  0x100000e38:  480100b4       cbz      x8, #0x100000e60
  0x100000e3c:  01000014       b        #0x100000e40
  0x100000e40:  e80340f9       ldr      x8, [sp]
  0x100000e44:  080500f1       subs     x8, x8, #1
  0x100000e48:  c0010054       b.eq     #0x100000e80
  0x100000e4c:  01000014       b        #0x100000e50
  0x100000e50:  e80340f9       ldr      x8, [sp]
  0x100000e54:  080900f1       subs     x8, x8, #2
  0x100000e58:  60020054       b.eq     #0x100000ea4
  0x100000e5c:  1c000014       b        #0x100000ecc
  0x100000e60:  e80740f9       ldr      x8, [sp, #8]
  0x100000e64:  49b58ad2       mov      x9, #0x55aa
  0x100000e68:  49b5aaf2       movk     x9, #0x55aa, lsl #16
  0x100000e6c:  090109ca       eor      x9, x8, x9 ; [SME:CRYPTO] Non-zeroing XOR/EOR bitwise mixing primitive
  0x100000e70:  e81340f9       ldr      x8, [sp, #0x20]
  0x100000e74:  0801098b       add      x8, x8, x9
  0x100000e78:  e81300f9       str      x8, [sp, #0x20]
  0x100000e7c:  19000014       b        #0x100000ee0
  0x100000e80:  e80740f9       ldr      x8, [sp, #8]
  0x100000e84:  e90380d2       mov      x9, #0x1f
  0x100000e88:  087d099b       mul      x8, x8, x9
  0x100000e8c:  e91780b9       ldrsw    x9, [sp, #0x14]
  0x100000e90:  0901098b       add      x9, x8, x9
  0x100000e94:  e81340f9       ldr      x8, [sp, #0x20]
  0x100000e98:  080109ca       eor      x8, x8, x9 ; [SME:CRYPTO] Non-zeroing XOR/EOR bitwise mixing primitive
  0x100000e9c:  e81300f9       str      x8, [sp, #0x20]
  0x100000ea0:  10000014       b        #0x100000ee0
  0x100000ea4:  e91340f9       ldr      x9, [sp, #0x20]
  0x100000ea8:  e81340f9       ldr      x8, [sp, #0x20]
  0x100000eac:  08fd7dd3       lsr      x8, x8, #0x3d
  0x100000eb0:  080d09aa       orr      x8, x8, x9, lsl #3
  0x100000eb4:  e81300f9       str      x8, [sp, #0x20]
  0x100000eb8:  e90740f9       ldr      x9, [sp, #8]
  0x100000ebc:  e81340f9       ldr      x8, [sp, #0x20]
  0x100000ec0:  0801098b       add      x8, x8, x9
  0x100000ec4:  e81300f9       str      x8, [sp, #0x20]
  0x100000ec8:  06000014       b        #0x100000ee0
  0x100000ecc:  e90740f9       ldr      x9, [sp, #8]
  0x100000ed0:  e81340f9       ldr      x8, [sp, #0x20]
  0x100000ed4:  080549eb       subs     x8, x8, x9, lsr #1
  0x100000ed8:  e81300f9       str      x8, [sp, #0x20]
  0x100000edc:  01000014       b        #0x100000ee0
  0x100000ee0:  01000014       b        #0x100000ee4
  0x100000ee4:  e81740b9       ldr      w8, [sp, #0x14]
  0x100000ee8:  08050011       add      w8, w8, #1
  0x100000eec:  e81700b9       str      w8, [sp, #0x14]
  0x100000ef0:  bcffff17       b        #0x100000de0
  0x100000ef4:  e81b40b9       ldr      w8, [sp, #0x18]
  0x100000ef8:  08050011       add      w8, w8, #1
  0x100000efc:  e81b00b9       str      w8, [sp, #0x18]
  0x100000f00:  b1ffff17       b        #0x100000dc4
  0x100000f04:  e81f40b9       ldr      w8, [sp, #0x1c]
  0x100000f08:  08050011       add      w8, w8, #1
  0x100000f0c:  e81f00b9       str      w8, [sp, #0x1c]
  0x100000f10:  01000014       b        #0x100000f14
  0x100000f14:  e81f40b9       ldr      w8, [sp, #0x1c]
  0x100000f18:  080d0071       subs     w8, w8, #3
  0x100000f1c:  0bf5ff54       b.lt     #0x100000dbc
  0x100000f20:  01000014       b        #0x100000f24
  0x100000f24:  e81340f9       ldr      x8, [sp, #0x20]
  0x100000f28:  e81f00f9       str      x8, [sp, #0x38]
  0x100000f2c:  01000014       b        #0x100000f30
  0x100000f30:  e01f40f9       ldr      x0, [sp, #0x38]
  0x100000f34:  ff030191       add      sp, sp, #0x40
  0x100000f38:  c0035fd6       ret      

; ── PROCEDURE: _main (0x100000f3c .. 0x10000116c, 560 bytes) ──
_main:
  0x100000f3c:  ff0306d1       sub      sp, sp, #0x180 ; [FLIRT] fast_memcpy_vec (libsystem_platform.dylib) — 99% confidence
  0x100000f40:  fc6f16a9       stp      x28, x27, [sp, #0x160]
  0x100000f44:  fd7b17a9       stp      x29, x30, [sp, #0x170]
  0x100000f48:  fdc30591       add      x29, sp, #0x170
  0x100000f4c:  28000090       adrp     x8, #0x100004000
  0x100000f50:  083940f9       ldr      x8, [x8, #0x70]
  0x100000f54:  080140f9       ldr      x8, [x8]
  0x100000f58:  a8831ef8       stur     x8, [x29, #-0x18]
  0x100000f5c:  bfc315b8       stur     wzr, [x29, #-0xa4]
  0x100000f60:  a08315b8       stur     w0, [x29, #-0xa8]
  0x100000f64:  a10315f8       stur     x1, [x29, #-0xb0]
  0x100000f68:  8d000094       bl       #0x10000119c
  0x100000f6c:  e04b00f9       str      x0, [sp, #0x90]
  0x100000f70:  48000090       adrp     x8, #0x100008000
  0x100000f74:  00410891       add      x0, x8, #0x210 ; ClassRef: UltronSentinelCore
  0x100000f78:  83000094       bl       #0x100001184
  0x100000f7c:  e14f40f9       ldr      x1, [sp, #0x98]
  0x100000f80:  220686d2       mov      x2, #0x3031
  0x100000f84:  c2e9a9f2       movk     x2, #0x4f4e, lsl #16
  0x100000f88:  428acaf2       movk     x2, #0x5452, lsl #32
  0x100000f8c:  82a9eaf2       movk     x2, #0x554c, lsl #48
  0x100000f90:  43018052       mov      w3, #0xa
  0x100000f94:  bb000094       bl       #0x100001280 ; objc_msgSend -> -[UltronSentinelCore initWithKey:rounds:] // [SME:OBJC-DISPATCH]
  0x100000f98:  e14f40f9       ldr      x1, [sp, #0x98]
  0x100000f9c:  e05f00f9       str      x0, [sp, #0xb8]
  0x100000fa0:  e05f40f9       ldr      x0, [sp, #0xb8]
  0x100000fa4:  22018052       mov      w2, #9
  0x100000fa8:  d6000094       bl       #0x100001300 ; objc_msgSend -> -[UltronSentinelCore setSecurityLevel:] // [SME:OBJC-DISPATCH]
  0x100000fac:  a0eb00d1       sub      x0, x29, #0x3a
  0x100000fb0:  420480d2       mov      x2, #0x22
  0x100000fb4:  010000b0       adrp     x1, #0x100001000
  0x100000fb8:  21001591       add      x1, x1, #0x540 ; "ULTRON_TELEMETRY_CORE_AUTH_VECTOR"
  0x100000fbc:  6f000094       bl       #0x100001178
  0x100000fc0:  ff5b00f9       str      xzr, [sp, #0xb0]
  0x100000fc4:  e05f40f9       ldr      x0, [sp, #0xb8]
  0x100000fc8:  48000090       adrp     x8, #0x100008000
  0x100000fcc:  01d540f9       ldr      x1, [x8, #0x1a8] ; @selector(decryptPayload:length:)
  0x100000fd0:  79000094       bl       #0x1000011b4
  0x100000fd4:  20010036       tbz      w0, #0, #0x100000ff8 ; [SME:BRANCH-GATE] Primary conditional guard — Z3 symbolic solver candidate
  0x100000fd8:  01000014       b        #0x100000fdc
  0x100000fdc:  e14f40f9       ldr      x1, [sp, #0x98]
  0x100000fe0:  e05f40f9       ldr      x0, [sp, #0xb8]
  0x100000fe4:  a2eb00d1       sub      x2, x29, #0x3a
  0x100000fe8:  230480d2       mov      x3, #0x21
  0x100000fec:  9d000094       bl       #0x100001260 ; objc_msgSend -> -[UltronSentinelCore decryptPayload:length:] // [SME:OBJC-DISPATCH]
  0x100000ff0:  e05b00f9       str      x0, [sp, #0xb0]
  0x100000ff4:  01000014       b        #0x100000ff8
  0x100000ff8:  a08302d1       sub      x0, x29, #0xa0
  0x100000ffc:  e01f00f9       str      x0, [sp, #0x38]
  0x100001000:  020c80d2       mov      x2, #0x60
  0x100001004:  01000090       adrp     x1, #0x100001000
  0x100001008:  21c01891       add      x1, x1, #0x630
  0x10000100c:  5b000094       bl       #0x100001178
  0x100001010:  e01f40f9       ldr      x0, [sp, #0x38]
  0x100001014:  61008052       mov      w1, #3
  0x100001018:  82008052       mov      w2, #4
  0x10000101c:  52ffff97       bl       #0x100000d64 ; _matrix_nested_solver
  0x100001020:  e14f40f9       ldr      x1, [sp, #0x98]
  0x100001024:  e05700f9       str      x0, [sp, #0xa8]
  0x100001028:  280000f0       adrp     x8, #0x100008000
  0x10000102c:  00410891       add      x0, x8, #0x210 ; ClassRef: UltronSentinelCore
  0x100001030:  ac000094       bl       #0x1000012e0 ; objc_msgSend -> -[UltronSentinelCore sentinelProtocolVersion] // [SME:OBJC-DISPATCH]
  0x100001034:  fd031daa       mov      x29, x29
  0x100001038:  68000094       bl       #0x1000011d8
  0x10000103c:  e8830291       add      x8, sp, #0xa0
  0x100001040:  e83f00f9       str      x8, [sp, #0x78]
  0x100001044:  e05300f9       str      x0, [sp, #0xa0]
  0x100001048:  e05340f9       ldr      x0, [sp, #0xa0]
  0x10000104c:  e02300f9       str      x0, [sp, #0x40]
  0x100001050:  5c000094       bl       #0x1000011c0
  0x100001054:  e02340f9       ldr      x0, [sp, #0x40]
  0x100001058:  e14f40f9       ldr      x1, [sp, #0x98]
  0x10000105c:  71000094       bl       #0x100001220 ; objc_msgSend -> -[UltronSentinelCore UTF8String] // [SME:OBJC-DISPATCH]
  0x100001060:  e14f40f9       ldr      x1, [sp, #0x98]
  0x100001064:  e02700f9       str      x0, [sp, #0x48]
  0x100001068:  e8e30291       add      x8, sp, #0xb8
  0x10000106c:  e84300f9       str      x8, [sp, #0x80]
  0x100001070:  e05f40f9       ldr      x0, [sp, #0xb8]
  0x100001074:  73000094       bl       #0x100001240 ; objc_msgSend -> -[UltronSentinelCore coreName] // [SME:OBJC-DISPATCH]
  0x100001078:  fd031daa       mov      x29, x29
  0x10000107c:  57000094       bl       #0x1000011d8
  0x100001080:  e03b00f9       str      x0, [sp, #0x70]
  0x100001084:  4f000094       bl       #0x1000011c0
  0x100001088:  e03b40f9       ldr      x0, [sp, #0x70]
  0x10000108c:  e14f40f9       ldr      x1, [sp, #0x98]
  0x100001090:  64000094       bl       #0x100001220 ; objc_msgSend -> -[UltronSentinelCore UTF8String] // [SME:OBJC-DISPATCH]
  0x100001094:  e14f40f9       ldr      x1, [sp, #0x98]
  0x100001098:  e02b00f9       str      x0, [sp, #0x50]
  0x10000109c:  e05f40f9       ldr      x0, [sp, #0xb8]
  0x1000010a0:  88000094       bl       #0x1000012c0 ; objc_msgSend -> -[UltronSentinelCore securityLevel] // [SME:OBJC-DISPATCH]
  0x1000010a4:  e14f40f9       ldr      x1, [sp, #0x98]
  0x1000010a8:  e05f00b9       str      w0, [sp, #0x5c]
  0x1000010ac:  e85b40f9       ldr      x8, [sp, #0xb0]
  0x1000010b0:  e83300f9       str      x8, [sp, #0x60]
  0x1000010b4:  e85740f9       ldr      x8, [sp, #0xa8]
  0x1000010b8:  e83700f9       str      x8, [sp, #0x68]
  0x1000010bc:  e05f40f9       ldr      x0, [sp, #0xb8]
  0x1000010c0:  78000094       bl       #0x1000012a0 ; objc_msgSend -> -[UltronSentinelCore reactorDiagnosticDigest] // [SME:OBJC-DISPATCH]
  0x1000010c4:  ed2740f9       ldr      x13, [sp, #0x48]
  0x1000010c8:  eb2b40f9       ldr      x11, [sp, #0x50]
  0x1000010cc:  ec5f40b9       ldr      w12, [sp, #0x5c]
  0x1000010d0:  ea3340f9       ldr      x10, [sp, #0x60]
  0x1000010d4:  e93740f9       ldr      x9, [sp, #0x68]
  0x1000010d8:  e8030091       mov      x8, sp
  0x1000010dc:  0d0100f9       str      x13, [x8]
  0x1000010e0:  0b0500f9       str      x11, [x8, #8]
  0x1000010e4:  eb030caa       mov      x11, x12
  0x1000010e8:  0b0900f9       str      x11, [x8, #0x10]
  0x1000010ec:  0a0d00f9       str      x10, [x8, #0x18]
  0x1000010f0:  091100f9       str      x9, [x8, #0x20]
  0x1000010f4:  001500f9       str      x0, [x8, #0x28]
  0x1000010f8:  00000090       adrp     x0, #0x100001000
  0x1000010fc:  00881591       add      x0, x0, #0x562 ; "[%s] Core=%s Level=%d Digest=0x%llx Matrix=0x%llx Diag=0x%llx
"
  0x100001100:  3f000094       bl       #0x1000011fc
  0x100001104:  e03b40f9       ldr      x0, [sp, #0x70]
  0x100001108:  080000f0       adrp     x8, #0x100004000
  0x10000110c:  081940f9       ldr      x8, [x8, #0x30]
  0x100001110:  00013fd6       blr      x8 ; [SME:INDIRECT-CALL] Register-indirect call (VTable / function pointer dispatch)
  0x100001114:  e03f40f9       ldr      x0, [sp, #0x78]
  0x100001118:  010080d2       mov      x1, #0
  0x10000111c:  e14700f9       str      x1, [sp, #0x88]
  0x100001120:  34000094       bl       #0x1000011f0
  0x100001124:  e04340f9       ldr      x0, [sp, #0x80]
  0x100001128:  e14740f9       ldr      x1, [sp, #0x88]
  0x10000112c:  31000094       bl       #0x1000011f0
  0x100001130:  e04b40f9       ldr      x0, [sp, #0x90]
  0x100001134:  17000094       bl       #0x100001190
  0x100001138:  a9835ef8       ldur     x9, [x29, #-0x18]
  0x10000113c:  080000f0       adrp     x8, #0x100004000
  0x100001140:  083940f9       ldr      x8, [x8, #0x70]
  0x100001144:  080140f9       ldr      x8, [x8]
  0x100001148:  080109eb       subs     x8, x8, x9
  0x10000114c:  60000054       b.eq     #0x100001158
  0x100001150:  01000014       b        #0x100001154
  0x100001154:  06000094       bl       #0x10000116c
  0x100001158:  00008052       mov      w0, #0
  0x10000115c:  fd7b57a9       ldp      x29, x30, [sp, #0x170]
  0x100001160:  fc6f56a9       ldp      x28, x27, [sp, #0x160]
  0x100001164:  ff030691       add      sp, sp, #0x180
  0x100001168:  c0035fd6       ret      

; ── PROCEDURE: flirt_dyld_stub_binder_trampoline_116c (0x10000116c .. 0x100001178, 12 bytes) ──
flirt_dyld_stub_binder_trampoline_116c:
  0x10000116c:  100000f0       adrp     x16, #0x100004000 ; [FLIRT] dyld_stub_binder_trampoline (libdyld.dylib) — 98% confidence
  0x100001170:  103640f9       ldr      x16, [x16, #0x68]
  0x100001174:  00021fd6       br       x16

; ── PROCEDURE: flirt_dyld_stub_binder_trampoline_1178 (0x100001178 .. 0x100001184, 12 bytes) ──
flirt_dyld_stub_binder_trampoline_1178:
  0x100001178:  100000f0       adrp     x16, #0x100004000 ; [FLIRT] dyld_stub_binder_trampoline (libdyld.dylib) — 98% confidence
  0x10000117c:  103e40f9       ldr      x16, [x16, #0x78]
  0x100001180:  00021fd6       br       x16

; ── PROCEDURE: flirt_dyld_stub_binder_trampoline_1184 (0x100001184 .. 0x100001190, 12 bytes) ──
flirt_dyld_stub_binder_trampoline_1184:
  0x100001184:  100000f0       adrp     x16, #0x100004000 ; [FLIRT] dyld_stub_binder_trampoline (libdyld.dylib) — 98% confidence
  0x100001188:  100240f9       ldr      x16, [x16]
  0x10000118c:  00021fd6       br       x16

; ── PROCEDURE: flirt_dyld_stub_binder_trampoline_1190 (0x100001190 .. 0x10000119c, 12 bytes) ──
flirt_dyld_stub_binder_trampoline_1190:
  0x100001190:  100000f0       adrp     x16, #0x100004000 ; [FLIRT] dyld_stub_binder_trampoline (libdyld.dylib) — 98% confidence
  0x100001194:  100640f9       ldr      x16, [x16, #8]
  0x100001198:  00021fd6       br       x16

; ── PROCEDURE: flirt_dyld_stub_binder_trampoline_119c (0x10000119c .. 0x1000011a8, 12 bytes) ──
flirt_dyld_stub_binder_trampoline_119c:
  0x10000119c:  100000f0       adrp     x16, #0x100004000 ; [FLIRT] dyld_stub_binder_trampoline (libdyld.dylib) — 98% confidence
  0x1000011a0:  100a40f9       ldr      x16, [x16, #0x10]
  0x1000011a4:  00021fd6       br       x16

; ── PROCEDURE: flirt_dyld_stub_binder_trampoline_11a8 (0x1000011a8 .. 0x1000011b4, 12 bytes) ──
flirt_dyld_stub_binder_trampoline_11a8:
  0x1000011a8:  100000f0       adrp     x16, #0x100004000 ; [FLIRT] dyld_stub_binder_trampoline (libdyld.dylib) — 98% confidence
  0x1000011ac:  101240f9       ldr      x16, [x16, #0x20]
  0x1000011b0:  00021fd6       br       x16

; ── PROCEDURE: flirt_dyld_stub_binder_trampoline_11b4 (0x1000011b4 .. 0x1000011c0, 12 bytes) ──
flirt_dyld_stub_binder_trampoline_11b4:
  0x1000011b4:  100000f0       adrp     x16, #0x100004000 ; [FLIRT] dyld_stub_binder_trampoline (libdyld.dylib) — 98% confidence
  0x1000011b8:  101640f9       ldr      x16, [x16, #0x28]
  0x1000011bc:  00021fd6       br       x16

; ── PROCEDURE: flirt_dyld_stub_binder_trampoline_11c0 (0x1000011c0 .. 0x1000011d8, 24 bytes) ──
flirt_dyld_stub_binder_trampoline_11c0:
  0x1000011c0:  100000f0       adrp     x16, #0x100004000 ; [FLIRT] dyld_stub_binder_trampoline (libdyld.dylib) — 98% confidence
  0x1000011c4:  102240f9       ldr      x16, [x16, #0x40]
  0x1000011c8:  00021fd6       br       x16
  0x1000011cc:  100000f0       adrp     x16, #0x100004000
  0x1000011d0:  102640f9       ldr      x16, [x16, #0x48]
  0x1000011d4:  00021fd6       br       x16

; ── PROCEDURE: flirt_dyld_stub_binder_trampoline_11d8 (0x1000011d8 .. 0x1000011e4, 12 bytes) ──
flirt_dyld_stub_binder_trampoline_11d8:
  0x1000011d8:  100000f0       adrp     x16, #0x100004000 ; [FLIRT] dyld_stub_binder_trampoline (libdyld.dylib) — 98% confidence
  0x1000011dc:  102a40f9       ldr      x16, [x16, #0x50]
  0x1000011e0:  00021fd6       br       x16

; ── PROCEDURE: flirt_dyld_stub_binder_trampoline_11e4 (0x1000011e4 .. 0x1000011f0, 12 bytes) ──
flirt_dyld_stub_binder_trampoline_11e4:
  0x1000011e4:  100000f0       adrp     x16, #0x100004000 ; [FLIRT] dyld_stub_binder_trampoline (libdyld.dylib) — 98% confidence
  0x1000011e8:  102e40f9       ldr      x16, [x16, #0x58]
  0x1000011ec:  00021fd6       br       x16

; ── PROCEDURE: flirt_dyld_stub_binder_trampoline_11f0 (0x1000011f0 .. 0x1000011fc, 12 bytes) ──
flirt_dyld_stub_binder_trampoline_11f0:
  0x1000011f0:  100000f0       adrp     x16, #0x100004000 ; [FLIRT] dyld_stub_binder_trampoline (libdyld.dylib) — 98% confidence
  0x1000011f4:  103240f9       ldr      x16, [x16, #0x60]
  0x1000011f8:  00021fd6       br       x16

; ── PROCEDURE: flirt_dyld_stub_binder_trampoline_11fc (0x1000011fc .. 0x100001208, 12 bytes) ──
flirt_dyld_stub_binder_trampoline_11fc:
  0x1000011fc:  100000f0       adrp     x16, #0x100004000 ; [FLIRT] dyld_stub_binder_trampoline (libdyld.dylib) — 98% confidence
  0x100001200:  104240f9       ldr      x16, [x16, #0x80]
  0x100001204:  00021fd6       br       x16

; ── PROCEDURE: _objc_msgSend$UTF8String (0x100001220 .. 0x100001240, 32 bytes) ──
_objc_msgSend$UTF8String:
  0x100001220:  210000f0       adrp     x1, #0x100008000 ; [FLIRT] dyld_stub_binder_trampoline (libdyld.dylib) — 98% confidence
  0x100001224:  21cc40f9       ldr      x1, [x1, #0x198] ; @selector(UTF8String)
  0x100001228:  100000f0       adrp     x16, #0x100004000
  0x10000122c:  100e40f9       ldr      x16, [x16, #0x18]
  0x100001230:  00021fd6       br       x16
  0x100001234:  200020d4       brk      #1
  0x100001238:  200020d4       brk      #1
  0x10000123c:  200020d4       brk      #1

; ── PROCEDURE: _objc_msgSend$coreName (0x100001240 .. 0x100001260, 32 bytes) ──
_objc_msgSend$coreName:
  0x100001240:  210000f0       adrp     x1, #0x100008000 ; [FLIRT] dyld_stub_binder_trampoline (libdyld.dylib) — 98% confidence
  0x100001244:  21d040f9       ldr      x1, [x1, #0x1a0] ; @selector(coreName)
  0x100001248:  100000f0       adrp     x16, #0x100004000
  0x10000124c:  100e40f9       ldr      x16, [x16, #0x18]
  0x100001250:  00021fd6       br       x16
  0x100001254:  200020d4       brk      #1
  0x100001258:  200020d4       brk      #1
  0x10000125c:  200020d4       brk      #1

; ── PROCEDURE: _objc_msgSend$decryptPayload:length: (0x100001260 .. 0x100001280, 32 bytes) ──
_objc_msgSend$decryptPayload:length::
  0x100001260:  210000f0       adrp     x1, #0x100008000 ; [FLIRT] dyld_stub_binder_trampoline (libdyld.dylib) — 98% confidence
  0x100001264:  21d440f9       ldr      x1, [x1, #0x1a8] ; @selector(decryptPayload:length:)
  0x100001268:  100000f0       adrp     x16, #0x100004000
  0x10000126c:  100e40f9       ldr      x16, [x16, #0x18]
  0x100001270:  00021fd6       br       x16
  0x100001274:  200020d4       brk      #1
  0x100001278:  200020d4       brk      #1
  0x10000127c:  200020d4       brk      #1

; ── PROCEDURE: _objc_msgSend$initWithKey:rounds: (0x100001280 .. 0x1000012a0, 32 bytes) ──
_objc_msgSend$initWithKey:rounds::
  0x100001280:  210000f0       adrp     x1, #0x100008000 ; [FLIRT] dyld_stub_binder_trampoline (libdyld.dylib) — 98% confidence
  0x100001284:  21d840f9       ldr      x1, [x1, #0x1b0] ; @selector(initWithKey:rounds:)
  0x100001288:  100000f0       adrp     x16, #0x100004000
  0x10000128c:  100e40f9       ldr      x16, [x16, #0x18]
  0x100001290:  00021fd6       br       x16
  0x100001294:  200020d4       brk      #1
  0x100001298:  200020d4       brk      #1
  0x10000129c:  200020d4       brk      #1

; ── PROCEDURE: _objc_msgSend$reactorDiagnosticDigest (0x1000012a0 .. 0x1000012c0, 32 bytes) ──
_objc_msgSend$reactorDiagnosticDigest:
  0x1000012a0:  210000f0       adrp     x1, #0x100008000 ; [FLIRT] dyld_stub_binder_trampoline (libdyld.dylib) — 98% confidence
  0x1000012a4:  21dc40f9       ldr      x1, [x1, #0x1b8] ; @selector(reactorDiagnosticDigest)
  0x1000012a8:  100000f0       adrp     x16, #0x100004000
  0x1000012ac:  100e40f9       ldr      x16, [x16, #0x18]
  0x1000012b0:  00021fd6       br       x16
  0x1000012b4:  200020d4       brk      #1
  0x1000012b8:  200020d4       brk      #1
  0x1000012bc:  200020d4       brk      #1

; ── PROCEDURE: _objc_msgSend$securityLevel (0x1000012c0 .. 0x1000012e0, 32 bytes) ──
_objc_msgSend$securityLevel:
  0x1000012c0:  210000f0       adrp     x1, #0x100008000 ; [FLIRT] dyld_stub_binder_trampoline (libdyld.dylib) — 98% confidence
  0x1000012c4:  21e040f9       ldr      x1, [x1, #0x1c0] ; @selector(securityLevel)
  0x1000012c8:  100000f0       adrp     x16, #0x100004000
  0x1000012cc:  100e40f9       ldr      x16, [x16, #0x18]
  0x1000012d0:  00021fd6       br       x16
  0x1000012d4:  200020d4       brk      #1
  0x1000012d8:  200020d4       brk      #1
  0x1000012dc:  200020d4       brk      #1

; ── PROCEDURE: _objc_msgSend$sentinelProtocolVersion (0x1000012e0 .. 0x100001300, 32 bytes) ──
_objc_msgSend$sentinelProtocolVersion:
  0x1000012e0:  210000f0       adrp     x1, #0x100008000 ; [FLIRT] dyld_stub_binder_trampoline (libdyld.dylib) — 98% confidence
  0x1000012e4:  21e440f9       ldr      x1, [x1, #0x1c8] ; @selector(sentinelProtocolVersion)
  0x1000012e8:  100000f0       adrp     x16, #0x100004000
  0x1000012ec:  100e40f9       ldr      x16, [x16, #0x18]
  0x1000012f0:  00021fd6       br       x16
  0x1000012f4:  200020d4       brk      #1
  0x1000012f8:  200020d4       brk      #1
  0x1000012fc:  200020d4       brk      #1

; ── PROCEDURE: _objc_msgSend$setSecurityLevel: (0x100001300 .. 0x100001320, 32 bytes) ──
_objc_msgSend$setSecurityLevel::
  0x100001300:  210000f0       adrp     x1, #0x100008000 ; [FLIRT] dyld_stub_binder_trampoline (libdyld.dylib) — 98% confidence
  0x100001304:  21e840f9       ldr      x1, [x1, #0x1d0] ; @selector(setSecurityLevel:)
  0x100001308:  100000f0       adrp     x16, #0x100004000
  0x10000130c:  100e40f9       ldr      x16, [x16, #0x18]
  0x100001310:  00021fd6       br       x16
  0x100001314:  200020d4       brk      #1
  0x100001318:  200020d4       brk      #1
  0x10000131c:  200020d4       brk      #1

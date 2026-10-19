#!/usr/bin/env python3
# ============================================================================
# ULTRON DISASSEMBLE v4.0 — AUTOMATED ROP / JOP EXPLOIT PRIMITIVE HARNESS
# Target Binary : /Users/gilles/.gemini/antigravity/brain/9d4f7005-e3a0-4b0b-9c59-b3cebb4935ab/scratch/asar_dot/orbit-characters.wasm
# Architecture  : wasm32 (32-bit)
# Gadgets Found : 32
# ============================================================================
import struct

TARGET_BINARY = "/Users/gilles/.gemini/antigravity/brain/9d4f7005-e3a0-4b0b-9c59-b3cebb4935ab/scratch/asar_dot/orbit-characters.wasm"
ENTRY_POINT   = 0x359d

def p64(val: int) -> bytes:
    return struct.pack('<Q', val & 0xffffffffffffffff)

# Discovered ROP / JOP Gadgets:
GADGETS = {
    "gadget_00_jop_dispatcher_gadget": (0x3632, "i32.and ; i32.store offset=0, align=2; br 5"),
    "gadget_01_jop_dispatcher_gadget": (0x3655, "local.get $local_2; i32.store offset=8, align=2; br 4"),
    "gadget_02_jop_dispatcher_gadget": (0x36a9, "i32.const 0; i32.store offset=0, align=2; br 3"),
    "gadget_03_jop_dispatcher_gadget": (0x36f0, "local.get $local_2; i32.store offset=8, align=2; br 2"),
    "gadget_04_jop_dispatcher_gadget": (0x373e, "i32.and ; i32.store offset=0, align=2; br 2"),
    "gadget_05_jop_dispatcher_gadget": (0x3753, "local.get $local_1; i32.store offset=16, align=2; br 1"),
    "gadget_06_jop_dispatcher_gadget": (0x389c, "i32.and ; i32.store offset=0, align=2; br 5"),
    "gadget_07_jop_dispatcher_gadget": (0x38ac, "local.get $local_2; i32.store offset=8, align=2; br 4"),
    "gadget_08_jop_dispatcher_gadget": (0x38d0, "local.get $local_2; i32.store offset=8, align=2; br 3"),
    "gadget_09_jop_dispatcher_gadget": (0x3924, "i32.const 0; i32.store offset=0, align=2; br 2"),
    "gadget_10_jop_dispatcher_gadget": (0x3945, "local.get $local_0; i32.store offset=0, align=2; br 3"),
    "gadget_11_jop_dispatcher_gadget": (0x3993, "i32.and ; i32.store offset=0, align=2; br 2"),
    "gadget_12_jop_dispatcher_gadget": (0x39a8, "local.get $local_1; i32.store offset=16, align=2; br 1"),
    "gadget_13_jop_dispatcher_gadget": (0x3a57, "i32.store offset=0, align=2; local.get $local_2; br 1"),
    "gadget_14_jop_dispatcher_gadget": (0x3afc, "local.set $local_1; i32.const 8; br 1"),
    "gadget_15_jop_dispatcher_gadget": (0x3b64, "local.get $local_3; local.tee $local_2; br 1"),
}

def build_rop_validation_chain(base_slide: int = 0x0) -> bytes:
    chain = b""
    for name, (addr, asm) in list(GADGETS.items())[:4]:
        chain += p64(base_slide + addr)
    return chain

if __name__ == "__main__":
    payload = build_rop_validation_chain()
    print(f"[ULTRON ROP HARNESS] Synthesized {len(GADGETS)} gadgets | Sample chain: {len(payload)} bytes")

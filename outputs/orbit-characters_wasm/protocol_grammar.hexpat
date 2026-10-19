// ============================================================================
// ULTRON DISASSEMBLE v4.0 — AUTO-SYNTHESIZED IMHEX BINARY GRAMMAR (.hexpat)
// Target Binary : /Users/gilles/.gemini/antigravity/brain/9d4f7005-e3a0-4b0b-9c59-b3cebb4935ab/scratch/asar_dot/orbit-characters.wasm
// Inferred Magic: 0x554C5452
// ============================================================================

#pragma endian little

struct orbitcharacters_Header {
    u32 magic_signature [[color("00F2FF")]]; // Expected: 0x554C5452
    u16 protocol_version [[color("10B981")]];
    u16 flags;
    u32 payload_length [[color("FF1A35")]];
    u32 field_offset_0c;
    u8  payload[payload_length];
};

orbitcharacters_Header packet_root @ 0x00;

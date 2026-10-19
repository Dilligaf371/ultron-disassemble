// ============================================================================
// ULTRON DISASSEMBLE v4.0 — AUTO-SYNTHESIZED IMHEX BINARY GRAMMAR (.hexpat)
// Target Binary : /Applications/ChatGPT.app/Contents/Resources/native/sky.node
// Inferred Magic: 0x00007FFF
// ============================================================================

#pragma endian little

struct sky_Header {
    u32 magic_signature [[color("00F2FF")]]; // Expected: 0x00007FFF
    u16 protocol_version [[color("10B981")]];
    u16 flags;
    u32 payload_length [[color("FF1A35")]];
    u32 field_offset_0c;
    u32 field_offset_10;
    u32 field_offset_14;
    u32 field_offset_18;
    u32 field_offset_1c;
    u32 field_offset_20;
    u8  payload[payload_length];
};

sky_Header packet_root @ 0x00;

// ============================================================================
// ULTRON DISASSEMBLE v4.0 — AUTO-SYNTHESIZED IMHEX BINARY GRAMMAR (.hexpat)
// Target Binary : samples/monday_board_5106608109
// Inferred Magic: 0x0000023B
// ============================================================================

#pragma endian little

struct monday_board_5106608109_Header {
    u32 magic_signature [[color("00F2FF")]]; // Expected: 0x0000023B
    u16 protocol_version [[color("10B981")]];
    u16 flags;
    u32 payload_length [[color("FF1A35")]];
    u32 field_offset_0c;
    u32 field_offset_10;
    u32 field_offset_18;
    u32 field_offset_20;
    u32 field_offset_28;
    u32 field_offset_30;
    u8  payload[payload_length];
};

monday_board_5106608109_Header packet_root @ 0x00;

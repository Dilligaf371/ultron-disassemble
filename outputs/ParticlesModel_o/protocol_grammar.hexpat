// ============================================================================
// ULTRON DISASSEMBLE v4.0 — AUTO-SYNTHESIZED IMHEX BINARY GRAMMAR (.hexpat)
// Target Binary : /Users/gilles/Library/Developer/Xcode/DerivedData/Aleria-emykibufzydxzdapgegdbbeupnon/Build/Intermediates.noindex/Aleria.build/Debug/Aleria.build/Objects-normal/arm64/ParticlesModel.o
// Inferred Magic: 0x000007FF
// ============================================================================

#pragma endian little

struct ParticlesModel_Header {
    u32 magic_signature [[color("00F2FF")]]; // Expected: 0x000007FF
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

ParticlesModel_Header packet_root @ 0x00;

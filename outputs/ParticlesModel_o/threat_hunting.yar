// ============================================================================
// ULTRON DISASSEMBLE v4.0 — SOVEREIGN SIGINT YARA-X THREAT HUNTING RULE
// Target Binary     : /Users/gilles/Library/Developer/Xcode/DerivedData/Aleria-emykibufzydxzdapgegdbbeupnon/Build/Intermediates.noindex/Aleria.build/Debug/Aleria.build/Objects-normal/arm64/ParticlesModel.o
// Structural ImpHash: ffeaee172dee937a
// Opcode DNA Hash   : 3100a7eafcb224ee
// ============================================================================

rule SIGINT_ParticlesModel {
    meta:
        author = "Ultron Sovereign SIGINT Engine (NSA/DGSE/DGSI/ANSSI Grade)"
        target_format = "Mach-O 64-bit"
        architecture = "arm64"
        structural_imphash = "ffeaee172dee937a"
        opcode_dna_hash = "3100a7eafcb224ee"
        mitre_attack_count = 3
    strings:
        $str_0 = "#>333?" ascii wide
        $str_1 = "Aleria" ascii wide
        $str_2 = "ParticlesState" ascii wide
        $str_3 = "ParticlesBudget" ascii wide
        $str_4 = "ParticlesPalette" ascii wide
        $str_5 = "ParticlesFaceClass" ascii wide
        $entry_opcodes = { FF8302D1 FD7B09A9 FD430291 A0831CF8 A1031DF8 08000090 }
    condition:
        (uint32(0) == 0xfeedfacf or uint32(0) == 0x464c457f or uint16(0) == 0x5a4d) and any of them
}

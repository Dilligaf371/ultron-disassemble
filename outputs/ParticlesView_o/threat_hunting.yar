// ============================================================================
// ULTRON DISASSEMBLE v4.0 — SOVEREIGN SIGINT YARA-X THREAT HUNTING RULE
// Target Binary     : /Users/gilles/Library/Developer/Xcode/DerivedData/Aleria-emykibufzydxzdapgegdbbeupnon/Build/Intermediates.noindex/Aleria.build/Debug/Aleria.build/Objects-normal/arm64/ParticlesView.o
// Structural ImpHash: fccd4c57560d8f75
// Opcode DNA Hash   : 6eee4133331ce26b
// ============================================================================

rule SIGINT_ParticlesView {
    meta:
        author = "Ultron Sovereign SIGINT Engine (NSA/DGSE/DGSI/ANSSI Grade)"
        target_format = "Mach-O 64-bit"
        architecture = "arm64"
        structural_imphash = "fccd4c57560d8f75"
        opcode_dna_hash = "6eee4133331ce26b"
        mitre_attack_count = 3
    strings:
        $str_0 = "Aleria" ascii wide
        $str_1 = "$s6Aleria25ParticlesRendersStillsKey33_B7E286589AABE3DFB6F60C603D4029DCLLV" ascii wide
        $str_2 = "ParticlesRendersStillsKey" ascii wide
        $str_3 = "ParticlesSurface" ascii wide
        $str_4 = "ParticlesView" ascii wide
        $str_5 = "ParticlesHostView" ascii wide
        $entry_opcodes = { C0035FD6 00000090 00000091 C0035FD6 08008052 00010012 }
    condition:
        (uint32(0) == 0xfeedfacf or uint32(0) == 0x464c457f or uint16(0) == 0x5a4d) and any of them
}

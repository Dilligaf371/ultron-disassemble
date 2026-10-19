// ============================================================================
// ULTRON DISASSEMBLE v4.0 — SOVEREIGN SIGINT YARA-X THREAT HUNTING RULE
// Target Binary     : /Users/gilles/Library/Developer/Xcode/DerivedData/Aleria-emykibufzydxzdapgegdbbeupnon/Build/Intermediates.noindex/Aleria.build/Debug/Aleria.build/Objects-normal/arm64/ParticlesRenderer.o
// Structural ImpHash: b7a552650fbcb53f
// Opcode DNA Hash   : 8c43b2c113561572
// ============================================================================

rule SIGINT_ParticlesRenderer {
    meta:
        author = "Ultron Sovereign SIGINT Engine (NSA/DGSE/DGSI/ANSSI Grade)"
        target_format = "Mach-O 64-bit"
        architecture = "arm64"
        structural_imphash = "b7a552650fbcb53f"
        opcode_dna_hash = "8c43b2c113561572"
        mitre_attack_count = 3
    strings:
        $str_0 = "Aleria" ascii wide
        $str_1 = "ParticlesError" ascii wide
        $str_2 = "ParticlesPipeline" ascii wide
        $str_3 = "ParticlesRenderer" ascii wide
        $str_4 = "ParticlesShader" ascii wide
        $str_5 = "MTLCommandBufferStatus" ascii wide
        $entry_opcodes = { FF8301D1 FD7B05A9 FD430191 E01300F9 E11700F9 BF031FF8 }
    condition:
        (uint32(0) == 0xfeedfacf or uint32(0) == 0x464c457f or uint16(0) == 0x5a4d) and any of them
}

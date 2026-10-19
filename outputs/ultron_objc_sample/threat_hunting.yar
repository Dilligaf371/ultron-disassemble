// ============================================================================
// ULTRON DISASSEMBLE v4.0 — SOVEREIGN SIGINT YARA-X THREAT HUNTING RULE
// Target Binary     : samples/ultron_objc_sample
// Structural ImpHash: 4a72d22d04041c5e
// Opcode DNA Hash   : 2b20b5e6cd51cdaa
// ============================================================================

rule SIGINT_ultron_objc_sample {
    meta:
        author = "Ultron Sovereign SIGINT Engine (NSA/DGSE/DGSI/ANSSI Grade)"
        target_format = "Mach-O 64-bit"
        architecture = "arm64"
        structural_imphash = "4a72d22d04041c5e"
        opcode_dna_hash = "2b20b5e6cd51cdaa"
        mitre_attack_count = 3
    strings:
        $str_0 = ".cxx_destruct" ascii wide
        $str_1 = "T@\"NSString\",C,N,V_coreName" ascii wide
        $str_2 = "TQ,N,V_cipherKey" ascii wide
        $str_3 = "Ti,N,V_securityLevel" ascii wide
        $str_4 = "UTF8String" ascii wide
        $str_5 = "_cipherKey" ascii wide
        $entry_opcodes = { FF8301D1 FD7B05A9 FD430191 A82300D1 E80F00F9 A0831FF8 }
    condition:
        (uint32(0) == 0xfeedfacf or uint32(0) == 0x464c457f or uint16(0) == 0x5a4d) and any of them
}

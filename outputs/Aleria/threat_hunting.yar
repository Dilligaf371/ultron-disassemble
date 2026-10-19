// ============================================================================
// ULTRON DISASSEMBLE v4.0 — SOVEREIGN SIGINT YARA-X THREAT HUNTING RULE
// Target Binary     : /Users/gilles/Applications/Aleria ICO.app/Contents/MacOS/aleria
// Structural ImpHash: cd801e9e642e0afe
// Opcode DNA Hash   : 62c05988479f4c17
// ============================================================================

rule SIGINT_aleria {
    meta:
        author = "Ultron Sovereign SIGINT Engine (NSA/DGSE/DGSI/ANSSI Grade)"
        target_format = "Mach-O 64-bit"
        architecture = "arm64"
        structural_imphash = "cd801e9e642e0afe"
        opcode_dna_hash = "62c05988479f4c17"
        mitre_attack_count = 6
    strings:
        $str_0 = "aleria.office.usageSource" ascii wide
        $str_1 = "claude" ascii wide
        $str_2 = "both" ascii wide
        $str_3 = "waitingPermission" ascii wide
        $str_4 = " clique sur le micro pour parler" ascii wide
        $str_5 = " la voix." ascii wide
        $entry_opcodes = { 081C0072 80010054 1F050071 08A0FCD2 69EC8DD2 89ACACF2 }
    condition:
        (uint32(0) == 0xfeedfacf or uint32(0) == 0x464c457f or uint16(0) == 0x5a4d) and any of them
}

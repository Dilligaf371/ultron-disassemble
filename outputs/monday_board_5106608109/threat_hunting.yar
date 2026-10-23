// ============================================================================
// ULTRON DISASSEMBLE v4.0 — SOVEREIGN SIGINT YARA-X THREAT HUNTING RULE
// Target Binary     : samples/monday_board_5106608109
// Structural ImpHash: 7dde770e924945b7
// Opcode DNA Hash   : 7622d2dd5f44d0dc
// ============================================================================

rule SIGINT_monday_board_5106608109 {
    meta:
        author = "Ultron Sovereign SIGINT Engine (NSA/DGSE/DGSI/ANSSI Grade)"
        target_format = "Mach-O 64-bit"
        architecture = "arm64"
        structural_imphash = "7dde770e924945b7"
        opcode_dna_hash = "7622d2dd5f44d0dc"
        mitre_attack_count = 2
    strings:
        $str_0 = "MondayBoardEngine::WorkOSCore" ascii wide
        $str_1 = "BoardGraphQLTransport::RouterBoardSubset" ascii wide
        $str_2 = "/boards/5106608109/board_data?source=resetBoardAction&pulse_ids_only=true&can_board_data_extended=true" ascii wide
        $str_3 = "/boards/5106608109/board_data_extended_v2" ascii wide
        $str_4 = "/board-app/boards/5106608109/items" ascii wide
        $str_5 = "/boards/5106608109/board_init" ascii wide
        $entry_opcodes = { FF4301D1 F44F03A9 FD7B04A9 FD030191 F30301AA F40300AA }
    condition:
        (uint32(0) == 0xfeedfacf or uint32(0) == 0x464c457f or uint16(0) == 0x5a4d) and any of them
}

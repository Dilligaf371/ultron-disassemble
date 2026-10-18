; ==============================================================================
; Capcom CPS-2 QSound Audio Driver v1.15 (1996/JANUARY)
; Target: Dungeons & Dragons: Shadow over Mystara (ROM dd2.01)
; Disassembled & Annotated by Ultron Disassemble v3.0 Native Engine
; ==============================================================================

            .ORG    0x0000

RESET_VEC:
0000: F3            DI                      ; Disable interrupts during vector initialization
0001: ED 56         IM      1               ; Set Interrupt Mode 1 (RST 38h on VBLANK/QSound IRQ)
0003: 31 FF FF      LD      SP, 0xFFFF      ; Initialize Top-of-Stack at 0xFFFF in Z80 RAM
0006: 3E 77         LD      A, 0x77         ; Driver initialization magic handshake value
0008: 32 FF CF      LD      (0xCFFF), A     ; Signal driver startup state to CPS2 hardware watchdog
000B: 18 7E         JR      DRIVER_INIT     ; Jump over Capcom copyright string header

; ------------------------------------------------------------------------------
; Capcom Driver Revision String (Embedded Header)
; ------------------------------------------------------------------------------
000D: .DB " 1.15  /CPS2       1996  /JANUARY  "

; ------------------------------------------------------------------------------
; Main Sound Subsystem Hardware Initialization
; ------------------------------------------------------------------------------
            .ORG    0x008B
DRIVER_INIT:
008B: FB            EI                      ; Enable maskable interrupts for QSound communication
008C: 21 02 F0      LD      HL, 0xF002      ; HL = Pointer to QSound Command Handshake Mailbox
008F: 36 00         LD      (HL), 0x00      ; Reset mailbox flag
0091: 3E 80         LD      A, 0x80         ; Bank Select / QSound DSP Reset Bit
0093: 32 03 D0      LD      (0xD003), A     ; Assert QSound DSP Reset via Memory-Mapped Register

WAIT_DSP_ACK1:
0096: 7E            LD      A, (HL)         ; Poll handshake mailbox
0097: B7            OR      A               ; Check if DSP acknowledged reset
0098: 28 F7         JR      Z, WAIT_DSP_ACK1; Spin until DSP asserts response flag

009A: 36 00         LD      (HL), 0x00      ; Clear mailbox flag
009C: 3E 00         LD      A, 0x00         ; Release DSP Reset
009E: 32 03 D0      LD      (0xD003), A     ; De-assert DSP Reset pin

WAIT_DSP_ACK2:
00A1: 7E            LD      A, (HL)         ; Poll mailbox
00A2: B7            OR      A               ; Check if DSP is ready for audio commands
00A3: 28 F7         JR      Z, WAIT_DSP_ACK2; Spin until ready

00A5: 3E 80         LD      A, 0x80
00A7: 32 03 D0      LD      (0xD003), A     ; Finalize DSP configuration
00AA: F3            DI                      ; Disable interrupts for bank table setup

; [Subsequent routines load channel volume tables, ADPCM sample maps from dd2.11m/12m,
;  and establish the 68000 <-> Z80 bidirectional command FIFO at 0x804000 / 0xF000]

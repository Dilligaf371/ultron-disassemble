# ==============================================================================
# ULTRON DISASSEMBLE v2.3 — Auto-Generated LLDB Debugger & Python Hook Script
# Target Binary : samples/monday_board_5106608109
# Target Symbol : _dispatch_monday_workos_opcode @ 0x100000588 (offset +0x588)
# Architecture  : ARM64 (AArch64)
# ==============================================================================

target create "samples/monday_board_5106608109"
settings set target.disable-aslr true

# Python LLDB telemetry callback
script
import lldb

def ultron_bp_callback(frame, bp_loc, internal_dict):
    thread = frame.GetThread()
    process = thread.GetProcess()
    func_name = frame.GetFunctionName() or "_dispatch_monday_workos_opcode"
    pc = frame.GetPC()
    sp = frame.GetSP()
    reg_x0 = frame.FindRegister("x0" if "arm64" in "arm64" else "rdi")
    val_0 = reg_x0.GetValue() if reg_x0.IsValid() else "N/A"
    print(f"\n[ULTRON LLDB HOOK] Hit {func_name} @ 0x{pc:x} | SP=0x{sp:x} | arg0={val_0}")
    return False
quit

# Breakpoint #1: _dispatch_monday_workos_opcode @ 0x100000588
breakpoint set -a 0x100000588
breakpoint command add 1
register read
x/8gx $sp
disassemble --pc -c 6
bt 8
DONE

# Attach Python hook to primary breakpoint #1
breakpoint command add -F ultron_bp_callback 1

# Useful interactive inspection commands:
#   register read --all
#   memory read -s1 -f x -c 64 $x0
#   image lookup -a 0x100000588 -v

# ==============================================================================
# ULTRON DISASSEMBLE v2.3 — Auto-Generated LLDB Debugger & Python Hook Script
# Target Binary : /Users/gilles/Downloads/Lumio.app/Contents/MacOS/Lumio
# Target Symbol : flirt_string_length_scan_1edc @ 0x100001edc (offset +0x1edc)
# Architecture  : ARM64 (AArch64)
# ==============================================================================

target create "/Users/gilles/Downloads/Lumio.app/Contents/MacOS/Lumio"
settings set target.disable-aslr true

# Python LLDB telemetry callback
script
import lldb

def ultron_bp_callback(frame, bp_loc, internal_dict):
    thread = frame.GetThread()
    process = thread.GetProcess()
    func_name = frame.GetFunctionName() or "flirt_string_length_scan_1edc"
    pc = frame.GetPC()
    sp = frame.GetSP()
    reg_x0 = frame.FindRegister("x0" if "arm64" in "arm64" else "rdi")
    val_0 = reg_x0.GetValue() if reg_x0.IsValid() else "N/A"
    print(f"\n[ULTRON LLDB HOOK] Hit {func_name} @ 0x{pc:x} | SP=0x{sp:x} | arg0={val_0}")
    return False
quit

# Breakpoint #1: flirt_string_length_scan_1edc @ 0x100001edc
breakpoint set -a 0x100001edc
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
#   image lookup -a 0x100001edc -v

"""
Ultron Disassembler CLI
Commands:
  ui          Launch interactive 4-mode Desktop/Web UI (http://127.0.0.1:8420)
  info        Inspect binary segments, sections, procedure & string counts
  inspect     Inspect binary segments, sections, procedure & string counts
  procedures  List or filter analyzed procedures
  strings     List or filter extracted strings
  decompile   Decompile a procedure to structured C / Objective-C pseudocode
  function    Output complete function dossier (ASM, CFG BasicBlocks, Pseudocode, XREFs)
  assemble    Assemble ARM64 or x86_64 instructions via LLVMService_assemble_unchecked
  script      Run an Ultron Python script on a binary
  mcp         Start Ultron Disassembler JSON-RPC 2.0 MCP Server on stdio
"""

from __future__ import annotations
import argparse
import json
import os
import sys
import uvicorn

from .core import AssemblerService, execute_ultron_python_script
from .mcp_server import UltronSession, run_mcp_stdio_server


def main() -> None:
    parser = argparse.ArgumentParser(
        prog="ultron-disassembler",
        description="Ultron Disassembler — Disassembler, CFG, Structured Decompiler, LLVM Assembler & MCP Server",
    )
    sub = parser.add_subparsers(dest="cmd")

    p_ui = sub.add_parser("ui", help="Launch Ultron Disassembler Desktop/Web UI")
    p_ui.add_argument("--host", default="0.0.0.0")
    p_ui.add_argument("--port", type=int, default=8420)
    p_ui.add_argument("binary", nargs="?", help="Optional binary path to open at startup")

    for alias in ("info", "inspect"):
        p_ins = sub.add_parser(alias, help="Inspect binary overview")
        p_ins.add_argument("binary", help="Path to Mach-O, .app, ELF, PE, or Raw binary")
        p_ins.add_argument("--arch", default="arm64", help="Slice architecture (arm64 or x86_64)")

    p_procs = sub.add_parser("procedures", help="Search/list procedures")
    p_procs.add_argument("binary")
    p_procs.add_argument("pattern", nargs="?", default=".*")
    p_procs.add_argument("--arch", default="arm64")

    p_strs = sub.add_parser("strings", help="Search/list strings")
    p_strs.add_argument("binary")
    p_strs.add_argument("pattern", nargs="?", default=".*")
    p_strs.add_argument("--arch", default="arm64")

    p_dec = sub.add_parser("decompile", help="Decompile a procedure to C / Objective-C pseudocode")
    p_dec.add_argument("binary")
    p_dec.add_argument("procedure", nargs="?", default="EntryPoint")
    p_dec.add_argument("--arch", default="arm64")

    p_fn = sub.add_parser("function", help="Get complete function dossier (ASM, CFG, Pseudocode, Callers, Callees)")
    p_fn.add_argument("binary")
    p_fn.add_argument("procedure", nargs="?", default="EntryPoint")
    p_fn.add_argument("--arch", default="arm64")

    p_asm = sub.add_parser("assemble", help="Assemble instruction via LLVMService_assemble_unchecked")
    p_asm.add_argument("instruction")
    p_asm.add_argument("--arch", default="arm64")

    p_scr = sub.add_parser("script", help="Execute a Python script against a binary")
    p_scr.add_argument("binary")
    p_scr.add_argument("script_file", help="Path to Python script or inline code")
    p_scr.add_argument("--arch", default="arm64")

    sub.add_parser("mcp", help="Start JSON-RPC 2.0 MCP Server on stdio")

    args = parser.parse_args()

    if args.cmd == "mcp":
        run_mcp_stdio_server()
        return

    if args.cmd == "assemble":
        res = AssemblerService.assemble(args.instruction, arch=args.arch)
        print(json.dumps(res, indent=2))
        return

    if args.cmd in ("info", "inspect", "procedures", "strings", "decompile", "function", "script"):
        sess = UltronSession()
        ov = sess.open_binary(args.binary, arch=args.arch)
        if args.cmd in ("info", "inspect"):
            print(json.dumps(ov, indent=2))
        elif args.cmd == "procedures":
            print(json.dumps(sess.search(args.pattern, kind="procedures"), indent=2))
        elif args.cmd == "strings":
            print(json.dumps(sess.search(args.pattern, kind="strings"), indent=2))
        elif args.cmd == "decompile":
            dos = sess.procedure_dossier(args.procedure)
            if "pseudocode" in dos:
                print(dos["pseudocode"])
            else:
                print(json.dumps(dos, indent=2))
        elif args.cmd == "function":
            print(json.dumps(sess.procedure_dossier(args.procedure), indent=2))
        elif args.cmd == "script":
            code = args.script_file
            try:
                with open(args.script_file, "r") as f:
                    code = f.read()
            except OSError:
                pass
            res = execute_ultron_python_script(sess.current_doc, code)
            sys.stdout.write(res["stdout"])
            if res["stderr"]:
                sys.stderr.write(res["stderr"])
        return

    if getattr(args, "binary", None):
        os.environ["ULTRON_STARTUP_BINARY"] = os.path.abspath(args.binary)

    uvicorn.run("ultron_disassembler.server:app", host=getattr(args, "host", "0.0.0.0"), port=getattr(args, "port", 8420))


if __name__ == "__main__":
    main()

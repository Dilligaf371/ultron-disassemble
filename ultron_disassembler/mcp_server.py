"""
Ultron Disassembler — Session Manager & MCP Server (JSON-RPC 2.0 over stdio)
"""

from __future__ import annotations
import json
import os
import re
import struct
import sys
from typing import Dict, List, Optional, Any

from .core import (
    AssemblerService,
    ByteType,
    CapstoneDisassemblerEngine,
    DecompilerOptions,
    UltronDisassembledFile,
    UltronProcedure,
    UltronDecompiler,
    execute_ultron_python_script,
    load_binary_file,
)


def parse_addr_or_name(doc: UltronDisassembledFile, query: str | int) -> Optional[int]:
    if isinstance(query, int):
        return query
    s = str(query).strip()
    if s.startswith("0x") or s.startswith("0X"):
        try:
            return int(s, 16)
        except ValueError:
            pass
    if s.isdigit():
        return int(s)
    # Search by symbol/procedure name
    for addr, name in doc.names.items():
        if name == s or name.lstrip("_") == s.lstrip("_"):
            return addr
    for proc in doc.procedures:
        if proc.name == s or proc.name.lstrip("_") == s.lstrip("_"):
            return proc.entry_point
    return None


class UltronSession:
    """Manages loaded UltronDisassembledFile documents and exposes analysis, decompilation, and patching APIs."""

    def __init__(self) -> None:
        self.documents: Dict[str, UltronDisassembledFile] = {}
        self.current_doc_name: Optional[str] = None

    @property
    def current_doc(self) -> Optional[UltronDisassembledFile]:
        if self.current_doc_name and self.current_doc_name in self.documents:
            return self.documents[self.current_doc_name]
        if self.documents:
            return next(iter(self.documents.values()))
        return None

    def open_binary(self, path: str, arch: Optional[str] = "arm64") -> Dict[str, Any]:
        abs_path = os.path.abspath(os.path.expanduser(path))
        doc, seeds = load_binary_file(abs_path, preferred_arch=arch)
        CapstoneDisassemblerEngine.analyze_document(doc, seed_procedures=seeds)
        doc_name = os.path.basename(doc.file_path)
        self.documents[doc_name] = doc
        self.current_doc_name = doc_name
        return self.document_overview(doc_name)

    def document_overview(self, doc_name: Optional[str] = None) -> Dict[str, Any]:
        doc = self.documents.get(doc_name) if doc_name else self.current_doc
        if not doc:
            return {"open": False}
        return {
            "open": True,
            "document": os.path.basename(doc.file_path),
            "file_path": doc.file_path,
            "format": doc.format_name,
            "cpu_family": doc.cpu_family,
            "cpu_subfamily": doc.cpu_subfamily,
            "available_slices": doc.available_slices,
            "address_space_bits": doc.address_space_bits,
            "base_address": f"0x{doc.base_address:x}",
            "entry_point": f"0x{doc.entry_point:x}",
            "current_address": f"0x{doc.current_address:x}",
            "syntax_mode": doc.syntax_mode,
            "segment_count": len(doc.segments),
            "procedure_count": len(doc.procedures),
            "instruction_count": len(doc.instructions_by_addr),
            "string_count": len(doc.strings),
            "import_count": len(doc.imports),
            "export_count": len(doc.exports),
            "objc_class_count": len(doc.objc_classes),
            "segments": [s.to_dict() for s in doc.segments],
            "bookmarks": [{"address": f"0x{k:x}", "name": v} for k, v in sorted(doc.bookmarks.items())],
            "navigation_stack": [f"0x{a:x}" for a in doc.navigation_stack[-20:]],
            "can_undo": len(doc.undo_stack) > 0,
            "can_redo": len(doc.redo_stack) > 0,
        }

    def get_procedure(self, query: str | int, doc: Optional[UltronDisassembledFile] = None) -> Optional[UltronProcedure]:
        d = doc or self.current_doc
        if not d:
            return None
        addr = parse_addr_or_name(d, query)
        if addr is None:
            return None
        return d.get_procedure_at(addr)

    def procedure_dossier(
        self,
        query: str | int,
        decompiler_opts: Optional[DecompilerOptions] = None,
    ) -> Dict[str, Any]:
        doc = self.current_doc
        if not doc:
            return {"error": "No document open"}
        proc = self.get_procedure(query, doc)
        if not proc:
            return {"error": f"Unknown procedure or address: {query}"}

        doc.navigation_stack.append(proc.entry_point)
        doc.current_address = proc.entry_point

        decomp = UltronDecompiler.decompile_procedure(doc, proc, options=decompiler_opts)
        insns = [i.to_dict(doc) for i in proc.all_instructions()]
        blocks = [bb.to_dict(doc) for bb in proc.basic_blocks]

        return {
            "procedure": proc.to_summary_dict(),
            "instructions": insns,
            "basic_blocks": blocks,
            "pseudocode": decomp["pseudocode"],
            "retreating_edges": decomp["retreating_edges"],
            "local_variables": [v.to_dict() for v in proc.local_variables],
            "callers": [c.to_dict() for c in proc.callers],
            "callees": [c.to_dict() for c in proc.callees],
            "xrefs_in": [
                {"from": f"0x{x:x}", "from_name": self._format_addr_context(doc, x)}
                for x in doc.xrefs_to.get(proc.entry_point, [])
            ],
        }

    def _format_addr_context(self, doc: UltronDisassembledFile, addr: int) -> str:
        if addr in doc.names:
            return doc.names[addr]
        p = doc.get_procedure_at(addr)
        if p:
            off = addr - p.entry_point
            return f"{p.name}+0x{off:x}" if off > 0 else p.name
        return f"0x{addr:x}"

    def inspect_address(self, query: str | int) -> Dict[str, Any]:
        """Inspects address details, cross-references (XREFs), and multi-type Data Inspector values."""
        doc = self.current_doc
        if not doc:
            return {"error": "No document open"}
        addr = parse_addr_or_name(doc, query)
        if addr is None:
            return {"error": f"Invalid address: {query}"}

        seg = doc.get_segment_at(addr)
        sec = doc.get_section_at(addr)
        proc = doc.get_procedure_at(addr)
        ins = doc.instructions_by_addr.get(addr)
        b_type = seg.get_type_at(addr) if seg else ByteType.TYPE_OUTSIDE

        # Data Inspector (int8/16/32/64 LE/BE, float, double, ASCII)
        raw8 = doc.read_bytes(addr, 8) or b"\x00" * 8
        data_inspector = {}
        if len(raw8) >= 8:
            data_inspector = {
                "uint8": raw8[0],
                "int8": struct.unpack("<b", raw8[:1])[0],
                "uint16_le": f"0x{struct.unpack('<H', raw8[:2])[0]:04x} ({struct.unpack('<H', raw8[:2])[0]})",
                "uint32_le": f"0x{struct.unpack('<I', raw8[:4])[0]:08x} ({struct.unpack('<I', raw8[:4])[0]})",
                "uint64_le": f"0x{struct.unpack('<Q', raw8[:8])[0]:016x}",
                "uint32_be": f"0x{struct.unpack('>I', raw8[:4])[0]:08x}",
                "float32": round(struct.unpack("<f", raw8[:4])[0], 6),
                "ascii": "".join(chr(b) if 32 <= b < 127 else "." for b in raw8),
            }

        return {
            "address": f"0x{addr:x}",
            "address_int": addr,
            "decimal": str(addr),
            "octal": oct(addr),
            "name": doc.names.get(addr),
            "byte_type": ByteType.string_for_type(b_type),
            "segment": seg.name if seg else None,
            "section": sec.name if sec else None,
            "file_offset": f"0x{seg.file_offset + (addr - seg.start_address):x}" if seg else None,
            "procedure": proc.to_summary_dict() if proc else None,
            "instruction": ins.to_dict(doc) if ins else None,
            "comment": doc.comments.get(addr),
            "inline_comment": doc.inline_comments.get(addr),
            "xrefs_to": [
                {"address": f"0x{x:x}", "context": self._format_addr_context(doc, x)}
                for x in doc.xrefs_to.get(addr, [])
            ],
            "xrefs_from": [
                {"address": f"0x{x:x}", "context": self._format_addr_context(doc, x)}
                for x in doc.xrefs_from.get(addr, [])
            ],
            "data_inspector": data_inspector,
        }

    def read_hex_window(self, query: str | int, length: int = 256) -> Dict[str, Any]:
        """Reads synchronized hex view rows with per-byte typing."""
        doc = self.current_doc
        if not doc:
            return {"error": "No document open"}
        addr = parse_addr_or_name(doc, query)
        if addr is None:
            addr = doc.entry_point
        seg = doc.get_segment_at(addr) or (doc.segments[0] if doc.segments else None)
        if not seg:
            return {"error": "No segment"}
        if not seg.contains(addr):
            addr = seg.start_address
        aligned = (addr // 16) * 16
        if aligned < seg.start_address:
            aligned = seg.start_address
        raw = seg.read_bytes(aligned, min(length, 1024)) or b""
        rows = []
        for off in range(0, len(raw), 16):
            row_addr = aligned + off
            chunk = raw[off : off + 16]
            b_types = [ByteType.string_for_type(seg.get_type_at(row_addr + i)) for i in range(len(chunk))]
            ascii_str = "".join(chr(b) if 32 <= b < 127 else "." for b in chunk)
            rows.append({
                "address": f"0x{row_addr:x}",
                "address_int": row_addr,
                "bytes": [f"{b:02x}" for b in chunk],
                "types": b_types,
                "ascii": ascii_str,
                "label": doc.names.get(row_addr),
            })
        return {
            "segment": seg.name,
            "start_address": f"0x{aligned:x}",
            "rows": rows,
        }

    def search(self, pattern: str, kind: str = "procedures", case_sensitive: bool = False) -> List[Dict[str, Any]]:
        doc = self.current_doc
        if not doc:
            return []
        flags = 0 if case_sensitive else re.IGNORECASE
        try:
            rx = re.compile(pattern, flags)
        except re.error:
            rx = re.compile(re.escape(pattern), flags)

        if kind == "strings":
            return [
                s.to_dict(doc)
                for s in doc.strings
                if rx.search(s.value)
            ][:200]
        elif kind == "names":
            return [
                {"address": f"0x{a:x}", "name": n}
                for a, n in sorted(doc.names.items())
                if rx.search(n)
            ][:200]
        else:
            return [
                p.to_summary_dict()
                for p in doc.procedures
                if rx.search(p.name) or rx.search(f"0x{p.entry_point:x}")
            ][:200]


MCP_TOOLS = [
    {
        "name": "open_binary",
        "description": "Open and analyze a Mach-O (Universal/arm64/x86_64), ELF, PE, or Raw binary in Ultron Disassembler.",
        "inputSchema": {
            "type": "object",
            "properties": {
                "path": {"type": "string", "description": "Absolute path to binary or .app bundle"},
                "arch": {"type": "string", "description": "Architecture slice (arm64 or x86_64)", "default": "arm64"},
            },
            "required": ["path"],
        },
    },
    {
        "name": "document_overview",
        "description": "Return segments, sections, procedure/string counts, entry point, and architecture of the active document.",
        "inputSchema": {"type": "object", "properties": {}},
    },
    {
        "name": "list_procedures",
        "description": "List or search analyzed procedures in the current document.",
        "inputSchema": {
            "type": "object",
            "properties": {
                "pattern": {"type": "string", "description": "Optional regex or substring filter", "default": ".*"},
            },
        },
    },
    {
        "name": "list_strings",
        "description": "List or search extracted strings in the current document.",
        "inputSchema": {
            "type": "object",
            "properties": {
                "pattern": {"type": "string", "description": "Optional regex or substring filter", "default": ".*"},
            },
        },
    },
    {
        "name": "analyze_procedure",
        "description": "Return complete assembly instructions, CFG basic blocks, decompiled pseudocode, callers, callees, and local variables for a procedure.",
        "inputSchema": {
            "type": "object",
            "properties": {
                "procedure": {"type": "string", "description": "Procedure name or hex address (e.g. EntryPoint or 0x1000011dc)"},
            },
            "required": ["procedure"],
        },
    },
    {
        "name": "decompile_procedure",
        "description": "Decompile a procedure into structured C/Objective-C pseudocode.",
        "inputSchema": {
            "type": "object",
            "properties": {
                "procedure": {"type": "string", "description": "Procedure name or hex address"},
            },
            "required": ["procedure"],
        },
    },
    {
        "name": "inspect_address",
        "description": "Inspect address details, byte type, cross-references (XREFs), and Data Inspector values.",
        "inputSchema": {
            "type": "object",
            "properties": {
                "address": {"type": "string", "description": "Hex address or symbol name"},
            },
            "required": ["address"],
        },
    },
    {
        "name": "rename_address",
        "description": "Set or rename symbol/procedure label at an address.",
        "inputSchema": {
            "type": "object",
            "properties": {
                "address": {"type": "string"},
                "name": {"type": "string"},
            },
            "required": ["address", "name"],
        },
    },
    {
        "name": "set_comment",
        "description": "Set block or inline comment at an address.",
        "inputSchema": {
            "type": "object",
            "properties": {
                "address": {"type": "string"},
                "comment": {"type": "string"},
                "inline": {"type": "boolean", "default": False},
            },
            "required": ["address", "comment"],
        },
    },
    {
        "name": "assemble_instruction",
        "description": "Assemble an ARM64 or x86_64 instruction via LLVMService_assemble_unchecked / clang, optionally patching at address.",
        "inputSchema": {
            "type": "object",
            "properties": {
                "instruction": {"type": "string", "description": "Assembly instruction (e.g. 'mov x0, #1' or 'nop')"},
                "arch": {"type": "string", "default": "arm64"},
                "patch_address": {"type": "string", "description": "Optional hex address to patch in active document"},
            },
            "required": ["instruction"],
        },
    },
    {
        "name": "run_ultron_script",
        "description": "Execute a Python script using the Document / Segment / Procedure / BasicBlock scripting API.",
        "inputSchema": {
            "type": "object",
            "properties": {
                "code": {"type": "string", "description": "Python code using doc = Document.getCurrentDocument()"},
            },
            "required": ["code"],
        },
    },
]


def run_mcp_stdio_server() -> None:
    """Run Ultron Disassembler as a standard JSON-RPC 2.0 MCP server over stdio."""
    session = UltronSession()
    for raw_line in sys.stdin:
        line = raw_line.strip()
        if not line:
            continue
        try:
            req = json.loads(line)
        except Exception:
            continue
        req_id = req.get("id")
        method = req.get("method")
        params = req.get("params") or {}

        if method == "initialize":
            resp = {
                "jsonrpc": "2.0",
                "id": req_id,
                "result": {
                    "protocolVersion": "2024-11-05",
                    "serverInfo": {"name": "ultron-disassembler-mcp", "version": "1.0.0"},
                    "capabilities": {"tools": {}},
                },
            }
            sys.stdout.write(json.dumps(resp) + "\n")
            sys.stdout.flush()
        elif method == "notifications/initialized":
            continue
        elif method == "tools/list":
            resp = {"jsonrpc": "2.0", "id": req_id, "result": {"tools": MCP_TOOLS}}
            sys.stdout.write(json.dumps(resp) + "\n")
            sys.stdout.flush()
        elif method == "tools/call":
            tname = params.get("name")
            targs = params.get("arguments") or {}
            try:
                if tname == "open_binary":
                    out = session.open_binary(targs["path"], targs.get("arch", "arm64"))
                elif tname == "document_overview":
                    out = session.document_overview()
                elif tname == "list_procedures":
                    out = session.search(targs.get("pattern", ".*"), kind="procedures")
                elif tname == "list_strings":
                    out = session.search(targs.get("pattern", ".*"), kind="strings")
                elif tname == "analyze_procedure":
                    out = session.procedure_dossier(targs["procedure"])
                elif tname == "decompile_procedure":
                    dos = session.procedure_dossier(targs["procedure"])
                    out = {"procedure": targs["procedure"], "pseudocode": dos.get("pseudocode", dos.get("error"))}
                elif tname == "inspect_address":
                    out = session.inspect_address(targs["address"])
                elif tname == "rename_address":
                    doc = session.current_doc
                    addr = parse_addr_or_name(doc, targs["address"]) if doc else None
                    if doc and addr is not None:
                        doc.set_name(addr, targs["name"])
                        out = {"success": True, "address": f"0x{addr:x}", "name": targs["name"]}
                    else:
                        out = {"success": False, "error": "Invalid document or address"}
                elif tname == "set_comment":
                    doc = session.current_doc
                    addr = parse_addr_or_name(doc, targs["address"]) if doc else None
                    if doc and addr is not None:
                        doc.set_comment(addr, targs["comment"], inline=bool(targs.get("inline", False)))
                        out = {"success": True, "address": f"0x{addr:x}", "comment": targs["comment"]}
                    else:
                        out = {"success": False, "error": "Invalid document or address"}
                elif tname == "assemble_instruction":
                    patch_addr = targs.get("patch_address")
                    if patch_addr and session.current_doc:
                        addr = parse_addr_or_name(session.current_doc, patch_addr)
                        out = AssemblerService.patch_instruction_at(session.current_doc, addr, targs["instruction"]) if addr else {"error": "Bad address"}
                    else:
                        out = AssemblerService.assemble(targs["instruction"], arch=targs.get("arch", "arm64"))
                elif tname == "run_ultron_script":
                    if session.current_doc:
                        out = execute_ultron_python_script(session.current_doc, targs["code"])
                    else:
                        out = {"error": "No active document"}
                else:
                    out = {"error": f"Unknown tool: {tname}"}

                resp = {
                    "jsonrpc": "2.0",
                    "id": req_id,
                    "result": {"content": [{"type": "text", "text": json.dumps(out, indent=2)}]},
                }
            except Exception as exc:
                resp = {
                    "jsonrpc": "2.0",
                    "id": req_id,
                    "result": {"isError": True, "content": [{"type": "text", "text": str(exc)}]},
                }
            sys.stdout.write(json.dumps(resp) + "\n")
            sys.stdout.flush()


if __name__ == "__main__":
    run_mcp_stdio_server()

"""
Ultron Disassembler FastAPI Backend Server
Serves the 6-mode Desktop/Web HUD (ASM, Decompiler/SSA, CFG + MiniMap, Hex, CPU Emulator, Neural Security Audit) and REST API.
"""

from __future__ import annotations
import os
from typing import Optional, Dict, List, Any
from fastapi import FastAPI, Query
from fastapi.responses import FileResponse, JSONResponse
from pydantic import BaseModel

from .core import (
    AssemblerService,
    CapstoneDisassemblerEngine,
    DecompilerOptions,
    UltronTypeDesc,
    UltronTypeField,
    SymbolDemangler,
    UltronMicroEmulator,
    UltronNeuralAnalyzer,
    UltronSecurityAuditor,
    execute_ultron_python_script,
)
from .mcp_server import UltronSession, parse_addr_or_name

app = FastAPI(title="Ultron Disassembler & Decompiler", version="2.0.0")
session = UltronSession()
active_emulator: Optional[UltronMicroEmulator] = None

PROJECT_ROOT = os.path.dirname(os.path.dirname(__file__))

PRESET_TARGETS = [
    {
        "label": "Ultron Sample (Mach-O ARM64 Objective-C + C)",
        "path": os.path.join(PROJECT_ROOT, "samples", "ultron_sample_macho"),
        "arch": "arm64",
    },
    {
        "label": "macOS /bin/ls (Mach-O Universal)",
        "path": "/bin/ls",
        "arch": "arm64",
    },
    {
        "label": "macOS /usr/bin/true (Mach-O Universal)",
        "path": "/usr/bin/true",
        "arch": "arm64",
    },
    {
        "label": "libLLVMServices.dylib (LLVM Engine)",
        "path": os.path.join(os.path.dirname(__file__), "lib", "libLLVMServices.dylib"),
        "arch": "arm64",
    },
]


@app.on_event("startup")
def startup_load_default() -> None:
    startup_bin = os.environ.get("ULTRON_STARTUP_BINARY")
    if startup_bin and os.path.exists(startup_bin):
        try:
            session.open_binary(startup_bin, arch="arm64")
            return
        except Exception:
            pass
    for preset in PRESET_TARGETS:
        if os.path.exists(preset["path"]):
            try:
                session.open_binary(preset["path"], arch=preset["arch"])
                break
            except Exception:
                continue


class OpenBinaryRequest(BaseModel):
    path: str
    arch: Optional[str] = "arm64"


class RenameRequest(BaseModel):
    address: str
    name: str


class CommentRequest(BaseModel):
    address: str
    comment: str
    inline: bool = False


class BookmarkRequest(BaseModel):
    address: str
    name: str


class AssembleRequest(BaseModel):
    instruction: str
    arch: str = "arm64"
    intel_syntax: bool = True
    patch_address: Optional[str] = None


class AddressActionRequest(BaseModel):
    address: str


class SyntaxRequest(BaseModel):
    syntax: str


class ScriptRequest(BaseModel):
    code: str


class NeuralAnalyzeRequest(BaseModel):
    procedure: str
    apply_rename: bool = False


class EmulateRequest(BaseModel):
    procedure: str
    action: str = "step"  # "init", "step", "run", "reset"
    init_regs: Optional[Dict[str, str]] = None


class ExportBinaryRequest(BaseModel):
    output_path: Optional[str] = None
    resign_macho: bool = True


class StructFieldInput(BaseModel):
    name: str
    field_type: str = "uint64_t"
    offset: int
    size: int = 8


class CreateStructRequest(BaseModel):
    name: str
    size: int = 64
    fields: List[StructFieldInput]


@app.api_route("/", methods=["GET", "HEAD"])
def serve_ui():
    ui_path = os.path.join(os.path.dirname(__file__), "ui", "index.html")
    return FileResponse(ui_path)


@app.get("/assets/{filename}")
def serve_asset(filename: str):
    safe_name = os.path.basename(filename)
    asset_path = os.path.join(os.path.dirname(__file__), "ui", "assets", safe_name)
    if not os.path.isfile(asset_path):
        return JSONResponse(status_code=404, content={"error": "Asset not found"})
    return FileResponse(asset_path)


@app.api_route("/api/overview", methods=["GET", "HEAD"])
def api_overview():
    ov = session.document_overview()
    ov["presets"] = [p for p in PRESET_TARGETS if os.path.exists(p["path"])]
    ov["open_documents"] = list(session.documents.keys())
    return ov


@app.post("/api/open")
def api_open(req: OpenBinaryRequest):
    global active_emulator
    active_emulator = None
    try:
        return session.open_binary(req.path, arch=req.arch)
    except Exception as exc:
        return JSONResponse(status_code=400, content={"error": str(exc)})


@app.get("/api/procedures")
def api_procedures(q: str = Query(default="")):
    doc = session.current_doc
    if not doc:
        return {"items": [], "total": 0}
    items = session.search(q if q else ".*", kind="procedures")
    for it in items:
        it["demangled"] = SymbolDemangler.demangle(it["name"])
    return {"items": items, "total": len(doc.procedures)}


@app.get("/api/strings")
def api_strings(q: str = Query(default="")):
    doc = session.current_doc
    if not doc:
        return {"items": [], "total": 0}
    items = session.search(q if q else ".*", kind="strings")
    return {"items": items, "total": len(doc.strings)}


@app.get("/api/symbols")
def api_symbols():
    doc = session.current_doc
    if not doc:
        return {"imports": [], "exports": [], "objc_classes": [], "types": []}
    return {
        "imports": doc.imports[:300],
        "exports": doc.exports[:300],
        "objc_classes": doc.objc_classes,
        "types": [t.to_dict() for t in doc.types.values()],
    }


@app.get("/api/procedure/{query:path}")
def api_procedure(
    query: str,
    remove_nops: bool = True,
    remove_prologue: bool = True,
    rewrite_objc: bool = True,
    inline_strings: bool = True,
    structure_cf: bool = True,
    ssa_form: bool = False,
):
    opts = DecompilerOptions(
        remove_nops=remove_nops,
        remove_prologue_epilogue=remove_prologue,
        rewrite_objc_messages=rewrite_objc,
        inline_strings=inline_strings,
        structure_control_flow=structure_cf,
        ssa_form=ssa_form,
    )
    return session.procedure_dossier(query, decompiler_opts=opts)


@app.get("/api/address/{query:path}")
def api_address(query: str):
    return session.inspect_address(query)


@app.get("/api/hex")
def api_hex(address: str = Query(default="0x100000000"), length: int = Query(default=384)):
    return session.read_hex_window(address, length=length)


@app.post("/api/rename")
def api_rename(req: RenameRequest):
    doc = session.current_doc
    if not doc:
        return {"success": False, "error": "No document open"}
    addr = parse_addr_or_name(doc, req.address)
    if addr is None:
        return {"success": False, "error": f"Invalid address: {req.address}"}
    doc.set_name(addr, req.name)
    return {"success": True, "address": f"0x{addr:x}", "name": req.name}


@app.post("/api/comment")
def api_comment(req: CommentRequest):
    doc = session.current_doc
    if not doc:
        return {"success": False, "error": "No document open"}
    addr = parse_addr_or_name(doc, req.address)
    if addr is None:
        return {"success": False, "error": f"Invalid address: {req.address}"}
    doc.set_comment(addr, req.comment, inline=req.inline)
    return {"success": True, "address": f"0x{addr:x}", "comment": req.comment, "inline": req.inline}


@app.post("/api/bookmark")
def api_bookmark(req: BookmarkRequest):
    doc = session.current_doc
    if not doc:
        return {"success": False, "error": "No document open"}
    addr = parse_addr_or_name(doc, req.address)
    if addr is None:
        return {"success": False, "error": f"Invalid address: {req.address}"}
    if req.name:
        doc.bookmarks[addr] = req.name
    else:
        doc.bookmarks.pop(addr, None)
    return {"success": True, "bookmarks": [{"address": f"0x{k:x}", "name": v} for k, v in sorted(doc.bookmarks.items())]}


@app.post("/api/assemble")
def api_assemble(req: AssembleRequest):
    doc = session.current_doc
    if req.patch_address and doc:
        addr = parse_addr_or_name(doc, req.patch_address)
        if addr is None:
            return {"success": False, "error": f"Invalid patch address: {req.patch_address}"}
        return AssemblerService.patch_instruction_at(doc, addr, req.instruction)
    return AssemblerService.assemble(req.instruction, arch=req.arch, intel_syntax=req.intel_syntax)


@app.post("/api/patch/nop")
def api_patch_nop(req: AddressActionRequest):
    doc = session.current_doc
    if not doc:
        return {"success": False, "error": "No document open"}
    addr = parse_addr_or_name(doc, req.address)
    if addr is None:
        return {"success": False, "error": f"Invalid address: {req.address}"}
    return AssemblerService.nop_instruction_at(doc, addr)


@app.post("/api/patch/invert-jmp")
def api_patch_invert_jmp(req: AddressActionRequest):
    doc = session.current_doc
    if not doc:
        return {"success": False, "error": "No document open"}
    addr = parse_addr_or_name(doc, req.address)
    if addr is None:
        return {"success": False, "error": f"Invalid address: {req.address}"}
    return AssemblerService.invert_jump_at(doc, addr)


@app.post("/api/export-binary")
def api_export_binary(req: ExportBinaryRequest):
    doc = session.current_doc
    if not doc:
        return {"success": False, "error": "No document open"}
    return AssemblerService.export_patched_binary(doc, output_path=req.output_path, resign_macho=req.resign_macho)


@app.get("/api/audit")
def api_security_audit():
    doc = session.current_doc
    if not doc:
        return {"error": "No document open"}
    return UltronSecurityAuditor.audit_document(doc)


@app.post("/api/neural/analyze")
def api_neural_analyze(req: NeuralAnalyzeRequest):
    doc = session.current_doc
    if not doc:
        return {"error": "No document open"}
    proc = session.get_procedure(req.procedure, doc)
    if not proc:
        return {"error": f"Unknown procedure: {req.procedure}"}
    return UltronNeuralAnalyzer.analyze_procedure(doc, proc, apply_rename=req.apply_rename)


@app.post("/api/demangle")
def api_demangle():
    doc = session.current_doc
    if not doc:
        return {"error": "No document open"}
    return SymbolDemangler.demangle_document(doc)


@app.post("/api/emulate")
def api_emulate(req: EmulateRequest):
    global active_emulator
    doc = session.current_doc
    if not doc:
        return {"error": "No document open"}
    proc = session.get_procedure(req.procedure, doc)
    if not proc:
        return {"error": f"Unknown procedure: {req.procedure}"}

    parsed_regs: Dict[str, int] = {}
    if req.init_regs:
        for rk, rv in req.init_regs.items():
            try:
                parsed_regs[rk] = int(str(rv), 0)
            except ValueError:
                pass

    if (
        active_emulator is None
        or active_emulator.proc.entry_point != proc.entry_point
        or req.action in ("init", "reset")
    ):
        active_emulator = UltronMicroEmulator(doc, proc, init_regs=parsed_regs)
        if req.action in ("init", "reset"):
            return active_emulator.state_dict()

    if req.action == "step":
        return active_emulator.step()
    elif req.action == "run":
        return active_emulator.run_to_return(max_steps=64)
    return active_emulator.state_dict()


@app.post("/api/types")
def api_create_type(req: CreateStructRequest):
    doc = session.current_doc
    if not doc:
        return {"success": False, "error": "No document open"}
    fields = [
        UltronTypeField(name=f.name, field_type=f.field_type, offset=f.offset, size=f.size)
        for f in req.fields
    ]
    td = UltronTypeDesc(name=req.name, kind="struct", size=req.size, fields=fields)
    doc.types[req.name] = td
    return {"success": True, "type": td.to_dict(), "all_types": [t.to_dict() for t in doc.types.values()]}


@app.post("/api/syntax")
def api_syntax(req: SyntaxRequest):
    doc = session.current_doc
    if not doc:
        return {"success": False}
    doc.syntax_mode = "att" if req.syntax.lower() == "att" else "intel"
    CapstoneDisassemblerEngine.analyze_document(doc, seed_procedures=list(doc.procedures_by_entry.keys()))
    return {"success": True, "syntax_mode": doc.syntax_mode}


@app.post("/api/undo")
def api_undo():
    doc = session.current_doc
    if not doc or not doc.undo_stack:
        return {"success": False, "error": "Nothing to undo"}
    ev = doc.undo_stack.pop()
    ev.undo_fn()
    doc.redo_stack.append(ev)
    CapstoneDisassemblerEngine.analyze_document(doc, seed_procedures=list(doc.procedures_by_entry.keys()))
    return {"success": True, "description": ev.description}


@app.post("/api/redo")
def api_redo():
    doc = session.current_doc
    if not doc or not doc.redo_stack:
        return {"success": False, "error": "Nothing to redo"}
    ev = doc.redo_stack.pop()
    ev.redo_fn()
    doc.undo_stack.append(ev)
    CapstoneDisassemblerEngine.analyze_document(doc, seed_procedures=list(doc.procedures_by_entry.keys()))
    return {"success": True, "description": ev.description}


@app.post("/api/script")
def api_script(req: ScriptRequest):
    doc = session.current_doc
    if not doc:
        return {"success": False, "error": "No document open"}
    return execute_ultron_python_script(doc, req.code)

"""
Ultron Disassembler Core Data Model
"""

from __future__ import annotations
from dataclasses import dataclass, field
from typing import Dict, List, Optional, Tuple, Any
import math


class ByteType:
    """Per-byte classification constants for binary segments."""
    BAD_ADDRESS = -1
    TYPE_UNDEFINED = 0
    TYPE_OUTSIDE = 1
    TYPE_NEXT = 2
    TYPE_INT8 = 3
    TYPE_INT16 = 4
    TYPE_INT32 = 5
    TYPE_INT64 = 6
    TYPE_ASCII = 7
    TYPE_UNICODE = 8
    TYPE_ALIGN = 63
    TYPE_CODE = 65
    TYPE_PROCEDURE = 66
    TYPE_STRUCTURE = 67

    NAMES = {
        TYPE_UNDEFINED: "undefined",
        TYPE_OUTSIDE: "outside",
        TYPE_NEXT: "next",
        TYPE_INT8: "int8",
        TYPE_INT16: "int16",
        TYPE_INT32: "int32",
        TYPE_INT64: "int64",
        TYPE_ASCII: "ascii",
        TYPE_UNICODE: "unicode",
        TYPE_ALIGN: "align",
        TYPE_CODE: "code",
        TYPE_PROCEDURE: "procedure",
        TYPE_STRUCTURE: "structure",
    }

    @classmethod
    def string_for_type(cls, t: int) -> str:
        return cls.NAMES.get(t, "<unknown>")


class CallType:
    """Call reference classification constants."""
    CALL_NONE = 0
    CALL_UNKNOWN = 1
    CALL_DIRECT = 2
    CALL_OBJC = 3

    NAMES = {
        CALL_NONE: "none",
        CALL_UNKNOWN: "indirect",
        CALL_DIRECT: "direct",
        CALL_OBJC: "objc_msgSend",
    }


class Architecture:
    """CPU architecture constants."""
    ARCHITECTURE_UNKNOWN = 0
    ARCHITECTURE_i386 = 1
    ARCHITECTURE_X86_64 = 2
    ARCHITECTURE_ARM = 3
    ARCHITECTURE_ARM_THUMB = 4
    ARCHITECTURE_AARCH64 = 5
    ARCHITECTURE_OTHER = 99

    NAMES = {
        ARCHITECTURE_UNKNOWN: "unknown",
        ARCHITECTURE_i386: "i386",
        ARCHITECTURE_X86_64: "x86_64",
        ARCHITECTURE_ARM: "ARM",
        ARCHITECTURE_ARM_THUMB: "ARM (Thumb)",
        ARCHITECTURE_AARCH64: "AArch64",
        ARCHITECTURE_OTHER: "Other (plugin)",
    }


@dataclass
class UltronCallReference:
    """Models Protocol UltronCallReference (type, from, to)."""
    call_type: int
    from_address: int
    to_address: int
    target_name: Optional[str] = None

    def to_dict(self) -> Dict[str, Any]:
        return {
            "type": self.call_type,
            "type_name": CallType.NAMES.get(self.call_type, "unknown"),
            "from": f"0x{self.from_address:x}",
            "from_int": self.from_address,
            "to": f"0x{self.to_address:x}",
            "to_int": self.to_address,
            "target_name": self.target_name,
        }


@dataclass
class UltronLocalVariable:
    """Models ProcedureVariable / LocalVariable (name, displacement, type_desc)."""
    name: str
    displacement: int
    var_type: str = "int64_t"
    reg_name: Optional[str] = None

    def to_dict(self) -> Dict[str, Any]:
        return {
            "name": self.name,
            "displacement": self.displacement,
            "type": self.var_type,
            "reg_name": self.reg_name,
        }


@dataclass
class UltronInstruction:
    """Models disassembled instruction & UltronASMLine."""
    address: int
    size: int
    mnemonic: str
    op_str: str
    raw_bytes: bytes
    arch: int = Architecture.ARCHITECTURE_AARCH64
    raw_args: List[str] = field(default_factory=list)
    formatted_args: List[str] = field(default_factory=list)
    is_conditional_jump: bool = False
    is_unconditional_jump: bool = False
    is_call: bool = False
    is_ret: bool = False
    is_nop: bool = False
    branch_target: Optional[int] = None
    call_target: Optional[int] = None
    call_type: int = CallType.CALL_NONE
    referenced_address: Optional[int] = None
    auto_comment: Optional[str] = None

    def to_dict(self, doc: Optional["UltronDisassembledFile"] = None) -> Dict[str, Any]:
        label = doc.names.get(self.address) if doc else None
        comment = doc.comments.get(self.address) if doc else None
        inline_comment = (doc.inline_comments.get(self.address) if doc else None) or self.auto_comment
        xrefs_to = [f"0x{x:x}" for x in doc.xrefs_to.get(self.address, [])] if doc else []
        target_sym = None
        if doc and self.call_target is not None:
            target_sym = doc.names.get(self.call_target)
        elif doc and self.branch_target is not None:
            target_sym = doc.names.get(self.branch_target)
        return {
            "address": f"0x{self.address:x}",
            "address_int": self.address,
            "size": self.size,
            "bytes": self.raw_bytes.hex(),
            "mnemonic": self.mnemonic,
            "op_str": self.op_str,
            "formatted_op_str": ", ".join(self.formatted_args) if self.formatted_args else self.op_str,
            "raw_args": self.raw_args,
            "formatted_args": self.formatted_args,
            "is_cjmp": self.is_conditional_jump,
            "is_ijmp": self.is_unconditional_jump,
            "is_call": self.is_call,
            "is_ret": self.is_ret,
            "is_nop": self.is_nop,
            "branch_target": f"0x{self.branch_target:x}" if self.branch_target is not None else None,
            "branch_target_int": self.branch_target,
            "call_target": f"0x{self.call_target:x}" if self.call_target is not None else None,
            "call_target_int": self.call_target,
            "target_symbol": target_sym,
            "label": label,
            "comment": comment,
            "inline_comment": inline_comment,
            "xrefs_in": xrefs_to,
        }


@dataclass
class UltronBasicBlock:
    """Models Protocol UltronBasicBlock & HighLevelBB."""
    index: int
    start_address: int
    end_address: int
    instructions: List[UltronInstruction] = field(default_factory=list)
    successors: List[int] = field(default_factory=list)       # target start addresses
    predecessors: List[int] = field(default_factory=list)     # source start addresses
    then_successor: Optional[int] = None
    else_successor: Optional[int] = None
    tags: List[str] = field(default_factory=list)
    color: Optional[str] = None

    def to_dict(self, doc: Optional["UltronDisassembledFile"] = None) -> Dict[str, Any]:
        return {
            "index": self.index,
            "from": f"0x{self.start_address:x}",
            "from_int": self.start_address,
            "to": f"0x{self.end_address:x}",
            "to_int": self.end_address,
            "instructions": [ins.to_dict(doc) for ins in self.instructions],
            "successors": [f"0x{s:x}" for s in self.successors],
            "predecessors": [f"0x{p:x}" for p in self.predecessors],
            "then_successor": f"0x{self.then_successor:x}" if self.then_successor is not None else None,
            "else_successor": f"0x{self.else_successor:x}" if self.else_successor is not None else None,
            "tags": self.tags,
            "color": self.color,
        }


@dataclass
class UltronProcedure:
    """Models Protocol UltronProcedure."""
    index: int
    entry_point: int
    end_address: int
    name: str
    segment_name: str
    section_name: str
    basic_blocks: List[UltronBasicBlock] = field(default_factory=list)
    local_variables: List[UltronLocalVariable] = field(default_factory=list)
    callers: List[UltronCallReference] = field(default_factory=list)
    callees: List[UltronCallReference] = field(default_factory=list)
    tags: List[str] = field(default_factory=list)
    local_labels: Dict[int, str] = field(default_factory=dict)
    register_renames: Dict[Tuple[int, int], str] = field(default_factory=dict)
    signature_override: Optional[str] = None
    frame_size: int = 0
    bp_based_frame: bool = True

    @property
    def size(self) -> int:
        return max(4, self.end_address - self.entry_point)

    def all_instructions(self) -> List[UltronInstruction]:
        insns: List[UltronInstruction] = []
        seen = set()
        for bb in sorted(self.basic_blocks, key=lambda b: b.start_address):
            for ins in bb.instructions:
                if ins.address not in seen:
                    seen.add(ins.address)
                    insns.append(ins)
        return sorted(insns, key=lambda i: i.address)

    def to_summary_dict(self) -> Dict[str, Any]:
        return {
            "index": self.index,
            "name": self.name,
            "entry_point": f"0x{self.entry_point:x}",
            "entry_point_int": self.entry_point,
            "end_address": f"0x{self.end_address:x}",
            "size": self.size,
            "segment": self.segment_name,
            "section": self.section_name,
            "basic_block_count": len(self.basic_blocks),
            "caller_count": len(self.callers),
            "callee_count": len(self.callees),
            "tags": self.tags,
            "signature": self.signature_override or f"int64_t {self.name}()",
        }


@dataclass
class UltronSection:
    """Models Protocol UltronSection."""
    index: int
    name: str
    segment_name: str
    start_address: int
    length: int
    file_offset: int
    flags: int = 0
    is_code: bool = False

    @property
    def end_address(self) -> int:
        return self.start_address + self.length

    def contains(self, addr: int) -> bool:
        return self.start_address <= addr < self.end_address

    def to_dict(self) -> Dict[str, Any]:
        return {
            "index": self.index,
            "name": self.name,
            "segment": self.segment_name,
            "start": f"0x{self.start_address:x}",
            "start_int": self.start_address,
            "end": f"0x{self.end_address:x}",
            "length": self.length,
            "file_offset": self.file_offset,
            "flags": self.flags,
            "is_code": self.is_code,
        }


@dataclass
class UltronSegment:
    """Models Protocol UltronSegment with per-byte typing (byte_types bytearray)."""
    index: int
    name: str
    start_address: int
    length: int
    file_offset: int
    file_length: int
    readable: bool = True
    writable: bool = False
    executable: bool = False
    mapped_data: bytearray = field(default_factory=bytearray)
    byte_types: bytearray = field(default_factory=bytearray)
    sections: List[UltronSection] = field(default_factory=list)

    def __post_init__(self) -> None:
        if not self.byte_types and self.length > 0:
            # Cap byte_types allocation for huge unmapped segments like __PAGEZERO
            alloc_len = min(self.length, max(len(self.mapped_data), 16 * 1024 * 1024)) if self.name != "__PAGEZERO" else 0
            self.byte_types = bytearray([ByteType.TYPE_UNDEFINED] * alloc_len)

    @property
    def end_address(self) -> int:
        return self.start_address + self.length

    def contains(self, addr: int) -> bool:
        return self.start_address <= addr < self.end_address

    def read_bytes(self, addr: int, size: int) -> Optional[bytes]:
        if not self.contains(addr):
            return None
        off = addr - self.start_address
        if off < 0 or off + size > len(self.mapped_data):
            return None
        return bytes(self.mapped_data[off : off + size])

    def write_bytes(self, addr: int, data: bytes) -> bool:
        if not self.contains(addr):
            return False
        off = addr - self.start_address
        if off < 0 or off + len(data) > len(self.mapped_data):
            return False
        self.mapped_data[off : off + len(data)] = data
        return True

    def get_type_at(self, addr: int) -> int:
        if not self.contains(addr):
            return ByteType.TYPE_OUTSIDE
        off = addr - self.start_address
        if off < len(self.byte_types):
            return self.byte_types[off]
        return ByteType.TYPE_UNDEFINED

    def set_type_at(self, addr: int, length: int, byte_type: int) -> None:
        if not self.contains(addr):
            return
        off = addr - self.start_address
        if off >= len(self.byte_types):
            return
        self.byte_types[off] = byte_type
        for i in range(1, length):
            if off + i < len(self.byte_types):
                self.byte_types[off + i] = ByteType.TYPE_NEXT

    def entropy_blocks(self, buckets: int = 64) -> List[float]:
        if not self.mapped_data:
            return [0.0] * buckets
        step = max(1, len(self.mapped_data) // buckets)
        result: List[float] = []
        for i in range(0, len(self.mapped_data), step):
            chunk = self.mapped_data[i : i + step]
            if not chunk:
                result.append(0.0)
                continue
            counts = [0] * 256
            for b in chunk:
                counts[b] += 1
            ent = 0.0
            n = len(chunk)
            for c in counts:
                if c > 0:
                    p = c / n
                    ent -= p * math.log2(p)
            result.append(round(ent / 8.0, 3))
        return result[:buckets]

    def to_dict(self) -> Dict[str, Any]:
        return {
            "index": self.index,
            "name": self.name,
            "start": f"0x{self.start_address:x}",
            "start_int": self.start_address,
            "end": f"0x{self.end_address:x}",
            "length": self.length,
            "file_offset": self.file_offset,
            "file_length": self.file_length,
            "readable": self.readable,
            "writable": self.writable,
            "executable": self.executable,
            "sections": [s.to_dict() for s in self.sections],
            "entropy": self.entropy_blocks(32),
        }


@dataclass
class UltronStringEntry:
    address: int
    value: str
    length: int
    section_name: str
    encoding: str = "utf-8"

    def to_dict(self, doc: Optional["UltronDisassembledFile"] = None) -> Dict[str, Any]:
        xrefs = [f"0x{x:x}" for x in doc.xrefs_to.get(self.address, [])] if doc else []
        return {
            "address": f"0x{self.address:x}",
            "address_int": self.address,
            "value": self.value,
            "length": self.length,
            "section": self.section_name,
            "encoding": self.encoding,
            "xrefs": xrefs,
        }


@dataclass
class UltronTypeField:
    name: str
    field_type: str
    offset: int
    size: int
    comment: str = ""


@dataclass
class UltronTypeDesc:
    """Models Protocol UltronTypeDesc (structs, enums, typedefs)."""
    name: str
    kind: str  # "struct", "enum", "typedef"
    size: int
    fields: List[UltronTypeField] = field(default_factory=list)

    def to_dict(self) -> Dict[str, Any]:
        return {
            "name": self.name,
            "kind": self.kind,
            "size": self.size,
            "fields": [
                {"name": f.name, "type": f.field_type, "offset": f.offset, "size": f.size, "comment": f.comment}
                for f in self.fields
            ],
        }


@dataclass
class UndoRedoEvent:
    """Models Protocol UndoRedoEvent (DocumentUndoRedoEvent / FileUndoRedoEvent)."""
    description: str
    undo_fn: Any
    redo_fn: Any


@dataclass
class UltronDisassembledFile:
    """Core Disassembled Document & Binary Database."""
    file_path: str
    format_name: str = "Mach-O"
    cpu_family: str = "aarch64"
    cpu_subfamily: str = "arm64"
    arch_enum: int = Architecture.ARCHITECTURE_AARCH64
    address_space_bits: int = 64
    endianness: str = "little"
    base_address: int = 0x100000000
    entry_point: int = 0x100000000
    available_slices: List[str] = field(default_factory=list)
    segments: List[UltronSegment] = field(default_factory=list)
    procedures: List[UltronProcedure] = field(default_factory=list)
    procedures_by_entry: Dict[int, UltronProcedure] = field(default_factory=dict)
    instructions_by_addr: Dict[int, UltronInstruction] = field(default_factory=dict)
    strings: List[UltronStringEntry] = field(default_factory=list)
    strings_by_addr: Dict[int, UltronStringEntry] = field(default_factory=dict)
    names: Dict[int, str] = field(default_factory=dict)
    comments: Dict[int, str] = field(default_factory=dict)
    inline_comments: Dict[int, str] = field(default_factory=dict)
    bookmarks: Dict[int, str] = field(default_factory=dict)
    tags_by_addr: Dict[int, List[str]] = field(default_factory=dict)
    xrefs_to: Dict[int, List[int]] = field(default_factory=dict)
    xrefs_from: Dict[int, List[int]] = field(default_factory=dict)
    imports: List[Dict[str, Any]] = field(default_factory=list)
    exports: List[Dict[str, Any]] = field(default_factory=list)
    objc_classes: List[Dict[str, Any]] = field(default_factory=list)
    objc_selectors: Dict[int, str] = field(default_factory=dict)
    types: Dict[str, UltronTypeDesc] = field(default_factory=dict)
    current_address: int = 0x100000000
    navigation_stack: List[int] = field(default_factory=list)
    syntax_mode: str = "intel"  # "intel" or "att"
    undo_stack: List[UndoRedoEvent] = field(default_factory=list)
    redo_stack: List[UndoRedoEvent] = field(default_factory=list)

    def get_segment_at(self, addr: int) -> Optional[UltronSegment]:
        for seg in self.segments:
            if seg.contains(addr):
                return seg
        return None

    def get_section_at(self, addr: int) -> Optional[UltronSection]:
        seg = self.get_segment_at(addr)
        if not seg:
            return None
        for sec in seg.sections:
            if sec.contains(addr):
                return sec
        return None

    def get_procedure_at(self, addr: int) -> Optional[UltronProcedure]:
        if addr in self.procedures_by_entry:
            return self.procedures_by_entry[addr]
        for proc in self.procedures:
            if proc.entry_point <= addr < proc.end_address:
                return proc
        return None

    def read_bytes(self, addr: int, length: int) -> Optional[bytes]:
        seg = self.get_segment_at(addr)
        if not seg:
            return None
        return seg.read_bytes(addr, length)

    def write_bytes(self, addr: int, data: bytes, record_undo: bool = True) -> bool:
        seg = self.get_segment_at(addr)
        if not seg:
            return False
        old_bytes = seg.read_bytes(addr, len(data))
        if old_bytes is None:
            return False
        ok = seg.write_bytes(addr, data)
        if ok and record_undo:
            self.undo_stack.append(
                UndoRedoEvent(
                    description=f"Patch {len(data)} bytes at 0x{addr:x}",
                    undo_fn=lambda a=addr, b=old_bytes: self.write_bytes(a, b, record_undo=False),
                    redo_fn=lambda a=addr, b=data: self.write_bytes(a, b, record_undo=False),
                )
            )
            self.redo_stack.clear()
        return ok

    def set_name(self, addr: int, name: str, record_undo: bool = True) -> None:
        old_name = self.names.get(addr)
        if name:
            self.names[addr] = name
            if addr in self.procedures_by_entry:
                self.procedures_by_entry[addr].name = name
        else:
            self.names.pop(addr, None)
        if record_undo:
            self.undo_stack.append(
                UndoRedoEvent(
                    description=f"Rename 0x{addr:x} -> {name}",
                    undo_fn=lambda a=addr, old=old_name: self.set_name(a, old or "", record_undo=False),
                    redo_fn=lambda a=addr, new=name: self.set_name(a, new, record_undo=False),
                )
            )
            self.redo_stack.clear()

    def set_comment(self, addr: int, comment: str, inline: bool = False) -> None:
        target = self.inline_comments if inline else self.comments
        if comment:
            target[addr] = comment
        else:
            target.pop(addr, None)

    def add_xref(self, from_addr: int, to_addr: int) -> None:
        lst_to = self.xrefs_to.setdefault(to_addr, [])
        if from_addr not in lst_to:
            lst_to.append(from_addr)
        lst_from = self.xrefs_from.setdefault(from_addr, [])
        if to_addr not in lst_from:
            lst_from.append(to_addr)

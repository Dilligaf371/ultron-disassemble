"""
Ultron Disassembler — Python Scripting Bridge (Document, Segment, Section, Procedure, BasicBlock, Instruction)
"""

from __future__ import annotations
import io
import struct
import traceback
from contextlib import redirect_stdout, redirect_stderr
from typing import Optional, List, Any, Dict

from .types import (
    Architecture,
    ByteType,
    CallType,
    UltronBasicBlock,
    UltronDisassembledFile,
    UltronInstruction,
    UltronProcedure,
    UltronSection,
    UltronSegment,
)
from .decompiler import UltronDecompiler
from .assembler import AssemblerService


class CallReference:
    CALL_NONE = CallType.CALL_NONE
    CALL_UNKNOWN = CallType.CALL_UNKNOWN
    CALL_DIRECT = CallType.CALL_DIRECT
    CALL_OBJC = CallType.CALL_OBJC

    def __init__(self, callType: int, fromAddress: int, toAddress: int):
        self.__type__ = callType
        self.__from__ = fromAddress
        self.__to__ = toAddress

    def type(self) -> int:
        return self.__type__

    def fromAddress(self) -> int:
        return self.__from__

    def toAddress(self) -> int:
        return self.__to__


class LocalVariable:
    def __init__(self, name: str, displacement: int):
        self.__name__ = name
        self.__displacement__ = displacement

    def name(self) -> str:
        return self.__name__

    def displacement(self) -> int:
        return self.__displacement__


class Tag:
    def __init__(self, name: str):
        self.__name__ = name

    def getName(self) -> str:
        return self.__name__


class Instruction:
    ARCHITECTURE_UNKNOWN = Architecture.ARCHITECTURE_UNKNOWN
    ARCHITECTURE_i386 = Architecture.ARCHITECTURE_i386
    ARCHITECTURE_X86_64 = Architecture.ARCHITECTURE_X86_64
    ARCHITECTURE_ARM = Architecture.ARCHITECTURE_ARM
    ARCHITECTURE_ARM_THUMB = Architecture.ARCHITECTURE_ARM_THUMB
    ARCHITECTURE_AARCH64 = Architecture.ARCHITECTURE_AARCH64
    ARCHITECTURE_OTHER = Architecture.ARCHITECTURE_OTHER

    def __init__(self, hp_ins: UltronInstruction):
        self._ins = hp_ins

    @staticmethod
    def stringForArchitecture(t: int) -> str:
        return Architecture.NAMES.get(t, "<unknown>")

    def getArchitecture(self) -> int:
        return self._ins.arch

    def getInstructionString(self) -> str:
        return self._ins.mnemonic

    def getArgumentCount(self) -> int:
        return len(self._ins.raw_args)

    def getRawArgument(self, index: int) -> Optional[str]:
        if 0 <= index < len(self._ins.raw_args):
            return self._ins.raw_args[index]
        return None

    def getFormattedArgument(self, index: int) -> Optional[str]:
        if 0 <= index < len(self._ins.formatted_args):
            return self._ins.formatted_args[index]
        return self.getRawArgument(index)

    def isAnInconditionalJump(self) -> bool:
        return self._ins.is_unconditional_jump

    def isAConditionalJump(self) -> bool:
        return self._ins.is_conditional_jump

    def getInstructionLength(self) -> int:
        return self._ins.size


class BasicBlock:
    def __init__(self, procedure: "Procedure", bb: UltronBasicBlock):
        self._proc = procedure
        self._bb = bb

    def getProcedure(self) -> "Procedure":
        return self._proc

    def getStartingAddress(self) -> int:
        return self._bb.start_address

    def getEndingAddress(self) -> int:
        return self._bb.end_address

    def getSuccessorCount(self) -> int:
        return len(self._bb.successors)

    def getSuccessorAddressAtIndex(self, index: int) -> int:
        return self._bb.successors[index]


class Procedure:
    REGCLS_GENERAL_PURPOSE_REGISTER = 2

    def __init__(self, doc: "Document", hp_proc: UltronProcedure):
        self._doc = doc
        self._proc = hp_proc

    def getEntryPoint(self) -> int:
        return self._proc.entry_point

    def getBasicBlockCount(self) -> int:
        return len(self._proc.basic_blocks)

    def getBasicBlock(self, index: int) -> Optional[BasicBlock]:
        if 0 <= index < len(self._proc.basic_blocks):
            return BasicBlock(self, self._proc.basic_blocks[index])
        return None

    def basicBlockIterator(self):
        for i in range(self.getBasicBlockCount()):
            yield self.getBasicBlock(i)

    def getHeapSize(self) -> int:
        return self._proc.frame_size

    def getLocalVariableList(self) -> List[LocalVariable]:
        return [LocalVariable(v.name, v.displacement) for v in self._proc.local_variables]

    def getAllCallers(self) -> List[CallReference]:
        return [CallReference(c.call_type, c.from_address, c.to_address) for c in self._proc.callers]

    def getAllCallees(self) -> List[CallReference]:
        return [CallReference(c.call_type, c.from_address, c.to_address) for c in self._proc.callees]

    def decompile(self) -> str:
        res = UltronDecompiler.decompile_procedure(self._doc._raw, self._proc)
        return res["pseudocode"]

    def signatureString(self) -> str:
        return self._proc.signature_override or f"int64_t {self._proc.name}()"

    def renameRegister(self, reg_cls: int, reg_idx: int, name: str) -> None:
        self._proc.register_renames[(reg_cls, reg_idx)] = name


class Section:
    def __init__(self, hp_sec: UltronSection):
        self._sec = hp_sec

    def getName(self) -> str:
        return self._sec.name

    def getStartingAddress(self) -> int:
        return self._sec.start_address

    def getLength(self) -> int:
        return self._sec.length

    def getFlags(self) -> int:
        return self._sec.flags


class Segment:
    BAD_ADDRESS = ByteType.BAD_ADDRESS
    TYPE_UNDEFINED = ByteType.TYPE_UNDEFINED
    TYPE_OUTSIDE = ByteType.TYPE_OUTSIDE
    TYPE_NEXT = ByteType.TYPE_NEXT
    TYPE_INT8 = ByteType.TYPE_INT8
    TYPE_INT16 = ByteType.TYPE_INT16
    TYPE_INT32 = ByteType.TYPE_INT32
    TYPE_INT64 = ByteType.TYPE_INT64
    TYPE_ASCII = ByteType.TYPE_ASCII
    TYPE_UNICODE = ByteType.TYPE_UNICODE
    TYPE_ALIGN = ByteType.TYPE_ALIGN
    TYPE_CODE = ByteType.TYPE_CODE
    TYPE_PROCEDURE = ByteType.TYPE_PROCEDURE
    TYPE_STRUCTURE = ByteType.TYPE_STRUCTURE

    @staticmethod
    def stringForType(t: int) -> str:
        return ByteType.string_for_type(t)

    def __init__(self, doc: "Document", hp_seg: UltronSegment):
        self._doc = doc
        self._seg = hp_seg

    def getName(self) -> str:
        return self._seg.name

    def getStartingAddress(self) -> int:
        return self._seg.start_address

    def getLength(self) -> int:
        return self._seg.length

    def getFileOffset(self) -> int:
        return self._seg.file_offset

    def getSectionCount(self) -> int:
        return len(self._seg.sections)

    def getSection(self, index: int) -> Optional[Section]:
        if 0 <= index < len(self._seg.sections):
            return Section(self._seg.sections[index])
        return None

    def getSectionsList(self) -> List[Section]:
        return [Section(s) for s in self._seg.sections]

    def readBytes(self, addr: int, length: int):
        b = self._seg.read_bytes(addr, length)
        return b if b is not None else False

    def readByte(self, addr: int):
        b = self._seg.read_bytes(addr, 1)
        return b[0] if b else False

    def writeBytes(self, addr: int, bytesStr: bytes) -> bool:
        return self._doc._raw.write_bytes(addr, bytesStr)

    def writeByte(self, addr: int, value: int) -> bool:
        return self._doc._raw.write_bytes(addr, struct.pack("B", value & 0xFF))

    def getTypeAtAddress(self, addr: int) -> int:
        return self._seg.get_type_at(addr)

    def setTypeAtAddress(self, addr: int, length: int, typeValue: int) -> None:
        self._seg.set_type_at(addr, length, typeValue)

    def getInstructionAtAddress(self, addr: int) -> Optional[Instruction]:
        ins = self._doc._raw.instructions_by_addr.get(addr)
        return Instruction(ins) if ins else None

    def getProcedureCount(self) -> int:
        return len([p for p in self._doc._raw.procedures if p.segment_name == self._seg.name])

    def getProcedureAtAddress(self, addr: int) -> Optional[Procedure]:
        p = self._doc._raw.get_procedure_at(addr)
        return Procedure(self._doc, p) if p else None

    def setNameAtAddress(self, addr: int, name: str) -> bool:
        self._doc._raw.set_name(addr, name)
        return True

    def getNameAtAddress(self, addr: int) -> Optional[str]:
        return self._doc._raw.names.get(addr)

    def setCommentAtAddress(self, addr: int, comment: str) -> bool:
        self._doc._raw.set_comment(addr, comment, inline=False)
        return True

    def setInlineCommentAtAddress(self, addr: int, comment: str) -> bool:
        self._doc._raw.set_comment(addr, comment, inline=True)
        return True


class Document:
    _active_raw_doc: Optional[UltronDisassembledFile] = None

    def __init__(self, raw_doc: UltronDisassembledFile):
        self._raw = raw_doc

    @classmethod
    def getCurrentDocument(cls) -> Optional["Document"]:
        if cls._active_raw_doc is None:
            return None
        return cls(cls._active_raw_doc)

    def getDocumentName(self) -> str:
        return self._raw.file_path.split("/")[-1]

    def getExecutableFilePath(self) -> str:
        return self._raw.file_path

    def getEntryPoint(self) -> int:
        return self._raw.entry_point

    def getCurrentAddress(self) -> int:
        return self._raw.current_address

    def setCurrentAddress(self, addr: int) -> None:
        self._raw.current_address = addr

    def getSegmentCount(self) -> int:
        return len(self._raw.segments)

    def getSegment(self, index: int) -> Optional[Segment]:
        if 0 <= index < len(self._raw.segments):
            return Segment(self, self._raw.segments[index])
        return None

    def getSegmentsList(self) -> List[Segment]:
        return [Segment(self, s) for s in self._raw.segments]

    def getSegmentAtAddress(self, addr: int) -> Optional[Segment]:
        s = self._raw.get_segment_at(addr)
        return Segment(self, s) if s else None

    def getCurrentSegment(self) -> Optional[Segment]:
        return self.getSegmentAtAddress(self._raw.current_address) or (self.getSegment(0) if self._raw.segments else None)

    def getCurrentProcedure(self) -> Optional[Procedure]:
        p = self._raw.get_procedure_at(self._raw.current_address)
        if not p and self._raw.procedures:
            p = self._raw.procedures[0]
        return Procedure(self, p) if p else None

    def getNameAtAddress(self, addr: int) -> Optional[str]:
        return self._raw.names.get(addr)

    def setNameAtAddress(self, addr: int, name: str) -> None:
        self._raw.set_name(addr, name)

    def assembleInstruction(self, asm: str, addr: Optional[int] = None) -> Dict[str, Any]:
        if addr is not None:
            return AssemblerService.patch_instruction_at(self._raw, addr, asm)
        is_arm64 = self._raw.arch_enum == Architecture.ARCHITECTURE_AARCH64
        return AssemblerService.assemble(asm, arch="arm64" if is_arm64 else "x86_64")

    def log(self, msg: str) -> None:
        print(msg)


def execute_ultron_python_script(raw_doc: UltronDisassembledFile, script_code: str) -> Dict[str, Any]:
    """Execute an Ultron Disassembler Python script with Document/Segment/Procedure globals injected."""
    Document._active_raw_doc = raw_doc
    stdout_buf = io.StringIO()
    stderr_buf = io.StringIO()
    env = {
        "__name__": "__main__",
        "Document": Document,
        "Segment": Segment,
        "Section": Section,
        "Procedure": Procedure,
        "BasicBlock": BasicBlock,
        "Instruction": Instruction,
        "CallReference": CallReference,
        "LocalVariable": LocalVariable,
        "Tag": Tag,
        "doc": Document(raw_doc),
    }
    success = True
    try:
        with redirect_stdout(stdout_buf), redirect_stderr(stderr_buf):
            exec(script_code, env)
    except Exception:
        success = False
        stderr_buf.write(traceback.format_exc())

    return {
        "success": success,
        "stdout": stdout_buf.getvalue(),
        "stderr": stderr_buf.getvalue(),
        "current_address": f"0x{raw_doc.current_address:x}",
    }

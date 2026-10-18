use serde::{Deserialize, Serialize};
use std::collections::{BTreeMap, HashMap};

#[derive(Debug, Clone, Serialize, Deserialize)]
pub struct UltronSection {
    pub name: String,
    pub segment_name: String,
    pub start_address: u64,
    pub length: u64,
    pub file_offset: u64,
    pub is_code: bool,
    pub data: Vec<u8>,
}

#[derive(Debug, Clone, Serialize, Deserialize)]
pub struct UltronSegment {
    pub name: String,
    pub start_address: u64,
    pub length: u64,
    pub file_offset: u64,
    pub readable: bool,
    pub writable: bool,
    pub executable: bool,
    pub sections: Vec<UltronSection>,
    #[serde(skip)]
    pub raw_data: Vec<u8>,
}

#[derive(Debug, Clone, Serialize, Deserialize)]
pub struct UltronInstruction {
    pub address: u64,
    pub size: usize,
    pub bytes_hex: String,
    pub mnemonic: String,
    pub op_str: String,
    pub comment: String,
    pub is_branch: bool,
    pub is_call: bool,
    pub is_return: bool,
    pub branch_target: Option<u64>,
    pub string_ref: Option<String>,
    pub symbol_ref: Option<String>,
}

#[derive(Debug, Clone, Serialize, Deserialize)]
pub struct UltronBasicBlock {
    pub start_address: u64,
    pub end_address: u64,
    pub instructions: Vec<UltronInstruction>,
    pub outgoing_edges: Vec<u64>,
    pub incoming_edges: Vec<u64>,
    pub branch_true: Option<u64>,
    pub branch_false: Option<u64>,
}

#[derive(Debug, Clone, Serialize, Deserialize)]
pub struct StackVar {
    pub name: String,
    pub offset: i64,
    pub var_type: String,
}

#[derive(Debug, Clone, Serialize, Deserialize)]
pub struct UltronProcedure {
    pub name: String,
    pub entry_point: u64,
    pub end_address: u64,
    pub segment_name: String,
    pub section_name: String,
    pub signature: String,
    pub basic_blocks: Vec<UltronBasicBlock>,
    pub callers: Vec<u64>,
    pub callees: Vec<u64>,
    pub strings_referenced: Vec<String>,
    pub stack_frame_size: u64,
    pub local_variables: BTreeMap<i64, StackVar>,
}

impl UltronProcedure {
    pub fn size(&self) -> u64 {
        if self.end_address > self.entry_point {
            self.end_address - self.entry_point
        } else {
            4
        }
    }
}

#[derive(Debug, Clone, Serialize, Deserialize)]
pub struct UltronStructField {
    pub offset: u64,
    pub name: String,
    pub field_type: String,
}

#[derive(Debug, Clone, Serialize, Deserialize)]
pub struct UltronStructDef {
    pub name: String,
    pub size: u64,
    pub fields: Vec<UltronStructField>,
}

#[derive(Debug, Clone, Serialize, Deserialize)]
pub struct ObjCIvarInfo {
    pub name: String,
    pub ivar_type: String,
    pub offset: u64,
    pub size: u32,
}

#[derive(Debug, Clone, Serialize, Deserialize)]
pub struct ObjCMethodInfo {
    pub name: String,
    pub types: String,
    pub decoded_signature: String,
    pub imp_address: u64,
    pub is_class_method: bool,
}

#[derive(Debug, Clone, Serialize, Deserialize)]
pub struct ObjCPropertyInfo {
    pub name: String,
    pub attributes: String,
}

#[derive(Debug, Clone, Serialize, Deserialize)]
pub struct ObjCClassInfo {
    pub name: String,
    pub address: u64,
    pub super_class: String,
    pub instance_size: u32,
    pub ivars: Vec<ObjCIvarInfo>,
    pub methods: Vec<ObjCMethodInfo>,
    pub properties: Vec<ObjCPropertyInfo>,
    pub protocols: Vec<String>,
    pub header_preview: String,
}

#[derive(Debug, Clone, Serialize, Deserialize, Default)]
pub struct CppClassInfo {
    pub name: String,
    pub demangled_name: String,
    pub vtable_address: String,
    pub typeinfo_address: String,
    pub base_class: String,
    pub virtual_methods: Vec<String>,
}

#[allow(dead_code)]
#[derive(Debug, Clone, Serialize, Deserialize, Default)]
pub struct DwarfLineEntry {
    pub address: String,
    pub file_line: String,
}

#[derive(Debug, Clone, Serialize, Deserialize)]
pub struct UltronStringEntry {
    pub address: u64,
    pub value: String,
    pub section: String,
    pub length: usize,
    pub xrefs: Vec<u64>,
}

#[derive(Debug, Clone, Serialize, Deserialize)]
pub struct UltronDisassembledFile {
    pub file_path: String,
    pub format_name: String,
    pub cpu_family: String,
    pub cpu_subfamily: String,
    pub address_space_bits: u32,
    pub entry_point: u64,
    pub raw_bytes: Vec<u8>,
    pub segments: Vec<UltronSegment>,
    pub procedures: BTreeMap<u64, UltronProcedure>,
    pub instructions: BTreeMap<u64, UltronInstruction>,
    pub labels: BTreeMap<u64, String>,
    pub strings_table: BTreeMap<u64, String>,
    pub string_entries: Vec<UltronStringEntry>,
    pub comments: BTreeMap<u64, String>,
    pub xrefs_to: HashMap<u64, Vec<u64>>,
    pub xrefs_from: HashMap<u64, Vec<u64>>,
    pub imports: BTreeMap<u64, String>,
    pub exports: BTreeMap<u64, String>,
    pub structs: BTreeMap<String, UltronStructDef>,
    pub objc_classes: Vec<ObjCClassInfo>,
    pub objc_selector_map: HashMap<u64, String>,
    pub objc_classref_map: HashMap<u64, String>,
    pub swift_types: Vec<String>,
    pub cpp_classes: Vec<CppClassInfo>,
    pub dwarf_compile_units: Vec<String>,
    pub dwarf_lines: HashMap<u64, String>,
    pub chained_fixups_count: usize,
    pub breakpoints: Vec<u64>,
}

#[allow(dead_code)]
pub type BinaryDocument = UltronDisassembledFile;

#[allow(dead_code)]
#[derive(Debug, Clone, Serialize, Deserialize, Default)]
pub struct SymbolsResponse {
    pub exports: Vec<serde_json::Value>,
    pub imports: Vec<serde_json::Value>,
    pub labels: Vec<serde_json::Value>,
    pub types: Vec<serde_json::Value>,
    pub objc_classes: Vec<ObjCClassInfo>,
    pub swift_types: Vec<String>,
    pub cpp_classes: Vec<CppClassInfo>,
    pub dwarf_compile_units: Vec<String>,
    pub dwarf_lines: HashMap<u64, String>,
    pub chained_fixups_count: usize,
    pub breakpoints: Vec<u64>,
}

impl UltronDisassembledFile {
    pub fn new(file_path: String, raw_bytes: Vec<u8>, arch: &str) -> Self {
        let mut structs = BTreeMap::new();
        structs.insert(
            "UltronContext".to_string(),
            UltronStructDef {
                name: "UltronContext".to_string(),
                size: 64,
                fields: vec![
                    UltronStructField { offset: 0x00, name: "isa_vtable".to_string(), field_type: "void *".to_string() },
                    UltronStructField { offset: 0x08, name: "session_flags".to_string(), field_type: "uint64_t".to_string() },
                    UltronStructField { offset: 0x10, name: "target_buffer".to_string(), field_type: "char *".to_string() },
                    UltronStructField { offset: 0x18, name: "payload_length".to_string(), field_type: "uint32_t".to_string() },
                    UltronStructField { offset: 0x20, name: "crypto_nonce".to_string(), field_type: "uint64_t".to_string() },
                ],
            },
        );
        let (family, bits) = match arch {
            "x86_64" => ("Intel x86_64", 64),
            "x86" | "i386" => ("Intel x86 (32-bit)", 32),
            "arm" | "arm32" => ("ARMv7 (32-bit)", 32),
            "wasm32" => ("WebAssembly VM", 32),
            _ => ("ARM64 (AArch64)", 64),
        };
        Self {
            file_path,
            format_name: "Mach-O 64-bit".to_string(),
            cpu_family: family.to_string(),
            cpu_subfamily: arch.to_string(),
            address_space_bits: bits,
            entry_point: 0,
            raw_bytes,
            segments: Vec::new(),
            procedures: BTreeMap::new(),
            instructions: BTreeMap::new(),
            labels: BTreeMap::new(),
            strings_table: BTreeMap::new(),
            string_entries: Vec::new(),
            comments: BTreeMap::new(),
            xrefs_to: HashMap::new(),
            xrefs_from: HashMap::new(),
            imports: BTreeMap::new(),
            exports: BTreeMap::new(),
            structs,
            objc_classes: Vec::new(),
            objc_selector_map: HashMap::new(),
            objc_classref_map: HashMap::new(),
            swift_types: Vec::new(),
            cpp_classes: Vec::new(),
            dwarf_compile_units: Vec::new(),
            dwarf_lines: HashMap::new(),
            chained_fixups_count: 0,
            breakpoints: Vec::new(),
        }
    }

    pub fn get_segment_at(&self, addr: u64) -> Option<&UltronSegment> {
        self.segments
            .iter()
            .find(|s| addr >= s.start_address && addr < s.start_address + s.length)
    }

    pub fn get_section_at(&self, addr: u64) -> Option<&UltronSection> {
        for seg in &self.segments {
            for sec in &seg.sections {
                if addr >= sec.start_address && addr < sec.start_address + sec.length {
                    return Some(sec);
                }
            }
        }
        None
    }

    pub fn get_name_at(&self, addr: u64) -> String {
        if let Some(lbl) = self.labels.get(&addr) {
            return lbl.clone();
        }
        format!("sub_{:x}", addr)
    }

    pub fn set_name_at(&mut self, addr: u64, name: String) {
        self.labels.insert(addr, name.clone());
        if let Some(proc) = self.procedures.get_mut(&addr) {
            proc.name = name.clone();
            proc.signature = format!("int64_t {}()", name);
        }
    }

    pub fn read_bytes(&self, addr: u64, size: usize) -> Vec<u8> {
        let norm_addr = if addr < 0x100000000 && addr > 0 && self.get_section_at(addr).is_none() {
            if self.get_section_at(addr + 0x100000000).is_some() {
                addr + 0x100000000
            } else {
                addr
            }
        } else {
            addr
        };
        for seg in &self.segments {
            for sec in &seg.sections {
                if norm_addr >= sec.start_address && norm_addr < sec.start_address + sec.length {
                    let off = (norm_addr - sec.start_address) as usize;
                    if off < sec.data.len() {
                        let end = (off + size).min(sec.data.len());
                        return sec.data[off..end].to_vec();
                    }
                }
            }
            if norm_addr >= seg.start_address && norm_addr < seg.start_address + seg.length {
                let off = (norm_addr - seg.start_address) as usize;
                if off < seg.raw_data.len() {
                    let end = (off + size).min(seg.raw_data.len());
                    return seg.raw_data[off..end].to_vec();
                }
            }
        }
        Vec::new()
    }

    pub fn read_u64_le(&self, addr: u64) -> Option<u64> {
        let b = self.read_bytes(addr, 8);
        if b.len() == 8 {
            Some(u64::from_le_bytes(b.try_into().ok()?))
        } else {
            None
        }
    }

    pub fn read_u32_le(&self, addr: u64) -> Option<u32> {
        let b = self.read_bytes(addr, 4);
        if b.len() == 4 {
            Some(u32::from_le_bytes(b.try_into().ok()?))
        } else {
            None
        }
    }

    pub fn read_cstring(&self, addr: u64) -> Option<String> {
        if addr == 0 {
            return None;
        }
        let ptr = self.normalize_ptr(addr);
        if let Some(s) = self.strings_table.get(&ptr) {
            return Some(s.clone());
        }
        let b = self.read_bytes(ptr, 256);
        if b.is_empty() {
            return None;
        }
        let end = b.iter().position(|&c| c == 0).unwrap_or(b.len());
        if end == 0 {
            return None;
        }
        std::str::from_utf8(&b[..end]).ok().map(|s| s.to_string())
    }

    pub fn normalize_ptr(&self, raw_ptr: u64) -> u64 {
        // Strip ARM64 PAC / Mach-O dyld chained fixup high bits
        let masked = raw_ptr & 0x0000_000f_ffff_ffff;
        if masked > 0 && masked < 0x100000000 && self.get_section_at(masked + 0x100000000).is_some() {
            masked + 0x100000000
        } else {
            masked
        }
    }

    pub fn write_bytes(&mut self, addr: u64, patch: &[u8]) -> bool {
        let mut patched = false;
        for seg in &mut self.segments {
            for sec in &mut seg.sections {
                if addr >= sec.start_address && addr + (patch.len() as u64) <= sec.start_address + sec.length {
                    let off = (addr - sec.start_address) as usize;
                    if off + patch.len() <= sec.data.len() {
                        sec.data[off..off + patch.len()].copy_from_slice(patch);
                    }
                    let file_off = sec.file_offset as usize + off;
                    if file_off + patch.len() <= self.raw_bytes.len() {
                        self.raw_bytes[file_off..file_off + patch.len()].copy_from_slice(patch);
                    }
                    patched = true;
                }
            }
            if addr >= seg.start_address && addr + (patch.len() as u64) <= seg.start_address + seg.length {
                let off = (addr - seg.start_address) as usize;
                if off + patch.len() <= seg.raw_data.len() {
                    seg.raw_data[off..off + patch.len()].copy_from_slice(patch);
                    patched = true;
                }
            }
        }
        patched
    }

    pub fn resolve_struct_field(&self, offset: u64) -> Option<(String, String, String)> {
        for st in self.structs.values() {
            for f in &st.fields {
                if f.offset == offset {
                    return Some((st.name.clone(), f.name.clone(), f.field_type.clone()));
                }
            }
        }
        None
    }
}

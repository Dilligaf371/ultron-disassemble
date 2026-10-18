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
        Self {
            file_path,
            format_name: "Mach-O 64-bit".to_string(),
            cpu_family: if arch == "x86_64" { "Intel".to_string() } else { "ARM".to_string() },
            cpu_subfamily: arch.to_string(),
            address_space_bits: 64,
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
        for seg in &self.segments {
            for sec in &seg.sections {
                if addr >= sec.start_address && addr < sec.start_address + sec.length {
                    let off = (addr - sec.start_address) as usize;
                    if off < sec.data.len() {
                        let end = (off + size).min(sec.data.len());
                        return sec.data[off..end].to_vec();
                    }
                }
            }
            if addr >= seg.start_address && addr < seg.start_address + seg.length {
                let off = (addr - seg.start_address) as usize;
                if off < seg.raw_data.len() {
                    let end = (off + size).min(seg.raw_data.len());
                    return seg.raw_data[off..end].to_vec();
                }
            }
        }
        Vec::new()
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

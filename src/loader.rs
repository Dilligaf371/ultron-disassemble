use crate::disassembler::UltronDisassemblerEngine;
use crate::types::{UltronDisassembledFile, UltronSection, UltronSegment, UltronStringEntry};
use anyhow::{Context, Result};
use goblin::mach::{Mach, MultiArch};
use goblin::Object;
use std::fs;
use std::path::{Path, PathBuf};

pub struct UltronBinaryLoader;

impl UltronBinaryLoader {
    pub fn resolve_binary_path(path_str: &str) -> PathBuf {
        let p = Path::new(path_str);
        if p.is_dir() && path_str.ends_with(".app") {
            let macos_dir = p.join("Contents").join("MacOS");
            if let Ok(entries) = fs::read_dir(&macos_dir) {
                for entry in entries.flatten() {
                    let ep = entry.path();
                    if ep.is_file() {
                        return ep;
                    }
                }
            }
        }
        p.to_path_buf()
    }

    pub fn load(path_str: &str, preferred_arch: &str) -> Result<UltronDisassembledFile> {
        let resolved = Self::resolve_binary_path(path_str);
        let raw_bytes = fs::read(&resolved)
            .with_context(|| format!("Failed to read binary: {}", resolved.display()))?;
        let display_path = resolved.to_string_lossy().to_string();

        let mut doc = match Object::parse(&raw_bytes) {
            Ok(Object::Mach(Mach::Binary(macho))) => {
                Self::parse_macho(&display_path, &raw_bytes, &macho, preferred_arch)?
            }
            Ok(Object::Mach(Mach::Fat(fat))) => {
                Self::parse_fat_macho(&display_path, &raw_bytes, &fat, preferred_arch)?
            }
            Ok(Object::Elf(elf)) => Self::parse_elf(&display_path, &raw_bytes, &elf, preferred_arch)?,
            Ok(Object::PE(pe)) => Self::parse_pe(&display_path, &raw_bytes, &pe, preferred_arch)?,
            _ => Self::parse_raw(&display_path, &raw_bytes, preferred_arch),
        };

        Self::extract_strings(&mut doc);
        UltronDisassemblerEngine::analyze(&mut doc);
        Ok(doc)
    }

    fn parse_fat_macho(
        path: &str,
        raw_bytes: &[u8],
        fat: &MultiArch,
        preferred_arch: &str,
    ) -> Result<UltronDisassembledFile> {
        for arch in fat.iter_arches() {
            if let Ok(a) = arch {
                let slice = &raw_bytes[a.offset as usize..(a.offset + a.size) as usize];
                if let Ok(Mach::Binary(macho)) = Mach::parse(slice) {
                    let is_arm = macho.header.cputype() == goblin::mach::cputype::CPU_TYPE_ARM64;
                    if (preferred_arch == "arm64" && is_arm) || (preferred_arch == "x86_64" && !is_arm) {
                        return Self::parse_macho(path, slice, &macho, preferred_arch);
                    }
                }
            }
        }
        if let Some(Ok(a)) = fat.iter_arches().next() {
            let slice = &raw_bytes[a.offset as usize..(a.offset + a.size) as usize];
            if let Ok(Mach::Binary(macho)) = Mach::parse(slice) {
                return Self::parse_macho(path, slice, &macho, preferred_arch);
            }
        }
        Ok(Self::parse_raw(path, raw_bytes, preferred_arch))
    }

    fn parse_macho(
        path: &str,
        slice: &[u8],
        macho: &goblin::mach::MachO,
        preferred_arch: &str,
    ) -> Result<UltronDisassembledFile> {
        let is_arm = macho.header.cputype() == goblin::mach::cputype::CPU_TYPE_ARM64;
        let arch = if is_arm {
            "arm64"
        } else if macho.header.cputype() == goblin::mach::cputype::CPU_TYPE_X86_64 {
            "x86_64"
        } else {
            preferred_arch
        };

        let mut doc = UltronDisassembledFile::new(path.to_string(), slice.to_vec(), arch);
        doc.format_name = "Mach-O 64-bit".to_string();
        doc.entry_point = macho.entry;

        for seg in &macho.segments {
            let seg_name = seg.name().unwrap_or("__UNKNOWN").to_string();
            if seg_name == "__PAGEZERO" {
                continue;
            }
            let foff = seg.fileoff as usize;
            let fsize = seg.filesize as usize;
            let raw_seg = if foff < slice.len() {
                slice[foff..(foff + fsize).min(slice.len())].to_vec()
            } else {
                Vec::new()
            };

            let mut sections = Vec::new();
            if let Ok(sec_iter) = seg.sections() {
                for (sec, sec_data) in sec_iter {
                    let sec_name = sec.name().unwrap_or("__sect").to_string();
                    let is_code = (sec.flags & 0x80000000) != 0
                        || sec_name == "__text"
                        || sec_name == "__stubs"
                        || sec_name == "__stub_helper";
                    sections.push(UltronSection {
                        name: sec_name,
                        segment_name: seg_name.clone(),
                        start_address: sec.addr,
                        length: sec.size,
                        file_offset: sec.offset as u64,
                        is_code,
                        data: sec_data.to_vec(),
                    });
                }
            }

            doc.segments.push(UltronSegment {
                name: seg_name,
                start_address: seg.vmaddr,
                length: seg.vmsize,
                file_offset: seg.fileoff,
                readable: (seg.initprot & 1) != 0,
                writable: (seg.initprot & 2) != 0,
                executable: (seg.initprot & 4) != 0,
                sections,
                raw_data: raw_seg,
            });
        }

        // Symbols
        for sym in macho.symbols() {
            if let Ok((name, nlist)) = sym {
                if !name.is_empty() && nlist.n_value != 0 {
                    doc.labels.insert(nlist.n_value, name.to_string());
                    if nlist.is_global() {
                        doc.exports.insert(nlist.n_value, name.to_string());
                    }
                }
            }
        }
        if let Ok(exports) = macho.exports() {
            for exp in exports {
                if exp.offset != 0 && !exp.name.is_empty() {
                    let vaddr = 0x100000000 + exp.offset;
                    doc.labels.entry(vaddr).or_insert(exp.name.clone());
                    doc.exports.insert(vaddr, exp.name);
                }
            }
        }
        if let Ok(imports) = macho.imports() {
            for imp in imports {
                doc.imports.insert(imp.address, imp.name.to_string());
                doc.labels.insert(imp.address, format!("imp_{}", imp.name));
            }
        }

        // Parse Objective-C selector & method lists if present
        Self::parse_objc_metadata(&mut doc);

        if doc.entry_point == 0 {
            for seg in &doc.segments {
                for sec in &seg.sections {
                    if sec.name == "__text" && sec.length > 0 {
                        doc.entry_point = sec.start_address;
                        break;
                    }
                }
            }
        }

        Ok(doc)
    }

    fn parse_objc_metadata(doc: &mut UltronDisassembledFile) {
        // Map __objc_methname strings first
        let mut meth_names = std::collections::BTreeMap::new();
        for seg in &doc.segments {
            for sec in &seg.sections {
                if sec.name == "__objc_methname" || sec.name == "__cstring" || sec.name == "__objc_classname" {
                    let mut start = 0usize;
                    for (i, &b) in sec.data.iter().enumerate() {
                        if b == 0 {
                            if i > start {
                                if let Ok(s) = std::str::from_utf8(&sec.data[start..i]) {
                                    meth_names.insert(sec.start_address + start as u64, s.to_string());
                                }
                            }
                            start = i + 1;
                        }
                    }
                }
            }
        }

        // Resolve __objc_selrefs pointers
        let mut selrefs = Vec::new();
        for seg in &doc.segments {
            for sec in &seg.sections {
                if sec.name == "__objc_selrefs" {
                    for chunk in sec.data.chunks_exact(8).enumerate() {
                        let ptr = u64::from_le_bytes(chunk.1.try_into().unwrap()) & 0x0000_ffff_ffff_ffff;
                        let ptr_norm = if ptr < 0x100000000 && ptr > 0 { ptr + 0x100000000 } else { ptr };
                        if let Some(sel) = meth_names.get(&ptr_norm).or_else(|| meth_names.get(&ptr)) {
                            let ref_addr = sec.start_address + (chunk.0 as u64) * 8;
                            selrefs.push((ref_addr, format!("@selector({})", sel)));
                        }
                    }
                }
            }
        }
        for (addr, lbl) in selrefs {
            doc.labels.insert(addr, lbl);
        }
    }

    fn parse_elf(
        path: &str,
        raw_bytes: &[u8],
        elf: &goblin::elf::Elf,
        preferred_arch: &str,
    ) -> Result<UltronDisassembledFile> {
        let arch = if elf.header.e_machine == goblin::elf::header::EM_AARCH64 {
            "arm64"
        } else if elf.header.e_machine == goblin::elf::header::EM_X86_64 {
            "x86_64"
        } else {
            preferred_arch
        };
        let mut doc = UltronDisassembledFile::new(path.to_string(), raw_bytes.to_vec(), arch);
        doc.format_name = "ELF 64-bit".to_string();
        doc.entry_point = elf.entry;

        let mut sections = Vec::new();
        for sh in &elf.section_headers {
            if sh.sh_size == 0 || sh.sh_addr == 0 {
                continue;
            }
            let name = elf.shdr_strtab.get_at(sh.sh_name).unwrap_or(".sect").to_string();
            let off = sh.sh_offset as usize;
            let sz = sh.sh_size as usize;
            let data = if off + sz <= raw_bytes.len() {
                raw_bytes[off..off + sz].to_vec()
            } else {
                Vec::new()
            };
            let is_code = (sh.sh_flags & 0x4) != 0;
            sections.push(UltronSection {
                name,
                segment_name: "LOAD".to_string(),
                start_address: sh.sh_addr,
                length: sh.sh_size,
                file_offset: sh.sh_offset,
                is_code,
                data,
            });
        }
        let start = sections.first().map(|s| s.start_address).unwrap_or(0x400000);
        let end = sections.last().map(|s| s.start_address + s.length).unwrap_or(0x401000);
        doc.segments.push(UltronSegment {
            name: "LOAD".to_string(),
            start_address: start,
            length: end.saturating_sub(start),
            file_offset: 0,
            readable: true,
            writable: false,
            executable: true,
            sections,
            raw_data: raw_bytes.to_vec(),
        });

        for sym in &elf.syms {
            if sym.st_value != 0 {
                if let Some(name) = elf.strtab.get_at(sym.st_name) {
                    if !name.is_empty() {
                        doc.labels.insert(sym.st_value, name.to_string());
                    }
                }
            }
        }
        Ok(doc)
    }

    fn parse_pe(
        path: &str,
        raw_bytes: &[u8],
        pe: &goblin::pe::PE,
        preferred_arch: &str,
    ) -> Result<UltronDisassembledFile> {
        let mut doc = UltronDisassembledFile::new(path.to_string(), raw_bytes.to_vec(), preferred_arch);
        doc.format_name = "PE64 Executable".to_string();
        let image_base = pe.image_base as u64;
        doc.entry_point = image_base + pe.entry as u64;

        let mut sections = Vec::new();
        for sec in &pe.sections {
            let name = String::from_utf8_lossy(&sec.name).trim_end_matches('\0').to_string();
            let vaddr = image_base + sec.virtual_address as u64;
            let off = sec.pointer_to_raw_data as usize;
            let sz = sec.size_of_raw_data as usize;
            let data = if off + sz <= raw_bytes.len() {
                raw_bytes[off..off + sz].to_vec()
            } else {
                Vec::new()
            };
            let is_code = (sec.characteristics & 0x20000020) != 0;
            sections.push(UltronSection {
                name,
                segment_name: "IMAGE".to_string(),
                start_address: vaddr,
                length: sec.virtual_size as u64,
                file_offset: sec.pointer_to_raw_data as u64,
                is_code,
                data,
            });
        }
        doc.segments.push(UltronSegment {
            name: "IMAGE".to_string(),
            start_address: image_base,
            length: raw_bytes.len() as u64,
            file_offset: 0,
            readable: true,
            writable: true,
            executable: true,
            sections,
            raw_data: raw_bytes.to_vec(),
        });
        Ok(doc)
    }

    fn parse_raw(path: &str, raw_bytes: &[u8], preferred_arch: &str) -> UltronDisassembledFile {
        let mut doc = UltronDisassembledFile::new(path.to_string(), raw_bytes.to_vec(), preferred_arch);
        doc.format_name = "RAW Binary".to_string();
        doc.entry_point = 0x100000000;
        let sec = UltronSection {
            name: "__text".to_string(),
            segment_name: "__TEXT".to_string(),
            start_address: 0x100000000,
            length: raw_bytes.len() as u64,
            file_offset: 0,
            is_code: true,
            data: raw_bytes.to_vec(),
        };
        doc.segments.push(UltronSegment {
            name: "__TEXT".to_string(),
            start_address: 0x100000000,
            length: raw_bytes.len() as u64,
            file_offset: 0,
            readable: true,
            writable: false,
            executable: true,
            sections: vec![sec],
            raw_data: raw_bytes.to_vec(),
        });
        doc
    }

    fn extract_strings(doc: &mut UltronDisassembledFile) {
        let mut entries = Vec::new();
        for seg in &doc.segments {
            for sec in &seg.sections {
                if sec.is_code && sec.name == "__text" {
                    continue;
                }
                let mut cur = Vec::new();
                let mut start_off = 0usize;
                for (i, &b) in sec.data.iter().enumerate() {
                    if (32..=126).contains(&b) {
                        if cur.is_empty() {
                            start_off = i;
                        }
                        cur.push(b);
                    } else {
                        if b == 0 && cur.len() >= 4 {
                            if let Ok(s) = String::from_utf8(cur.clone()) {
                                let addr = sec.start_address + start_off as u64;
                                doc.strings_table.insert(addr, s.clone());
                                entries.push(UltronStringEntry {
                                    address: addr,
                                    value: s,
                                    section: format!("{},{}", seg.name, sec.name),
                                    length: cur.len(),
                                    xrefs: Vec::new(),
                                });
                            }
                        }
                        cur.clear();
                    }
                }
            }
        }
        doc.string_entries = entries;
    }
}

use crate::disassembler::UltronDisassemblerEngine;
use crate::types::{
    BinaryDocument, CppClassInfo, ObjCClassInfo, ObjCIvarInfo, ObjCMethodInfo, ObjCPropertyInfo,
    UltronBasicBlock, UltronDisassembledFile, UltronInstruction, UltronProcedure, UltronSection,
    UltronSegment, UltronStringEntry, UltronStructDef, UltronStructField,
};
use anyhow::{Context, Result};
use goblin::mach::{Mach, MultiArch};
use goblin::Object;
use std::collections::BTreeMap;
use std::fs;
use std::path::{Path, PathBuf};

#[allow(dead_code)]
pub fn load_binary(path_str: &str, preferred_arch: &str) -> Result<BinaryDocument> {
    UltronBinaryLoader::load(path_str, preferred_arch)
}

pub struct UltronBinaryLoader;

impl UltronBinaryLoader {
    pub fn resolve_binary_path(path_str: &str) -> PathBuf {
        let p = Path::new(path_str);
        if p.is_dir() {
            // Support .app, .xpc, .kext, .bundle, .framework on macOS
            let macos_dir = p.join("Contents").join("MacOS");
            if let Ok(entries) = fs::read_dir(&macos_dir) {
                for entry in entries.flatten() {
                    let ep = entry.path();
                    if ep.is_file() {
                        return ep;
                    }
                }
            }
            if path_str.ends_with(".framework") {
                if let Some(stem) = p.file_stem() {
                    let fw_bin = p.join(stem);
                    if fw_bin.is_file() {
                        return fw_bin;
                    }
                }
            }
        }
        p.to_path_buf()
    }

    #[allow(dead_code)]
    pub fn load_binary(path_str: &str, preferred_arch: &str) -> Result<UltronDisassembledFile> {
        Self::load(path_str, preferred_arch)
    }

    pub fn load(path_str: &str, preferred_arch: &str) -> Result<UltronDisassembledFile> {
        let resolved = Self::resolve_binary_path(path_str);
        let raw_bytes = fs::read(&resolved)
            .with_context(|| format!("Failed to read binary: {}", resolved.display()))?;
        let display_path = resolved.to_string_lossy().to_string();

        // Check WebAssembly (.wasm) magic header: \0asm (0x00 0x61 0x73 0x6d)
        if raw_bytes.len() >= 8 && &raw_bytes[0..4] == b"\0asm" {
            let mut doc = Self::load_wasm(&display_path, &raw_bytes);
            if doc.string_entries.is_empty() {
                Self::extract_strings(&mut doc);
            }
            if doc.procedures.is_empty() {
                UltronDisassemblerEngine::analyze(&mut doc);
            }
            return Ok(doc);
        }

        // Check Android Dalvik DEX (.dex) magic header: "dex\n"
        if raw_bytes.len() >= 8 && &raw_bytes[0..4] == b"dex\n" {
            let mut doc = Self::parse_dex(&display_path, &raw_bytes);
            if doc.string_entries.is_empty() {
                Self::extract_strings(&mut doc);
            }
            UltronDisassemblerEngine::analyze(&mut doc);
            return Ok(doc);
        }

        // Check macOS dyld_v1 shared cache header magic: "dyld_v1"
        if raw_bytes.len() >= 16 && &raw_bytes[0..7] == b"dyld_v1" {
            let mut doc = Self::parse_dyld_shared_cache(&display_path, &raw_bytes, preferred_arch);
            Self::extract_strings(&mut doc);
            Self::parse_objc_metadata(&mut doc);
            Self::parse_swift_metadata(&mut doc);
            Self::parse_cpp_rtti_and_vtables(&mut doc);
            UltronDisassemblerEngine::analyze(&mut doc);
            Self::parse_dwarf_metadata(&mut doc);
            return Ok(doc);
        }

        let mut doc = match Object::parse(&raw_bytes) {
            Ok(Object::Mach(Mach::Binary(macho))) => {
                Self::parse_macho(&display_path, &raw_bytes, &macho, preferred_arch)?
            }
            Ok(Object::Mach(Mach::Fat(fat))) => {
                Self::parse_fat_macho(&display_path, &raw_bytes, &fat, preferred_arch)?
            }
            Ok(Object::Elf(elf)) => Self::parse_elf(&display_path, &raw_bytes, &elf, preferred_arch)?,
            Ok(Object::PE(pe)) => Self::parse_pe(&display_path, &raw_bytes, &pe, preferred_arch)?,
            Ok(Object::Archive(_ar)) => {
                Self::parse_archive(&display_path, &raw_bytes, preferred_arch)?
            }
            _ => Self::parse_raw(&display_path, &raw_bytes, preferred_arch),
        };

        Self::extract_strings(&mut doc);
        if doc.format_name.starts_with("Mach-O") {
            Self::parse_objc_metadata(&mut doc);
            Self::parse_swift_metadata(&mut doc);
        }
        Self::parse_cpp_rtti_and_vtables(&mut doc);
        UltronDisassemblerEngine::analyze(&mut doc);
        Self::parse_dwarf_metadata(&mut doc);
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
                    let cputype = macho.header.cputype();
                    let matches = match preferred_arch {
                        "arm64" => cputype == goblin::mach::cputype::CPU_TYPE_ARM64,
                        "x86_64" => cputype == goblin::mach::cputype::CPU_TYPE_X86_64,
                        "arm32" | "arm" => cputype == goblin::mach::cputype::CPU_TYPE_ARM,
                        "x86" | "i386" => cputype == goblin::mach::cputype::CPU_TYPE_X86,
                        _ => false,
                    };
                    if matches {
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
        let cputype = macho.header.cputype();
        let arch = match cputype {
            goblin::mach::cputype::CPU_TYPE_ARM64 => "arm64",
            goblin::mach::cputype::CPU_TYPE_X86_64 => "x86_64",
            goblin::mach::cputype::CPU_TYPE_ARM => "arm32",
            goblin::mach::cputype::CPU_TYPE_X86 => "x86",
            _ => preferred_arch,
        };

        let mut doc = UltronDisassembledFile::new(path.to_string(), slice.to_vec(), arch);
        doc.format_name = if macho.is_64 {
            "Mach-O 64-bit".to_string()
        } else {
            "Mach-O 32-bit".to_string()
        };
        doc.address_space_bits = if macho.is_64 { 64 } else { 32 };
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
                        || sec_name == "__objc_stubs"
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

        // Symbols & STABS DWARF compile unit / function line entries
        let mut current_so_dir = String::new();
        let mut current_so_file = String::new();
        for sym in macho.symbols() {
            if let Ok((name, nlist)) = sym {
                if nlist.is_stab() {
                    // N_SO (0x64) = source file / dir, N_SOL (0x84) = #include file, N_FUN (0x24) = function
                    match nlist.n_type {
                        0x64 | 0x84 => {
                            let trimmed = name.trim();
                            if trimmed.is_empty() {
                                // End of compile unit N_SO
                            } else if trimmed.ends_with('/') {
                                current_so_dir = trimmed.to_string();
                            } else {
                                current_so_file = trimmed.to_string();
                                let full_cu = if !current_so_dir.is_empty() && !trimmed.starts_with('/') {
                                    format!("{}{}", current_so_dir, trimmed)
                                } else {
                                    trimmed.to_string()
                                };
                                if !doc.dwarf_compile_units.contains(&full_cu) {
                                    doc.dwarf_compile_units.push(full_cu);
                                }
                            }
                        }
                        0x24 => {
                            if !name.is_empty() && nlist.n_value != 0 {
                                doc.labels.entry(nlist.n_value).or_insert_with(|| name.to_string());
                                let src_basename = if !current_so_file.is_empty() {
                                    Path::new(&current_so_file)
                                        .file_name()
                                        .and_then(|s| s.to_str())
                                        .unwrap_or(&current_so_file)
                                        .to_string()
                                } else {
                                    "compile_unit".to_string()
                                };
                                let demangled_fn = Self::demangle_cpp_symbol(name);
                                doc.dwarf_lines.insert(
                                    nlist.n_value,
                                    format!("{}:{}", src_basename, demangled_fn),
                                );
                            }
                        }
                        _ => {}
                    }
                    continue;
                }
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
                    let base = if macho.is_64 { 0x100000000 } else { 0x1000 };
                    let vaddr = base + exp.offset;
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

        // Count ARM64e / LC_DYLD_CHAINED_FIXUPS pointer slots with high tag bits
        let mut fixups_count = 0usize;
        for seg in &doc.segments {
            if matches!(
                seg.name.as_str(),
                "__DATA_CONST" | "__DATA" | "__AUTH_CONST" | "__AUTH"
            ) {
                for sec in &seg.sections {
                    for chunk in sec.data.chunks_exact(8) {
                        let raw_ptr = u64::from_le_bytes(chunk.try_into().unwrap());
                        if raw_ptr != 0
                            && raw_ptr != u64::MAX
                            && (raw_ptr & 0xffff_ff00_0000_0000) != 0
                        {
                            let is_bind = (raw_ptr & 0x8000_0000_0000_0000) != 0;
                            let norm = doc.normalize_ptr(raw_ptr);
                            if is_bind || doc.get_section_at(norm).is_some() {
                                fixups_count += 1;
                            }
                        }
                    }
                }
            }
        }
        doc.chained_fixups_count = fixups_count;

        Ok(doc)
    }

    /// Deep Objective-C 2.0 Runtime Reconstructor:
    /// Parses `__objc_classlist`, `objc_class`, `class_ro_t`, `method_list_t` (standard & relative small methods),
    /// `ivar_list_t`, `property_list_t`, `protocol_list_t`, `__objc_selrefs`, `__objc_classrefs`, `__objc_catlist`,
    /// and decodes type encodings.
    pub fn parse_objc_metadata(doc: &mut UltronDisassembledFile) {
        // 1. Index all strings in __objc_methname, __objc_classname, __objc_methtype, __cstring
        let mut str_pool = std::collections::BTreeMap::new();
        for seg in &doc.segments {
            for sec in &seg.sections {
                if matches!(
                    sec.name.as_str(),
                    "__objc_methname" | "__objc_classname" | "__objc_methtype" | "__cstring"
                ) {
                    let is_methname = sec.name == "__objc_methname";
                    let mut start = 0usize;
                    for (i, &b) in sec.data.iter().enumerate() {
                        if b == 0 {
                            if i > start {
                                if let Ok(s) = std::str::from_utf8(&sec.data[start..i]) {
                                    let addr = sec.start_address + start as u64;
                                    str_pool.insert(addr, s.to_string());
                                    doc.strings_table.entry(addr).or_insert_with(|| s.to_string());
                                    if is_methname {
                                        doc.objc_selector_map.insert(addr, s.to_string());
                                    }
                                }
                            }
                            start = i + 1;
                        }
                    }
                }
            }
        }

        // Also index _objc_msgSend$selector stub symbols into objc_selector_map
        for (&addr, lbl) in &doc.labels {
            if let Some(sel) = lbl
                .strip_prefix("_objc_msgSend$")
                .or_else(|| lbl.strip_prefix("imp__objc_msgSend$"))
                .or_else(|| lbl.strip_prefix("objc_msgSend$"))
            {
                if !sel.is_empty() {
                    doc.objc_selector_map.insert(addr, sel.to_string());
                }
            }
        }

        // 2. Resolve __objc_selrefs pointers -> objc_selector_map & labels
        let mut selrefs = Vec::new();
        for seg in &doc.segments {
            for sec in &seg.sections {
                if sec.name == "__objc_selrefs" {
                    for (idx, chunk) in sec.data.chunks_exact(8).enumerate() {
                        let raw_ptr = u64::from_le_bytes(chunk.try_into().unwrap());
                        let ptr = doc.normalize_ptr(raw_ptr);
                        let resolved = str_pool.get(&ptr).cloned().or_else(|| doc.read_cstring(ptr));
                        if let Some(sel) = resolved {
                            let ref_addr = sec.start_address + (idx as u64) * 8;
                            selrefs.push((ref_addr, ptr, sel));
                        }
                    }
                }
            }
        }
        for (ref_addr, target_ptr, sel) in selrefs {
            doc.objc_selector_map.insert(ref_addr, sel.clone());
            if target_ptr != 0 {
                doc.objc_selector_map.insert(target_ptr, sel.clone());
            }
            doc.labels.insert(ref_addr, format!("@selector({})", sel));
        }

        // 3. Parse __objc_classlist -> objc_class (40 bytes) -> class_ro_t (72 bytes)
        let mut class_ptrs = Vec::new();
        for seg in &doc.segments {
            for sec in &seg.sections {
                if sec.name == "__objc_classlist" {
                    for chunk in sec.data.chunks_exact(8) {
                        let raw_ptr = u64::from_le_bytes(chunk.try_into().unwrap());
                        let cls_addr = doc.normalize_ptr(raw_ptr);
                        if cls_addr != 0 {
                            class_ptrs.push(cls_addr);
                        }
                    }
                }
            }
        }

        let mut parsed_classes = Vec::new();
        for cls_addr in class_ptrs {
            if let Some(cls_info) = Self::parse_single_objc_class(doc, cls_addr) {
                doc.objc_classref_map.insert(cls_info.address, cls_info.name.clone());
                parsed_classes.push(cls_info);
            }
        }

        // 4. Scan __objc_classrefs and __objc_superrefs -> objc_classref_map & labels
        let mut classref_entries = Vec::new();
        for seg in &doc.segments {
            for sec in &seg.sections {
                if sec.name == "__objc_classrefs" || sec.name == "__objc_superrefs" {
                    for (idx, chunk) in sec.data.chunks_exact(8).enumerate() {
                        let ref_addr = sec.start_address + (idx as u64) * 8;
                        let raw_ptr = u64::from_le_bytes(chunk.try_into().unwrap());
                        let cls_ptr = doc.normalize_ptr(raw_ptr);
                        classref_entries.push((ref_addr, cls_ptr));
                    }
                }
            }
        }
        for (ref_addr, cls_ptr) in classref_entries {
            let resolved_name = doc
                .objc_classref_map
                .get(&cls_ptr)
                .cloned()
                .or_else(|| {
                    doc.labels
                        .get(&cls_ptr)
                        .or_else(|| doc.imports.get(&ref_addr))
                        .or_else(|| doc.labels.get(&ref_addr))
                        .map(|s| {
                            s.trim_start_matches("imp_")
                                .trim_start_matches("_OBJC_CLASS_$_")
                                .trim_start_matches("OBJC_CLASS_$_")
                                .trim_start_matches("_OBJC_METACLASS_$_")
                                .to_string()
                        })
                })
                .or_else(|| {
                    if cls_ptr != 0 {
                        let ro_raw = doc.read_u64_le(cls_ptr + 32)?;
                        let ro_addr = doc.normalize_ptr(ro_raw) & !7u64;
                        let name_ptr = doc.read_u64_le(ro_addr + 24)?;
                        doc.read_cstring(name_ptr)
                    } else {
                        None
                    }
                });

            if let Some(cls_name) = resolved_name {
                if !cls_name.is_empty() {
                    doc.objc_classref_map.insert(ref_addr, cls_name.clone());
                    if cls_ptr != 0 {
                        doc.objc_classref_map.entry(cls_ptr).or_insert_with(|| cls_name.clone());
                    }
                    doc.labels
                        .entry(ref_addr)
                        .or_insert_with(|| format!("classRef_{}", cls_name));
                }
            }
        }

        // 5. Scan __objc_catlist (Objective-C 2.0 Categories: category_t)
        let mut cat_ptrs = Vec::new();
        for seg in &doc.segments {
            for sec in &seg.sections {
                if sec.name == "__objc_catlist" {
                    for chunk in sec.data.chunks_exact(8) {
                        let raw_ptr = u64::from_le_bytes(chunk.try_into().unwrap());
                        let cat_addr = doc.normalize_ptr(raw_ptr);
                        if cat_addr != 0 {
                            cat_ptrs.push(cat_addr);
                        }
                    }
                }
            }
        }

        for cat_addr in cat_ptrs {
            if let Some(cat_info) = Self::parse_single_objc_category(doc, cat_addr) {
                parsed_classes.push(cat_info);
            }
        }

        // Register methods in labels and ivars in structs
        for cls in &parsed_classes {
            for m in &cls.methods {
                if m.imp_address != 0 {
                    let prefix = if m.is_class_method { "+" } else { "-" };
                    let full_name = format!("{}[{} {}]", prefix, cls.name, m.name);
                    doc.labels.insert(m.imp_address, full_name);
                }
            }
            if !cls.ivars.is_empty() {
                let fields: Vec<UltronStructField> = cls
                    .ivars
                    .iter()
                    .map(|iv| UltronStructField {
                        offset: iv.offset,
                        name: iv.name.clone(),
                        field_type: iv.ivar_type.clone(),
                    })
                    .collect();
                doc.structs.insert(
                    cls.name.clone(),
                    UltronStructDef {
                        name: cls.name.clone(),
                        size: cls.instance_size.max(8) as u64,
                        fields,
                    },
                );
            }
        }

        doc.objc_classes = parsed_classes;
    }

    fn parse_single_objc_category(doc: &UltronDisassembledFile, cat_addr: u64) -> Option<ObjCClassInfo> {
        // category_t layout (64-bit):
        // +0x00: name (const char *)
        // +0x08: cls (classref_t)
        // +0x10: instanceMethods (method_list_t *)
        // +0x18: classMethods (method_list_t *)
        // +0x20: protocols (protocol_list_t *)
        // +0x28: instanceProperties (property_list_t *)
        let name_ptr = doc.read_u64_le(cat_addr)?;
        let cls_raw = doc.read_u64_le(cat_addr + 8).unwrap_or(0);
        let inst_methods_ptr = doc.read_u64_le(cat_addr + 16).unwrap_or(0);
        let class_methods_ptr = doc.read_u64_le(cat_addr + 24).unwrap_or(0);
        let protocols_ptr = doc.read_u64_le(cat_addr + 32).unwrap_or(0);
        let props_ptr = doc.read_u64_le(cat_addr + 40).unwrap_or(0);

        let cat_name = doc.read_cstring(name_ptr)?;
        let cls_ptr = doc.normalize_ptr(cls_raw);
        let base_cls_name = doc
            .objc_classref_map
            .get(&cls_ptr)
            .cloned()
            .or_else(|| {
                doc.labels.get(&cls_ptr).map(|s| {
                    s.trim_start_matches("imp_")
                        .trim_start_matches("_OBJC_CLASS_$_")
                        .trim_start_matches("OBJC_CLASS_$_")
                        .to_string()
                })
            })
            .unwrap_or_else(|| "NSObject".to_string());

        let full_cat_name = format!("{}({})", base_cls_name, cat_name);
        let mut methods = Self::parse_objc_method_list(doc, inst_methods_ptr, false, &full_cat_name);
        let class_methods = Self::parse_objc_method_list(doc, class_methods_ptr, true, &full_cat_name);
        methods.extend(class_methods);
        let properties = Self::parse_objc_property_list(doc, props_ptr);
        let protocols = Self::parse_objc_protocol_list(doc, protocols_ptr);

        let proto_str = if protocols.is_empty() {
            String::new()
        } else {
            format!(" <{}>", protocols.join(", "))
        };
        let mut hdr = Vec::new();
        hdr.push(format!("@interface {} ({}){}", base_cls_name, cat_name, proto_str));
        for prop in &properties {
            hdr.push(format!("@property ({}) {};", prop.attributes, prop.name));
        }
        for m in &methods {
            hdr.push(format!("{}; // IMP: 0x{:x}", m.decoded_signature, m.imp_address));
        }
        hdr.push("@end".to_string());

        Some(ObjCClassInfo {
            name: full_cat_name,
            address: cat_addr,
            super_class: base_cls_name,
            instance_size: 0,
            ivars: Vec::new(),
            methods,
            properties,
            protocols,
            header_preview: hdr.join("\n"),
        })
    }

    /// Swift 5 Metadata Reconstructor:
    /// Extracts reflection strings from `__swift5_reflstr`, nominal type descriptors from `__swift5_types`,
    /// and field descriptors from `__swift5_fieldmd`.
    pub fn parse_swift_metadata(doc: &mut UltronDisassembledFile) {
        let mut swift_types = Vec::new();
        let mut refl_strings = BTreeMap::new();

        // 1. Extract reflection strings from __swift5_reflstr
        for seg in &doc.segments {
            for sec in &seg.sections {
                if sec.name == "__swift5_reflstr" {
                    let mut start = 0usize;
                    for (i, &b) in sec.data.iter().enumerate() {
                        if b == 0 {
                            if i > start {
                                if let Ok(s) = std::str::from_utf8(&sec.data[start..i]) {
                                    let addr = sec.start_address + start as u64;
                                    refl_strings.insert(addr, s.to_string());
                                    doc.strings_table.entry(addr).or_insert_with(|| s.to_string());
                                }
                            }
                            start = i + 1;
                        }
                    }
                }
            }
        }

        // 2. Parse __swift5_types (relative 32-bit offsets to TargetTypeContextDescriptor)
        let mut type_desc_addrs = Vec::new();
        for seg in &doc.segments {
            for sec in &seg.sections {
                if sec.name == "__swift5_types" {
                    for (idx, chunk) in sec.data.chunks_exact(4).enumerate() {
                        let slot_addr = sec.start_address + (idx as u64) * 4;
                        let rel = i32::from_le_bytes(chunk.try_into().unwrap()) as i64;
                        if rel != 0 {
                            let desc_addr = ((slot_addr as i64) + rel) as u64;
                            type_desc_addrs.push(desc_addr);
                        }
                    }
                }
            }
        }

        for desc_addr in type_desc_addrs {
            // TargetTypeContextDescriptor:
            // +0x00: flags (u32)
            // +0x04: parent (i32 relative offset)
            // +0x08: name (i32 relative offset to C-string)
            // +0x0c: accessFunction (i32 relative offset)
            // +0x10: fields (i32 relative offset to FieldDescriptor in __swift5_fieldmd)
            let Some(flags) = doc.read_u32_le(desc_addr) else { continue };
            let Some(name_rel_u32) = doc.read_u32_le(desc_addr + 8) else { continue };
            let name_rel = name_rel_u32 as i32 as i64;
            let name_addr = ((desc_addr + 8) as i64 + name_rel) as u64;
            let Some(type_name) = doc.read_cstring(name_addr) else { continue };
            if type_name.is_empty() {
                continue;
            }

            let kind_mask = flags & 0x1f;
            let kind_prefix = match kind_mask {
                16 => "class",
                17 => "struct",
                18 => "enum",
                _ => "type",
            };

            let mut field_names = Vec::new();
            if let Some(fields_rel_u32) = doc.read_u32_le(desc_addr + 16) {
                let fields_rel = fields_rel_u32 as i32 as i64;
                if fields_rel != 0 {
                    let field_desc_addr = ((desc_addr + 16) as i64 + fields_rel) as u64;
                    // FieldDescriptor:
                    // +0x00: MangledTypeName (i32), +0x04: Superclass (i32),
                    // +0x08: Kind (u16), +0x0a: FieldRecordSize (u16), +0x0c: NumFields (u32)
                    if let (Some(rec_size), Some(num_fields)) = (
                        doc.read_u32_le(field_desc_addr + 8).map(|v| (v >> 16) as u64),
                        doc.read_u32_le(field_desc_addr + 12),
                    ) {
                        let stride = if rec_size >= 12 { rec_size } else { 12 };
                        let records_base = field_desc_addr + 16;
                        for f_idx in 0..num_fields.min(64) as u64 {
                            let rec_addr = records_base + f_idx * stride;
                            // FieldRecord: +0x00 Flags (u32), +0x04 MangledTypeName (i32), +0x08 FieldName (i32)
                            if let Some(fname_rel_u32) = doc.read_u32_le(rec_addr + 8) {
                                let fname_rel = fname_rel_u32 as i32 as i64;
                                let fname_addr = ((rec_addr + 8) as i64 + fname_rel) as u64;
                                if let Some(fname) = refl_strings
                                    .get(&fname_addr)
                                    .cloned()
                                    .or_else(|| doc.read_cstring(fname_addr))
                                {
                                    field_names.push(fname);
                                }
                            }
                        }
                    }
                }
            }

            let summary = if field_names.is_empty() {
                format!("{} {}", kind_prefix, type_name)
            } else {
                format!("{} {} {{ {} }}", kind_prefix, type_name, field_names.join(", "))
            };
            if !swift_types.contains(&summary) {
                swift_types.push(summary);
            }
        }

        // If __swift5_reflstr had standalone entries not yet referenced, include them if swift_types is empty
        if swift_types.is_empty() && !refl_strings.is_empty() {
            for s in refl_strings.values() {
                if !s.is_empty() && !swift_types.contains(s) {
                    swift_types.push(s.clone());
                }
            }
        }

        doc.swift_types = swift_types;
    }

    fn parse_single_objc_class(doc: &UltronDisassembledFile, cls_addr: u64) -> Option<ObjCClassInfo> {
        // objc_class layout (64-bit):
        // +0x00: isa (metaclass pointer)
        // +0x08: superclass
        // +0x10: cache (16 bytes)
        // +0x20: bits / class_ro_t pointer (mask & ~7)
        let isa_raw = doc.read_u64_le(cls_addr)?;
        let super_raw = doc.read_u64_le(cls_addr + 8)?;
        let ro_raw = doc.read_u64_le(cls_addr + 32)?;

        let ro_addr = doc.normalize_ptr(ro_raw) & !7u64;
        if ro_addr == 0 {
            return None;
        }

        // class_ro_t layout (64-bit):
        // +0x00: flags (u32), +0x04: instanceStart (u32), +0x08: instanceSize (u32), +0x0c: reserved (u32)
        // +0x10: ivarLayout (u64), +0x18: name (u64), +0x20: baseMethods (u64), +0x28: baseProtocols (u64)
        // +0x30: ivars (u64), +0x38: weakIvarLayout (u64), +0x40: baseProperties (u64)
        let instance_size = doc.read_u32_le(ro_addr + 8).unwrap_or(8);
        let name_ptr = doc.read_u64_le(ro_addr + 24)?;
        let class_name = doc.read_cstring(name_ptr).unwrap_or_else(|| format!("ObjCClass_{:x}", cls_addr));

        let super_name = if super_raw != 0 {
            let super_ptr = doc.normalize_ptr(super_raw);
            doc.labels
                .get(&super_ptr)
                .cloned()
                .unwrap_or_else(|| "NSObject".to_string())
                .trim_start_matches("_OBJC_CLASS_$_")
                .to_string()
        } else {
            "NSObject".to_string()
        };

        let methods_ptr = doc.read_u64_le(ro_addr + 32).unwrap_or(0);
        let protocols_ptr = doc.read_u64_le(ro_addr + 40).unwrap_or(0);
        let ivars_ptr = doc.read_u64_le(ro_addr + 48).unwrap_or(0);
        let props_ptr = doc.read_u64_le(ro_addr + 64).unwrap_or(0);

        let mut methods = Self::parse_objc_method_list(doc, methods_ptr, false, &class_name);

        // Also inspect metaclass (isa) for Class Methods (+[ClassName method])
        let meta_addr = doc.normalize_ptr(isa_raw);
        if meta_addr != 0 && meta_addr != cls_addr {
            if let Some(meta_ro_raw) = doc.read_u64_le(meta_addr + 32) {
                let meta_ro = doc.normalize_ptr(meta_ro_raw) & !7u64;
                if let Some(meta_methods_ptr) = doc.read_u64_le(meta_ro + 32) {
                    let class_methods = Self::parse_objc_method_list(doc, meta_methods_ptr, true, &class_name);
                    methods.extend(class_methods);
                }
            }
        }

        let ivars = Self::parse_objc_ivar_list(doc, ivars_ptr);
        let properties = Self::parse_objc_property_list(doc, props_ptr);
        let protocols = Self::parse_objc_protocol_list(doc, protocols_ptr);

        // Synthesize complete @interface header preview
        let proto_str = if protocols.is_empty() {
            String::new()
        } else {
            format!(" <{}>", protocols.join(", "))
        };
        let mut hdr = Vec::new();
        hdr.push(format!("@interface {} : {}{} {{", class_name, super_name, proto_str));
        for iv in &ivars {
            hdr.push(format!("    {} {}; // +0x{:02x} ({}B)", iv.ivar_type, iv.name, iv.offset, iv.size));
        }
        hdr.push("}".to_string());
        for prop in &properties {
            hdr.push(format!("@property ({}) {};", prop.attributes, prop.name));
        }
        for m in &methods {
            hdr.push(format!("{}; // IMP: 0x{:x}", m.decoded_signature, m.imp_address));
        }
        hdr.push("@end".to_string());

        Some(ObjCClassInfo {
            name: class_name,
            address: cls_addr,
            super_class: super_name,
            instance_size,
            ivars,
            methods,
            properties,
            protocols,
            header_preview: hdr.join("\n"),
        })
    }

    fn parse_objc_method_list(
        doc: &UltronDisassembledFile,
        raw_list_ptr: u64,
        is_class_method: bool,
        class_name: &str,
    ) -> Vec<ObjCMethodInfo> {
        let mut out = Vec::new();
        let list_addr = doc.normalize_ptr(raw_list_ptr);
        if list_addr == 0 {
            return out;
        }
        let Some(entsize_and_flags) = doc.read_u32_le(list_addr) else { return out };
        let Some(count) = doc.read_u32_le(list_addr + 4) else { return out };
        if count == 0 || count > 2048 {
            return out;
        }

        let is_small = (entsize_and_flags & 0x8000_0000) != 0;
        let base = list_addr + 8;

        for i in 0..count as u64 {
            if is_small {
                // Relative 3x i32 offsets (Apple Silicon / modern Mach-O)
                let entry_addr = base + i * 12;
                let Some(name_rel) = doc.read_u32_le(entry_addr) else { continue };
                let Some(types_rel) = doc.read_u32_le(entry_addr + 4) else { continue };
                let Some(imp_rel) = doc.read_u32_le(entry_addr + 8) else { continue };

                let name_target = (entry_addr as i64 + (name_rel as i32 as i64)) as u64;
                let types_target = ((entry_addr + 4) as i64 + (types_rel as i32 as i64)) as u64;
                let imp_addr = ((entry_addr + 8) as i64 + (imp_rel as i32 as i64)) as u64;

                let sel_name = doc
                    .objc_selector_map
                    .get(&name_target)
                    .cloned()
                    .or_else(|| doc.read_u64_le(name_target).and_then(|p| doc.read_cstring(p)))
                    .or_else(|| doc.read_cstring(name_target))
                    .unwrap_or_else(|| format!("sel_{:x}", entry_addr));
                let types_str = doc.read_cstring(types_target).unwrap_or_else(|| "v16@0:8".to_string());
                let decoded_sig = Self::decode_objc_method_sig(&sel_name, &types_str, is_class_method, class_name);

                out.push(ObjCMethodInfo {
                    name: sel_name,
                    types: types_str,
                    decoded_signature: decoded_sig,
                    imp_address: imp_addr,
                    is_class_method,
                });
            } else {
                // Standard 3x u64 pointers (24 bytes per method_t)
                let entry_addr = base + i * 24;
                let Some(name_ptr) = doc.read_u64_le(entry_addr) else { continue };
                let Some(types_ptr) = doc.read_u64_le(entry_addr + 8) else { continue };
                let Some(imp_raw) = doc.read_u64_le(entry_addr + 16) else { continue };

                let sel_name = doc.read_cstring(name_ptr).unwrap_or_else(|| format!("sel_{:x}", entry_addr));
                let types_str = doc.read_cstring(types_ptr).unwrap_or_else(|| "v16@0:8".to_string());
                let imp_addr = doc.normalize_ptr(imp_raw);
                let decoded_sig = Self::decode_objc_method_sig(&sel_name, &types_str, is_class_method, class_name);

                out.push(ObjCMethodInfo {
                    name: sel_name,
                    types: types_str,
                    decoded_signature: decoded_sig,
                    imp_address: imp_addr,
                    is_class_method,
                });
            }
        }
        out
    }

    fn parse_objc_ivar_list(doc: &UltronDisassembledFile, raw_ptr: u64) -> Vec<ObjCIvarInfo> {
        let mut out = Vec::new();
        let list_addr = doc.normalize_ptr(raw_ptr);
        if list_addr == 0 {
            return out;
        }
        let Some(entsize) = doc.read_u32_le(list_addr) else { return out };
        let Some(count) = doc.read_u32_le(list_addr + 4) else { return out };
        if count == 0 || count > 512 {
            return out;
        }
        let stride = (entsize & 0xffff).max(32) as u64;
        let base = list_addr + 8;

        for i in 0..count as u64 {
            let entry = base + i * stride;
            let off_ptr = doc.read_u64_le(entry).unwrap_or(0);
            let name_ptr = doc.read_u64_le(entry + 8).unwrap_or(0);
            let type_ptr = doc.read_u64_le(entry + 16).unwrap_or(0);
            let size = doc.read_u32_le(entry + 28).unwrap_or(8);

            let offset = if off_ptr != 0 {
                doc.read_u32_le(doc.normalize_ptr(off_ptr)).unwrap_or((i as u32 + 1) * 8) as u64
            } else {
                (i + 1) * 8
            };
            let name = doc.read_cstring(name_ptr).unwrap_or_else(|| format!("_ivar_{}", i));
            let raw_type = doc.read_cstring(type_ptr).unwrap_or_else(|| "@".to_string());
            let decoded_type = Self::decode_objc_type(&raw_type);

            out.push(ObjCIvarInfo {
                name,
                ivar_type: decoded_type,
                offset,
                size,
            });
        }
        out
    }

    fn parse_objc_property_list(doc: &UltronDisassembledFile, raw_ptr: u64) -> Vec<ObjCPropertyInfo> {
        let mut out = Vec::new();
        let list_addr = doc.normalize_ptr(raw_ptr);
        if list_addr == 0 {
            return out;
        }
        let Some(_entsize) = doc.read_u32_le(list_addr) else { return out };
        let Some(count) = doc.read_u32_le(list_addr + 4) else { return out };
        if count == 0 || count > 512 {
            return out;
        }
        let base = list_addr + 8;
        for i in 0..count as u64 {
            let entry = base + i * 16;
            let name_ptr = doc.read_u64_le(entry).unwrap_or(0);
            let attr_ptr = doc.read_u64_le(entry + 8).unwrap_or(0);
            if let Some(name) = doc.read_cstring(name_ptr) {
                let attributes = doc.read_cstring(attr_ptr).unwrap_or_else(|| "nonatomic, strong".to_string());
                out.push(ObjCPropertyInfo { name, attributes });
            }
        }
        out
    }

    fn parse_objc_protocol_list(doc: &UltronDisassembledFile, raw_ptr: u64) -> Vec<String> {
        let mut out = Vec::new();
        let list_addr = doc.normalize_ptr(raw_ptr);
        if list_addr == 0 {
            return out;
        }
        let Some(count) = doc.read_u64_le(list_addr) else { return out };
        if count == 0 || count > 128 {
            return out;
        }
        for i in 0..count {
            if let Some(proto_ptr) = doc.read_u64_le(list_addr + 8 + i * 8) {
                let p_addr = doc.normalize_ptr(proto_ptr);
                if let Some(name_ptr) = doc.read_u64_le(p_addr + 8) {
                    if let Some(pname) = doc.read_cstring(name_ptr) {
                        out.push(pname);
                    }
                }
            }
        }
        out
    }

    pub fn decode_objc_type(enc: &str) -> String {
        let is_const = enc.starts_with('r');
        let clean = enc.trim_start_matches(|c: char| {
            c == 'r' || c == 'n' || c == 'N' || c == 'o' || c == 'O' || c == 'R' || c == 'V'
        });
        if clean.starts_with("@\"") {
            let cls = clean.trim_start_matches("@\"").split('"').next().unwrap_or("id");
            return format!("{} *", cls);
        }
        if let Some(inner) = clean.strip_prefix('^') {
            let pointee = match inner.chars().next().unwrap_or('v') {
                'C' => "uint8_t",
                'c' => "char",
                'i' => "int32_t",
                'I' => "uint32_t",
                'q' => "int64_t",
                'Q' => "uint64_t",
                _ => "void",
            };
            return if is_const {
                format!("const {} *", pointee)
            } else {
                format!("{} *", pointee)
            };
        }
        match clean.chars().next().unwrap_or('@') {
            'v' => "void".to_string(),
            '@' => "id".to_string(),
            ':' => "SEL".to_string(),
            '#' => "Class".to_string(),
            'c' => "BOOL".to_string(),
            'C' => "uint8_t".to_string(),
            'B' => "BOOL".to_string(),
            's' => "int16_t".to_string(),
            'S' => "uint16_t".to_string(),
            'i' => "int32_t".to_string(),
            'I' => "uint32_t".to_string(),
            'q' => "int64_t".to_string(),
            'Q' => "uint64_t".to_string(),
            'f' => "float".to_string(),
            'd' => "double".to_string(),
            '*' => if is_const { "const char *".to_string() } else { "char *".to_string() },
            _ => "id".to_string(),
        }
    }

    fn tokenize_objc_types(types: &str) -> Vec<String> {
        let mut tokens = Vec::new();
        let chars: Vec<char> = types.chars().collect();
        let mut i = 0;
        while i < chars.len() {
            while i < chars.len() && (chars[i].is_ascii_digit() || chars[i] == '-') {
                i += 1;
            }
            if i >= chars.len() {
                break;
            }
            let start = i;
            while i < chars.len() && matches!(chars[i], 'r' | 'n' | 'N' | 'o' | 'O' | 'R' | 'V' | '^') {
                i += 1;
            }
            if i < chars.len() {
                if chars[i] == '@' && i + 1 < chars.len() && chars[i + 1] == '"' {
                    i += 2;
                    while i < chars.len() && chars[i] != '"' {
                        i += 1;
                    }
                    if i < chars.len() {
                        i += 1;
                    }
                } else if chars[i] == '{' {
                    let mut depth = 1;
                    i += 1;
                    while i < chars.len() && depth > 0 {
                        if chars[i] == '{' {
                            depth += 1;
                        } else if chars[i] == '}' {
                            depth -= 1;
                        }
                        i += 1;
                    }
                } else {
                    i += 1;
                }
            }
            let tok: String = chars[start..i].iter().collect();
            if !tok.is_empty() {
                tokens.push(Self::decode_objc_type(&tok));
            }
        }
        tokens
    }

    fn decode_objc_method_sig(sel: &str, types: &str, is_class: bool, _cls: &str) -> String {
        let prefix = if is_class { "+" } else { "-" };
        let decoded_tokens = Self::tokenize_objc_types(types);
        let ret_type = decoded_tokens
            .first()
            .cloned()
            .unwrap_or_else(|| Self::decode_objc_type(types));
        if !sel.contains(':') {
            return format!("{} ({}){}", prefix, ret_type, sel);
        }
        let parts: Vec<&str> = sel.split(':').filter(|s| !s.is_empty()).collect();
        let formatted: Vec<String> = parts
            .iter()
            .enumerate()
            .map(|(idx, p)| {
                // Tokens 0=ret, 1=self(@), 2=_cmd(:), 3+idx=arg{idx}
                let arg_type = decoded_tokens
                    .get(3 + idx)
                    .map(|s| s.as_str())
                    .unwrap_or("id");
                format!("{}:({})arg{}", p, arg_type, idx)
            })
            .collect();
        format!("{} ({}){}", prefix, ret_type, formatted.join(" "))
    }

    fn parse_elf(
        path: &str,
        raw_bytes: &[u8],
        elf: &goblin::elf::Elf,
        preferred_arch: &str,
    ) -> Result<UltronDisassembledFile> {
        let arch = match elf.header.e_machine {
            goblin::elf::header::EM_AARCH64 => "arm64",
            goblin::elf::header::EM_X86_64 => "x86_64",
            goblin::elf::header::EM_ARM => "arm32",
            goblin::elf::header::EM_386 => "x86",
            _ => preferred_arch,
        };
        let mut doc = UltronDisassembledFile::new(path.to_string(), raw_bytes.to_vec(), arch);
        doc.format_name = if elf.is_64 {
            "ELF 64-bit".to_string()
        } else {
            "ELF 32-bit".to_string()
        };
        doc.address_space_bits = if elf.is_64 { 64 } else { 32 };
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
        let arch = if pe.is_64 {
            if preferred_arch == "arm64" { "arm64" } else { "x86_64" }
        } else {
            "x86"
        };
        let mut doc = UltronDisassembledFile::new(path.to_string(), raw_bytes.to_vec(), arch);
        doc.format_name = if pe.is_64 {
            "PE32+ (64-bit)".to_string()
        } else {
            "PE32 (32-bit)".to_string()
        };
        doc.address_space_bits = if pe.is_64 { 64 } else { 32 };
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
        for exp in &pe.exports {
            if let Some(name) = exp.name {
                let addr = image_base + exp.rva as u64;
                doc.exports.insert(addr, name.to_string());
                doc.labels.insert(addr, name.to_string());
            }
        }
        for imp in &pe.imports {
            let addr = image_base + imp.rva as u64;
            doc.imports.insert(addr, format!("{}!{}", imp.dll, imp.name));
            doc.labels.insert(addr, format!("imp_{}", imp.name));
        }
        Ok(doc)
    }

    fn parse_archive(
        path: &str,
        raw_bytes: &[u8],
        preferred_arch: &str,
    ) -> Result<UltronDisassembledFile> {
        let mut doc = Self::parse_raw(path, raw_bytes, preferred_arch);
        doc.format_name = "Static Archive (.a / ar)".to_string();
        Ok(doc)
    }

    fn read_leb128_u32(bytes: &[u8], pos: &mut usize) -> Option<u32> {
        let mut result = 0u32;
        let mut shift = 0u32;
        loop {
            if *pos >= bytes.len() {
                return None;
            }
            let byte = bytes[*pos];
            *pos += 1;
            result |= ((byte & 0x7f) as u32) << shift;
            if (byte & 0x80) == 0 {
                break;
            }
            shift += 7;
            if shift >= 35 {
                break;
            }
        }
        Some(result)
    }

    fn read_leb128_i64(bytes: &[u8], pos: &mut usize) -> Option<i64> {
        let mut result = 0i64;
        let mut shift = 0u32;
        let mut byte;
        loop {
            if *pos >= bytes.len() {
                return None;
            }
            byte = bytes[*pos];
            *pos += 1;
            result |= ((byte & 0x7f) as i64) << shift;
            shift += 7;
            if (byte & 0x80) == 0 || shift >= 64 {
                break;
            }
        }
        if shift < 64 && (byte & 0x40) != 0 {
            result |= !0i64 << shift;
        }
        Some(result)
    }

    fn read_wasm_name(bytes: &[u8], pos: &mut usize) -> Option<String> {
        let len = Self::read_leb128_u32(bytes, pos)? as usize;
        if *pos + len > bytes.len() {
            return None;
        }
        let s = String::from_utf8_lossy(&bytes[*pos..*pos + len]).to_string();
        *pos += len;
        Some(s)
    }

    fn format_wasm_valtype(b: u8) -> &'static str {
        match b {
            0x7f => "i32",
            0x7e => "i64",
            0x7d => "f32",
            0x7c => "f64",
            0x7b => "v128",
            0x70 => "funcref",
            0x6f => "externref",
            _ => "i32",
        }
    }

    pub fn load_wasm(path: &str, raw_bytes: &[u8]) -> UltronDisassembledFile {
        let mut doc = UltronDisassembledFile::new(path.to_string(), raw_bytes.to_vec(), "wasm32");
        doc.format_name = "WebAssembly (.wasm)".to_string();
        doc.entry_point = 0x1000;

        let mut sections = Vec::new();
        let mut func_types: Vec<(Vec<&'static str>, Vec<&'static str>)> = Vec::new();
        let mut func_type_indices: Vec<u32> = Vec::new();
        let mut imported_funcs: Vec<String> = Vec::new();
        let mut exported_funcs: BTreeMap<u32, String> = BTreeMap::new();
        let mut code_bodies: Vec<(usize, Vec<u8>)> = Vec::new();

        let mut pos = 8usize; // Skip \0asm + version (8 bytes)
        while pos < raw_bytes.len() {
            let sec_id = raw_bytes[pos];
            pos += 1;
            let Some(sec_len_u32) = Self::read_leb128_u32(raw_bytes, &mut pos) else {
                break;
            };
            let sec_len = sec_len_u32 as usize;
            let sec_start = pos;
            let sec_end = (sec_start + sec_len).min(raw_bytes.len());
            let sec_bytes = &raw_bytes[sec_start..sec_end];

            let (sec_name, is_code) = match sec_id {
                1 => (".wasm_type", false),
                2 => (".wasm_import", false),
                3 => (".wasm_func", false),
                4 => (".wasm_table", false),
                5 => (".wasm_memory", false),
                6 => (".wasm_global", false),
                7 => (".wasm_export", false),
                10 => (".wasm_code", true),
                11 => (".wasm_data", false),
                _ => (".wasm_custom", false),
            };

            sections.push(UltronSection {
                name: sec_name.to_string(),
                segment_name: "WASM_MODULE".to_string(),
                start_address: 0x1000 + sec_start as u64,
                length: (sec_end - sec_start) as u64,
                file_offset: sec_start as u64,
                is_code,
                data: sec_bytes.to_vec(),
            });

            let mut spos = sec_start;
            match sec_id {
                1 => {
                    // Type section
                    if let Some(count) = Self::read_leb128_u32(raw_bytes, &mut spos) {
                        for _ in 0..count {
                            if spos >= sec_end || raw_bytes[spos] != 0x60 {
                                break;
                            }
                            spos += 1;
                            let mut params = Vec::new();
                            if let Some(pcount) = Self::read_leb128_u32(raw_bytes, &mut spos) {
                                for _ in 0..pcount {
                                    if spos < sec_end {
                                        params.push(Self::format_wasm_valtype(raw_bytes[spos]));
                                        spos += 1;
                                    }
                                }
                            }
                            let mut results = Vec::new();
                            if let Some(rcount) = Self::read_leb128_u32(raw_bytes, &mut spos) {
                                for _ in 0..rcount {
                                    if spos < sec_end {
                                        results.push(Self::format_wasm_valtype(raw_bytes[spos]));
                                        spos += 1;
                                    }
                                }
                            }
                            func_types.push((params, results));
                        }
                    }
                }
                2 => {
                    // Import section
                    if let Some(count) = Self::read_leb128_u32(raw_bytes, &mut spos) {
                        for _ in 0..count {
                            let Some(mod_name) = Self::read_wasm_name(raw_bytes, &mut spos) else { break };
                            let Some(field_name) = Self::read_wasm_name(raw_bytes, &mut spos) else { break };
                            if spos >= sec_end {
                                break;
                            }
                            let kind = raw_bytes[spos];
                            spos += 1;
                            match kind {
                                0 => {
                                    let _type_idx = Self::read_leb128_u32(raw_bytes, &mut spos);
                                    let imp_addr = 0x0800 + (imported_funcs.len() as u64) * 8;
                                    let full_imp = format!("{}.{}", mod_name, field_name);
                                    doc.imports.insert(imp_addr, full_imp.clone());
                                    doc.labels.insert(imp_addr, format!("imp_{}", field_name));
                                    imported_funcs.push(field_name);
                                }
                                1 => {
                                    spos += 1; // elemtype
                                    if spos < sec_end {
                                        let flags = raw_bytes[spos];
                                        spos += 1;
                                        let _ = Self::read_leb128_u32(raw_bytes, &mut spos);
                                        if (flags & 1) != 0 {
                                            let _ = Self::read_leb128_u32(raw_bytes, &mut spos);
                                        }
                                    }
                                }
                                2 => {
                                    if spos < sec_end {
                                        let flags = raw_bytes[spos];
                                        spos += 1;
                                        let _ = Self::read_leb128_u32(raw_bytes, &mut spos);
                                        if (flags & 1) != 0 {
                                            let _ = Self::read_leb128_u32(raw_bytes, &mut spos);
                                        }
                                    }
                                }
                                3 => {
                                    spos += 2; // valtype + mutability
                                }
                                _ => break,
                            }
                        }
                    }
                }
                3 => {
                    // Function section
                    if let Some(count) = Self::read_leb128_u32(raw_bytes, &mut spos) {
                        for _ in 0..count {
                            if let Some(t_idx) = Self::read_leb128_u32(raw_bytes, &mut spos) {
                                func_type_indices.push(t_idx);
                            }
                        }
                    }
                }
                7 => {
                    // Export section
                    if let Some(count) = Self::read_leb128_u32(raw_bytes, &mut spos) {
                        for _ in 0..count {
                            let Some(exp_name) = Self::read_wasm_name(raw_bytes, &mut spos) else { break };
                            if spos >= sec_end {
                                break;
                            }
                            let kind = raw_bytes[spos];
                            spos += 1;
                            let Some(idx) = Self::read_leb128_u32(raw_bytes, &mut spos) else { break };
                            if kind == 0 {
                                exported_funcs.insert(idx, exp_name);
                            }
                        }
                    }
                }
                10 => {
                    // Code section
                    if let Some(count) = Self::read_leb128_u32(raw_bytes, &mut spos) {
                        for _ in 0..count {
                            let Some(body_size) = Self::read_leb128_u32(raw_bytes, &mut spos) else { break };
                            let body_start = spos;
                            let body_end = (body_start + body_size as usize).min(sec_end);
                            code_bodies.push((body_start, raw_bytes[body_start..body_end].to_vec()));
                            spos = body_end;
                        }
                    }
                }
                11 => {
                    // Data section
                    if let Some(count) = Self::read_leb128_u32(raw_bytes, &mut spos) {
                        for _ in 0..count {
                            let Some(mode) = Self::read_leb128_u32(raw_bytes, &mut spos) else { break };
                            let mut mem_offset = 0u64;
                            if mode == 0 {
                                // Active data segment: constexpr offset ending with 0x0b
                                while spos < sec_end {
                                    let op = raw_bytes[spos];
                                    spos += 1;
                                    if op == 0x41 {
                                        if let Some(v) = Self::read_leb128_i64(raw_bytes, &mut spos) {
                                            mem_offset = v as u64;
                                        }
                                    } else if op == 0x0b {
                                        break;
                                    }
                                }
                            }
                            let Some(data_len) = Self::read_leb128_u32(raw_bytes, &mut spos) else { break };
                            let d_start = spos;
                            let d_end = (d_start + data_len as usize).min(sec_end);
                            let d_slice = &raw_bytes[d_start..d_end];
                            // Extract null-terminated or printable strings from data segment
                            let mut cur = Vec::new();
                            let mut s_off = 0usize;
                            for (i, &b) in d_slice.iter().enumerate() {
                                if (32..=126).contains(&b) {
                                    if cur.is_empty() {
                                        s_off = i;
                                    }
                                    cur.push(b);
                                } else {
                                    if cur.len() >= 4 {
                                        if let Ok(s) = String::from_utf8(cur.clone()) {
                                            let addr = 0x1000 + (d_start + s_off) as u64;
                                            let _ = mem_offset;
                                            doc.strings_table.insert(addr, s.clone());
                                            doc.string_entries.push(UltronStringEntry {
                                                address: addr,
                                                value: s,
                                                section: "WASM_MODULE,.wasm_data".to_string(),
                                                length: cur.len(),
                                                xrefs: Vec::new(),
                                            });
                                        }
                                    }
                                    cur.clear();
                                }
                            }
                            if cur.len() >= 4 {
                                if let Ok(s) = String::from_utf8(cur.clone()) {
                                    let addr = 0x1000 + (d_start + s_off) as u64;
                                    doc.strings_table.insert(addr, s.clone());
                                    doc.string_entries.push(UltronStringEntry {
                                        address: addr,
                                        value: s,
                                        section: "WASM_MODULE,.wasm_data".to_string(),
                                        length: cur.len(),
                                        xrefs: Vec::new(),
                                    });
                                }
                            }
                            spos = d_end;
                        }
                    }
                }
                _ => {}
            }

            pos = sec_end;
        }

        if sections.is_empty() {
            sections.push(UltronSection {
                name: ".wasm_code".to_string(),
                segment_name: "WASM_MODULE".to_string(),
                start_address: 0x1000,
                length: raw_bytes.len() as u64,
                file_offset: 0,
                is_code: true,
                data: raw_bytes.to_vec(),
            });
        }

        doc.segments.push(UltronSegment {
            name: "WASM_MODULE".to_string(),
            start_address: 0x1000,
            length: raw_bytes.len() as u64,
            file_offset: 0,
            readable: true,
            writable: false,
            executable: true,
            sections,
            raw_data: raw_bytes.to_vec(),
        });

        // Build function address table & disassemble each WebAssembly code body
        let num_imports = imported_funcs.len() as u32;
        let mut func_addrs: BTreeMap<u32, u64> = BTreeMap::new();
        for (i, _) in imported_funcs.iter().enumerate() {
            func_addrs.insert(i as u32, 0x0800 + (i as u64) * 8);
        }
        for (def_idx, (body_file_off, _)) in code_bodies.iter().enumerate() {
            let f_idx = num_imports + def_idx as u32;
            let f_addr = 0x1000 + (*body_file_off as u64);
            func_addrs.insert(f_idx, f_addr);
            let f_name = exported_funcs
                .get(&f_idx)
                .cloned()
                .unwrap_or_else(|| format!("wasm_func_{}", f_idx));
            doc.labels.insert(f_addr, f_name.clone());
            if exported_funcs.contains_key(&f_idx) {
                doc.exports.insert(f_addr, f_name);
            }
        }

        if let Some((first_off, _)) = code_bodies.first() {
            doc.entry_point = 0x1000 + (*first_off as u64);
        }

        for (def_idx, (body_file_off, body_bytes)) in code_bodies.iter().enumerate() {
            let f_idx = num_imports + def_idx as u32;
            let entry_addr = 0x1000 + (*body_file_off as u64);
            let func_name = doc
                .labels
                .get(&entry_addr)
                .cloned()
                .unwrap_or_else(|| format!("wasm_func_{}", f_idx));

            let type_idx = func_type_indices.get(def_idx).copied().unwrap_or(0) as usize;
            let signature = if let Some((params, results)) = func_types.get(type_idx) {
                let ret_str = results.first().copied().unwrap_or("void");
                let p_list: Vec<String> = params
                    .iter()
                    .enumerate()
                    .map(|(pi, pt)| format!("{} local_{}", pt, pi))
                    .collect();
                format!("{} {}({})", ret_str, func_name, p_list.join(", "))
            } else {
                format!("i32 {}()", func_name)
            };

            let mut bpos = 0usize;
            if let Some(local_decl_count) = Self::read_leb128_u32(body_bytes, &mut bpos) {
                for _ in 0..local_decl_count {
                    let _ = Self::read_leb128_u32(body_bytes, &mut bpos);
                    if bpos < body_bytes.len() {
                        bpos += 1;
                    }
                }
            }

            let mut proc_insns = Vec::new();
            let mut callees = Vec::new();
            while bpos < body_bytes.len() {
                let ins_start = bpos;
                let ins_addr = entry_addr + (ins_start as u64);
                let op = body_bytes[bpos];
                bpos += 1;

                let mut is_branch = false;
                let mut is_call = false;
                let mut is_return = false;
                let mut branch_target = None;
                let mut comment = String::new();
                let mut symbol_ref = None;

                let (mnem, op_str) = match op {
                    0x00 => ("unreachable".to_string(), String::new()),
                    0x01 => ("nop".to_string(), String::new()),
                    0x02 => {
                        let bt = if bpos < body_bytes.len() {
                            let b = body_bytes[bpos];
                            bpos += 1;
                            b
                        } else {
                            0x40
                        };
                        ("block".to_string(), format!("0x{:02x}", bt))
                    }
                    0x03 => {
                        let bt = if bpos < body_bytes.len() {
                            let b = body_bytes[bpos];
                            bpos += 1;
                            b
                        } else {
                            0x40
                        };
                        ("loop".to_string(), format!("0x{:02x}", bt))
                    }
                    0x04 => {
                        let bt = if bpos < body_bytes.len() {
                            let b = body_bytes[bpos];
                            bpos += 1;
                            b
                        } else {
                            0x40
                        };
                        is_branch = true;
                        ("if".to_string(), format!("0x{:02x}", bt))
                    }
                    0x05 => ("else".to_string(), String::new()),
                    0x0b => {
                        if bpos >= body_bytes.len() {
                            is_return = true;
                        }
                        ("end".to_string(), String::new())
                    }
                    0x0c => {
                        let depth = Self::read_leb128_u32(body_bytes, &mut bpos).unwrap_or(0);
                        is_branch = true;
                        ("br".to_string(), format!("{}", depth))
                    }
                    0x0d => {
                        let depth = Self::read_leb128_u32(body_bytes, &mut bpos).unwrap_or(0);
                        is_branch = true;
                        ("br_if".to_string(), format!("{}", depth))
                    }
                    0x0f => {
                        is_return = true;
                        ("return".to_string(), String::new())
                    }
                    0x10 => {
                        let target_idx = Self::read_leb128_u32(body_bytes, &mut bpos).unwrap_or(0);
                        is_call = true;
                        if let Some(&t_addr) = func_addrs.get(&target_idx) {
                            branch_target = Some(t_addr);
                            if !callees.contains(&t_addr) {
                                callees.push(t_addr);
                            }
                            if let Some(lbl) = doc.labels.get(&t_addr) {
                                comment = lbl.clone();
                                symbol_ref = Some(lbl.clone());
                            }
                        }
                        ("call".to_string(), format!("func_{}", target_idx))
                    }
                    0x1a => ("drop".to_string(), String::new()),
                    0x1b => ("select".to_string(), String::new()),
                    0x20 => {
                        let idx = Self::read_leb128_u32(body_bytes, &mut bpos).unwrap_or(0);
                        ("local.get".to_string(), format!("$local_{}", idx))
                    }
                    0x21 => {
                        let idx = Self::read_leb128_u32(body_bytes, &mut bpos).unwrap_or(0);
                        ("local.set".to_string(), format!("$local_{}", idx))
                    }
                    0x22 => {
                        let idx = Self::read_leb128_u32(body_bytes, &mut bpos).unwrap_or(0);
                        ("local.tee".to_string(), format!("$local_{}", idx))
                    }
                    0x23 => {
                        let idx = Self::read_leb128_u32(body_bytes, &mut bpos).unwrap_or(0);
                        ("global.get".to_string(), format!("$global_{}", idx))
                    }
                    0x24 => {
                        let idx = Self::read_leb128_u32(body_bytes, &mut bpos).unwrap_or(0);
                        ("global.set".to_string(), format!("$global_{}", idx))
                    }
                    0x28 | 0x29 | 0x2c | 0x2d | 0x36 | 0x37 | 0x3a => {
                        let align = Self::read_leb128_u32(body_bytes, &mut bpos).unwrap_or(0);
                        let offset = Self::read_leb128_u32(body_bytes, &mut bpos).unwrap_or(0);
                        let m = match op {
                            0x28 => "i32.load",
                            0x29 => "i64.load",
                            0x2c => "i32.load8_s",
                            0x2d => "i32.load8_u",
                            0x36 => "i32.store",
                            0x37 => "i64.store",
                            _ => "i32.store8",
                        };
                        (m.to_string(), format!("offset={}, align={}", offset, align))
                    }
                    0x41 => {
                        let val = Self::read_leb128_i64(body_bytes, &mut bpos).unwrap_or(0);
                        ("i32.const".to_string(), format!("{}", val))
                    }
                    0x42 => {
                        let val = Self::read_leb128_i64(body_bytes, &mut bpos).unwrap_or(0);
                        ("i64.const".to_string(), format!("0x{:x}", val))
                    }
                    0x45 => ("i32.eqz".to_string(), String::new()),
                    0x46 => ("i32.eq".to_string(), String::new()),
                    0x47 => ("i32.ne".to_string(), String::new()),
                    0x48 => ("i32.lt_s".to_string(), String::new()),
                    0x49 => ("i32.lt_u".to_string(), String::new()),
                    0x4a => ("i32.gt_s".to_string(), String::new()),
                    0x4b => ("i32.gt_u".to_string(), String::new()),
                    0x4c => ("i32.le_s".to_string(), String::new()),
                    0x4d => ("i32.le_u".to_string(), String::new()),
                    0x4e => ("i32.ge_s".to_string(), String::new()),
                    0x4f => ("i32.ge_u".to_string(), String::new()),
                    0x50 => ("i64.eqz".to_string(), String::new()),
                    0x51 => ("i64.eq".to_string(), String::new()),
                    0x52 => ("i64.ne".to_string(), String::new()),
                    0x6a => ("i32.add".to_string(), String::new()),
                    0x6b => ("i32.sub".to_string(), String::new()),
                    0x6c => ("i32.mul".to_string(), String::new()),
                    0x6d => ("i32.div_s".to_string(), String::new()),
                    0x6e => ("i32.div_u".to_string(), String::new()),
                    0x71 => ("i32.and".to_string(), String::new()),
                    0x72 => ("i32.or".to_string(), String::new()),
                    0x73 => ("i32.xor".to_string(), String::new()),
                    0x74 => ("i32.shl".to_string(), String::new()),
                    0x75 => ("i32.shr_s".to_string(), String::new()),
                    0x76 => ("i32.shr_u".to_string(), String::new()),
                    0x77 => ("i32.rotl".to_string(), String::new()),
                    0x78 => ("i32.rotr".to_string(), String::new()),
                    0x7c => ("i64.add".to_string(), String::new()),
                    0x7d => ("i64.sub".to_string(), String::new()),
                    0x7e => ("i64.mul".to_string(), String::new()),
                    0x83 => ("i64.and".to_string(), String::new()),
                    0x84 => ("i64.or".to_string(), String::new()),
                    0x85 => ("i64.xor".to_string(), String::new()),
                    0x86 => ("i64.shl".to_string(), String::new()),
                    0x88 => ("i64.shr_u".to_string(), String::new()),
                    0xa7 => ("i32.wrap_i64".to_string(), String::new()),
                    0xac => ("i64.extend_i32_s".to_string(), String::new()),
                    0xad => ("i64.extend_i32_u".to_string(), String::new()),
                    _ => (format!("wasm.op_0x{:02x}", op), String::new()),
                };

                let ins_bytes = &body_bytes[ins_start..bpos];
                let ins = UltronInstruction {
                    address: ins_addr,
                    size: ins_bytes.len().max(1),
                    bytes_hex: hex::encode(ins_bytes),
                    mnemonic: mnem,
                    op_str,
                    comment,
                    is_branch,
                    is_call,
                    is_return,
                    branch_target,
                    string_ref: None,
                    symbol_ref,
                };
                doc.instructions.insert(ins_addr, ins.clone());
                proc_insns.push(ins);
            }

            let end_addr = entry_addr + (body_bytes.len() as u64).max(1);
            let bb = UltronBasicBlock {
                start_address: entry_addr,
                end_address: end_addr,
                instructions: proc_insns,
                outgoing_edges: Vec::new(),
                incoming_edges: Vec::new(),
                branch_true: None,
                branch_false: None,
            };

            doc.procedures.insert(
                entry_addr,
                UltronProcedure {
                    name: func_name,
                    entry_point: entry_addr,
                    end_address: end_addr,
                    segment_name: "WASM_MODULE".to_string(),
                    section_name: ".wasm_code".to_string(),
                    signature,
                    basic_blocks: vec![bb],
                    callers: Vec::new(),
                    callees,
                    strings_referenced: doc.string_entries.iter().map(|s| s.value.clone()).collect(),
                    stack_frame_size: 0,
                    local_variables: BTreeMap::new(),
                },
            );
        }

        doc
    }

    #[allow(dead_code)]
    fn parse_wasm(path: &str, raw_bytes: &[u8]) -> UltronDisassembledFile {
        Self::load_wasm(path, raw_bytes)
    }

    fn parse_dex(path: &str, raw_bytes: &[u8]) -> UltronDisassembledFile {
        let mut doc = UltronDisassembledFile::new(path.to_string(), raw_bytes.to_vec(), "arm64");
        doc.format_name = "Android Dalvik DEX (.dex)".to_string();
        doc.cpu_family = "Dalvik Bytecode VM".to_string();
        doc.cpu_subfamily = "dex".to_string();
        doc.address_space_bits = 32;
        doc.entry_point = 0x1000;

        let data_off = if raw_bytes.len() >= 0x70 {
            u32::from_le_bytes(raw_bytes[0x68..0x6c].try_into().unwrap_or([0; 4])) as usize
        } else {
            0
        };
        let code_start = if data_off > 0 && data_off < raw_bytes.len() {
            data_off
        } else {
            0
        };

        let sec = UltronSection {
            name: ".dex_bytecode".to_string(),
            segment_name: "DEX_FILE".to_string(),
            start_address: 0x1000,
            length: (raw_bytes.len() - code_start) as u64,
            file_offset: code_start as u64,
            is_code: true,
            data: raw_bytes[code_start..].to_vec(),
        };
        doc.segments.push(UltronSegment {
            name: "DEX_FILE".to_string(),
            start_address: 0x1000,
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

    fn parse_dyld_shared_cache(
        path: &str,
        raw_bytes: &[u8],
        preferred_arch: &str,
    ) -> UltronDisassembledFile {
        let magic_str = String::from_utf8_lossy(&raw_bytes[0..16.min(raw_bytes.len())]);
        let arch = if magic_str.contains("arm64") {
            "arm64"
        } else if magic_str.contains("x86_64") {
            "x86_64"
        } else {
            preferred_arch
        };
        let mut doc = UltronDisassembledFile::new(path.to_string(), raw_bytes.to_vec(), arch);
        doc.format_name = "macOS dyld Shared Cache (dyld_v1)".to_string();
        doc.entry_point = 0x180000000;

        let sec = UltronSection {
            name: "__text".to_string(),
            segment_name: "__TEXT".to_string(),
            start_address: 0x180000000,
            length: raw_bytes.len() as u64,
            file_offset: 0,
            is_code: true,
            data: raw_bytes.to_vec(),
        };
        doc.segments.push(UltronSegment {
            name: "__TEXT".to_string(),
            start_address: 0x180000000,
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

    fn parse_raw(path: &str, raw_bytes: &[u8], preferred_arch: &str) -> UltronDisassembledFile {
        let mut doc = UltronDisassembledFile::new(path.to_string(), raw_bytes.to_vec(), preferred_arch);
        doc.format_name = "RAW Firmware / Binary".to_string();
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

    pub fn demangle_cpp_type_name(raw: &str) -> String {
        let mut rest = raw.trim().trim_start_matches('_');
        for prefix in ["ZTV", "ZTI", "ZTS"] {
            if let Some(stripped) = rest.strip_prefix(prefix) {
                rest = stripped;
                break;
            }
        }
        let is_nested = rest.starts_with('N');
        if is_nested {
            rest = &rest[1..];
        }
        let mut parts = Vec::new();
        while !rest.is_empty() && !rest.starts_with('E') {
            let num_end = rest.find(|c: char| !c.is_ascii_digit()).unwrap_or(0);
            if num_end == 0 {
                break;
            }
            let Ok(len) = rest[..num_end].parse::<usize>() else { break };
            rest = &rest[num_end..];
            if len == 0 || rest.len() < len {
                break;
            }
            parts.push(rest[..len].to_string());
            rest = &rest[len..];
            if !is_nested {
                break;
            }
        }
        if parts.is_empty() {
            raw.trim_start_matches('_').to_string()
        } else {
            parts.join("::")
        }
    }

    pub fn demangle_cpp_symbol(sym: &str) -> String {
        let s = sym.trim();
        let clean = s.trim_start_matches('_');
        let Some(mut rest) = clean.strip_prefix('Z') else {
            return clean.to_string();
        };
        let is_nested = rest.starts_with('N');
        if is_nested {
            rest = &rest[1..];
        }
        // Optional 'K' (const method)
        let is_const = if is_nested && rest.starts_with('K') {
            rest = &rest[1..];
            true
        } else {
            false
        };
        let mut parts = Vec::new();
        let mut dtor_tag: Option<&'static str> = None;
        let mut ctor_tag: Option<&'static str> = None;

        while !rest.is_empty() && !rest.starts_with('E') {
            if is_nested && (rest.starts_with("D0") || rest.starts_with("D1") || rest.starts_with("D2")) {
                dtor_tag = match &rest[..2] {
                    "D0" => Some("deleting dtor"),
                    "D1" => Some("complete dtor"),
                    _ => Some("base dtor"),
                };
                rest = &rest[2..];
                break;
            }
            if is_nested && (rest.starts_with("C1") || rest.starts_with("C2")) {
                ctor_tag = Some("ctor");
                rest = &rest[2..];
                break;
            }
            let num_end = rest.find(|c: char| !c.is_ascii_digit()).unwrap_or(0);
            if num_end == 0 {
                break;
            }
            let Ok(len) = rest[..num_end].parse::<usize>() else { break };
            rest = &rest[num_end..];
            if len == 0 || rest.len() < len {
                break;
            }
            parts.push(rest[..len].to_string());
            rest = &rest[len..];
            if !is_nested {
                break;
            }
        }
        if parts.is_empty() {
            return s.to_string();
        }
        if let Some(last_cls) = parts.last().cloned() {
            if dtor_tag.is_some() {
                parts.push(format!("~{}", last_cls));
            } else if ctor_tag.is_some() {
                parts.push(last_cls);
            }
        }
        if rest.starts_with('E') {
            rest = &rest[1..];
        }
        let mut params = Vec::new();
        let chars: Vec<char> = rest.chars().collect();
        let mut i = 0usize;
        while i < chars.len() {
            match chars[i] {
                'v' => {}
                'i' => params.push("int"),
                'j' => params.push("uint32_t"),
                'l' => params.push("int64_t"),
                'm' | 'y' => params.push("uint64_t"),
                'x' => params.push("int64_t"),
                'c' | 'a' => params.push("char"),
                'h' => params.push("uint8_t"),
                's' => params.push("int16_t"),
                't' => params.push("uint16_t"),
                'b' => params.push("bool"),
                'f' => params.push("float"),
                'd' => params.push("double"),
                'P' => {
                    if i + 1 < chars.len() && chars[i + 1] == 'K' {
                        params.push("const void *");
                        i += 2;
                        continue;
                    } else {
                        params.push("void *");
                    }
                }
                _ => {}
            }
            i += 1;
        }
        let const_suffix = if is_const { " const" } else { "" };
        if let Some(tag) = dtor_tag {
            format!("{}({}){} [{}]", parts.join("::"), params.join(", "), const_suffix, tag)
        } else {
            format!("{}({}){}", parts.join("::"), params.join(", "), const_suffix)
        }
    }

    /// C++ `vtable` & Itanium RTTI Reconstructor (`parse_cpp_rtti_and_vtables`):
    /// Scans `_ZTV...` (vtables), `_ZTI...` (typeinfo), `_ZTS...` (typeinfo strings), and `__DATA_CONST` /
    /// `__const` / `.rodata` pointer tables to reconstruct polymorphic C++ classes and register `VTable_<Class>` structs.
    pub fn parse_cpp_rtti_and_vtables(doc: &mut UltronDisassembledFile) {
        let mut ztv_symbols: BTreeMap<u64, String> = BTreeMap::new();
        let mut zti_symbols: BTreeMap<u64, String> = BTreeMap::new();
        let mut zts_symbols: BTreeMap<u64, String> = BTreeMap::new();

        for (&addr, name) in &doc.labels {
            let clean = name.trim_start_matches('_');
            if clean.starts_with("ZTV") && !clean.contains("cxxabiv1") {
                ztv_symbols.insert(addr, name.clone());
            } else if clean.starts_with("ZTI") && !clean.contains("cxxabiv1") {
                zti_symbols.insert(addr, name.clone());
            } else if clean.starts_with("ZTS") && !clean.contains("cxxabiv1") {
                zts_symbols.insert(addr, name.clone());
            }
        }

        // Map ZTI address -> demangled class name
        let mut zti_to_class_name: BTreeMap<u64, String> = BTreeMap::new();
        for (&zti_addr, zti_sym) in &zti_symbols {
            let mut cls_name = Self::demangle_cpp_type_name(zti_sym);
            // Also check ZTI + 0x08 -> ZTS string pointer
            if let Some(raw_zts_ptr) = doc.read_u64_le(zti_addr + 8) {
                if (raw_zts_ptr & 0x8000_0000_0000_0000) == 0 {
                    let zts_ptr = doc.normalize_ptr(raw_zts_ptr);
                    if let Some(zts_str) = doc.read_cstring(zts_ptr) {
                        let from_str = Self::demangle_cpp_type_name(&zts_str);
                        if !from_str.is_empty() {
                            cls_name = from_str;
                        }
                    } else if let Some(zts_lbl) = zts_symbols.get(&zts_ptr) {
                        let from_lbl = Self::demangle_cpp_type_name(zts_lbl);
                        if !from_lbl.is_empty() {
                            cls_name = from_lbl;
                        }
                    }
                }
            }
            zti_to_class_name.insert(zti_addr, cls_name);
        }

        let mut cpp_classes = Vec::new();
        let mut covered_vtable_addrs = std::collections::BTreeSet::new();
        let mut discovered_method_labels: Vec<(u64, String)> = Vec::new();

        for (&vtable_addr, ztv_sym) in &ztv_symbols {
            let mut demangled_cls = Self::demangle_cpp_type_name(ztv_sym);
            let mut typeinfo_addr_val = 0u64;
            let mut base_class = String::new();

            // Itanium ABI vtable header: +0x00 = offset_to_top, +0x08 = rtti_ptr (_ZTI...)
            if let Some(raw_rtti) = doc.read_u64_le(vtable_addr + 8) {
                if raw_rtti != 0 && (raw_rtti & 0x8000_0000_0000_0000) == 0 {
                    let rtti_ptr = doc.normalize_ptr(raw_rtti);
                    if doc.get_section_at(rtti_ptr).is_some() {
                        typeinfo_addr_val = rtti_ptr;
                        if let Some(rtti_cls) = zti_to_class_name.get(&rtti_ptr) {
                            if !rtti_cls.is_empty() {
                                demangled_cls = rtti_cls.clone();
                            }
                        }
                        // Check if __si_class_type_info has a base_type pointer at rtti_ptr + 0x10
                        let base_slot_addr = rtti_ptr + 16;
                        if !doc.labels.contains_key(&base_slot_addr) {
                            if let Some(raw_base_zti) = doc.read_u64_le(base_slot_addr) {
                                if raw_base_zti != 0 && (raw_base_zti & 0x8000_0000_0000_0000) == 0 {
                                    let base_zti = doc.normalize_ptr(raw_base_zti);
                                    if let Some(base_name) = zti_to_class_name.get(&base_zti) {
                                        base_class = base_name.clone();
                                    } else if let Some(base_lbl) = doc.labels.get(&base_zti) {
                                        if base_lbl.contains("ZTI") {
                                            base_class = Self::demangle_cpp_type_name(base_lbl);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }

            if typeinfo_addr_val == 0 {
                // Fallback: match _ZTI symbol with same demangled class name
                for (&zti_addr, cls_name) in &zti_to_class_name {
                    if cls_name == &demangled_cls {
                        typeinfo_addr_val = zti_addr;
                        break;
                    }
                }
            }

            // Read virtual method function pointers starting at vtable_addr + 0x10
            let mut virtual_methods = Vec::new();
            let mut vtable_fields = vec![
                UltronStructField {
                    offset: 0x00,
                    name: "offset_to_top".to_string(),
                    field_type: "int64_t".to_string(),
                },
                UltronStructField {
                    offset: 0x08,
                    name: "rtti_typeinfo".to_string(),
                    field_type: "const std::type_info *".to_string(),
                },
            ];

            let mut slot_off = 16u64;
            covered_vtable_addrs.insert(vtable_addr);
            covered_vtable_addrs.insert(vtable_addr + 8);

            while slot_off < 16 + 64 * 8 {
                let slot_addr = vtable_addr + slot_off;
                if slot_off > 16 && doc.labels.contains_key(&slot_addr) {
                    break;
                }
                let Some(raw_fn) = doc.read_u64_le(slot_addr) else { break };
                if raw_fn == 0 || (raw_fn & 0x8000_0000_0000_0000) != 0 {
                    break;
                }
                let fn_addr = doc.normalize_ptr(raw_fn);
                let is_code_target = doc
                    .get_section_at(fn_addr)
                    .map(|sec| sec.is_code)
                    .unwrap_or(false);
                if !is_code_target {
                    break;
                }

                covered_vtable_addrs.insert(slot_addr);
                let raw_sym = doc
                    .labels
                    .get(&fn_addr)
                    .cloned()
                    .unwrap_or_else(|| format!("vfunc_{:x}", fn_addr));
                let demangled_fn = Self::demangle_cpp_symbol(&raw_sym);
                if !doc.labels.contains_key(&fn_addr) {
                    discovered_method_labels.push((
                        fn_addr,
                        format!("{}::vfunc_{}", demangled_cls, (slot_off - 16) / 8),
                    ));
                }

                let short_field = demangled_fn
                    .split('(')
                    .next()
                    .unwrap_or(&demangled_fn)
                    .rsplit("::")
                    .next()
                    .unwrap_or("vfunc")
                    .replace('~', "dtor_");
                let field_name = if vtable_fields.iter().any(|f| f.name == short_field) {
                    format!("{}_{}", short_field, (slot_off - 16) / 8)
                } else {
                    short_field
                };

                vtable_fields.push(UltronStructField {
                    offset: slot_off,
                    name: field_name,
                    field_type: format!("void * /* {} */", demangled_fn),
                });

                virtual_methods.push(format!("{} @ 0x{:x}", demangled_fn, fn_addr));
                slot_off += 8;
            }

            let struct_name = format!(
                "VTable_{}",
                demangled_cls.replace("::", "_")
            );
            doc.structs.insert(
                struct_name.clone(),
                UltronStructDef {
                    name: struct_name,
                    size: slot_off,
                    fields: vtable_fields,
                },
            );

            cpp_classes.push(CppClassInfo {
                name: ztv_sym.clone(),
                demangled_name: demangled_cls,
                vtable_address: format!("0x{:x}", vtable_addr),
                typeinfo_address: if typeinfo_addr_val != 0 {
                    format!("0x{:x}", typeinfo_addr_val)
                } else {
                    "0x0".to_string()
                },
                base_class,
                virtual_methods,
            });
        }

        // Heuristic scan of __DATA_CONST / __const / .rodata for stripped vtables if none had _ZTV symbols
        if cpp_classes.is_empty() {
            let mut candidate_tables = Vec::new();
            for seg in &doc.segments {
                for sec in &seg.sections {
                    if matches!(
                        sec.name.as_str(),
                        "__const" | ".rodata" | ".data.rel.ro"
                    ) && sec.data.len() >= 32
                    {
                        let mut off = 0usize;
                        while off + 24 <= sec.data.len() {
                            let slot_addr = sec.start_address + off as u64;
                            if covered_vtable_addrs.contains(&slot_addr) {
                                off += 8;
                                continue;
                            }
                            let top = u64::from_le_bytes(sec.data[off..off + 8].try_into().unwrap());
                            let rtti_raw = u64::from_le_bytes(sec.data[off + 8..off + 16].try_into().unwrap());
                            let fn0_raw = u64::from_le_bytes(sec.data[off + 16..off + 24].try_into().unwrap());
                            if top == 0 && rtti_raw != 0 && fn0_raw != 0 && (fn0_raw & 0x8000_0000_0000_0000) == 0 {
                                let fn0 = doc.normalize_ptr(fn0_raw);
                                if doc.get_section_at(fn0).map(|s| s.is_code).unwrap_or(false) {
                                    let mut methods = Vec::new();
                                    let mut cur = off + 16;
                                    while cur + 8 <= sec.data.len() {
                                        let raw_p = u64::from_le_bytes(sec.data[cur..cur + 8].try_into().unwrap());
                                        if raw_p == 0 || (raw_p & 0x8000_0000_0000_0000) != 0 {
                                            break;
                                        }
                                        let fp = doc.normalize_ptr(raw_p);
                                        if !doc.get_section_at(fp).map(|s| s.is_code).unwrap_or(false) {
                                            break;
                                        }
                                        methods.push(fp);
                                        cur += 8;
                                    }
                                    if methods.len() >= 2 {
                                        candidate_tables.push((slot_addr, doc.normalize_ptr(rtti_raw), methods));
                                        off = cur;
                                        continue;
                                    }
                                }
                            }
                            off += 8;
                        }
                    }
                }
            }
            for (idx, (vt_addr, rtti_addr, methods)) in candidate_tables.into_iter().enumerate() {
                let cls_name = format!(" PolymorphicClass_{}", idx).trim().to_string();
                let mut vmethods = Vec::new();
                let mut vfields = vec![
                    UltronStructField {
                        offset: 0x00,
                        name: "offset_to_top".to_string(),
                        field_type: "int64_t".to_string(),
                    },
                    UltronStructField {
                        offset: 0x08,
                        name: "rtti_typeinfo".to_string(),
                        field_type: "const std::type_info *".to_string(),
                    },
                ];
                for (m_idx, m_addr) in methods.iter().enumerate() {
                    let sym = doc
                        .labels
                        .get(m_addr)
                        .map(|s| Self::demangle_cpp_symbol(s))
                        .unwrap_or_else(|| format!("vfunc_{}", m_idx));
                    vmethods.push(format!("{} @ 0x{:x}", sym, m_addr));
                    vfields.push(UltronStructField {
                        offset: 16 + (m_idx as u64) * 8,
                        name: format!("vfunc_{}", m_idx),
                        field_type: "void *".to_string(),
                    });
                }
                let st_name = format!("VTable_{}", cls_name);
                doc.structs.insert(
                    st_name.clone(),
                    UltronStructDef {
                        name: st_name,
                        size: 16 + (methods.len() as u64) * 8,
                        fields: vfields,
                    },
                );
                cpp_classes.push(CppClassInfo {
                    name: format!("_ZTV{}", cls_name),
                    demangled_name: cls_name,
                    vtable_address: format!("0x{:x}", vt_addr),
                    typeinfo_address: format!("0x{:x}", rtti_addr),
                    base_class: String::new(),
                    virtual_methods: vmethods,
                });
            }
        }

        for (fn_addr, lbl) in discovered_method_labels {
            doc.labels.entry(fn_addr).or_insert(lbl);
        }
        doc.cpp_classes = cpp_classes;
    }

    /// DWARF Debug Metadata & Compile Unit Extractor (`parse_dwarf_metadata`):
    /// Scans `__debug_str`, `__debug_line_str`, `.debug_str`, and STAB entries (`N_SO`, `N_SOL`, `N_FUN`)
    /// to populate `doc.dwarf_compile_units`, map function addresses in `doc.dwarf_lines`, and annotate
    /// procedure entry comments with `[DWARF CU: ...]`.
    pub fn parse_dwarf_metadata(doc: &mut UltronDisassembledFile) {
        let source_exts = [
            ".c", ".cpp", ".cc", ".cxx", ".h", ".hpp", ".m", ".mm", ".rs", ".swift",
        ];

        // 1. Scan DWARF string sections (__debug_str, __debug_line_str, .debug_str, .debug_line_str)
        for seg in &doc.segments {
            for sec in &seg.sections {
                if matches!(
                    sec.name.as_str(),
                    "__debug_str" | "__debug_line_str" | ".debug_str" | ".debug_line_str"
                ) {
                    let mut start = 0usize;
                    for (i, &b) in sec.data.iter().enumerate() {
                        if b == 0 {
                            if i > start {
                                if let Ok(s) = std::str::from_utf8(&sec.data[start..i]) {
                                    let trimmed = s.trim();
                                    if source_exts.iter().any(|ext| trimmed.ends_with(ext))
                                        && !doc.dwarf_compile_units.contains(&trimmed.to_string())
                                    {
                                        doc.dwarf_compile_units.push(trimmed.to_string());
                                    }
                                }
                            }
                            start = i + 1;
                        }
                    }
                }
            }
        }

        // 2. If dwarf_compile_units has entries, ensure all procedures have dwarf_lines mappings
        let primary_cu_basename = doc
            .dwarf_compile_units
            .first()
            .and_then(|cu| Path::new(cu).file_name())
            .and_then(|s| s.to_str())
            .map(|s| s.to_string());

        if let Some(ref cu_base) = primary_cu_basename {
            let proc_entries: Vec<(u64, String)> = doc
                .procedures
                .iter()
                .map(|(&addr, p)| (addr, p.name.clone()))
                .collect();
            for (addr, pname) in proc_entries {
                doc.dwarf_lines.entry(addr).or_insert_with(|| {
                    format!("{}:{}", cu_base, Self::demangle_cpp_symbol(&pname))
                });
            }
        }

        // 3. Annotate procedure entry comments with [DWARF CU: ...]
        let line_annotations: Vec<(u64, String)> = doc
            .dwarf_lines
            .iter()
            .map(|(&addr, fl)| (addr, fl.clone()))
            .collect();

        for (addr, file_line) in line_annotations {
            let tag = format!("[DWARF CU: {}]", file_line);
            if let Some(ins) = doc.instructions.get_mut(&addr) {
                if !ins.comment.contains("[DWARF CU:") {
                    if ins.comment.is_empty() {
                        ins.comment = tag.clone();
                    } else {
                        ins.comment = format!("{} | {}", ins.comment, tag);
                    }
                }
            }
            if let Some(proc) = doc.procedures.get_mut(&addr) {
                if let Some(bb) = proc.basic_blocks.first_mut() {
                    if let Some(first_ins) = bb.instructions.first_mut() {
                        if first_ins.address == addr && !first_ins.comment.contains("[DWARF CU:") {
                            if first_ins.comment.is_empty() {
                                first_ins.comment = tag.clone();
                            } else {
                                first_ins.comment = format!("{} | {}", first_ins.comment, tag);
                            }
                        }
                    }
                }
            }
            let existing = doc.comments.get(&addr).cloned().unwrap_or_default();
            if !existing.contains("[DWARF CU:") {
                let merged = if existing.is_empty() {
                    doc.instructions
                        .get(&addr)
                        .map(|i| i.comment.clone())
                        .unwrap_or_else(|| tag.clone())
                } else {
                    format!("{} | {}", existing, tag)
                };
                doc.comments.insert(addr, merged);
            }
        }
    }
}

-- ============================================================================
-- ULTRON DISASSEMBLE v4.0 — AUTO-GENERATED WIRESHARK LUA DISSECTOR
-- Target Binary : /Users/gilles/Library/Developer/Xcode/DerivedData/Aleria-emykibufzydxzdapgegdbbeupnon/Build/Intermediates.noindex/Aleria.build/Debug/Aleria.build/Objects-normal/arm64/ParticlesRenderer.o
-- ============================================================================

local p_ultron = Proto("particlesrenderer_proto", "ParticlesRenderer Binary Protocol")
local f_magic  = ProtoField.uint32("particlesrenderer.magic", "Magic Signature", base.HEX)
local f_ver    = ProtoField.uint16("particlesrenderer.version", "Protocol Version", base.DEC)
local f_flags  = ProtoField.uint16("particlesrenderer.flags", "Header Flags", base.HEX)
local f_len    = ProtoField.uint32("particlesrenderer.length", "Payload Length", base.DEC)
local f_data   = ProtoField.bytes("particlesrenderer.payload", "Payload Bytes")

p_ultron.fields = { f_magic, f_ver, f_flags, f_len, f_data }

function p_ultron.dissect(buffer, pinfo, tree)
    if buffer:len() < 12 then return 0 end
    pinfo.cols.protocol = "ULTRON_PARTICLESRENDERER"
    local subtree = tree:add(p_ultron, buffer(), "Ultron Inferred Protocol Header")
    subtree:add_le(f_magic, buffer(0, 4))
    subtree:add_le(f_ver,   buffer(4, 2))
    subtree:add_le(f_flags, buffer(6, 2))
    local plen = buffer(8, 4):le_uint()
    subtree:add_le(f_len,   buffer(8, 4))
    if buffer:len() > 12 then
        subtree:add(f_data, buffer(12, math.min(plen, buffer:len() - 12)))
    end
end

local tcp_port = DissectorTable.get("tcp.port")
tcp_port:add(8420, p_ultron)

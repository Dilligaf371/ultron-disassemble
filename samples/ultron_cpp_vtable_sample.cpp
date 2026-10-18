#include <cstdint>
#include <cstdio>
#include <cstring>

class SentinelTelemetryUnit {
public:
    uint64_t unit_id;
    uint32_t sector_code;

    __attribute__((noinline))
    SentinelTelemetryUnit(uint64_t id, uint32_t sector)
        : unit_id(id), sector_code(sector) {}

    virtual ~SentinelTelemetryUnit() = default;

    __attribute__((noinline))
    virtual uint64_t computeSignature(uint64_t seed) {
        uint64_t acc = seed ^ unit_id ^ 0x554c54524f4e3031ULL;
        for (uint32_t i = 0; i < (sector_code & 0x0f) + 4; ++i) {
            acc = (acc << 7) | (acc >> 57);
            acc = (acc * 0x9e3779b97f4a7c15ULL) + i;
        }
        return acc;
    }

    __attribute__((noinline))
    virtual const char* unitDesignation() {
        return "ULTRON-SENTINEL-TELEMETRY-MK1";
    }

    __attribute__((noinline))
    virtual int threatLevel() {
        return static_cast<int>((sector_code % 5) + 1);
    }
};

class VibraniumPrimeCore : public SentinelTelemetryUnit {
public:
    uint64_t resonance_key;

    __attribute__((noinline))
    VibraniumPrimeCore(uint64_t id, uint32_t sector, uint64_t key)
        : SentinelTelemetryUnit(id, sector), resonance_key(key) {}

    ~VibraniumPrimeCore() override = default;

    __attribute__((noinline))
    uint64_t computeSignature(uint64_t seed) override {
        uint64_t base_sig = SentinelTelemetryUnit::computeSignature(seed);
        uint64_t mix = base_sig ^ resonance_key;
        mix ^= (mix >> 33);
        mix *= 0xff51afd7ed558ccdULL;
        mix ^= (mix >> 33);
        return mix;
    }

    __attribute__((noinline))
    const char* unitDesignation() override {
        return "ULTRON-VIBRANIUM-PRIME-CORE-MK9";
    }

    __attribute__((noinline))
    int threatLevel() override {
        return 10;
    }
};

static volatile uint64_t g_tactical_trace = 0;

extern "C" __attribute__((noinline))
uint64_t execute_tactical_switch(int opcode, uint64_t payload) {
    uint64_t state = payload;
    switch (opcode) {
        case 0:
            g_tactical_trace = 0x100;
            state = (state ^ 0xdeadbeefcafebabeULL) + 0x1001;
            break;
        case 1:
            g_tactical_trace = 0x200;
            state = (state * 0x5851f42d4c957f2dULL) ^ 0x2002;
            break;
        case 2:
            g_tactical_trace = 0x300;
            state = ((state << 13) | (state >> 51)) + 0x3003;
            break;
        case 3:
            g_tactical_trace = 0x400;
            state = (state / 7) ^ 0x4444555566667777ULL;
            break;
        case 4:
            g_tactical_trace = 0x500;
            state = (state + 0x9e3779b97f4a7c15ULL) * 31;
            break;
        case 5:
            g_tactical_trace = 0x600;
            state = (~state ^ 0xfeedface8badf00dULL) - 0x5005;
            break;
        case 6:
            g_tactical_trace = 0x700;
            state = ((state >> 7) ^ (state << 19)) + 0x6006;
            break;
        default:
            g_tactical_trace = 0xfff;
            state = state ^ 0xffffffffffffffffULL;
            break;
    }
    return state ^ g_tactical_trace;
}

__attribute__((noinline))
SentinelTelemetryUnit* create_telemetry_unit(int kind, uint64_t id, uint32_t sector) {
    if (kind > 1) {
        return new VibraniumPrimeCore(id, sector, 0xA5A5F0F012345678ULL);
    }
    return new SentinelTelemetryUnit(id, sector);
}

int main(int argc, char** argv) {
    SentinelTelemetryUnit* unit = create_telemetry_unit(argc, 0x1337ULL, static_cast<uint32_t>(argc));
    uint64_t sig = unit->computeSignature(static_cast<uint64_t>(argc) * 0x42);
    const char* desig = unit->unitDesignation();
    int threat = unit->threatLevel();
    uint64_t tac = execute_tactical_switch(argc % 8, sig);
    std::printf("[%s] threat=%d sig=0x%llx tactical=0x%llx\n",
                desig, threat,
                static_cast<unsigned long long>(sig),
                static_cast<unsigned long long>(tac));
    delete unit;
    return 0;
}

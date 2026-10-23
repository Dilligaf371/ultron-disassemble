#include <cstdint>
#include <cstdio>
#include <cstring>

struct MondayPulseItem {
    uint64_t pulse_id;
    uint64_t board_id;
    const char* group_id;
    const char* task_title;
    uint32_t admin_user_id;
    uint8_t status_code;
    uint8_t priority_code;
    uint16_t flags;
    const char* due_date_iso;
    const char* notes_text;
    int64_t budget_cents;
    uint32_t file_asset_count;
    uint32_t timeline_span_days;
};

struct MondayColumnDefinition {
    uint32_t column_index;
    const char* column_id;
    const char* column_title;
    const char* column_type;
    uint64_t aggregation_flags;
};

class MondayBoardEngine {
public:
    uint64_t board_id;
    uint64_t workspace_id;
    uint32_t column_count;
    uint32_t group_count;

    __attribute__((noinline))
    MondayBoardEngine(uint64_t b_id, uint64_t ws_id)
        : board_id(b_id), workspace_id(ws_id), column_count(9), group_count(2) {}

    virtual ~MondayBoardEngine() = default;

    __attribute__((noinline))
    virtual const char* engineSubsystemName() const {
        return "MondayBoardEngine::WorkOSCore";
    }

    __attribute__((noinline))
    virtual uint64_t computeBoardStateDigest(uint64_t seed) {
        uint64_t hash = seed ^ board_id ^ (workspace_id << 13);
        for (uint32_t i = 0; i < column_count; ++i) {
            hash = ((hash << 9) | (hash >> 55)) ^ (0x9e3779b97f4a7c15ULL * (i + 1));
        }
        return hash;
    }

    __attribute__((noinline))
    virtual int64_t evaluateColumnMetric(const MondayPulseItem* items, size_t count) {
        int64_t score = 0;
        for (size_t i = 0; i < count; ++i) {
            score += items[i].budget_cents + static_cast<int64_t>(items[i].timeline_span_days * 100);
        }
        return score;
    }
};

class PulseItemStore : public MondayBoardEngine {
public:
    uint32_t active_pulse_count;
    uint32_t archived_pulse_count;

    __attribute__((noinline))
    PulseItemStore(uint64_t b_id, uint64_t ws_id, uint32_t active_cnt)
        : MondayBoardEngine(b_id, ws_id), active_pulse_count(active_cnt), archived_pulse_count(0) {}

    ~PulseItemStore() override = default;

    __attribute__((noinline))
    const char* engineSubsystemName() const override {
        return "PulseItemStore::VulcanReduxSlice";
    }

    __attribute__((noinline))
    uint64_t computeBoardStateDigest(uint64_t seed) override {
        uint64_t base = MondayBoardEngine::computeBoardStateDigest(seed);
        return base ^ (static_cast<uint64_t>(active_pulse_count) * 0x5106608109ULL);
    }

    __attribute__((noinline))
    int64_t evaluateColumnMetric(const MondayPulseItem* items, size_t count) override {
        int64_t weighted = 0;
        for (size_t i = 0; i < count; ++i) {
            int64_t priority_mult = static_cast<int64_t>(items[i].priority_code) + 1;
            weighted += items[i].budget_cents * priority_mult;
        }
        return weighted;
    }
};

class ColumnValueAggregator : public MondayBoardEngine {
public:
    int64_t target_budget_sum_cents;

    __attribute__((noinline))
    ColumnValueAggregator(uint64_t b_id, uint64_t ws_id)
        : MondayBoardEngine(b_id, ws_id), target_budget_sum_cents(160000) {}

    ~ColumnValueAggregator() override = default;

    __attribute__((noinline))
    const char* engineSubsystemName() const override {
        return "ColumnValueAggregator::MfBoardColumns";
    }

    __attribute__((noinline))
    int64_t evaluateColumnMetric(const MondayPulseItem* items, size_t count) override {
        int64_t total_budget_cents = 0;
        for (size_t i = 0; i < count; ++i) {
            total_budget_cents += items[i].budget_cents;
        }
        return total_budget_cents;
    }
};

class SidekickAgentDispatcher : public MondayBoardEngine {
public:
    uint32_t agent_capability_mask;

    __attribute__((noinline))
    SidekickAgentDispatcher(uint64_t b_id, uint64_t ws_id, uint32_t mask)
        : MondayBoardEngine(b_id, ws_id), agent_capability_mask(mask) {}

    ~SidekickAgentDispatcher() override = default;

    __attribute__((noinline))
    const char* engineSubsystemName() const override {
        return "SidekickAgentDispatcher::MfAiAgentsStore";
    }

    __attribute__((noinline))
    uint64_t computeBoardStateDigest(uint64_t seed) override {
        uint64_t d = MondayBoardEngine::computeBoardStateDigest(seed);
        return (d ^ 0xA1A6E475ULL) + agent_capability_mask;
    }
};

class VibeWorkflowOrchestrator : public MondayBoardEngine {
public:
    uint32_t active_workflows;
    uint32_t automation_rules;

    __attribute__((noinline))
    VibeWorkflowOrchestrator(uint64_t b_id, uint64_t ws_id, uint32_t wf, uint32_t rules)
        : MondayBoardEngine(b_id, ws_id), active_workflows(wf), automation_rules(rules) {}

    ~VibeWorkflowOrchestrator() override = default;

    __attribute__((noinline))
    const char* engineSubsystemName() const override {
        return "VibeWorkflowOrchestrator::LiteBuilderSync";
    }

    __attribute__((noinline))
    int64_t evaluateColumnMetric(const MondayPulseItem* items, size_t count) override {
        int64_t acc = static_cast<int64_t>(active_workflows * 1000 + automation_rules * 250);
        for (size_t i = 0; i < count; ++i) {
            acc += static_cast<int64_t>(items[i].status_code) * 500;
        }
        return acc;
    }
};

class BoardGraphQLTransport : public MondayBoardEngine {
public:
    uint32_t protocol_version;

    __attribute__((noinline))
    BoardGraphQLTransport(uint64_t b_id, uint64_t ws_id)
        : MondayBoardEngine(b_id, ws_id), protocol_version(2) {}

    ~BoardGraphQLTransport() override = default;

    __attribute__((noinline))
    const char* engineSubsystemName() const override {
        return "BoardGraphQLTransport::RouterBoardSubset";
    }

    __attribute__((noinline))
    const char* resolveEndpointRoute(int route_id) const {
        switch (route_id) {
            case 0:
                return "/boards/5106608109/board_data?source=resetBoardAction&pulse_ids_only=true&can_board_data_extended=true";
            case 1:
                return "/boards/5106608109/board_data_extended_v2";
            case 2:
                return "/board-app/boards/5106608109/items";
            case 3:
                return "/boards/5106608109/board_init";
            case 4:
                return "/board-app/boards/5106608109/preferences";
            case 5:
                return "/boards/5106608109/relations/metadata";
            case 6:
                return "/board-views/board-subsets/5106608109";
            case 7:
                return "/lite-builder/workflows/count-active?boardId=5106608109";
            case 8:
                return "/automations-ms/automations?boardId=5106608109";
            default:
                return "/projects/5106608109/subscribers";
        }
    }
};

static const MondayColumnDefinition kBoard5106608109Columns[9] = {
    {0, "name",       "Tâche",      "name",     0x01},
    {1, "person",     "Admin",      "multiple-person", 0x02},
    {2, "status",     "Statut",     "color",    0x04},
    {3, "date4",      "Échéance",   "date",     0x08},
    {4, "priority",   "Priorité",   "color",    0x10},
    {5, "text",       "Remarques",  "text",     0x20},
    {6, "numbers",    "Budget",     "numeric",  0x40},
    {7, "files",      "Fichiers",   "file",     0x80},
    {8, "timeline",   "Échéancier", "timerange", 0x100}
};

static const MondayPulseItem kBoard5106608109Pulses[3] = {
    {5106608111ULL, 5106608109ULL, "topics", "Tâche 1", 120307136U, 1, 1, 0x01, "2026-04-18", "Éléments d'action", 10000,  1, 2},
    {5106608112ULL, 5106608109ULL, "topics", "Tâche 2", 120307136U, 2, 3, 0x01, "2026-04-19", "Notes de réunion", 100000, 0, 2},
    {5106608113ULL, 5106608109ULL, "topics", "Tâche 3", 120307136U, 3, 2, 0x01, "2026-04-20", "Autre",            50000,  0, 2}
};

extern "C" __attribute__((noinline))
uint64_t dispatch_monday_workos_opcode(int opcode, uint64_t board_id) {
    BoardGraphQLTransport transport(board_id, 37468273ULL);
    const char* route = transport.resolveEndpointRoute(opcode);
    uint64_t acc = board_id ^ static_cast<uint64_t>(opcode * 0x101);
    for (const char* p = route; *p != '\0'; ++p) {
        acc = (acc * 1099511628211ULL) ^ static_cast<uint8_t>(*p);
    }
    return acc;
}

__attribute__((noinline))
MondayBoardEngine* instantiate_board_subsystem(int mode, uint64_t board_id, uint64_t workspace_id) {
    switch (mode) {
        case 0:
            return new PulseItemStore(board_id, workspace_id, 3);
        case 1:
            return new ColumnValueAggregator(board_id, workspace_id);
        case 2:
            return new SidekickAgentDispatcher(board_id, workspace_id, 0x0F);
        case 3:
            return new VibeWorkflowOrchestrator(board_id, workspace_id, 2, 5);
        default:
            return new BoardGraphQLTransport(board_id, workspace_id);
    }
}

int main(int argc, char** argv) {
    const uint64_t board_id = 5106608109ULL;
    const uint64_t workspace_id = 37468273ULL;

    MondayBoardEngine* engine = instantiate_board_subsystem(argc % 5, board_id, workspace_id);
    uint64_t digest = engine->computeBoardStateDigest(static_cast<uint64_t>(argc));
    int64_t metric = engine->evaluateColumnMetric(kBoard5106608109Pulses, 3);

    ColumnValueAggregator aggregator(board_id, workspace_id);
    int64_t budget_cents = aggregator.evaluateColumnMetric(kBoard5106608109Pulses, 3);
    uint64_t route_hash = dispatch_monday_workos_opcode(argc % 9, board_id);

    std::printf("[%s] board=%llu groups=(To-do,Termine) cols=%u budget=$%lld.%02lld digest=0x%llx route=0x%llx metric=%lld col0=%s\n",
                engine->engineSubsystemName(),
                static_cast<unsigned long long>(board_id),
                engine->column_count,
                static_cast<long long>(budget_cents / 100),
                static_cast<long long>(budget_cents % 100),
                static_cast<unsigned long long>(digest),
                static_cast<unsigned long long>(route_hash),
                static_cast<long long>(metric),
                kBoard5106608109Columns[0].column_title);

    delete engine;
    return 0;
}

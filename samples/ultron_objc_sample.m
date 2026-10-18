#import <Foundation/Foundation.h>
#include <stdint.h>
#include <stdio.h>

@interface UltronSentinelCore : NSObject {
    uint64_t _reactorPower;
    int _encryptionRounds;
    uint32_t _statusFlags;
}

@property (nonatomic, assign) int securityLevel;
@property (nonatomic, assign) uint64_t cipherKey;
@property (nonatomic, copy) NSString *coreName;

- (instancetype)initWithKey:(uint64_t)key rounds:(int)rounds;
- (uint64_t)decryptPayload:(const uint8_t *)buf length:(uint64_t)len;
+ (NSString *)sentinelProtocolVersion;

@end

@implementation UltronSentinelCore

- (instancetype)initWithKey:(uint64_t)key rounds:(int)rounds {
    self = [super init];
    if (self) {
        _cipherKey = key;
        _encryptionRounds = rounds;
        _reactorPower = 9000ULL;
        _statusFlags = 0xA5A50001U;
        _securityLevel = (rounds > 8) ? 5 : 2;
        _coreName = @"ULTRON-SENTINEL-MK9";
    }
    return self;
}

- (uint64_t)decryptPayload:(const uint8_t *)buf length:(uint64_t)len {
    uint64_t acc = _cipherKey ^ _reactorPower;
    for (int r = 0; r < _encryptionRounds; r++) {
        for (uint64_t i = 0; i < len; i++) {
            acc = ((acc << 7) | (acc >> 57)) ^ (uint64_t)buf[i] ^ (uint64_t)(r * 0x9E3779B1U);
        }
    }
    _statusFlags |= 0x10U;
    return acc;
}

+ (NSString *)sentinelProtocolVersion {
    return @"ULTRON-OBJC-PROTOCOL-v4.2";
}

@end

@interface UltronSentinelCore (Telemetry)
- (uint64_t)reactorDiagnosticDigest;
@end

@implementation UltronSentinelCore (Telemetry)
- (uint64_t)reactorDiagnosticDigest {
    return _reactorPower ^ _cipherKey ^ (uint64_t)_statusFlags;
}
@end

__attribute__((noinline))
uint64_t matrix_nested_solver(uint64_t *grid, int rows, int cols) {
    if (!grid || rows <= 0 || cols <= 0) {
        return 0;
    }
    uint64_t total = 0x1337BEEFULL;
    int pass = 0;
    do {
        int r = 0;
        while (r < rows) {
            for (int c = 0; c < cols; c++) {
                uint64_t cell = grid[r * cols + c];
                switch ((cell + (uint64_t)pass + (uint64_t)r + (uint64_t)c) & 3ULL) {
                    case 0:
                        total += (cell ^ 0x55AA55AAULL);
                        break;
                    case 1:
                        total ^= (cell * 31ULL + (uint64_t)c);
                        break;
                    case 2:
                        total = (total << 3) | (total >> 61);
                        total += cell;
                        break;
                    default:
                        total -= (cell >> 1);
                        break;
                }
            }
            r++;
        }
        pass++;
    } while (pass < 3);

    return total;
}

int main(int argc, const char *argv[]) {
    @autoreleasepool {
        UltronSentinelCore *sentinel = [[UltronSentinelCore alloc] initWithKey:0x554C54524F4E3031ULL rounds:10];
        sentinel.securityLevel = 9;
        const uint8_t sample_payload[] = "ULTRON_TELEMETRY_CORE_AUTH_VECTOR";
        uint64_t digest = 0;
        if ([sentinel respondsToSelector:@selector(decryptPayload:length:)]) {
            digest = [sentinel decryptPayload:sample_payload length:sizeof(sample_payload) - 1];
        }
        uint64_t grid[12] = { 3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5, 8 };
        uint64_t solved = matrix_nested_solver(grid, 3, 4);
        NSString *ver = [UltronSentinelCore sentinelProtocolVersion];
        printf("[%s] Core=%s Level=%d Digest=0x%llx Matrix=0x%llx Diag=0x%llx\n",
               [ver UTF8String],
               [[sentinel coreName] UTF8String],
               [sentinel securityLevel],
               (unsigned long long)digest,
               (unsigned long long)solved,
               (unsigned long long)[sentinel reactorDiagnosticDigest]);
    }
    return 0;
}

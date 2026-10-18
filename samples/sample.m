#import <Foundation/Foundation.h>
#include <stdio.h>
#include <string.h>

@interface UltronEngine : NSObject
- (BOOL)verifySignature:(NSString *)token;
+ (instancetype)sharedEngine;
@end

@implementation UltronEngine
+ (instancetype)sharedEngine {
    static UltronEngine *instance = nil;
    if (!instance) {
        instance = [[UltronEngine alloc] init];
    }
    return instance;
}

- (BOOL)verifySignature:(NSString *)token {
    if (!token || [token length] < 6) {
        return NO;
    }
    return [token hasPrefix:@"ULTRON"];
}
@end

int compute_checksum(const char *buf, int len) {
    int acc = 0x1337;
    for (int i = 0; i < len; i++) {
        acc = ((acc << 5) + acc) ^ (unsigned char)buf[i];
    }
    return acc;
}

int main(int argc, const char * argv[]) {
    @autoreleasepool {
        UltronEngine *engine = [UltronEngine sharedEngine];
        NSString *key = @"ULTRON-CORE-1.0";
        if ([engine verifySignature:key]) {
            int sum = compute_checksum("ULTRON-CORE-1.0", 15);
            printf("Ultron Engine Ready (checksum=0x%x)\n", sum);
            return 0;
        }
    }
    return 1;
}

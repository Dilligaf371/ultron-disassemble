#import <Cocoa/Cocoa.h>
#import <WebKit/WebKit.h>

@interface UltronAppDelegate : NSObject <NSApplicationDelegate, WKUIDelegate, WKNavigationDelegate>
@property (strong, nonatomic) NSWindow *window;
@property (strong, nonatomic) NSWindow *aboutWindow;
@property (strong, nonatomic) WKWebView *webView;
@property (strong, nonatomic) NSTask *serverTask;
@end

@implementation UltronAppDelegate

- (void)applicationDidFinishLaunching:(NSNotification *)notification {
    [self setupMenuBar];
    [self ensureBackendRunning];

    NSRect frame = NSMakeRect(0, 0, 1480, 920);
    NSUInteger style = NSWindowStyleMaskTitled | NSWindowStyleMaskClosable | NSWindowStyleMaskMiniaturizable | NSWindowStyleMaskResizable;
    self.window = [[NSWindow alloc] initWithContentRect:frame styleMask:style backing:NSBackingStoreBuffered defer:NO];
    self.window.title = @"Ultron Disassemble — v3.0.0";
    self.window.backgroundColor = [NSColor colorWithSRGBRed:0.05 green:0.07 blue:0.09 alpha:1.0];
    [self.window center];

    WKWebViewConfiguration *config = [[WKWebViewConfiguration alloc] init];
    self.webView = [[WKWebView alloc] initWithFrame:self.window.contentView.bounds configuration:config];
    self.webView.autoresizingMask = NSViewWidthSizable | NSViewHeightSizable;
    self.webView.UIDelegate = self;
    self.webView.navigationDelegate = self;
    [self.window.contentView addSubview:self.webView];

    [self.window makeKeyAndOrderFront:nil];
    [NSApp activateIgnoringOtherApps:YES];

    [self loadUIWithRetry:10];
}

- (void)loadUIWithRetry:(int)retriesLeft {
    NSURL *url = [NSURL URLWithString:@"http://127.0.0.1:8420/"];
    NSURLSessionDataTask *ping = [[NSURLSession sharedSession] dataTaskWithURL:[NSURL URLWithString:@"http://127.0.0.1:8420/api/overview"]
                                                             completionHandler:^(NSData *data, NSURLResponse *response, NSError *error) {
        dispatch_async(dispatch_get_main_queue(), ^{
            if (!error && [(NSHTTPURLResponse *)response statusCode] == 200) {
                [self.webView loadRequest:[NSURLRequest requestWithURL:url]];
            } else if (retriesLeft > 0) {
                dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(0.35 * NSEC_PER_SEC)), dispatch_get_main_queue(), ^{
                    [self loadUIWithRetry:retriesLeft - 1];
                });
            }
        });
    }];
    [ping resume];
}

- (void)ensureBackendRunning {
    NSURL *pingURL = [NSURL URLWithString:@"http://127.0.0.1:8420/api/overview"];
    dispatch_semaphore_t sem = dispatch_semaphore_create(0);
    __block BOOL alreadyUp = NO;
    [[[NSURLSession sharedSession] dataTaskWithURL:pingURL completionHandler:^(NSData *d, NSURLResponse *r, NSError *e) {
        if (!e && [(NSHTTPURLResponse *)r statusCode] == 200) {
            alreadyUp = YES;
        }
        dispatch_semaphore_signal(sem);
    }] resume];
    dispatch_semaphore_wait(sem, dispatch_time(DISPATCH_TIME_NOW, (int64_t)(0.4 * NSEC_PER_SEC)));

    if (!alreadyUp) {
        NSString *relBin = @"/Users/gilles/.gemini/antigravity/scratch/ultron-disassembler/target/release/ultron-disassemble-rs";
        NSString *altBin = @"/Users/gilles/.gemini/antigravity/scratch/ultron-disassembler/ultron-disassembler";
        NSString *binPath = [[NSFileManager defaultManager] isExecutableFileAtPath:relBin] ? relBin : altBin;
        self.serverTask = [[NSTask alloc] init];
        self.serverTask.executableURL = [NSURL fileURLWithPath:binPath];
        self.serverTask.arguments = @[@"ui", @"--port", @"8420"];
        [self.serverTask launchAndReturnError:nil];
    }
}

- (void)setupMenuBar {
    NSMenu *menubar = [[NSMenu alloc] init];
    NSMenuItem *appMenuItem = [[NSMenuItem alloc] init];
    [menubar addItem:appMenuItem];
    [NSApp setMainMenu:menubar];

    NSMenu *appMenu = [[NSMenu alloc] init];
    NSMenuItem *aboutItem = [[NSMenuItem alloc] initWithTitle:@"About Ultron Disassemble" action:@selector(showAboutWindow:) keyEquivalent:@""];
    [aboutItem setTarget:self];
    [appMenu addItem:aboutItem];
    [appMenu addItem:[NSMenuItem separatorItem]];
    NSMenuItem *quitItem = [[NSMenuItem alloc] initWithTitle:@"Quit Ultron Disassemble" action:@selector(terminate:) keyEquivalent:@"q"];
    [appMenu addItem:quitItem];
    [appMenuItem setSubmenu:appMenu];
}

- (void)showAboutWindow:(id)sender {
    if (!self.aboutWindow) {
        NSRect r = NSMakeRect(0, 0, 300, 340);
        NSUInteger mask = NSWindowStyleMaskTitled | NSWindowStyleMaskClosable;
        self.aboutWindow = [[NSWindow alloc] initWithContentRect:r styleMask:mask backing:NSBackingStoreBuffered defer:NO];
        self.aboutWindow.title = @"";
        self.aboutWindow.backgroundColor = [NSColor whiteColor];
        [self.aboutWindow center];

        NSView *cv = self.aboutWindow.contentView;

        NSTextField *title = [NSTextField labelWithString:@"Ultron Disassemble"];
        title.font = [NSFont systemFontOfSize:21 weight:NSFontWeightMedium];
        title.textColor = [NSColor blackColor];
        title.alignment = NSTextAlignmentCenter;
        title.frame = NSMakeRect(20, 175, 260, 30);
        [cv addSubview:title];

        NSTextField *sub = [NSTextField labelWithString:@"The macOS Disassembler,\nDecompiler and Debugger"];
        sub.font = [NSFont boldSystemFontOfSize:14];
        sub.textColor = [NSColor blackColor];
        sub.alignment = NSTextAlignmentCenter;
        sub.maximumNumberOfLines = 2;
        sub.frame = NSMakeRect(20, 118, 260, 44);
        [cv addSubview:sub];

        NSTextField *ver = [NSTextField labelWithString:@"version 3.0.0"];
        ver.font = [NSFont systemFontOfSize:12];
        ver.textColor = [NSColor darkGrayColor];
        ver.alignment = NSTextAlignmentCenter;
        ver.frame = NSMakeRect(20, 75, 260, 22);
        [cv addSubview:ver];
    }
    [self.aboutWindow makeKeyAndOrderFront:nil];
}

// Support JS prompt() and alert() in WKWebView
- (void)webView:(WKWebView *)webView runJavaScriptAlertPanelWithMessage:(NSString *)message initiatedByFrame:(WKFrameInfo *)frame completionHandler:(void (^)(void))completionHandler {
    NSAlert *alert = [[NSAlert alloc] init];
    alert.messageText = @"Ultron Disassemble";
    alert.informativeText = message;
    [alert addButtonWithTitle:@"OK"];
    [alert runModal];
    completionHandler();
}

- (void)webView:(WKWebView *)webView runJavaScriptTextInputPanelWithPrompt:(NSString *)prompt defaultText:(NSString *)defaultText initiatedByFrame:(WKFrameInfo *)frame completionHandler:(void (^)(NSString * _Nullable))completionHandler {
    NSAlert *alert = [[NSAlert alloc] init];
    alert.messageText = prompt;
    [alert addButtonWithTitle:@"OK"];
    [alert addButtonWithTitle:@"Annuler"];
    NSTextField *input = [[NSTextField alloc] initWithFrame:NSMakeRect(0, 0, 320, 24)];
    input.stringValue = defaultText ?: @"";
    alert.accessoryView = input;
    NSModalResponse response = [alert runModal];
    if (response == NSAlertFirstButtonReturn) {
        completionHandler(input.stringValue);
    } else {
        completionHandler(nil);
    }
}

- (BOOL)applicationShouldTerminateAfterLastWindowClosed:(NSApplication *)sender {
    return YES;
}

- (void)applicationWillTerminate:(NSNotification *)notification {
    if (self.serverTask && self.serverTask.isRunning) {
        [self.serverTask terminate];
    }
}

@end

int main(int argc, const char * argv[]) {
    @autoreleasepool {
        NSApplication *app = [NSApplication sharedApplication];
        [app setActivationPolicy:NSApplicationActivationPolicyRegular];
        UltronAppDelegate *del = [[UltronAppDelegate alloc] init];
        app.delegate = del;
        [app run];
    }
    return 0;
}

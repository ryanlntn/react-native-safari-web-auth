//
//  SafariWebAuth.h
//

#import <React/RCTBridgeModule.h>

#if TARGET_OS_IPHONE
@interface SafariWebAuth : NSObject <UIApplicationDelegate, RCTBridgeModule>
#else
@interface SafariWebAuth : NSObject <NSApplicationDelegate, RCTBridgeModule>
#endif

@end

/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBSUICarDisplayNowPlayingHostInterface.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "SBSUICarDisplayNowPlayingInterface.h"

@protocol SBStarkNowPlayingServiceDelegate;

__attribute__((visibility("hidden")))
@interface SBStarkNowPlayingService : XXUnknownSuperclass <SBSUICarDisplayNowPlayingHostInterface, SBSUICarDisplayNowPlayingInterface> {
	id<SBStarkNowPlayingServiceDelegate> _delegate;
}
@property(assign, nonatomic) id<SBStarkNowPlayingServiceDelegate> delegate;
+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;
- (void)switchToState:(id)state;
- (void)viewServiceDidTerminateWithError:(id)viewService;
@end


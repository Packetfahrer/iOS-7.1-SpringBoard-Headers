/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class SBWorkspaceEventQueue, NSString;

__attribute__((visibility("hidden")))
@interface SBWorkspaceEventQueueLockAssertion : XXUnknownSuperclass {
	SBWorkspaceEventQueue* _eventQueue;
	NSString* _reason;
}
@property(readonly, retain) NSString* reason;
- (id)initWithWorkspaceEventQueue:(id)workspaceEventQueue reason:(id)reason;
- (void)dealloc;
- (id)description;
@end


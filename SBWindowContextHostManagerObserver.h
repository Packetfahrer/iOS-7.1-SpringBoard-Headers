/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSObject.h"


@protocol SBWindowContextHostManagerObserver <NSObject>
@optional
- (void)windowContextHostManagerContextsDidChange:(id)windowContextHostManagerContexts;
- (void)windowContextHostManagerDidInvalidate:(id)windowContextHostManager;
- (void)windowContextHostManagerDidResumeHosting:(id)windowContextHostManager;
- (void)windowContextHostManagerDidSuspendHosting:(id)windowContextHostManager;
@end


/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class SBLockOverlayContext, SBAwayViewPluginController, SBLockScreenViewController;

__attribute__((visibility("hidden")))
@interface SBLockScreenPluginTransition : XXUnknownSuperclass {
	SBAwayViewPluginController* _fromController;
	SBAwayViewPluginController* _toController;
	SBLockScreenViewController* _lockScreenViewController;
	SBLockOverlayContext* _fromOverlay;
	SBLockOverlayContext* _toOverlay;
}
@property(readonly, assign) SBAwayViewPluginController* fromController;
@property(readonly, assign) SBLockOverlayContext* fromOverlay;
@property(readonly, assign) SBLockScreenViewController* lockScreenViewController;
@property(readonly, assign) SBAwayViewPluginController* toController;
@property(readonly, assign) SBLockOverlayContext* toOverlay;
- (id)initWithContext:(id)context;
- (void)_addToView;
- (void)_removeFromView;
- (void)_removeViewFromHierarchy:(id)hierarchy;
- (void)beginTransition;
- (void)dealloc;
@end


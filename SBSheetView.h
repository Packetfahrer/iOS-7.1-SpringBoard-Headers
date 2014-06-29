/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class SBApplication, SBProxyRemoteView, SBFakeStatusBarView;

__attribute__((visibility("hidden")))
@interface SBSheetView : XXUnknownSuperclass {
	SBProxyRemoteView* _remoteProxyView;
	SBApplication* _app;
	SBFakeStatusBarView* _fakeStatusBarView;
	BOOL _wasPresentedAnimated;
}
@property(readonly, retain) SBFakeStatusBarView* fakeStatusBarView;
@property(readonly, assign) BOOL wasPresentedAnimated;
- (id)initWithRemoteViewIdentifier:(id)remoteViewIdentifier application:(id)application shouldFakeStatusBar:(BOOL)bar wasPresentedAnimated:(BOOL)animated;
- (id)application;
- (void)dealloc;
- (void)noteSheetDidEnd;
- (id)remoteViewIdentifier;
@end

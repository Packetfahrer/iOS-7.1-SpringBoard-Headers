/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class UIWindow, NSMutableDictionary, NSMutableSet, UIView;

__attribute__((visibility("hidden")))
@interface SBAppSwitcherStatusBarViewCache : XXUnknownSuperclass {
	NSMutableDictionary* _cachedStatusBarQueues;
	NSMutableDictionary* _statusBarsForSnapshots;
	NSMutableSet* _homePageCellStatusBars;
	UIView* _hiddenStatusBarCacheView;
	UIView* _statusBarSnapshottingView;
	BOOL _vendingSnapshots;
	UIWindow* _appSwitcherWindow;
}
@property(retain, nonatomic) UIWindow* appSwitcherWindow;
@property(assign, nonatomic, getter=isVendingSnapshots) BOOL vendingSnapshots;
- (id)init;
- (id)_cacheKeyForStyleRequest:(id)styleRequest orientation:(int)orientation;
- (id)_generationBlockForStyleRequest:(id)styleRequest orientation:(int)orientation;
- (void)_prepareForSnapshotOfStyleRequest:(id)styleRequest orientation:(int)orientation;
- (id)barForStyleRequest:(id)styleRequest orientation:(int)orientation;
- (id)barSnapshotForStyleRequest:(id)styleRequest orientation:(int)orientation;
- (void)dealloc;
- (id)fakeStatusBarForHomePageCell;
- (void)preheatStatusBarCache;
- (void)recycleBar:(id)bar;
- (void)recycleBarForHomePageCell:(id)homePageCell;
@end


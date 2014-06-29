/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class UIView;
@protocol SBUIBannerSource, SBUIBannerView;

__attribute__((visibility("hidden")))
@interface SBBannerViewCallbackManager : XXUnknownSuperclass {
	UIView<SBUIBannerView>* _view;
	id<SBUIBannerSource> _source;
	BOOL _sentWillAppear;
	BOOL _sentDidAppear;
	BOOL _sentWillDismiss;
	BOOL _sentDidDismiss;
	int _dismissReason;
}
- (id)init;
- (id)initWithBannerView:(id)bannerView;
- (void)dealloc;
- (BOOL)hasSentAnyCallbacks;
- (void)matchPreviousCallbacks:(id)callbacks;
- (void)noteDidAppear;
- (void)noteDidDismissWithReason:(int)note;
- (void)noteWillAppear;
- (void)noteWillDismissWithReason:(int)note;
@end


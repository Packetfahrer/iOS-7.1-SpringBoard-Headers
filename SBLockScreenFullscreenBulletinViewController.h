/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBLockOverlayViewDelegate.h"
#import "SBLockOverlayViewController.h"

@class SBAwayBulletinListItem, SBLockOverlayView;

__attribute__((visibility("hidden")))
@interface SBLockScreenFullscreenBulletinViewController : SBLockOverlayViewController <SBLockOverlayViewDelegate> {
	SBLockOverlayView* _bulletinView;
	SBAwayBulletinListItem* _bulletinItem;
}
@property(retain, nonatomic) SBAwayBulletinListItem* bulletinItem;
- (id)initWithNibName:(id)nibName bundle:(id)bundle;
- (void)dealloc;
- (void)handleTapGestureFromView:(id)view;
- (void)loadView;
- (void)updateContent;
@end


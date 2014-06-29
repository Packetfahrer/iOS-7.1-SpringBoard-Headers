/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "UICollectionViewDelegate.h"
#import "SBCollectionViewCellDelegate.h"
#import "SBStarkBannerTargetObserver.h"
#import "UIGestureRecognizerDelegate.h"
#import "SpringBoard-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "UICollectionViewDataSource.h"

@class SBCarBannerNotificationView, UITapGestureRecognizer, SBStarkBannerCell, SBStarkBulletinBannerSource, SBStarkNotificationLayout, SBStarkAlertItemBannerSource, SBStarkBannerTarget, SBUIBannerContext, NSArray;
@protocol SBStarkNotificationViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface SBStarkNotificationViewController : XXUnknownSuperclass <UICollectionViewDataSource, UICollectionViewDelegate, SBCollectionViewCellDelegate, SBStarkBannerTargetObserver, UIGestureRecognizerDelegate> {
	id<SBStarkNotificationViewControllerDelegate> _delegate;
	BOOL _touchCapable;
	UITapGestureRecognizer* _backGestureRecognizer;
	UITapGestureRecognizer* _selectGestureRecognizer;
	SBStarkBannerTarget* _bannerTarget;
	SBStarkAlertItemBannerSource* _alertItemBannerSource;
	SBStarkBulletinBannerSource* _bulletinBannerSource;
	SBUIBannerContext* _currentContext;
	NSArray* _currentSubActionLabels;
	SBStarkBannerCell* _currentCell;
	int _state;
	SBStarkNotificationLayout* _notificationsLayout;
	SBCarBannerNotificationView* _notificationsView;
}
@property(assign, nonatomic) id<SBStarkNotificationViewControllerDelegate> delegate;
@property(assign, nonatomic) int state;
- (id)initWithInteractionAffordances:(unsigned)interactionAffordances;
- (void)_performBackGesture:(id)gesture;
- (void)_performSelectGesture:(id)gesture;
- (void)_setState:(int)state;
- (id)collectionView:(id)view cellForItemAtIndexPath:(id)indexPath;
- (void)collectionView:(id)view didEndDisplayingCell:(id)cell forItemAtIndexPath:(id)indexPath;
- (void)collectionView:(id)view didSelectItemAtIndexPath:(id)indexPath;
- (int)collectionView:(id)view numberOfItemsInSection:(int)section;
- (BOOL)collectionView:(id)view shouldDeselectItemAtIndexPath:(id)indexPath;
- (BOOL)collectionView:(id)view shouldHighlightItemAtIndexPath:(id)indexPath;
- (BOOL)collectionView:(id)view shouldSelectItemAtIndexPath:(id)indexPath;
- (void)dealloc;
- (void)dismissCurrent;
- (BOOL)isSuspended;
- (void)loadView;
- (int)numberOfSectionsInCollectionView:(id)collectionView;
- (void)setSuspended:(BOOL)suspended cancellingCurrent:(BOOL)current forReason:(id)reason;
- (void)setSuspended:(BOOL)suspended forReason:(id)reason;
- (void)starkBannerTarget:(id)target didChangeContextWithDismissReason:(int)dismissReason;
@end


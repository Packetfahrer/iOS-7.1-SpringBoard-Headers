/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBAlert.h"
#import "SpringBoard-Structs.h"
#import "SBPowerDownViewDelegate.h"

@class SBAlertView;
@protocol SBPowerDownControllerDelegate, SBPowerDownViewInterface;

__attribute__((visibility("hidden")))
@interface SBPowerDownController : SBAlert <SBPowerDownViewDelegate> {
	id _delegate;
	BOOL _isFront;
	SBAlertView<SBPowerDownViewInterface>* _powerDownView;
	id _orderOutCompletion;
}
@property(assign, nonatomic) id<SBPowerDownControllerDelegate> delegate;
@property(copy, nonatomic) id orderOutCompletion;
+ (id)sharedInstance;
- (id)init;
- (void)_lockedOnTop;
- (void)_restoreIconListIfNecessary;
- (void)activate;
- (id)alertDisplayViewWithSize:(CGSize)size;
- (double)autoLockTime;
- (void)cancel;
- (void)deactivate;
- (void)dealloc;
- (BOOL)hasTranslucentBackground;
- (BOOL)isOrderedFront;
- (BOOL)managesOwnStatusBarAtActivation;
- (void)orderFront;
- (void)orderOutWithCompletion:(id)completion;
- (void)powerDown;
- (void)powerDownViewAnimateOutCompleted:(id)completed;
- (void)powerDownViewRequestCancel:(id)cancel;
- (void)powerDownViewRequestPowerDown:(id)down;
- (BOOL)powerDownViewShouldHideStatusBar:(id)powerDownView;
- (BOOL)showsSpringBoardStatusBar;
@end

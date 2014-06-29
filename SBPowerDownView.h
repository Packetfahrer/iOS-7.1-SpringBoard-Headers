/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "_UIActionSliderDelegate.h"
#import "SBPowerDownViewInterface.h"
#import "SBAlertView.h"

@class UIView, _UIActionSlider, NSTimer, SBShapeView, UILabel, UIButton;
@protocol SBPowerDownViewDelegate;

__attribute__((visibility("hidden")))
@interface SBPowerDownView : SBAlertView <_UIActionSliderDelegate, SBPowerDownViewInterface> {
	NSTimer* _autoDismissTimer;
	id<SBPowerDownViewDelegate> _delegate;
	UIView* _backdropView;
	SBShapeView* _darkeningUnderlayView;
	UIView* _darkeningOverlayView;
	_UIActionSlider* _actionSlider;
	UIButton* _cancelButton;
	UILabel* _cancelLabel;
	BOOL _hiddenLockScreenForeground;
	BOOL _canAlterScreenBrightness;
}
@property(assign, nonatomic) BOOL canAlterScreenBrightness;
@property(assign, nonatomic) id<SBPowerDownViewDelegate> delegate;
- (id)initWithFrame:(CGRect)frame;
- (void)_animatePowerDown;
- (void)_cancelAutoDismissTimer;
- (id)_lockScreenView;
- (void)_notifyDelegateCancelled;
- (void)_notifyDelegatePowerDown;
- (void)_resetAutoDismissTimer;
- (void)_resetScreenBrightness;
- (void)_saveScreenBrightnessInformation;
- (void)_updateSliderExclusionPath;
- (void)actionSlider:(id)slider didUpdateSlideWithValue:(float)value;
- (void)actionSliderDidBeginSlide:(id)actionSlider;
- (void)actionSliderDidCancelSlide:(id)actionSlider;
- (void)actionSliderDidCompleteSlide:(id)actionSlider;
- (void)animateIn;
- (void)animateOut;
- (void)dealloc;
- (void)dismiss;
- (BOOL)isSupportedInterfaceOrientation:(int)orientation;
- (void)layoutForInterfaceOrientation:(int)interfaceOrientation;
@end


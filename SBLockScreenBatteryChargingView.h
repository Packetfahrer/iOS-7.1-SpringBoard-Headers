/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "SpringBoard-Structs.h"

@class _UILegibilityLabel, UIView, _UILegibilitySettings, _UIBackdropView, SBLockScreenBatteryFillView;

__attribute__((visibility("hidden")))
@interface SBLockScreenBatteryChargingView : XXUnknownSuperclass {
	UIView* _batteryContainerView;
	_UIBackdropView* _batteryBlurView;
	SBLockScreenBatteryFillView* _batteryFillView;
	_UILegibilityLabel* _chargePercentLabel;
	_UILegibilitySettings* _legibilitySettings;
}
@property(assign, nonatomic) BOOL batteryVisible;
@property(retain, nonatomic) _UILegibilitySettings* legibilitySettings;
- (id)initWithFrame:(CGRect)frame;
- (CGPoint)_batteryOrigin;
- (id)_chargePercentFont;
- (float)_chargingTextBaselineOffset;
- (void)_setChargeString:(id)string;
- (void)dealloc;
- (void)layoutSubviews;
- (void)setChargePercentage:(int)percentage detailed:(BOOL)detailed;
@end


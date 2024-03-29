/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class SBBounceSettings;

__attribute__((visibility("hidden")))
@interface SBNotificationCenterSettings : XXUnknownSuperclass {
	SBBounceSettings* _bounceSettings;
	float _modeButtonTintLevel;
	float _modeButtonTintAlpha;
	float _modeLabelTintLevel;
	float _modeLabelTintAlpha;
	double _grabberAnimationDuration;
}
@property(retain, nonatomic) SBBounceSettings* bounceSettings;
@property(assign) double grabberAnimationDuration;
@property(assign, nonatomic) float modeButtonTintAlpha;
@property(assign, nonatomic) float modeButtonTintLevel;
@property(assign, nonatomic) float modeLabelTintAlpha;
@property(assign, nonatomic) float modeLabelTintLevel;
+ (id)settingsControllerModule;
- (void)setDefaultValues;
@end


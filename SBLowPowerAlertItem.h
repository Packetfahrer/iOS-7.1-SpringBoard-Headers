/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface SBLowPowerAlertItem : XXUnknownSuperclass {
	unsigned _talkLevel;
}
+ (BOOL)_shouldIgnoreChangeToBatteryLevel:(unsigned)batteryLevel;
+ (unsigned)_thresholdForLevel:(unsigned)level;
+ (void)initialize;
+ (void)saveLowBatteryLogWithCapacity:(int)capacity voltage:(int)voltage;
+ (void)setBatteryLevel:(unsigned)level;
+ (id)systemVersionDescription;
- (id)init;
- (id)initWithLevel:(unsigned)level;
- (void)alertView:(id)view clickedButtonAtIndex:(int)index;
- (void)configure:(BOOL)configure requirePasscodeForActions:(BOOL)actions;
- (BOOL)shouldShowInEmergencyCall;
- (BOOL)shouldShowInLockScreen;
- (BOOL)undimsScreen;
- (void)willPresentAlertView:(id)view;
@end


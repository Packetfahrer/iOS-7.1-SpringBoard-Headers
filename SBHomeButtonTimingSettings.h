/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface SBHomeButtonTimingSettings : XXUnknownSuperclass {
	double _tapDuration;
	double _delay;
}
@property(assign, nonatomic) double delay;
@property(assign, nonatomic) double tapDuration;
+ (id)createWithDuration:(double)duration delay:(double)delay;
+ (id)settingsControllerModule;
- (id)description;
- (id)displayName;
- (void)setDefaultValues;
@end


/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface SBSlideToUnlockFailureRecognizerSettings : XXUnknownSuperclass {
	BOOL _enabled;
	BOOL _viewDebugArea;
	unsigned _maxAllowableVerticalOffset;
	float _topAngle;
	float _bottomAngle;
}
@property(assign, nonatomic) float bottomAngle;
@property(assign, nonatomic) BOOL enabled;
@property(assign, nonatomic) unsigned maxAllowableVerticalOffset;
@property(assign, nonatomic) float topAngle;
@property(assign, nonatomic) BOOL viewDebugArea;
+ (id)settingsControllerModule;
- (void)setDefaultValues;
@end


/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBIconZoomSettings.h"

@class SBFAnimationSettings;

__attribute__((visibility("hidden")))
@interface SBScaleZoomSettings : SBIconZoomSettings {
	BOOL _crossfadeWithZoom;
	SBFAnimationSettings* _outerFolderFadeSettings;
	SBFAnimationSettings* _crossfadeSettings;
}
@property(retain) SBFAnimationSettings* crossfadeSettings;
@property(assign) BOOL crossfadeWithZoom;
@property(retain) SBFAnimationSettings* outerFolderFadeSettings;
+ (id)settingsControllerModule;
- (id)effectiveCrossfadeAnimationSettings;
- (void)setDefaultValues;
@end


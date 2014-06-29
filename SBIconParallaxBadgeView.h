/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "_UISettingsKeyObserver.h"
#import "SpringBoard-Structs.h"
#import "SBIconBadgeView.h"

@class SBFParallaxSettings;

__attribute__((visibility("hidden")))
@interface SBIconParallaxBadgeView : SBIconBadgeView <_UISettingsKeyObserver> {
	SBFParallaxSettings* _parallaxSettings;
}
- (id)init;
- (void)_applyParallaxSettings;
- (void)dealloc;
- (void)settings:(id)settings changedValueForKey:(id)key;
@end


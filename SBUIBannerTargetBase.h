/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSObject.h"


@protocol SBUIBannerTargetBase <NSObject>
@property(readonly, assign, nonatomic) void* bannerTargetIdentifier;
@property(readonly, assign, nonatomic) int bannerTargetIdiom;
- (id)currentBannerContextForSource:(id)source;
- (void)dismissCurrentBannerContextForSource:(id)source;
- (void)registerSource:(id)source;
- (void)signalSource:(id)source;
- (void)unregisterSource:(id)source;
@end


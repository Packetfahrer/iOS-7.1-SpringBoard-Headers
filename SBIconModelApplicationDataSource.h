/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSObject.h"


@protocol SBIconModelApplicationDataSource <NSObject>
- (id)allApplications;
- (int)appVisibilityOverrideForBundleIdentifier:(id)bundleIdentifier;
- (id)defaultIconState;
- (id)firstPageLeafIdentifiers;
- (BOOL)isNewsstandEnabled;
- (BOOL)isNewsstandSupported;
- (BOOL)updateAppIconVisibilityOverridesShowing:(id*)showing hiding:(id*)hiding;
@end


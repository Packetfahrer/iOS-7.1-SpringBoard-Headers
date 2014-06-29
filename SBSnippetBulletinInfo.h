/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBBBBulletinInfo.h"
#import "SpringBoard-Structs.h"

@class UIImage, SBItemInfoLayoutCache;

__attribute__((visibility("hidden")))
@interface SBSnippetBulletinInfo : SBBBBulletinInfo {
	CGRect _textRect;
	UIImage* _icon;
	SBItemInfoLayoutCache* _layoutCache;
}
@property(retain, nonatomic) UIImage* icon;
+ (float)topBaselineToCellTopInLayoutMode:(int)layoutMode;
- (id)_representedBulletin;
- (void)dealloc;
- (float)heightForReusableViewForBulletinViewController:(id)bulletinViewController layoutMode:(int)mode;
- (id)identifier;
- (void)invalidateCachedLayoutData;
- (void)populateReusableView:(id)view;
- (Class)reusableViewClass;
@end


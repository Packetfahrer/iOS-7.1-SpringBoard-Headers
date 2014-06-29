/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBBBItemInfo.h"

@class SBBulletinListSection, NSString;

__attribute__((visibility("hidden")))
@interface SBBBSectionInfo : SBBBItemInfo {
	int _sectionCategory;
}
@property(readonly, assign, nonatomic) NSString* listSectionIdentifier;
@property(readonly, assign, nonatomic) SBBulletinListSection* representedListSection;
@property(readonly, assign, nonatomic) int sectionCategory;
@property(readonly, assign, nonatomic, getter=isWidgetSection) BOOL widgetSection;
- (id)identifier;
@end


/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BBSectionIdentity.h"


@protocol BBDataProvider <BBSectionIdentity>
@optional
- (float)attachmentAspectRatioForRecordID:(id)recordID;
- (id)attachmentPNGDataForRecordID:(id)recordID sizeConstraints:(id)constraints;
- (id)bulletinsFilteredBy:(unsigned)by count:(unsigned)count lastCleared:(id)cleared;
- (id)bulletinsFilteredBy:(unsigned)by enabledSectionIDs:(id)ids count:(unsigned)count lastCleared:(id)cleared;
- (id)bulletinsWithRequestParameters:(id)requestParameters lastCleared:(id)cleared;
- (id)clearedInfoAndBulletinsForClearingAllBulletinsWithLimit:(unsigned)limit lastClearedInfo:(id)info;
- (id)clearedInfoForBulletins:(id)bulletins;
- (id)clearedInfoForBulletins:(id)bulletins lastClearedInfo:(id)info;
- (void)dataProviderDidLoad;
- (id)defaultSubsectionInfos;
- (id)displayNameForSubsectionID:(id)subsectionID;
- (void)handleBulletinActionResponse:(id)response;
- (BOOL)migrateSectionInfo:(id)info oldSectionInfo:(id)info2;
- (void)noteSectionInfoDidChange:(id)noteSectionInfo;
- (void)receiveMessageWithName:(id)name userInfo:(id)info;
- (id)sectionParameters;
@required
- (id)sortDescriptors;
@optional
- (BOOL)syncsBulletinDismissal;
@end


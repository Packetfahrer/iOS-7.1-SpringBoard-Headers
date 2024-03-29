/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "BBRemoteDataProvider.h"

@class BBDataProviderProxy, BBDataProviderConnection;

__attribute__((visibility("hidden")))
@interface SBTestDataProvider : XXUnknownSuperclass <BBRemoteDataProvider> {
	BBDataProviderConnection* _connection;
	BBDataProviderProxy* _proxy;
}
+ (id)sharedInstance;
- (id)init;
- (float)attachmentAspectRatioForRecordID:(id)recordID;
- (id)attachmentPNGDataForRecordID:(id)recordID sizeConstraints:(id)constraints;
- (id)bulletinsFilteredBy:(unsigned)by count:(unsigned)count lastCleared:(id)cleared;
- (id)clearedInfoForBulletins:(id)bulletins lastClearedInfo:(id)info;
- (void)dataProviderDidLoad;
- (id)defaultSectionInfo;
- (void)noteSectionInfoDidChange:(id)noteSectionInfo;
- (void)publish;
- (void)receiveMessageWithName:(id)name userInfo:(id)info;
- (id)sectionDisplayName;
- (id)sectionIdentifier;
- (id)sectionParameters;
- (id)sortDescriptors;
@end


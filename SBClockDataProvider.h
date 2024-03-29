/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "BBRemoteDataProvider.h"

@class NSDate, BBDataProviderProxy, NSTimer, BBBulletinRequest, UILocalNotification;

__attribute__((visibility("hidden")))
@interface SBClockDataProvider : XXUnknownSuperclass <BBRemoteDataProvider> {
	NSTimer* _alarmUpdateTimer;
	BBDataProviderProxy* _dataProviderProxy;
	UILocalNotification* _nextAlarmForToday;
	BBBulletinRequest* _nextTodayAlarmBulletin;
	UILocalNotification* _firstAlarmForTomorrow;
	NSDate* _nextTomorrowFireDate;
	BBBulletinRequest* _nextTomorrowAlarmBulletin;
}
+ (id)sharedInstance;
- (id)init;
- (id)_alarmMessageForNotification:(id)notification withSingleAlarmFormat:(BOOL)singleAlarmFormat;
- (id)_bulletinRequestForSnoozedAlarm:(id)snoozedAlarm;
- (id)_bulletinRequestForTimerNotification:(id)timerNotification;
- (void)_calculateNextTodayAlarmAndBulletinWithScheduledNotifications:(id)scheduledNotifications;
- (void)_calculateNextTomorrowAlarmAndBulletinWithScheduledNotifications:(id)scheduledNotifications;
- (void)_handleAlarmSnoozedNotification:(id)notification;
- (void)_handleClockNotificationUpdate:(id)update;
- (id)_nextAlarmForFeed:(unsigned)feed withNotifications:(id)notifications;
- (void)_publishAlarmsWithScheduledNotifications:(id)scheduledNotifications;
- (void)_publishTimerInScheduledNotifications:(id)scheduledNotifications;
- (id)_scheduledNotifications;
- (void)_snoozedAlarmRefired:(id)refired;
- (id)bulletinsFilteredBy:(unsigned)by count:(unsigned)count lastCleared:(id)cleared;
- (id)bulletinsWithRequestParameters:(id)requestParameters lastCleared:(id)cleared;
- (void)dealloc;
- (id)defaultSectionInfo;
- (id)sectionIdentifier;
- (id)sortDescriptors;
@end


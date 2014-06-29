/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSObject, NSMutableDictionary;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface SBPushStore : XXUnknownSuperclass {
	NSObject<OS_dispatch_queue>* _notificationsQueue;
	NSObject<OS_dispatch_queue>* _settingsQueue;
	NSMutableDictionary* _observersByBundleID;
}
+ (void)initialize;
+ (void)migratePushStore;
+ (id)sharedInstance;
+ (id)uniqueIdentifierForNotification:(id)notification;
- (id)init;
- (id)_allNotificationDataFromPath:(id)path;
- (id)_allNotificationsFromPath:(id)path;
- (unsigned)_effectivePushSettingsForBundleID:(id)bundleID;
- (void)_enumerateObserversForBundleID:(id)bundleID usingBlock:(id)block;
- (BOOL)_notificationDataExistsAtPath:(id)path;
- (id)_notificationStoreFilenameForBundleID:(id)bundleID;
- (void)_notifyObserversNotificationsDidChangeForBundleID:(id)_notifyObserversNotifications;
- (id)_observersForBundleID:(id)bundleID;
- (BOOL)_removeNotificationsForBundleID:(id)bundleID;
- (BOOL)_saveNotificationList:(id)list toPath:(id)path;
- (void)_saveNotificationWithMessage:(id)message soundName:(id)name actionText:(id)text badge:(id)badge userInfo:(id)info launchImage:(id)image fullDetails:(id)details soundIsRingtone:(BOOL)ringtone isRemoteNotification:(BOOL)notification forBundleID:(id)bundleID;
- (void)addObserver:(id)observer forBundleID:(id)bundleID;
- (id)allLocalNotificationEnabledBundleIDs;
- (id)allNotificationEnabledBundleIDs;
- (id)bundleIDsWithUpdatesSince:(id)updatesSince;
- (void)clearNotificationsForBundleID:(id)bundleID;
- (void)dealloc;
- (unsigned)effectivePushSettingsForBundleID:(id)bundleID;
- (id)lastUpdateDateForBundleID:(id)bundleID;
- (void)makeTestNotificationStores;
- (void)notePushAcceptedForBundleID:(id)bundleID;
- (void)notePushDeclinedForBundleID:(id)bundleID;
- (void)notePushSettingsChangedForBundleID:(id)bundleID;
- (BOOL)prepareToSupportLocalNotificationsTypes:(unsigned)supportLocalNotificationsTypes forBundleID:(id)bundleID;
- (void)registerAppForNotificationsWithBundleID:(id)bundleID;
- (void)removeAllLocalNotificationsForBundleID:(id)bundleID;
- (void)removeAllNotificationsForBundleID:(id)bundleID;
- (void)removeLocalNotification:(id)notification forBundleID:(id)bundleID;
- (id)removeNotificationsPassingTest:(id)test forBundleID:(id)bundleID;
- (void)removeObserver:(id)observer forBundleID:(id)bundleID;
- (void)saveLocalNotification:(id)notification forBundleID:(id)bundleID;
- (void)saveRemoteNotificationWithMessage:(id)message soundName:(id)name actionText:(id)text badge:(id)badge userInfo:(id)info launchImage:(id)image forBundleID:(id)bundleID;
- (id)savedNotificationDataForBundleID:(id)bundleID;
- (id)savedNotificationsForBundleID:(id)bundleID;
- (void)setEffectivePushSettings:(unsigned)settings forBundleID:(id)bundleID;
- (void)unregisterAppForNotificationsWithBundleID:(id)bundleID;
@end


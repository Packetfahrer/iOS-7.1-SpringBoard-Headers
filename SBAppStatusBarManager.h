/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableOrderedSet, NSHashTable, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface SBAppStatusBarManager : XXUnknownSuperclass {
	NSHashTable* _disableAlphaChangeAssertions;
	NSHashTable* _disableUserInteractionChangeAssertions;
	NSMutableOrderedSet* _windowLevelOverrideReasons;
	NSMutableDictionary* _windowLevelOverrideMap;
	float _defaultWindowLevel;
}
@property(assign, getter=isStatusBarUserInteractionEnabled) BOOL statusBarUserInteractionEnabled;
+ (id)sharedInstance;
- (id)init;
- (void)_addAssertion:(id)assertion toAssertions:(id)assertions;
- (void)_addDisableAppStatusBarAlphaChangesAssertion:(id)assertion;
- (void)_addDisableAppStatusBarUserInteractionChangesAssertion:(id)assertion;
- (id)_descriptionForPropertyWithAssertions:(id)assertions;
- (void)_removeAssertion:(id)assertion fromAssertions:(id)assertions;
- (void)_removeDisableAppStatusBarAlphaChangesAssertion:(id)assertion;
- (void)_removeDisableAppStatusBarUserInteractionChangesAssertion:(id)assertion;
- (void)_setStatusBarValueForPropertyWithAssertions:(id)assertions setter:(id)setter;
- (void)_updateWindowLevel;
- (void)dealloc;
- (void)hideStatusBar;
- (BOOL)isStatusBarHidden;
- (void)removeWindowLevelOverrideReason:(id)reason;
- (void)setDefaultWindowLevel:(float)level;
- (void)setStatusBarAlpha:(float)alpha;
- (void)setWindowLevel:(float)level forOverrideReason:(id)overrideReason;
- (void)showStatusBar;
@end


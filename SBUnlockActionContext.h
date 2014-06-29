/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface SBUnlockActionContext : XXUnknownSuperclass {
	NSString* _lockLabel;
	NSString* _shortLockLabel;
	id _unlockAction;
	NSString* _identifier;
	float _fontSize;
	BOOL _requiresUnlock;
	BOOL _deactivateAwayController;
	BOOL _canBypassPinLock;
}
@property(assign, nonatomic) BOOL canBypassPinLock;
@property(assign, nonatomic) BOOL deactivateAwayController;
@property(readonly, assign, nonatomic) BOOL hasCustomUnlockLabel;
@property(retain, nonatomic) NSString* identifier;
@property(retain, nonatomic) NSString* lockLabel;
@property(assign, nonatomic) BOOL requiresUnlock;
@property(retain, nonatomic) NSString* shortLockLabel;
@property(copy, nonatomic) id unlockAction;
- (id)initWithLockLabel:(id)lockLabel shortLockLabel:(id)label unlockAction:(id)action identifier:(id)identifier;
- (void)dealloc;
@end


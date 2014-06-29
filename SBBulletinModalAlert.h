/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class BBBulletin, NSArray;

__attribute__((visibility("hidden")))
@interface SBBulletinModalAlert : XXUnknownSuperclass {
	BBBulletin* _bulletin;
	NSArray* _buttons;
	NSArray* _bulletinButtonIndices;
	BOOL _playedSound;
	SBBulletinModalAlert* _superseded;
}
@property(retain, nonatomic) NSArray* bulletinButtonIndices;
@property(retain, nonatomic) NSArray* buttons;
- (id)initWithBulletin:(id)bulletin;
- (id)initWithBulletin:(id)bulletin supersededAlert:(id)alert;
- (void)alertView:(id)view clickedButtonAtIndex:(int)index;
- (BOOL)allowMenuButtonDismissal;
- (void)configure:(BOOL)configure requirePasscodeForActions:(BOOL)actions;
- (void)dealloc;
- (void)didPresentAlertView:(id)view;
- (void)dismiss:(int)dismiss;
- (BOOL)dismissOnLock;
- (BOOL)shouldShowInLockScreen;
- (void)willDeactivateForReason:(int)reason;
- (void)willPresentAlertView:(id)view;
@end


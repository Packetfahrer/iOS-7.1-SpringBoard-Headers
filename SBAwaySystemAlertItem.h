/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBAwayListItem.h"

@class UIImage, SBAlertItem, NSString;

__attribute__((visibility("hidden")))
@interface SBAwaySystemAlertItem : SBAwayListItem {
	SBAlertItem* _currentAlert;
	NSString* _title;
	UIImage* _appImage;
	NSString* _message;
	int _displayedButtonIndex;
	BOOL _isAlarm;
}
@property(retain) SBAlertItem* currentAlert;
@property(readonly, assign) BOOL isAlarm;
@property(readonly, retain) NSString* message;
@property(readonly, retain) NSString* title;
- (id)init;
- (id)initWithSystemAlert:(id)systemAlert;
- (void)buttonPressed;
- (void)dealloc;
- (id)iconImage;
- (id)sortDate;
@end


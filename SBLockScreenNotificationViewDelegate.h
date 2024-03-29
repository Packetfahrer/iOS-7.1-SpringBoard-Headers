/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBUnlockActionHandler.h"


@protocol SBLockScreenNotificationViewDelegate <SBUnlockActionHandler>
- (void)listView:(id)view cellDidBeginScrolling:(id)cell;
- (void)listView:(id)view cellDidEndScrolling:(id)cell;
- (void)listViewDidBeginScrolling:(id)listView;
- (void)listViewDidEndScrolling:(id)listView;
- (id)lockScreenScrollView;
- (void)noteUnlockActionChanged:(id)changed;
@end


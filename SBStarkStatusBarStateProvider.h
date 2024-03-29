/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBStatusBarStateProvider.h"
#import "SpringBoard-Structs.h"

@class NSString, NSDateFormatter;

__attribute__((visibility("hidden")))
@interface SBStarkStatusBarStateProvider : SBStatusBarStateProvider {
	BOOL _oldAggregatorTimeCString[64];
	BOOL _timeCString[64];
	NSDateFormatter* _timeFormatter;
	BOOL _showOptimalCellData;
	NSString* _inCallDetail;
}
+ (BOOL)_itemIsIgnored:(int)ignored;
- (id)init;
- (void)_callDurationChanged;
- (void)_composePostDataFromAggregatorData:(XXStruct_8iXKhD*)aggregatorData;
- (void)_resetTimeItemFormatter;
- (BOOL)_shouldPostForUpdatesToNonItemData:(const XXStruct_8iXKhD*)nonItemData;
- (BOOL)_shouldPostForVisitedItem:(int)visitedItem withUpdates:(BOOL)updates toAggregatorData:(const XXStruct_8iXKhD*)aggregatorData;
- (id)_timeFormatter;
- (void)dealloc;
- (id)doubleHeightStatusStringForStyle:(int)style;
@end


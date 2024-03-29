/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "NSObject.h"


@protocol UIStatusBarStateProvider <NSObject>
- (void)addStatusBarStateObserver:(id)observer;
@optional
- (id)doubleHeightStatusStringForStyle:(int)style;
@required
- (void)getStatusBarData:(XXStruct_8iXKhD*)data;
- (void)removeStatusBarStateObserver:(id)observer;
@end


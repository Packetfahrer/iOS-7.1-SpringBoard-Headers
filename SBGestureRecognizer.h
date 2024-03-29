/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface SBGestureRecognizer : XXUnknownSuperclass {
	unsigned m_types;
	int m_state;
	id m_handler;
	unsigned m_activeTouchesCount;
	XXStruct_pqIg_A m_activeTouches[30];
	unsigned m_strikes;
	unsigned m_templateMatches;
	NSMutableArray* m_touchTemplates;
	BOOL m_includedInGestureRecognitionIsPossibleTest;
	BOOL m_sendsTouchesCancelledToApplication;
	id m_canBeginCondition;
	CGPoint m_maximumAllowedExclusiveMovement;
}
@property(copy, nonatomic) id canBeginCondition;
@property(copy, nonatomic) id handler;
@property(assign, nonatomic) BOOL includedInGestureRecognitionIsPossibleTest;
@property(assign, nonatomic) CGPoint maximumAllowedExclusiveMovement;
@property(assign, nonatomic) BOOL sendsTouchesCancelledToApplication;
@property(assign, nonatomic) int state;
@property(assign, nonatomic) unsigned types;
- (id)init;
- (void)_appendDescription:(id)description forTypes:(unsigned)types;
- (void)addTouchTemplate:(id)aTemplate;
- (void)dealloc;
- (id)description;
- (BOOL)isRecognized;
- (void)reset;
- (BOOL)shouldReceiveTouches;
- (BOOL)shouldReportRecognitionPossibleToAppsForTotalMotion:(CGPoint)totalMotion;
- (int)templateMatch;
- (void)touchesBegan:(SBGestureContextRef)began;
- (void)touchesCancelled:(SBGestureContextRef)cancelled;
- (void)touchesEnded:(SBGestureContextRef)ended;
- (void)touchesMoved:(SBGestureContextRef)moved;
@end


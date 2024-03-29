/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "SpringBoard-Structs.h"

@class UIGravityBehavior, UIAttachmentBehavior, UIDynamicItemBehavior, UICollisionBehavior;
@protocol UIDynamicItem;

__attribute__((visibility("hidden")))
@interface SBBounceBehavior : XXUnknownSuperclass {
	float _midwayPosition;
	float _completionThreshold;
	CGRect _targetFrame;
	id<UIDynamicItem> _item;
	UIDynamicItemBehavior* _bodyBehavior;
	UICollisionBehavior* _collisionBehavior;
	UIGravityBehavior* _gravityBehavior;
	UIDynamicItemBehavior* _pushBehavior;
	UIAttachmentBehavior* _draggingBehavior;
	float _gravity;
	float _velocity;
	float _elasticity;
	float _friction;
	float _resistance;
	float _minVelocityToAssist;
	float _maxVelocityToAssist;
	float _maxVelocityAssistance;
	UIEdgeInsets _boundaryInsets;
}
@property(assign, nonatomic) UIEdgeInsets boundaryInsets;
@property(assign, nonatomic) float elasticity;
@property(assign, nonatomic) float friction;
@property(assign, nonatomic) float gravity;
@property(assign, nonatomic) float maxVelocityAssistance;
@property(assign, nonatomic) float maxVelocityToAssist;
@property(assign, nonatomic) float minVelocityToAssist;
@property(assign, nonatomic) float resistance;
@property(assign, nonatomic) float velocity;
- (id)initWithItem:(id)item;
- (id)initWithItem:(id)item targetFrame:(CGRect)frame;
- (float)_adjustedVelocity:(float)velocity;
- (void)_beginInteraction;
- (void)_frameCollisionBoundaryPoints:(CGPoint*)points;
- (BOOL)_isGravityDown;
- (BOOL)_itemCompleted;
- (float)_itemOriginY;
- (BOOL)_itemPastMidway;
- (BOOL)_itemStopped;
- (float)_maxVelocityToAssist;
- (float)_minVelocityToAssist;
- (float)_percentComplete;
- (float)_percentRemaining;
- (void)_removeDraggingBehavior;
- (void)_setupCollisionBoundaries;
- (BOOL)_shouldAssistWithVelocity:(float)velocity;
- (float)_velocityAssistance;
- (BOOL)allowsAnimatorToStop;
- (void)bounce;
- (void)dealloc;
- (void)finishInteraction;
- (void)finishInteractionWithVelocity:(CGPoint)velocity;
- (void)finishInteractionWithVelocity:(CGPoint)velocity removingGravityAtMidway:(BOOL)midway;
- (void)initiateInteractionFromPoint:(CGPoint)point;
- (BOOL)isActive;
- (void)updateInteractionWithPoint:(CGPoint)point;
@end


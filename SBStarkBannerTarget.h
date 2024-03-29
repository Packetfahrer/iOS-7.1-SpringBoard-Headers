/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "SBUIBannerTargetImplementation.h"

@class NSMutableSet, NSHashTable, SBUISound, SBUIBannerContext, NSMutableArray;
@protocol SBStarkBannerTargetObserver;

__attribute__((visibility("hidden")))
@interface SBStarkBannerTarget : XXUnknownSuperclass <SBUIBannerTargetImplementation> {
	id<SBStarkBannerTargetObserver> _observer;
	NSHashTable* _sources;
	BOOL _invalidated;
	NSMutableSet* _suspensionReasons;
	NSMutableArray* _pendedContexts;
	SBUIBannerContext* _currentContext;
	SBUISound* _currentSound;
	int _displayAssertions;
}
@property(readonly, assign, nonatomic) void* bannerTargetIdentifier;
@property(readonly, assign, nonatomic) int bannerTargetIdiom;
@property(readonly, assign, nonatomic) SBUIBannerContext* currentContext;
@property(assign, nonatomic) id<SBStarkBannerTargetObserver> observer;
@property(assign, nonatomic, getter=isPausedForUserInteraction) BOOL pausedForUserInteraction;
- (id)init;
- (BOOL)_canDequeueWithOptions:(int)options;
- (BOOL)_canDismissWithOptions:(int)options;
- (void)_dequeueWithOptions:(int)options dismissReason:(int)reason;
- (void)_dismissContext:(id)context withOptions:(int)options dismissReason:(int)reason;
- (void)_dismissIntervalElapsed:(id)elapsed;
- (BOOL)_isSuspendedForAssistant;
- (void)_killIntervalElapsed:(id)elapsed;
- (void)_replaceIntervalElapsed:(id)elapsed;
- (id)currentBannerContextForSource:(id)source;
- (void)dealloc;
- (void)dismissCurrentBannerContextForSource:(id)source;
- (void)invalidate;
- (BOOL)isSuspended;
- (BOOL)isSuspendedForReason:(id)reason;
- (void)noteContext:(id)context subActionSelected:(unsigned)selected;
- (void)noteContextCanceled:(id)canceled;
- (void)noteContextSelected:(id)selected;
- (void)registerSource:(id)source;
- (void)setSuspended:(BOOL)suspended cancellingCurrent:(BOOL)current forReason:(id)reason;
- (void)signalSource:(id)source;
- (void)unregisterSource:(id)source;
@end


/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "SBThermalWarningSuppressionAssertionDelegate.h"
#import "SBThermalWarningAlertItemDelegate.h"

@class NSDictionary, NSMutableSet;

__attribute__((visibility("hidden")))
@interface SBThermalController : XXUnknownSuperclass <SBThermalWarningSuppressionAssertionDelegate, SBThermalWarningAlertItemDelegate> {
	BOOL _sampling;
	double _samplingStartTime;
	NSDictionary* _samplingStartCPUTimesByApp;
	int _sunlightStateToken;
	int _warningAssertionToken;
	int _warningResponseToken;
	NSMutableSet* _warningSuppressionAssertions;
	BOOL _warningSuppressionPreference;
	int _level;
	BOOL _inSunlight;
}
@property(readonly, assign, nonatomic, getter=isInSunlight) BOOL inSunlight;
@property(readonly, assign, nonatomic) int level;
+ (void)logThermalEvent:(id)event;
+ (id)sharedInstance;
- (id)init;
- (void)_beginThermalJetsamCPUSampling;
- (void)_calculateAppsCPUTimesWithCompletion:(id)completion;
- (void)_didReceiveWarningAction:(int)action;
- (void)_killThermallyActiveApplication;
- (void)_killThermallyActiveApplicationGivenCPUTimes:(id)times;
- (BOOL)captureWarningSuppressionAssertionWithPort:(unsigned)port reason:(id)reason;
- (void)dealloc;
- (void)respondToCurrentThermalCondition;
- (void)showThermalAlertIfNecessary;
- (void)startListeningForThermalEvents;
- (void)thermalWarningAlert:(id)alert didTriggerAction:(int)action;
- (void)thermalWarningAssertionExpired:(id)expired;
@end


/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBWorkspaceTransaction.h"
#import "SBAlertManagerObserver.h"

@class SBAlertManager, SBStarkScreenController;

__attribute__((visibility("hidden")))
@interface SBStarkWorkspaceTransaction : SBWorkspaceTransaction <SBAlertManagerObserver> {
	SBStarkScreenController* _starkScreenController;
	SBAlertManager* _starkScreenAlertManager;
	SBAlertManager* _mainScreenAlertManager;
}
@property(readonly, assign, nonatomic) SBAlertManager* mainScreenAlertManager;
@property(readonly, assign, nonatomic) SBAlertManager* starkScreenAlertManager;
@property(readonly, assign, nonatomic) SBStarkScreenController* starkScreenController;
- (id)initWithWorkspace:(id)workspace mainScreenAlertManager:(id)manager starkScreenController:(id)controller;
- (void)_transactionComplete;
- (void)alertManager:(id)manager didActivateAlert:(id)alert overAlerts:(id)alerts;
- (void)alertManager:(id)manager didDeactivateAlert:(id)alert top:(BOOL)top;
- (void)alertManager:(id)manager willActivateAlert:(id)alert overAlerts:(id)alerts;
- (void)alertManager:(id)manager willDeactivateAlert:(id)alert top:(BOOL)top;
- (void)dealloc;
- (BOOL)selfStarkAlertDidActivate:(id)selfStarkAlert overAlerts:(id)alerts;
- (BOOL)selfStarkAlertDidDeactivate:(id)selfStarkAlert;
- (BOOL)selfStarkAlertWillActivate:(id)selfStarkAlert overAlerts:(id)alerts;
- (BOOL)selfStarkAlertWillDeactivate:(id)selfStarkAlert;
@end


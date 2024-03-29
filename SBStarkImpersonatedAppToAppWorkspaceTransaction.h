/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBStarkAppToAppWorkspaceTransaction.h"

@class SBAlert;

__attribute__((visibility("hidden")))
@interface SBStarkImpersonatedAppToAppWorkspaceTransaction : SBStarkAppToAppWorkspaceTransaction {
	SBAlert* _deactivatingAlert;
	BOOL _animatedAppActivation;
}
- (id)initWithWorkspace:(id)workspace mainScreenAlertManager:(id)manager starkScreenController:(id)controller from:(id)from to:(id)to;
- (void)_deactivateAlertIfPossible;
- (void)_doCommit;
- (void)_handleFailureToLaunch;
- (id)_newAnimationFromAppToApp;
- (id)_newAnimationFromAppToLauncher;
- (id)_newAnimationFromAppToNowPlaying;
- (int)_setupMilestonesFrom:(id)from to:(id)to;
- (void)_transactionComplete;
- (void)animationController:(id)controller willBeginAnimation:(BOOL)animation;
- (void)animationControllerDidFinishAnimation:(id)animationController;
- (void)dealloc;
- (BOOL)selfApplicationExited:(id)exited;
- (BOOL)selfApplicationLaunchDidFail:(id)selfApplicationLaunch;
- (BOOL)selfStarkAlertDidDeactivate:(id)selfStarkAlert;
- (BOOL)selfStarkAlertWillDeactivate:(id)selfStarkAlert;
@end


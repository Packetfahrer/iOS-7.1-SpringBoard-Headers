/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface SBVoiceControlController : XXUnknownSuperclass {
	BOOL _delayedAssistantActivationPending;
	BOOL _headsetDownDelayedActionPerformed;
}
+ (BOOL)isVoiceControlVisible;
+ (id)sharedInstance;
- (id)init;
- (void)_assistantActivationSettingsDidChange:(id)_assistantActivationSettings;
- (void)_cancelDelayedHeadsetAction;
- (void)_performDelayedHeadsetActionForAssistant;
- (void)_performDelayedHeadsetActionForVoiceControl;
- (void)_prepareDelayedHeadsetAction;
- (void)_spokenLanguageDidChange:(id)_spokenLanguage;
- (void)_updateNextRecognitionAudioInputPaths:(id)paths;
- (void)bluetoothDeviceEndedVoiceControl:(id)control;
- (void)bluetoothDeviceInitiatedVoiceControl:(id)control;
- (void)configureVoiceControl;
- (void)handleHeadsetButtonDownWithClickCount:(unsigned)clickCount;
- (BOOL)handleHeadsetButtonUp;
- (BOOL)handleHeadsetButtonUpNotInCall;
- (BOOL)handleHomeButtonHeld;
- (void)headsetAvailabilityChanged;
- (void)preheatForMenuButtonWithFireDate:(id)fireDate;
@end


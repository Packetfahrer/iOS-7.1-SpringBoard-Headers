/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "SpringBoard-Structs.h"

@class NSDictionary, MPAVRoutingController, NSTimer;

__attribute__((visibility("hidden")))
@interface SBMediaController : XXUnknownSuperclass {
	int _manualVolumeChangeCount;
	NSDictionary* _nowPlayingInfo;
	float _pendingVolumeChange;
	NSTimer* _volumeCommitTimer;
	BOOL _debounceVolumeRepeat;
	int _numberOfVolumeDecreasesSinceDownButtonDown;
	int _lastNowPlayingAppPID;
	BOOL _lastNowPlayingAppIsPlaying;
	BOOL _suppressHUD;
	BOOL _ringerMuted;
	BOOL _screenSharing;
	BOOL _screenSharingSetsStatusBarOverride;
	NSTimer* _screenSharingStatusBarOverrideTimer;
	NSTimer* _videoOutStatusBarOverrideTimer;
	MPAVRoutingController* _routingController;
}
@property(assign, nonatomic, getter=isRingerMuted) BOOL ringerMuted;
@property(readonly, assign, getter=isScreenSharing) BOOL screenSharing;
@property(assign) BOOL suppressHUD;
@property(assign) float volume;
+ (BOOL)applicationCanBeConsideredNowPlaying:(id)playing;
+ (void)interrupt;
+ (void)sendResetPlaybackTimeoutCommand;
+ (id)sharedInstance;
- (id)init;
- (float)_calcButtonRepeatDelay;
- (void)_cancelPendingVolumeChange;
- (void)_changeVolumeBy:(float)by;
- (void)_clearScreenSharingStatusBarStyleOverride;
- (void)_clearVideoOutStatusBarStyleOverride;
- (void)_commitVolumeChange:(id)change;
- (void)_delayedExtendSleepTimer;
- (void)_externalScreenChanged:(id)changed;
- (void)_nowPlayingAppIsPlayingDidChange;
- (id)_nowPlayingInfo;
- (void)_nowPlayingInfoChanged;
- (void)_nowPlayingPIDChanged;
- (void)_registerForNotifications;
- (BOOL)_sendMediaCommand:(unsigned)command;
- (void)_serverConnectionDied:(id)died;
- (void)_softMuteChanged:(id)changed;
- (void)_startVideoOutStatusBarStyleOverride;
- (void)_systemMuteChanged:(id)changed;
- (void)_systemVolumeChanged:(id)changed;
- (void)_unregisterForNotifications;
- (void)_updateAVRoutes;
- (BOOL)addTrackToWishList;
- (id)artwork;
- (BOOL)banTrack;
- (BOOL)beginSeek:(int)seek;
- (void)cancelVolumeEvent;
- (BOOL)changeTrack:(int)track;
- (void)dealloc;
- (void)decreaseVolume;
- (BOOL)endSeek:(int)seek;
- (void)handleVolumeEvent:(IOHIDEventRef)event;
- (BOOL)handsetRouteIsSelected;
- (BOOL)hasTrack;
- (void)increaseVolume;
- (BOOL)isAdvertisement;
- (BOOL)isFirstTrack;
- (BOOL)isLastTrack;
- (BOOL)isMovie;
- (BOOL)isPaused;
- (BOOL)isPlaying;
- (BOOL)isRadioTrack;
- (BOOL)isTVOut;
- (BOOL)lastSavedRingerMutedState;
- (BOOL)likeTrack;
- (id)mediaControlsDestinationApp;
- (BOOL)muted;
- (id)nameOfPickedRoute;
- (id)nowPlayingAlbum;
- (id)nowPlayingApplication;
- (id)nowPlayingArtist;
- (id)nowPlayingTitle;
- (BOOL)pause;
- (BOOL)play;
- (int)repeatMode;
- (BOOL)routeOtherThanHandsetIsAvailable;
- (void)routingControllerAvailableRoutesDidChange:(id)routingControllerAvailableRoutes;
- (void)setCurrentTrackTime:(float)time;
- (void)setNowPlayingInfo:(id)info;
- (BOOL)setPlaybackSpeed:(int)speed;
- (int)shuffleMode;
- (BOOL)skipFifteenSeconds:(int)seconds;
- (BOOL)stop;
- (BOOL)togglePlayPause;
- (BOOL)toggleRepeat;
- (BOOL)toggleShuffle;
- (double)trackDuration;
- (double)trackElapsedTime;
- (BOOL)trackIsBanned;
- (BOOL)trackIsBeingPlayedByMusicApp;
- (BOOL)trackIsLiked;
- (BOOL)trackIsOnWishList;
- (BOOL)trackProhibitsSkip;
- (BOOL)trackSupports15SecondFF;
- (BOOL)trackSupports15SecondRewind;
- (BOOL)trackSupportsIsBanned;
- (BOOL)trackSupportsIsLiked;
- (unsigned long long)trackUniqueIdentifier;
- (void)updateScreenSharingStatusBarStyleOverride;
- (void)updateScreenSharingStatusBarStyleOverrideSuppressionPreference;
- (BOOL)volumeControlIsAvailable;
@end


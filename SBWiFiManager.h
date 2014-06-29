/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "SpringBoard-Structs.h"

@class NSRecursiveLock, NSObject, NSString;
@protocol OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface SBWiFiManager : XXUnknownSuperclass {
	NSRecursiveLock* _lock;
	WiFiManagerClient* _manager;
	WiFiDeviceClient* _device;
	NSString* _deviceInterfaceName;
	BOOL _devicePresent;
	WiFiNetwork* _currentNetwork;
	WiFiNetwork* _previousNetwork;
	BOOL _currentNetworkHasBeenSet;
	BOOL _currentNetworkIsIOSHotspot;
	BOOL _currentNetworkIsIOSHotspotHasBeenSet;
	BOOL _powered;
	BOOL _poweredHasBeenSet;
	int _rssiThreshold;
	int _signalStrengthBars;
	int _signalStrengthRSSI;
	BOOL _signalStrengthHasBeenSet;
	SCDynamicStoreRef _SCDynamicStoreNetworkState;
	NSObject<OS_dispatch_source>* _SCUpdateTimeoutSource;
	WiFiNetwork* _primaryInterface;
	BOOL _primaryInterfaceHasBeenSet;
	BOOL _isPrimaryInterface;
	BOOL _isPrimaryInterfaceChanging;
}
@property(readonly, assign) BOOL devicePresent;
@property(readonly, assign) BOOL isPrimaryInterface;
@property(assign, getter=isPowered) BOOL powered;
@property(readonly, assign) int signalStrengthBars;
@property(readonly, assign) int signalStrengthRSSI;
@property(assign) BOOL wiFiEnabled;
+ (id)sharedInstance;
- (id)init;
- (BOOL)_cachedIsAssociated;
- (void)_linkDidChange;
- (WiFiManagerClient*)_manager;
- (void)_powerStateDidChange;
- (void)_primaryInterfaceChanged:(BOOL)changed;
- (void)_setWiFiDevice:(WiFiDeviceClient*)device;
- (void)_updateCurrentNetwork;
- (void)_updateWiFiDevice:(id)device;
- (void)_updateWiFiState;
- (id)_wifiInterface;
- (id)currentNetworkName;
- (BOOL)isAssociated;
- (BOOL)isAssociatedToIOSHotspot;
- (id)knownNetworks;
- (void)resetSettings;
- (void)updateDevicePresence;
- (void)updateSignalStrength;
- (void)updateSignalStrengthFromRawRSSI:(int)rawRSSI andScaledRSSI:(float)rssi;
- (BOOL)wifiSupported;
@end


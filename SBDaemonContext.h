/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSObject, NSMutableDictionary;
@protocol OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface SBDaemonContext : XXUnknownSuperclass {
	NSObject<OS_dispatch_source>* _dispatchSource;
	NSMutableDictionary* _daemonRequests;
	int _pid;
}
@property(readonly, assign) int pid;
- (id)initWithPid:(int)pid queue:(id)queue;
- (void)_handleCancelation;
- (id)_newDispatchSourceForPid:(int)pid queue:(id)queue;
- (void)addRequest:(id)request forKey:(id)key;
- (void)dealloc;
- (id)description;
- (void)removeRequestForKey:(id)key;
@end


/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface SBDaemonRequest : XXUnknownSuperclass {
	id _enabler;
	id _disabler;
}
@property(copy, nonatomic) id disabler;
@property(copy, nonatomic) id enabler;
+ (id)requestWithEnabler:(id)enabler disabler:(id)disabler;
- (void)dealloc;
- (void)dispatchDisablerOnQueue:(id)queue;
- (void)dispatchEnablerOnQueue:(id)queue;
@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BKSAlternateSystemAppServerProtocol.h"
#import "NSXPCListenerDelegate.h"

@class BKAlternateSystemAppManager, NSObject<OS_dispatch_queue>, NSString, NSXPCConnection, NSXPCListener;

@interface BKAlternateSystemAppServer : NSObject <NSXPCListenerDelegate, BKSAlternateSystemAppServerProtocol>
{
    NSXPCListener *_xpcListener;
    NSXPCConnection *_clientConnection;
    NSObject<OS_dispatch_queue> *_queue;
    BKAlternateSystemAppManager *_alternateSystemAppManager;
}

+ (id)sharedInstance;
@property(retain, nonatomic) BKAlternateSystemAppManager *alternateSystemAppManager; // @synthesize alternateSystemAppManager=_alternateSystemAppManager;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSXPCConnection *clientConnection; // @synthesize clientConnection=_clientConnection;
@property(retain, nonatomic) NSXPCListener *xpcListener; // @synthesize xpcListener=_xpcListener;
- (void)terminateAlternateSystemAppWithBundleID:(id)arg1;
- (void)openAlternateSystemAppWithBundleID:(id)arg1;
- (void)unblockSystemAppForAlternateSystemApp;
- (void)blockSystemAppForAlternateSystemApp;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (_Bool)_queue_listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)_handleInterruptedOrInvalidatedConnection;
- (void)run;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

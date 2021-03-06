//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CAMNebulaDaemonConnectionManagerDelegate.h"
#import "NSXPCListenerDelegate.h"

@class NSMutableArray, NSObject<OS_dispatch_queue>, NSString, NSXPCListener;

@interface CAMNebulaDaemon : NSObject <NSXPCListenerDelegate, CAMNebulaDaemonConnectionManagerDelegate>
{
    NSXPCListener *__listener;
    NSObject<OS_dispatch_queue> *__queue;
    NSMutableArray *__connections;
}

@property(readonly, nonatomic) NSMutableArray *_connections; // @synthesize _connections=__connections;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *_queue; // @synthesize _queue=__queue;
@property(readonly, nonatomic) NSXPCListener *_listener; // @synthesize _listener=__listener;
- (void).cxx_destruct;
- (void)daemonConnectionManagerHasBeenDisconnected:(id)arg1;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)allowedProtocolForClientAccess:(id)arg1;
- (void)performPendingWorkAfterDelay:(double)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


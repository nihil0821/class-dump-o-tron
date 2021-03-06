//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MRDRunAssertion, MRDTaskAssertion, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSObject<OS_xpc_object>, NSString;

@interface MRDMediaRemoteClient : NSObject
{
    NSObject<OS_dispatch_source> *_source;
    NSObject<OS_dispatch_queue> *_serialQueue;
    MRDRunAssertion *_runAssertion;
    NSMutableDictionary *_registeredCustomOrigins;
    _Bool _canBeNowPlayingApplication;
    _Bool _keepAlive;
    unsigned int _routeDiscoveryMode;
    id <MRDXPCMessageHandling> _messageHandler;
    id <MRDMediaRemoteClientDelegate> _delegate;
    NSObject<OS_xpc_object> *_connection;
    NSString *_bundleIdentifier;
    MRDTaskAssertion *_currentTaskAssertion;
    unsigned long long _routeDiscoveryCount;
}

@property(nonatomic) _Bool keepAlive; // @synthesize keepAlive=_keepAlive;
@property(nonatomic) unsigned int routeDiscoveryMode; // @synthesize routeDiscoveryMode=_routeDiscoveryMode;
@property(readonly, nonatomic) unsigned long long routeDiscoveryCount; // @synthesize routeDiscoveryCount=_routeDiscoveryCount;
@property(nonatomic) _Bool canBeNowPlayingApplication; // @synthesize canBeNowPlayingApplication=_canBeNowPlayingApplication;
@property(retain, nonatomic) MRDTaskAssertion *currentTaskAssertion; // @synthesize currentTaskAssertion=_currentTaskAssertion;
@property(readonly, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(readonly, nonatomic) NSObject<OS_xpc_object> *connection; // @synthesize connection=_connection;
@property(nonatomic) id <MRDMediaRemoteClientDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) id <MRDXPCMessageHandling> messageHandler; // @synthesize messageHandler=_messageHandler;
- (id)_runAssertionName;
- (void)_invalidate;
- (void)_handleXPCMessage:(id)arg1;
- (_Bool)hasRegisteredCustomOrigin:(struct _MROrigin *)arg1;
- (void)removeRegisteredCustomOrigin:(struct _MROrigin *)arg1;
- (void)addRegisteredCustomOrigin:(struct _MROrigin *)arg1;
- (id)registeredCustomOrigins;
- (void)relayXPCMessage:(id)arg1 andReply:(_Bool)arg2;
- (void)sendRemoteControlCommand:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) _Bool isActive;
- (_Bool)isEqual:(id)arg1;
- (id)description;
@property(readonly, nonatomic) int pid;
- (void)dealloc;
- (id)initWithConnection:(id)arg1 bundleIdentifier:(id)arg2;

@end


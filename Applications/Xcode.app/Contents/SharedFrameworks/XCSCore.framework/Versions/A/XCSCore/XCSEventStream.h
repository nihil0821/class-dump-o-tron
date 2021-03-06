//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "XCSMessageChannelDelegate.h"

@class NSMutableDictionary, NSString, XCSMessageChannel;

@interface XCSEventStream : NSObject <XCSMessageChannelDelegate>
{
    NSMutableDictionary *_eventResponseCallbacks;
    NSMutableDictionary *_eventObservers;
    XCSMessageChannel *_messageChannel;
    id <XCSEventStreamDelegate> _delegate;
}

@property __weak id <XCSEventStreamDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly) XCSMessageChannel *messageChannel; // @synthesize messageChannel=_messageChannel;
- (void).cxx_destruct;
- (void)messageChannel:(id)arg1 didUpdatePrivilegesWithUsername:(id)arg2;
- (void)messageChannelDidRejectClientCertificate:(id)arg1;
- (void)messageChannel:(id)arg1 didDisconnectWithError:(id)arg2 andWillRetry:(BOOL)arg3;
- (void)messageChannel:(id)arg1 didReceiveMessage:(id)arg2 withTag:(unsigned char)arg3;
- (void)handleCallbackForUUID:(id)arg1 withData:(id)arg2;
- (void)handleEventWithName:(id)arg1 data:(id)arg2 callbackUUID:(id)arg3;
- (void)removeAllObserversForEvent:(id)arg1;
- (void)removeObserverForEvent:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)addObserverForEvent:(id)arg1 withHandler:(CDUnknownBlockType)arg2 owner:(id)arg3;
- (void)addObserverForEvent:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)sendResponseWithCallback:(id)arg1 data:(id)arg2;
- (void)emitEvent:(id)arg1 withData:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)emitEvent:(id)arg1 withData:(id)arg2;
- (id)initWithHostname:(id)arg1 port:(unsigned short)arg2;
- (id)initWithMessageChannel:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


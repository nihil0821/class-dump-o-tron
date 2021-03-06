//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SFCompanionServiceManagerClient.h"
#import "SFCompanionXPCManagerObserver.h"

@class NSMutableDictionary, NSObject<OS_dispatch_semaphore>, NSString;

@interface SFCompanionManager : NSObject <SFCompanionServiceManagerClient, SFCompanionXPCManagerObserver>
{
    NSString *_identifier;
    id <SFCompanionServiceManagerProtocol> _managerProxy;
    NSString *_deviceID;
    NSString *_deviceIP;
    NSString *_deviceName;
    NSMutableDictionary *_services;
    NSMutableDictionary *_streamHandlers;
    NSObject<OS_dispatch_semaphore> *_managerSemaphore;
}

+ (id)serviceManager;
@property NSObject<OS_dispatch_semaphore> *managerSemaphore; // @synthesize managerSemaphore=_managerSemaphore;
@property(retain) NSMutableDictionary *streamHandlers; // @synthesize streamHandlers=_streamHandlers;
@property(retain) NSMutableDictionary *services; // @synthesize services=_services;
@property(copy) NSString *deviceName; // @synthesize deviceName=_deviceName;
@property(copy) NSString *deviceIP; // @synthesize deviceIP=_deviceIP;
@property(copy) NSString *deviceID; // @synthesize deviceID=_deviceID;
@property(retain) id <SFCompanionServiceManagerProtocol> managerProxy; // @synthesize managerProxy=_managerProxy;
@property(copy) NSString *identifier; // @synthesize identifier=_identifier;
- (void)streamsFromFileHandle:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)disableStreamSupportForIdentifier:(id)arg1;
- (void)supportStreamsWithIdentifier:(id)arg1 withStreamHandler:(CDUnknownBlockType)arg2;
- (void)getStreamsForData:(id)arg1 withStreamHandler:(CDUnknownBlockType)arg2;
- (void)xpcManagerDidInvalidate:(id)arg1;
- (void)xpcManagerConnectionInterrupted;
- (void)streamToService:(id)arg1 withFileHandle:(id)arg2 acceptReply:(CDUnknownBlockType)arg3;
- (void)signalSemaphore;
- (void)retrieveManagerProxy;
- (id)streamDataForIdentifier:(id)arg1;
- (id)serviceForIdentifier:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


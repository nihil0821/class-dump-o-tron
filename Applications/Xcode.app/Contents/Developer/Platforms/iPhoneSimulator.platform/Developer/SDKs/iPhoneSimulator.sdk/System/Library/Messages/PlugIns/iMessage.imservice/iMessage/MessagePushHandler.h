//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IDSServiceDelegatePrivate.h"

@class IDSAccount, IDSService, NSMutableArray, NSString;

@interface MessagePushHandler : NSObject <IDSServiceDelegatePrivate>
{
    IDSService *_idsService;
    IDSAccount *_account;
    NSMutableArray *_handlers;
    _Bool _registeredForPush;
    _Bool _isListening;
}

+ (id)localCommandToHandlerBlock;
+ (id)commandToHandlerBlock;
@property(readonly, retain, nonatomic) IDSService *service; // @synthesize service=_idsService;
- (void)service:(id)arg1 account:(id)arg2 incomingTopLevelMessage:(id)arg3 fromID:(id)arg4 messageContext:(id)arg5;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (id)copyHandlersForEnumerating;
@property(nonatomic) _Bool registered;
- (void)_ignoreIncomingPushes;
- (void)_acceptIncomingPushes;
- (void)_updateListenerIfNeeded;
- (void)dealloc;
- (id)initWithIDSAccount:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


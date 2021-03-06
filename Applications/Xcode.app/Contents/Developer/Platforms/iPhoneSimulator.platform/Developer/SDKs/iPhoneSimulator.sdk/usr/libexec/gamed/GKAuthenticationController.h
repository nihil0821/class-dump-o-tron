//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GKAuthenticationMachine, NSObject<OS_dispatch_queue>, NSString;

@interface GKAuthenticationController : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    GKAuthenticationMachine *_authMachine;
}

+ (id)primaryAuthControllerForEnvironment:(long long)arg1;
@property(retain) GKAuthenticationMachine *authMachine; // @synthesize authMachine=_authMachine;
@property(readonly) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)performAndWait:(CDUnknownBlockType)arg1;
- (void)performAsync:(CDUnknownBlockType)arg1;
- (void)playerDidLoginWithAccountName:(id)arg1 playerID:(id)arg2 authToken:(id)arg3 authorized:(_Bool)arg4;
- (void)playerDidLogout;
- (_Bool)hasPlayerCredentials;
- (_Bool)isPlayerLoggedIn;
- (void)resetToInitialState;
@property(retain) NSString *currentState;
- (id)suggestedAccountName;
- (void)dealloc;
- (id)initPrimaryForEnvironment:(long long)arg1;
- (id)initWithMachine:(id)arg1;
- (id)init;

@end


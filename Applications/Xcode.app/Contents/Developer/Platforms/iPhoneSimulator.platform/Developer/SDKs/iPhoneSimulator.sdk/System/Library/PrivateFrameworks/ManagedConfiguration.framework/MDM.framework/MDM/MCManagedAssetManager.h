//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MCMDMServer;

@interface MCManagedAssetManager : NSObject
{
    MCMDMServer *_server;
}

@property(nonatomic) __weak MCMDMServer *server; // @synthesize server=_server;
- (void).cxx_destruct;
- (void)inviteUserToCloudVPPProgramURL:(id)arg1 assertion:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)promptUserForiTunesAccount:(id)arg1 accountNameEditable:(_Bool)arg2 canCreateNewAccount:(_Bool)arg3 assertion:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (void)promptUserToLoginToiTunesIfNeededTitle:(id)arg1 message:(id)arg2 assertion:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;

@end

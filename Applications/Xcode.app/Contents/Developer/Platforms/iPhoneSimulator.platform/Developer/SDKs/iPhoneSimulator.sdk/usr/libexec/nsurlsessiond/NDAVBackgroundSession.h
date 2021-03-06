//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NDBackgroundSession.h"

#import "NDAVAssetDownloadSessionWrapperDelegate.h"
#import "NDBackgroundSessionProtocol.h"

@class NSMutableDictionary, NSString, NSURLSessionConfiguration;

__attribute__((visibility("hidden")))
@interface NDAVBackgroundSession : NDBackgroundSession <NDBackgroundSessionProtocol, NDAVAssetDownloadSessionWrapperDelegate>
{
    NSMutableDictionary *_identifiersToAVWrappers;
    NSMutableDictionary *_downloadTokensToIdentifiers;
    NSMutableDictionary *_identifiersToTCPConnections;
    NSURLSessionConfiguration *_clientConfig;
}

- (void).cxx_destruct;
- (void)NDAVAssetDownloadSessionWrapper:(id)arg1 didCompleteWithError:(id)arg2;
- (void)NDAVAssetDownloadSessionWrapper:(id)arg1 didUpdateProgressWithTotalBytesWritten:(unsigned long long)arg2 totalBytesExpectedToWrite:(unsigned long long)arg3;
- (void)taskWithIdentifier:(unsigned long long)arg1 didCompleteWithError:(id)arg2;
- (void)cancelTCPConnectionForTask:(unsigned long long)arg1;
- (void)clientAcknowledgedTerminalCallbackForTask:(unsigned long long)arg1;
- (void)resetStorageWithReply:(CDUnknownBlockType)arg1;
- (void)stopAVAssetDownloadSessionWithTaskIdentifier:(unsigned long long)arg1;
- (void)startAVAssetDownloadSessionWithTaskIdentifier:(unsigned long long)arg1;
- (long long)adjustedTCPConnectionPriorityForTaskPriority:(long long)arg1;
- (void)_onqueue_taskShouldResume:(unsigned long long)arg1;
- (void)_onqueue_taskShouldSuspend:(unsigned long long)arg1;
- (void)retryTask:(id)arg1 originalError:(id)arg2;
- (void)_onqueue_setPriority:(long long)arg1 forTCPConnectionWithTaskIdentifier:(unsigned long long)arg2;
- (void)setPriority:(long long)arg1 forTaskWithIdentifier:(unsigned long long)arg2;
- (void)cancelTaskWithIdentifier:(unsigned long long)arg1 byProducingResumeData:(CDUnknownBlockType)arg2;
- (void)cancelTaskWithIdentifier:(unsigned long long)arg1;
- (void)avAssetDownloadTaskWithURL:(id)arg1 destinationURL:(id)arg2 options:(id)arg3 identifier:(unsigned long long)arg4 reply:(CDUnknownBlockType)arg5;
- (void)dataTaskWithRequest:(id)arg1 originalRequest:(id)arg2 pipeHandle:(id)arg3 identifier:(unsigned long long)arg4 reply:(CDUnknownBlockType)arg5;
- (void)uploadTaskWithRequest:(id)arg1 originalRequest:(id)arg2 fromFile:(id)arg3 identifier:(unsigned long long)arg4 reply:(CDUnknownBlockType)arg5;
- (void)downloadTaskWithRequest:(id)arg1 originalRequest:(id)arg2 identifier:(unsigned long long)arg3 reply:(CDUnknownBlockType)arg4;
- (void)backgroundUpdatesDisabledForApplication:(id)arg1;
- (void)applicationWasQuitFromAppSwitcher:(id)arg1;
- (void)applicationEnteredForeground:(id)arg1;
- (void)applicationNoLongerInForeground:(id)arg1;
- (void)updatePriorityForTaskID:(id)arg1;
- (void)fillInByteCountsForTaskInfo:(id)arg1 withTaskID:(id)arg2;
- (id)restoreTasksFromArchivedInfo:(id)arg1;
- (id)initWithConfiguration:(id)arg1 bundleID:(id)arg2 isSpringBoardApp:(_Bool)arg3 downloadDirectory:(id)arg4 options:(id)arg5 clientProxy:(id)arg6 delegate:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


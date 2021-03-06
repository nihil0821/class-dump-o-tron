//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ISOperation.h"

@class StoreDownloadQueueRequest;

@interface CheckDownloadQueueOperation : ISOperation
{
    long long _numberOfAvailableDownloads;
    StoreDownloadQueueRequest *_request;
}

- (void)_runPendingCancelDownloadOperations;
- (id)_newURLOperation;
- (id)_account;
- (void)run;
@property(readonly) long long numberOfAvailableDownloads;
@property(readonly) StoreDownloadQueueRequest *downloadQueueRequest;
- (void)dealloc;
- (id)initWithDownloadQueueRequest:(id)arg1;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CloudKitDaemon/CKDURLRequest.h>

@class CKQuery, CKRecordZoneID, NSArray, NSData, NSMutableArray;

__attribute__((visibility("hidden")))
@interface CKDQueryURLRequest : CKDURLRequest
{
    NSMutableArray *_queryResponses;
    CKQuery *_query;
    NSData *_cursor;
    unsigned long long _limit;
    CKRecordZoneID *_zoneID;
    NSArray *_requestedFields;
    NSData *_resultsCursor;
}

@property(retain, nonatomic) NSData *resultsCursor; // @synthesize resultsCursor=_resultsCursor;
@property(retain, nonatomic) NSArray *requestedFields; // @synthesize requestedFields=_requestedFields;
@property(retain, nonatomic) CKRecordZoneID *zoneID; // @synthesize zoneID=_zoneID;
@property(nonatomic) unsigned long long limit; // @synthesize limit=_limit;
@property(retain, nonatomic) NSData *cursor; // @synthesize cursor=_cursor;
@property(retain, nonatomic) CKQuery *query; // @synthesize query=_query;
@property(retain, nonatomic) NSArray *queryResponses; // @synthesize queryResponses=_queryResponses;
- (void).cxx_destruct;
- (void)requestDidParseNodeFailure:(id)arg1;
- (id)requestDidParseProtobufObject:(id)arg1;
- (id)requestOperations;
- (id)zoneIDsToLock;
- (_Bool)allowsAnonymousAccount;
- (id)requestOperationClasses;
- (int)operationType;
- (id)initWithQuery:(id)arg1 cursor:(id)arg2 limit:(unsigned long long)arg3 requestedFields:(id)arg4 zoneID:(id)arg5;

@end

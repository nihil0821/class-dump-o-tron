//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HistoryItem.h"
#import "NSCopying.h"
#import "SyncingHistoryItem.h"

@class MSPSearchRequestStorage, NSData, NSString, SearchResult;

@interface DirectionsHistoryItem : NSObject <SyncingHistoryItem, NSCopying, HistoryItem>
{
    SearchResult *_startSearchResult;
    SearchResult *_endSearchResult;
    MSPSearchRequestStorage *_storage;
    NSData *_directionsResponseID;
    NSString *_reportAProblemAttachment;
}

@property(retain, nonatomic) NSData *directionsResponseID; // @synthesize directionsResponseID=_directionsResponseID;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *syncIdentifier;
@property(readonly, nonatomic) SearchResult *endSearchResult;
@property(readonly, nonatomic) SearchResult *startSearchResult;
@property(nonatomic) double position;
@property(nonatomic) double timestamp;
@property(nonatomic) int transportType;
- (int)type;
- (_Bool)isEqual:(id)arg1;
- (void)_geocodeSearchResultIfNeeded:(id)arg1;
- (void)updateFromStartSearchResult:(id)arg1 endSearchResult:(id)arg2;
- (id)initWithStartSearchResult:(id)arg1 endSearchResult:(id)arg2 directionsMode:(unsigned long long)arg3 timestamp:(double)arg4;
@property(readonly, nonatomic) MSPSearchRequestStorage *storage;
@property(readonly, nonatomic) NSData *data;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)updateWithStorage:(id)arg1;
- (id)initWithSearchRequestStorage:(id)arg1;
- (int)_geoTransportTypeForMKDirectionsTransportType:(unsigned long long)arg1;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSData *syncData;
- (_Bool)updateFromSyncData:(id)arg1;
@property(readonly, nonatomic) _Bool isValid;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


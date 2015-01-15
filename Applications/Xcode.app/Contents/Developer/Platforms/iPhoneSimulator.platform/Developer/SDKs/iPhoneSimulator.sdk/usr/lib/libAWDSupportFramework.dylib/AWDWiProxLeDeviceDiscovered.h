//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSString;

@interface AWDWiProxLeDeviceDiscovered : PBCodable <NSCopying>
{
    unsigned long long _timestamp;
    NSString *_peerId;
    int _rssi;
    NSString *_sessionId;
    int _type;
    struct {
        unsigned int timestamp:1;
        unsigned int rssi:1;
        unsigned int type:1;
    } _has;
}

@property(retain, nonatomic) NSString *peerId; // @synthesize peerId=_peerId;
@property(nonatomic) int rssi; // @synthesize rssi=_rssi;
@property(nonatomic) int type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasPeerId;
@property(nonatomic) _Bool hasRssi;
@property(nonatomic) _Bool hasType;
@property(readonly, nonatomic) _Bool hasSessionId;
@property(nonatomic) _Bool hasTimestamp;
- (void)dealloc;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DAEAS/ASItem.h>

#import "NSCoding.h"

@class NSDictionary, NSNumber, NSString;

@interface ASChangedCollectionLeaf : ASItem <NSCoding>
{
    _Bool _isResponse;
    _Bool _validateOpeningTokens;
    long long _changeType;
    NSString *_serverID;
    NSString *_clientID;
    NSNumber *_status;
    NSDictionary *_applicationData;
}

+ (id)asParseRules;
+ (_Bool)notifyOfUnknownTokens;
+ (_Bool)frontingBasicTypes;
+ (_Bool)parsingWithSubItems;
+ (_Bool)parsingLeafNode;
+ (_Bool)acceptsTopLevelLeaves;
@property(retain, nonatomic) NSDictionary *applicationData; // @synthesize applicationData=_applicationData;
@property(copy, nonatomic) NSNumber *status; // @synthesize status=_status;
@property(copy, nonatomic) NSString *clientID; // @synthesize clientID=_clientID;
@property(retain, nonatomic) NSString *serverID; // @synthesize serverID=_serverID;
@property(nonatomic) long long changeType; // @synthesize changeType=_changeType;
@property(nonatomic) _Bool validateOpeningTokens; // @synthesize validateOpeningTokens=_validateOpeningTokens;
@property(nonatomic) _Bool isResponse; // @synthesize isResponse=_isResponse;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (long long)dataclass;
- (void)loadClientIDs;
- (void)appendActiveSyncDataForTask:(id)arg1 toWBXMLData:(id)arg2;
- (void)parseASParseContext:(id)arg1 root:(id)arg2 parent:(id)arg3 callbackDict:(id)arg4 streamCallbackDict:(id)arg5 account:(id)arg6;
- (id)init;

@end


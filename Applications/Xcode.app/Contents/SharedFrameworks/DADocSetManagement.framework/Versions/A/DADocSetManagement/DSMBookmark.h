//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSString;

@interface DSMBookmark : NSObject <NSCoding>
{
    NSString *_relativeURLString;
    NSString *_platform;
    NSString *_docSetIdentifier;
    NSString *_anchor;
    NSString *_name;
}

+ (id)bookmarkFromDictionary:(id)arg1;
+ (id)bookmarkWithName:(id)arg1 relativeURLString:(id)arg2 anchor:(id)arg3 platform:(id)arg4;
@property(copy) NSString *name; // @synthesize name=_name;
@property(copy) NSString *anchor; // @synthesize anchor=_anchor;
@property(copy) NSString *docSetIdentifier; // @synthesize docSetIdentifier=_docSetIdentifier;
@property(copy) NSString *platform; // @synthesize platform=_platform;
@property(copy) NSString *relativeURLString; // @synthesize relativeURLString=_relativeURLString;
- (void).cxx_destruct;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

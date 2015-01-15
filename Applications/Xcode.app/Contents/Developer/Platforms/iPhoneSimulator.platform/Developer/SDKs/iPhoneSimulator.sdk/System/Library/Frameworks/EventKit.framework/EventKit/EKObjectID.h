//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@interface EKObjectID : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _temporary;
    int _entityType;
    int _rowID;
}

+ (id)objectIDWithURL:(id)arg1;
+ (id)temporaryObjectIDWithEntityType:(int)arg1;
+ (id)objectIDWithEntityType:(int)arg1 rowID:(int)arg2;
+ (id)objectIDWithCADObjectID:(CDStruct_f683c4ba)arg1;
+ (_Bool)supportsSecureCoding;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)URIRepresentation;
- (id)stringRepresentation;
- (id)description;
- (_Bool)isTemporary;
- (CDStruct_f683c4ba)CADObjectID;
- (int)rowID;
- (int)entityType;
- (id)entityName;
- (id)dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithEntityType:(int)arg1 rowID:(int)arg2 temporary:(_Bool)arg3;

@end

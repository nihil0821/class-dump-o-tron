//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class CKContainerID, CKSharedItemID, NSDate, NSString;

@interface CKComment : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_commentID;
    CKSharedItemID *_commentedItemID;
    NSString *_message;
    NSString *_context;
    NSString *_commenterID;
    NSDate *_creationDate;
    NSString *_localID;
    CKContainerID *_containerID;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) CKContainerID *containerID; // @synthesize containerID=_containerID;
@property(copy, nonatomic) NSString *localID; // @synthesize localID=_localID;
@property(copy, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(copy, nonatomic) NSString *commenterID; // @synthesize commenterID=_commenterID;
@property(copy, nonatomic) NSString *context; // @synthesize context=_context;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(copy, nonatomic) CKSharedItemID *commentedItemID; // @synthesize commentedItemID=_commentedItemID;
@property(copy, nonatomic) NSString *commentID; // @synthesize commentID=_commentID;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)sharedItemID;
- (void)CKAssignToContainerWithID:(id)arg1;
- (id)description;
- (id)CKPropertiesDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_initBare;
- (id)init;
- (id)initWithMessage:(id)arg1 item:(id)arg2;
- (id)_initWithMessage:(id)arg1 itemID:(id)arg2;

@end


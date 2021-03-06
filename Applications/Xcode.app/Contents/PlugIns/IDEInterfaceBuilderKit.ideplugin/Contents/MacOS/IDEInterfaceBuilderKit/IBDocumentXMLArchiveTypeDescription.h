//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString;

@interface IBDocumentXMLArchiveTypeDescription : NSObject <NSCopying>
{
    NSString *_archiveType;
    NSString *_version;
    NSString *_lastSavedInterfaceBuilderVersion;
    long long _kind;
}

@property(readonly) long long kind; // @synthesize kind=_kind;
@property(readonly) NSString *lastSavedInterfaceBuilderVersion; // @synthesize lastSavedInterfaceBuilderVersion=_lastSavedInterfaceBuilderVersion;
@property(readonly) NSString *version; // @synthesize version=_version;
@property(readonly) NSString *archiveType; // @synthesize archiveType=_archiveType;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToTypeDescription:(id)arg1;
- (unsigned long long)hash;
@property(readonly) long long compatibilityVersion;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithXMLArchiveType:(id)arg1 version:(id)arg2 kind:(long long)arg3 lastSavedInterfaceBuilderVersion:(id)arg4;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableData;

@interface LASecureData : NSObject
{
    _Bool reseted;
    NSMutableData *_data;
}

+ (void)resetBytes:(void *)arg1 length:(unsigned long long)arg2;
+ (id)secureDataWithString:(id)arg1;
+ (id)secureDataWithBytes:(const void *)arg1 length:(unsigned long long)arg2;
- (void).cxx_destruct;
- (unsigned long long)length;
- (const void *)bytes;
- (void)reset;
- (id)initWithBytes:(const void *)arg1 length:(unsigned long long)arg2;
- (id)initWithString:(id)arg1;
- (id)init;
- (void)dealloc;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class TSPData, TSUFlushingManager;

__attribute__((visibility("hidden")))
@interface TSDImageProvider : NSObject
{
    int mLoadState;
    TSPData *mImageData;
    int mRetainCount;
    int mOwnerCount;
    TSUFlushingManager *mFlushingManager;
    int mInterest;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
- (unsigned long long)retainCount;
- (oneway void)release;
- (id)retain;
- (void)ownerAccess;
- (void)removeOwner;
- (void)addOwner;
- (_Bool)hasFlushableContent;
- (void)setFlushingManager:(id)arg1;
- (void)flush;
- (void)removeInterest;
- (void)addInterest;
- (int)interest;
- (void)drawImageInContext:(struct CGContext *)arg1 rect:(struct CGRect)arg2;
- (_Bool)isError;
- (_Bool)isValid;
- (struct CGSize)dpiAdjustedNaturalSize;
- (struct CGSize)naturalSize;
- (id)imageData;
- (void)dealloc;
- (void)i_commonInit;
- (id)initWithImageData:(id)arg1;

@end


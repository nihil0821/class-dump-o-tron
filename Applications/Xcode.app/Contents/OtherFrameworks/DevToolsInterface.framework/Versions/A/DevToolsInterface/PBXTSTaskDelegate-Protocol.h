//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSString, PBXTSTask;

@protocol PBXTSTaskDelegate <NSObject>
- (void)task:(PBXTSTask *)arg1 outputData:(NSData *)arg2;
- (void)taskDidStop:(PBXTSTask *)arg1 stopRequested:(BOOL)arg2;
- (void)taskDidStart:(PBXTSTask *)arg1;
- (void)task:(PBXTSTask *)arg1 failureMessage:(NSString *)arg2;
@end


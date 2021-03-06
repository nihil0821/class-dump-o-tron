//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TSUReadChannel.h"

@class NSObject<OS_dispatch_data>, NSObject<OS_dispatch_queue>, NSString;

__attribute__((visibility("hidden")))
@interface TSPMemoryReadChannel : NSObject <TSUReadChannel>
{
    NSObject<OS_dispatch_data> *_dispatchData;
    NSObject<OS_dispatch_queue> *_accessQueue;
}

- (void).cxx_destruct;
- (void)close;
@property(readonly, nonatomic) _Bool isValid;
- (void)addBarrier:(CDUnknownBlockType)arg1;
- (void)setLowWater:(unsigned long long)arg1;
- (void)readWithQueue:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)readFromOffset:(long long)arg1 length:(unsigned long long)arg2 queue:(id)arg3 handler:(CDUnknownBlockType)arg4;
- (id)initWithNSData:(id)arg1;
- (id)initWithDispatchData:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


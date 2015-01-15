//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MZWorkItem.h"

@class MZWorkItem, NSArray, NSDate, NSDictionary, NSEnumerator;

@interface MZWorkSeries : NSObject <MZWorkItem>
{
    NSArray *_workItems;
    NSDate *_startTime;
    NSDate *_completeTime;
    NSEnumerator *_enumerator;
    int _status;
    id _nonretainedDelegate;
    MZWorkItem *_currentItem;
    long long _type;
    BOOL _delegateRespondsToStatusUpdates;
    NSDictionary *_userInfo;
}

+ (id)seriesWithWorkItems:(id)arg1;
+ (id)seriesWithWorkItem:(id)arg1;
+ (id)seriesWithWork:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (id)userInfo;
- (id)description;
- (id)descriptionWithLocale:(id)arg1 indent:(unsigned long long)arg2;
- (void)seriesCompleted;
- (id)completeTime;
- (id)startTime;
- (int)mode;
- (id)timerMode;
- (double)elapsedSecondsSinceStart;
- (double)estimatedCompletionSeconds;
- (id)estimatedCompletionTime;
- (id)throughputStatus;
- (id)infoMessages;
- (BOOL)hasInfoMessages;
- (id)warnings;
- (BOOL)hasErrors;
- (id)errors;
- (id)errorMessage;
- (id)statusMessage;
- (void)workItemStatusChanged:(id)arg1 status:(int)arg2;
- (BOOL)isCancelled;
- (BOOL)isRunning;
- (BOOL)isActive;
- (id)activeItem;
- (int)status;
- (double)percentComplete;
- (void)cancel;
- (void)start;
- (id)operationQueue;
- (void)dispatchNextItem;
- (void)cancelRemainingJobs;
- (void)setStatus:(int)arg1;
- (void)notifyWorkItemsOfSeriesCompletion;
- (void)setType:(long long)arg1;
- (long long)type;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)workItems;
- (void)dealloc;
- (id)initWithWorkItems:(id)arg1;
- (id)initWithWorkItem:(id)arg1;
- (id)initWithWork:(id)arg1;

@end

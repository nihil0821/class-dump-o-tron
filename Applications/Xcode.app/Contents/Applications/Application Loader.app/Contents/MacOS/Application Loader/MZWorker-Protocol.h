//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSError, NSString;

@protocol MZWorker <NSObject>
- (NSString *)errorMessage;
- (void)addInfoMessages:(NSArray *)arg1;
- (void)addWarnings:(NSArray *)arg1;
- (void)addWarning:(NSError *)arg1;
- (void)addErrors:(NSArray *)arg1;
- (void)addError:(NSError *)arg1;
- (BOOL)hasInfoMessages;
- (NSArray *)infoMessages;
- (BOOL)hasErrors;
- (NSArray *)warnings;
- (NSArray *)errors;
- (NSString *)statusMessage;
- (double)percentComplete;
- (void)cancel;
- (void)run;

@optional
- (void)seriesCompleted;
@end


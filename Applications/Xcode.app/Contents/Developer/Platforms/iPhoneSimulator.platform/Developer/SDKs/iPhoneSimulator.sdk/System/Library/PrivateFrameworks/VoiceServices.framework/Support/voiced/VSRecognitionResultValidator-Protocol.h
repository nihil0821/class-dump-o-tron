//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, VSRecognitionResult;

@protocol VSRecognitionResultValidator <NSObject>
- (VSRecognitionResult *)validRecognitionResultFromRecognitionResult:(VSRecognitionResult *)arg1;

@optional
- (VSRecognitionResult *)validRecognitionResultFromRecognitionResult:(VSRecognitionResult *)arg1 knownDisambiguationValues:(NSDictionary *)arg2;
@end

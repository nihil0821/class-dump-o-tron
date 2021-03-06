//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ITunesConnectFoundation/MZITunesProducerServiceClient.h>

@class NSArray, NSString;

@interface MZWebServiceSearch : MZITunesProducerServiceClient
{
    NSString *_contentType;
    NSArray *_searchFields;
    NSString *_keywords;
    NSArray *_results;
}

- (id)results;
- (void)setKeywords:(id)arg1;
- (id)keywords;
- (void)setSearchFields:(id)arg1;
- (id)searchFields;
- (void)setContentType:(id)arg1;
- (id)contentType;
- (id)processUncancelledSuccessfulResult:(id)arg1;
- (void)operationWillStart;
- (id)completedMessage;
- (int)numberOfMatchesInResults;
- (id)runningMessage;
- (id)initialMessage;
- (id)generateArguments;
- (id)operationMethod;
- (void)dealloc;

@end


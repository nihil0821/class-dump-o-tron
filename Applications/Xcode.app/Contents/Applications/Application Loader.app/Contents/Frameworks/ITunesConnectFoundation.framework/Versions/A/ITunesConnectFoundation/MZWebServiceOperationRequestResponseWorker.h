//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ITunesConnectFoundation/MZWebServiceOperationWorker.h>

@interface MZWebServiceOperationRequestResponseWorker : MZWebServiceOperationWorker
{
    BOOL _operationRespondsToAllMethods;
    double _responseAsPercentOfTotal;
}

- (double)percentComplete;
- (void)setResponseAsPercentOfTotal:(double)arg1;
- (double)responseAsPercentOfTotal;
- (id)initWithOperation:(id)arg1;
- (double)defaultResponseAsPercentOfTotal;

@end


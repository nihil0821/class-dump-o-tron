//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, RUStationActionsViewController;

@protocol RUStationActionsViewControllerDelegate <NSObject>

@optional
- (void)stationActionsViewController:(RUStationActionsViewController *)arg1 didFinishAction:(long long)arg2 withObject:(id)arg3 error:(NSError *)arg4;
- (void)stationActionsViewController:(RUStationActionsViewController *)arg1 willBeginAction:(long long)arg2;
@end

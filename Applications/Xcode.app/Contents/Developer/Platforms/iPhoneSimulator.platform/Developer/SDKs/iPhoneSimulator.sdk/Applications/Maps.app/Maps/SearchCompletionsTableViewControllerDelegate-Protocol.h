//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MKSearchCompletion, NSString, SearchCompletionsTableViewController, SearchResult, UIScrollView;

@protocol SearchCompletionsTableViewControllerDelegate <NSObject>
- (void)searchCompletionsTableViewController:(SearchCompletionsTableViewController *)arg1 didSelectSearchCompletion:(MKSearchCompletion *)arg2 forQuery:(NSString *)arg3;
- (void)searchCompletionsTableViewController:(SearchCompletionsTableViewController *)arg1 didSelectQueryCompletion:(NSString *)arg2 forQuery:(NSString *)arg3;
- (void)searchCompletionsTableViewController:(SearchCompletionsTableViewController *)arg1 didSelectHistoryItem:(id <HistoryItem>)arg2 forQuery:(NSString *)arg3;

@optional
- (void)searchCompletionsTableViewController:(SearchCompletionsTableViewController *)arg1 scrollViewDidScroll:(UIScrollView *)arg2;
- (void)searchCompletionsTableViewController:(SearchCompletionsTableViewController *)arg1 hasCompletionsForQuery:(NSString *)arg2;
- (void)searchCompletionsTableViewController:(SearchCompletionsTableViewController *)arg1 receivedNoCompletionsForQuery:(NSString *)arg2;
- (void)searchCompletionsTableViewController:(SearchCompletionsTableViewController *)arg1 didSelectRefinementResult:(SearchResult *)arg2 forQuery:(NSString *)arg3;
- (void)searchCompletionsTableViewControllerDidSelectCollectionsButton:(SearchCompletionsTableViewController *)arg1;
@end


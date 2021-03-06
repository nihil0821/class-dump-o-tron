//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PopoverSizingTableViewController.h"

#import "BookmarksPanelStateRestoring.h"
#import "BookmarksToolbarItemProvider.h"
#import "UIActionSheetDelegate.h"

@class NSArray, NSString, NSTimer, SafariClearBrowsingDataController, UIActionSheet, UIBarButtonItem;

@interface HistoryTableViewController : PopoverSizingTableViewController <UIActionSheetDelegate, BookmarksPanelStateRestoring, BookmarksToolbarItemProvider>
{
    NSArray *_browsingSessions;
    UIBarButtonItem *_clearHistoryButton;
    UIBarButtonItem *_doneBarButtonItem;
    _Bool _changingHistory;
    NSTimer *_saveChangesToCloudHistoryTimer;
    UIActionSheet *_clearHistoryAlertSheet;
    SafariClearBrowsingDataController *_clearDataController;
    id <HistoryTableViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <HistoryTableViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)safari_tableViewScrollPositionSaveIdentifier;
@property(readonly, nonatomic) NSString *collectionType;
- (void)restoreScrollPosition:(double)arg1;
- (double)currentScrollPosition;
- (_Bool)restoreStateWithDictionary:(id)arg1;
- (id)currentStateDictionary;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)_saveChangesToCloudHistory;
- (void)_saveChangesToCloudHistorySoon;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)_endEditing;
- (void)_clearHistory;
- (id)_clearHistoryAlertMessage;
- (void)updateClearHistoryButtonEnable;
- (id)_clearHistoryBarButtonItem;
- (id)_doneBarButtonItem;
- (id)bookmarksRightBarButtonItem;
- (id)bookmarksNavigationController;
- (void)dealloc;
- (id)init;
- (void)historyChanged:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


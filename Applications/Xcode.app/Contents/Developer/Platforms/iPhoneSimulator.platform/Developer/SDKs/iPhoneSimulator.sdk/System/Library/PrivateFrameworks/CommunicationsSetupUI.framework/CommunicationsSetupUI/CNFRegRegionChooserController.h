//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewController.h"

#import "CNFRegRegionChooserDelegate.h"
#import "PSController.h"
#import "UISearchBarDelegate.h"
#import "UISearchControllerDelegate.h"
#import "UISearchResultsUpdating.h"

@class NSArray, NSString, PSRootController, PSSpecifier, UISearchController, UIViewController<PSController>;

@interface CNFRegRegionChooserController : UITableViewController <UISearchResultsUpdating, UISearchControllerDelegate, UISearchBarDelegate, CNFRegRegionChooserDelegate, PSController>
{
    NSString *_selectedRegionID;
    NSArray *_regionList;
    NSArray *_filteredRegionList;
    id <CNFRegRegionChooserDelegate> _delegate;
    UIViewController<PSController> *_parentController;
    PSRootController *_rootController;
    PSSpecifier *_specifier;
    UISearchController *_searchController;
}

@property(retain, nonatomic) UISearchController *searchController; // @synthesize searchController=_searchController;
@property(retain, nonatomic) NSArray *filteredRegionList; // @synthesize filteredRegionList=_filteredRegionList;
@property(nonatomic) id <CNFRegRegionChooserDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *selectedRegionID; // @synthesize selectedRegionID=_selectedRegionID;
@property(retain, nonatomic) NSArray *regionList; // @synthesize regionList=_regionList;
- (void)statusBarWillAnimateByHeight:(double)arg1;
- (void)didWake;
- (void)didUnlock;
- (void)willUnlock;
- (void)didLock;
- (void)suspend;
- (void)willBecomeActive;
- (void)willResignActive;
- (_Bool)canBeShownFromSuspendedState;
- (void)handleURL:(id)arg1;
- (void)showController:(id)arg1 animate:(_Bool)arg2;
- (void)showController:(id)arg1;
- (id)readPreferenceValue:(id)arg1;
- (void)setPreferenceValue:(id)arg1 specifier:(id)arg2;
- (id)specifier;
- (void)setSpecifier:(id)arg1;
- (id)rootController;
- (void)setRootController:(id)arg1;
- (id)parentController;
- (void)setParentController:(id)arg1;
- (void)regionChooser:(id)arg1 selectedRegionID:(id)arg2;
- (void)didPresentSearchController:(id)arg1;
- (void)willPresentSearchController:(id)arg1;
- (void)_showTableViewCells;
- (void)_hideTableViewCells;
- (void)updateSearchResultsForSearchController:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)_selectRegionID:(id)arg1;
- (void)_selectRegionList:(id)arg1;
- (id)drillDownControllerList;
- (void)_drillDownControllersWithArray:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (void)dealloc;
- (void)viewDidUnload;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (id)initWithRegionList:(id)arg1 selectedRegionID:(id)arg2;
- (id)initWithStyle:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

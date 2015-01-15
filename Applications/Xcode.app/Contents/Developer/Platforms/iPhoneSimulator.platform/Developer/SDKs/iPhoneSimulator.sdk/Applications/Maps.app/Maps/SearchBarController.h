//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CollectionsViewControllerDelegate.h"
#import "MainChromeTopBarContentProvider.h"
#import "MapDimmingViewDelegate.h"
#import "SearchBarVariantRegularViewControllerProvider.h"
#import "SearchCompletionsTableViewControllerDelegate.h"
#import "UIPopoverPresentationControllerDelegate.h"
#import "UITextFieldDelegate.h"

@class BlurView, CollectionsViewController, MKSearchCompletion, MainChromeViewController, MapDimmingView, NSString, SearchBar, SearchBarEditSession, SearchBarVariantCompact, SearchBarVariantRegular, SearchCompletionsTableViewController, SearchFieldItem, SearchResult;

__attribute__((visibility("hidden")))
@interface SearchBarController : NSObject <MapDimmingViewDelegate, CollectionsViewControllerDelegate, SearchBarVariantRegularViewControllerProvider, UIPopoverPresentationControllerDelegate, SearchCompletionsTableViewControllerDelegate, UITextFieldDelegate, MainChromeTopBarContentProvider>
{
    id <SearchBarControllerDelegate> _delegate;
    SearchFieldItem *_searchItem;
    SearchBarVariantCompact *_searchBarCompressed;
    SearchBarVariantRegular *_searchBarRegular;
    SearchCompletionsTableViewController *_searchCompletionsController;
    _Bool _explicitlyResigningFirstResponder;
    double _leftEdgeOfTextForHorizontalScroll;
    _Bool _isShowingDimmingView;
    MapDimmingView *_mapDimmingView;
    SearchBarEditSession *_editSession;
    _Bool _fullscreenCompletionsEnabled;
    _Bool _searchBarWasActiveBeforeContentChange;
    _Bool _hadCompletionsBeforeContentChange;
    CollectionsViewController *_collectionsViewController;
    BlurView *_blurView;
    MainChromeViewController *_chromeViewController;
}

@property(nonatomic) MainChromeViewController *chromeViewController; // @synthesize chromeViewController=_chromeViewController;
@property(nonatomic) __weak id <SearchBarControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)collectionsViewControllerCreatingIfNeeded:(_Bool)arg1;
- (id)searchCompletionsControllerCreatingIfNeeded:(_Bool)arg1;
- (_Bool)isShowingCollections;
- (void)dismissCollectionsAnimated:(_Bool)arg1;
- (void)prepareForPopoverPresentation:(id)arg1;
- (void)showCollectionsWithMode:(int)arg1;
- (void)showCollections;
- (int)searchMode;
- (void)closeCollectionsViewController:(id)arg1;
- (void)collectionsViewController:(id)arg1 choseHistoryItem:(id)arg2;
- (void)collectionsViewController:(id)arg1 choseAddress:(id)arg2;
- (void)collectionsViewController:(id)arg1 choseBookmark:(id)arg2;
- (id)collectionsViewController;
- (void)_fadeMapDimmingViewAnimationDidStop:(id)arg1 finished:(id)arg2 context:(void *)arg3;
- (void)showDimmingView:(_Bool)arg1;
- (void)mapDimmingViewWasTapped:(id)arg1;
- (id)_mapDimmingView;
- (void)showFullscreenCompletions:(_Bool)arg1 animated:(_Bool)arg2;
- (void)searchCompletionsTableViewController:(id)arg1 didSelectSearchCompletion:(id)arg2 forQuery:(id)arg3;
- (void)searchCompletionsTableViewController:(id)arg1 didSelectQueryCompletion:(id)arg2 forQuery:(id)arg3;
- (int)collectionsMode;
- (void)searchCompletionsTableViewController:(id)arg1 didSelectHistoryItem:(id)arg2 forQuery:(id)arg3;
- (void)searchCompletionsTableViewControllerDidSelectCollectionsButton:(id)arg1;
- (void)searchCompletionsTableViewController:(id)arg1 receivedNoCompletionsForQuery:(id)arg2;
- (void)searchCompletionsTableViewController:(id)arg1 hasCompletionsForQuery:(id)arg2;
- (void)searchCompletionsTableViewController:(id)arg1 scrollViewDidScroll:(id)arg2;
- (void)_textFieldDidChange:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)_clearMapResults;
- (_Bool)textFieldShouldEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (_Bool)textFieldShouldClear:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (_Bool)resignFirstResponder;
- (void)cancelButtonWasTapped;
- (void)_restoreOriginalSearchString;
- (_Bool)_endEditing;
@property(readonly, nonatomic) SearchCompletionsTableViewController *completionsViewControllerIfExists;
@property(readonly, nonatomic) SearchCompletionsTableViewController *completionsViewController;
- (void)clearSearchField;
@property(retain, nonatomic) MKSearchCompletion *searchCompletion;
@property(retain, nonatomic) SearchResult *searchResult;
@property(retain, nonatomic) NSString *searchString;
- (void)_setSearchString:(id)arg1 forCompletedQuery:(id)arg2;
- (void)_updateSearchFieldView;
- (void)layoutForUnobscuredBoundsChange;
- (void)_performWithEachSearchBar:(CDUnknownBlockType)arg1;
- (void)chromeViewController:(id)arg1 topBarDidMoveFromContent:(id)arg2 toContent:(id)arg3;
- (void)chromeViewController:(id)arg1 topBarWillMoveFromContent:(id)arg2 toContent:(id)arg3;
@property(readonly, nonatomic) SearchBar *searchBar;
- (id)topBarContentForVariant:(long long)arg1;
- (id)_currentSearchBar;
- (id)presentationSourceForShareSheet;
- (id)presentationSourceForDirectionsSearch;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

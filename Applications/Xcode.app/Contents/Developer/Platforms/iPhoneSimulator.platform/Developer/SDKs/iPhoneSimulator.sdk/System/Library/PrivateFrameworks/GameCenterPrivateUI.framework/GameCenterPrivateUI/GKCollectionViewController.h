//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewController.h"

#import "GKCollectionViewDataSourceDelegate.h"
#import "GKSegmentedSectionDataSourceEventHandler.h"
#import "GKStateMachineDelegate.h"
#import "UISearchBarDelegate.h"
#import "UITextFieldDelegate.h"

@class GKColorPalette, GKLoadableContentStateMachine, GKPlaceholderView, GKSearchBar, GKSwipeToEditStateMachine, NSMapTable, NSString, UIActivityIndicatorView, UICollectionViewLayout;

@interface GKCollectionViewController : UICollectionViewController <GKStateMachineDelegate, GKCollectionViewDataSourceDelegate, UISearchBarDelegate, UITextFieldDelegate, GKSegmentedSectionDataSourceEventHandler>
{
    _Bool _skipLoadAfterViewDidLoad;
    _Bool _shouldSlideInContents;
    _Bool _supportsMasterSelectionBehavior;
    _Bool _showSupplementaryViewsWhileLoading;
    _Bool _readyToDisplayData;
    _Bool _active;
    _Bool _hasViewFactories;
    _Bool _didSlideIn;
    GKColorPalette *_colorPalette;
    id <UICollectionViewDataSource> _dataSource;
    GKPlaceholderView *_placeholderView;
    NSString *_currentSearchText;
    GKLoadableContentStateMachine *_loadingMachine;
    UICollectionViewLayout *_defaultLayout;
    GKSearchBar *_activeSearchBar;
    UIActivityIndicatorView *_loadingIndicatorView;
    long long _gkFocusBubbleType;
    long long _previousOrientation;
    long long _appearCount;
    NSMapTable *_reusableViewsIHaveSeen;
    GKSwipeToEditStateMachine *_swipeStateMachine;
    struct UIEdgeInsets _contentInsetsBeforeKeyboard;
    struct UIEdgeInsets _scrollInsetsBeforeKeyboard;
}

+ (_Bool)_shouldForwardViewWillTransitionToSize;
@property(retain, nonatomic) GKSwipeToEditStateMachine *swipeStateMachine; // @synthesize swipeStateMachine=_swipeStateMachine;
@property(retain, nonatomic) NSMapTable *reusableViewsIHaveSeen; // @synthesize reusableViewsIHaveSeen=_reusableViewsIHaveSeen;
@property(nonatomic) struct UIEdgeInsets scrollInsetsBeforeKeyboard; // @synthesize scrollInsetsBeforeKeyboard=_scrollInsetsBeforeKeyboard;
@property(nonatomic) struct UIEdgeInsets contentInsetsBeforeKeyboard; // @synthesize contentInsetsBeforeKeyboard=_contentInsetsBeforeKeyboard;
@property long long appearCount; // @synthesize appearCount=_appearCount;
@property _Bool didSlideIn; // @synthesize didSlideIn=_didSlideIn;
@property _Bool hasViewFactories; // @synthesize hasViewFactories=_hasViewFactories;
@property _Bool active; // @synthesize active=_active;
@property(nonatomic) long long previousOrientation; // @synthesize previousOrientation=_previousOrientation;
@property(nonatomic) long long gkFocusBubbleType; // @synthesize gkFocusBubbleType=_gkFocusBubbleType;
@property(retain, nonatomic) UIActivityIndicatorView *loadingIndicatorView; // @synthesize loadingIndicatorView=_loadingIndicatorView;
@property(retain, nonatomic) GKSearchBar *activeSearchBar; // @synthesize activeSearchBar=_activeSearchBar;
@property(retain, nonatomic) UICollectionViewLayout *defaultLayout; // @synthesize defaultLayout=_defaultLayout;
@property(retain, nonatomic) GKLoadableContentStateMachine *loadingMachine; // @synthesize loadingMachine=_loadingMachine;
@property(retain, nonatomic) NSString *currentSearchText; // @synthesize currentSearchText=_currentSearchText;
@property(retain, nonatomic) GKPlaceholderView *placeholderView; // @synthesize placeholderView=_placeholderView;
@property(readonly, nonatomic) _Bool readyToDisplayData; // @synthesize readyToDisplayData=_readyToDisplayData;
@property(nonatomic) _Bool showSupplementaryViewsWhileLoading; // @synthesize showSupplementaryViewsWhileLoading=_showSupplementaryViewsWhileLoading;
@property(nonatomic) _Bool supportsMasterSelectionBehavior; // @synthesize supportsMasterSelectionBehavior=_supportsMasterSelectionBehavior;
@property(retain, nonatomic) id <UICollectionViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) _Bool shouldSlideInContents; // @synthesize shouldSlideInContents=_shouldSlideInContents;
- (void)clearSelectionHighlight;
- (void)willDismissActionSheetFromCell:(id)arg1;
- (void)segmentedSectionDataSource:(id)arg1 inSection:(unsigned long long)arg2 didSelectDataSourceWithIndex:(long long)arg3;
- (void)collectionView:(id)arg1 willDisplaySupplementaryView:(id)arg2 forElementKind:(id)arg3 atIndexPath:(id)arg4;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (_Bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)didDisplayData;
- (void)hidePlaceholderAnimated:(_Bool)arg1;
- (void)showPlaceholderWithTitle:(id)arg1 message:(id)arg2 buttonTitle:(id)arg3 animated:(_Bool)arg4 block:(CDUnknownBlockType)arg5;
- (void)slideInContents;
- (void)completeWhenReadyToDisplayData:(CDUnknownBlockType)arg1;
- (void)didBecomeReadyToDisplayData;
- (void)setIsReadyToDisplayData:(_Bool)arg1;
- (void)viewDidDisappearAnimated:(_Bool)arg1 bubbleFlow:(_Bool)arg2;
- (void)stopLoadingIndicator;
- (void)stopLoadingIndicatorWithoutAnimation;
- (void)startLoadingIndicator;
- (_Bool)hasLoaded;
- (void)_reallyStartLoadingIndicator;
- (void)didExitLoadedState;
- (void)didEnterLoadedState;
- (void)didExitErrorState;
- (void)didEnterErrorState;
- (void)didExitNoContentState;
- (void)didEnterNoContentState;
- (void)didExitLoadingState;
- (void)didExitRefreshingState;
- (void)didEnterRefreshingState;
- (void)didEnterLoadingState;
- (void)stateDidChangeFromNilToLoadingState;
- (void)stateDidChangeFromLoadedStateToLoadingState;
- (void)stateDidChangeFromErrorStateToLoadingState;
- (void)stateDidChangeFromNoContentStateToLoadingState;
- (void)stateDidChange;
- (void)stateWillChange;
@property(readonly, nonatomic) NSString *loadingState;
- (void)applyShowMoreLayoutAttributesForShowMoreView:(id)arg1 atIndexPath:(id)arg2;
- (double)showMoreTextMarginAtIndexPath:(id)arg1;
- (id)footerViewAboveShowMoreViewAtIndexPath:(id)arg1;
- (void)didTouchShowMore:(id)arg1;
- (void)dataSource:(id)arg1 performBatchUpdate:(CDUnknownBlockType)arg2 complete:(CDUnknownBlockType)arg3;
- (void)dataSourceDidMoveSectionsWithItems:(id)arg1;
- (void)dataSourceDidReloadData:(id)arg1;
- (void)dataSource:(id)arg1 didUpdatePlaceholderVisibility:(_Bool)arg2;
- (void)dataSource:(id)arg1 didMoveSection:(long long)arg2 toSection:(long long)arg3;
- (void)dataSource:(id)arg1 didRefreshSections:(id)arg2;
- (void)dataSource:(id)arg1 didMoveItemAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (void)dataSource:(id)arg1 didRemoveSections:(id)arg2;
- (void)dataSource:(id)arg1 didInsertSections:(id)arg2;
- (void)dataSource:(id)arg1 didRefreshItemsAtIndexPaths:(id)arg2;
- (void)dataSource:(id)arg1 didRemoveItemsAtIndexPaths:(id)arg2;
- (void)dataSource:(id)arg1 didInsertItemsAtIndexPaths:(id)arg2;
- (_Bool)_gkShouldRefreshContentsForDataType:(unsigned int)arg1 userInfo:(id)arg2;
- (void)_gkRefreshContentsForDataType:(unsigned int)arg1 userInfo:(id)arg2;
- (void)loadDataWithCompletionHandlerAndError:(CDUnknownBlockType)arg1;
- (void)_loadDataWithCompletionHandlerAndError:(CDUnknownBlockType)arg1;
- (void)refreshContentsForDataType:(unsigned int)arg1 userInfo:(id)arg2 updateNotifier:(id)arg3;
- (void)_applyUpdates:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)_finishUpdates:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)_gkSetContentsNeedUpdateWithHandler:(CDUnknownBlockType)arg1;
- (void)setNeedsReload;
- (void)invalidateSearch;
- (id)currentSearchTerms;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (void)clearButtonPressed:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarTextDidEndEditing:(id)arg1;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (_Bool)searchBarShouldBeginEditing:(id)arg1;
- (void)keyboardWillBeHidden:(id)arg1;
- (void)keyboardWasShown:(id)arg1;
@property(retain, nonatomic) GKColorPalette *colorPalette; // @synthesize colorPalette=_colorPalette;
- (id)defaultColorPalette;
- (id)defaultBubbleSpec;
- (id)gkDataSource;
- (void)configureViewFactories;
- (void)configureDataSource;
- (void)updateMetrics;
- (void)traitCollectionDidChange:(id)arg1;
- (void)_systemContentSizeSettingDidChange:(id)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)showDetailForSelectedItem;
- (id)preservedIndexPathForSelectedItem;
- (id)nearestSelectableIndexPath:(id)arg1;
- (void)updateSelectionHighlight;
- (void)updateLayoutGuideOffsets;
- (void)viewDidLoad;
- (void)loadView;
- (id)collectionView;
- (id)_gkRecursiveDescription;
- (void)dealloc;
- (id)initWithCollectionViewLayout:(id)arg1;
- (void)swipeToDeleteCell:(id)arg1;
- (void)shutActionPaneAnimated:(_Bool)arg1;
- (void)showCollectionView;
@property(nonatomic) _Bool skipLoadAfterViewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

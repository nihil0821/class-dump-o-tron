//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <StoreKitUI/SKUIStorePageSection.h>

#import "SKUIMissingItemDelegate.h"
#import "SKUITrackSwooshViewControllerDelegate.h"

@class NSString, SKUIMissingItemLoader, SKUISwooshPageComponent, SKUITrackSwooshArtworkLoader, SKUITrackSwooshViewController;

@interface SKUITrackSwooshPageSection : SKUIStorePageSection <SKUIMissingItemDelegate, SKUITrackSwooshViewControllerDelegate>
{
    SKUITrackSwooshArtworkLoader *_artworkLoader;
    SKUIMissingItemLoader *_missingItemLoader;
    SKUITrackSwooshViewController *_swooshViewController;
}

- (void).cxx_destruct;
- (id)_swooshViewController;
- (id)_missingItemLoader;
- (void)_loadMissingItemsFromIndex:(long long)arg1 withReason:(long long)arg2;
- (id)_artworkLoader;
- (void)_addImpressionForItemIndex:(long long)arg1 toSession:(id)arg2;
- (void)swooshDidSelectSeeAll:(id)arg1;
- (void)swoosh:(id)arg1 willDisplayCellAtIndex:(long long)arg2;
- (id)swoosh:(id)arg1 imageForCellAtIndex:(long long)arg2;
- (void)swoosh:(id)arg1 didSelectCellAtIndex:(long long)arg2;
- (void)swoosh:(id)arg1 didDoubleTapCellAtIndex:(long long)arg2;
- (id)swoosh:(id)arg1 didConfirmItemOfferForItemAtIndex:(long long)arg2;
- (void)missingItemLoader:(id)arg1 didLoadItems:(id)arg2;
- (void)willAppearInContext:(id)arg1;
- (void)prefetchResourcesWithReason:(long long)arg1;
- (long long)numberOfCells;
- (void)collectionViewDidEndDisplayingCellForItemAtIndexPath:(id)arg1;
- (struct CGSize)cellSizeForIndexPath:(id)arg1;
- (id)cellForIndexPath:(id)arg1;
- (void)addImpressionsForIndexPath:(id)arg1 toSession:(id)arg2;
- (void)dealloc;
- (id)initWithPageComponent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) SKUISwooshPageComponent *pageComponent; // @dynamic pageComponent;
@property(readonly) Class superclass;

@end


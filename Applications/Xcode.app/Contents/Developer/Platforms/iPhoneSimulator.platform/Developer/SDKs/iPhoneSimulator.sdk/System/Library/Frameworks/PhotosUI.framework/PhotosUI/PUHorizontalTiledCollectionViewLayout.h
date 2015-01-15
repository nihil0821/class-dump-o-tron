//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewLayout.h"

@class PUCollectionViewData, UICollectionViewLayoutAttributes;

@interface PUHorizontalTiledCollectionViewLayout : UICollectionViewLayout
{
    PUCollectionViewData *_data;
    UICollectionViewLayoutAttributes *_dummyAttrs;
    double _interitemSpacing;
    id <PUHorizontalTiledCollectionViewLayoutDelegate> _delegate;
    struct UIEdgeInsets _itemsContentInset;
}

+ (Class)invalidationContextClass;
@property(nonatomic) __weak id <PUHorizontalTiledCollectionViewLayoutDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) struct UIEdgeInsets itemsContentInset; // @synthesize itemsContentInset=_itemsContentInset;
@property(nonatomic) double interitemSpacing; // @synthesize interitemSpacing=_interitemSpacing;
- (void).cxx_destruct;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (struct CGSize)collectionViewContentSize;
- (void)prepareLayout;
- (void)invalidateLayoutWithContext:(id)arg1;
- (id)invalidationContextForBoundsChange:(struct CGRect)arg1;
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (id)layoutAttributesForItemsInRect:(struct CGRect)arg1;
- (_Bool)_shouldInvalidateCachedLayoutForBoundsChange:(struct CGRect)arg1;
- (void)invalidateCachedLayout;
@property(readonly, nonatomic) _Bool hasReferenceIndexPath;
- (id)_layoutAttributesForItemAtIndexPath:(id)arg1;
- (void)_ensureIndexPath:(id)arg1 inData:(id)arg2;
- (void)_ensureRect:(struct CGRect)arg1 inData:(id)arg2 outDeltaOriginX:(double *)arg3;
- (_Bool)_updateLayoutData:(id)arg1 inDirection:(long long)arg2 outDeltaOriginX:(double *)arg3;
- (id)init;

@end

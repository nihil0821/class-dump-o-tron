//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTableView.h"

@class NSArray, NSTableColumn;

@interface NSTableView (IBNSTableViewIntegration)
+ (id)keyPathsForValuesAffectingIbInspectedRowHeight;
+ (id)keyPathsForValuesAffectingIbShadowedRowHeight;
+ (id)keyPathsForValuesAffectingIbShadowedRowSizeStyle;
+ (id)ibSampleController;
+ (id)keyPathsForValuesAffectingIbInspectedVerticalGridStyleMask;
+ (id)keyPathsForValuesAffectingIbInspectedHorizontalGridStyleMask;
+ (id)keyPathsForValuesAffectingIbInspectedNumberOfTableColumns;
+ (id)keyPathsForValuesAffectingIbInspectedHasHeaderView;
- (void)unarchivePlaceholderTables:(id)arg1;
- (void)archivePlaceholderTables:(id)arg1;
- (void)unarchiveRegisteredNibsByIdentifier:(id)arg1;
- (void)archiveRegisteredNibsByIdentifier:(id)arg1;
- (id)ibDocumentationPropertyInfosForKeyPath:(id)arg1;
- (unsigned long long)ibCustomSubviewLayoutStrategy;
- (BOOL)ibShouldUseConstraintsInsteadOfAutoresizingWhenChildOfClipView;
- (BOOL)ibChildView:(id)arg1 shouldUseConstraintsInsteadOfAutoresizingWhenAddedToDocument:(id)arg2;
- (BOOL)ibIsArbitrationUnitLeaf;
- (void)ibPrepareCocoaDocumentForCompiling:(id)arg1 withContext:(id)arg2;
- (BOOL)isContainedTableColumn:(id)arg1;
- (void)ibSyncRowHeightWithContainedViewsIfNecessary;
- (void)setIbInspectedRowHeight:(id)arg1;
- (id)ibInspectedRowHeight;
- (void)setIbShadowedRowHeight:(double)arg1;
- (double)ibShadowedRowHeight;
@property long long ibShadowedRowSizeStyle;
- (void)setIbInspectedLineBreakMode:(long long)arg1;
- (long long)ibInspectedLineBreakMode;
- (void)setIbInspectedContinuous:(long long)arg1;
- (long long)ibInspectedContinuous;
- (void)setIbInspectedBaseWritingDirection:(long long)arg1;
- (long long)ibInspectedBaseWritingDirection;
- (void)setIbInspectedUserInterfaceLayoutDirection:(long long)arg1;
- (long long)ibInspectedUserInterfaceLayoutDirection;
- (void)setIbInspectedTruncatesLastVisibleLine:(long long)arg1;
- (long long)ibInspectedTruncatesLastVisibleLine;
- (void)setIbInspectedRefusesFirstResponder:(long long)arg1;
- (long long)ibInspectedRefusesFirstResponder;
- (long long)ibInspectedEnabled;
- (void)awakeAfterUsingDocumentUnarchiver:(id)arg1;
- (id)awakeAfterUsingCoder:(id)arg1;
- (id)ibAcceptContentsOfPasteboard:(id)arg1 inDocument:(id)arg2 insertionContext:(id)arg3;
- (BOOL)ibCanAcceptContentsOfPasteboard:(id)arg1 inDocument:(id)arg2 targetChildRelation:(id *)arg3;
- (void)ibSwizzledReadPersistentTableColumns;
- (void)ibSwizzledWritePersistentTableColumns;
- (void)ibAwakeInDocument:(id)arg1;
- (id)ibBeginDesigningInDocument:(id)arg1;
- (id)ibSwizzledInitWithCoder:(id)arg1;
- (void)ibSwizzledEncodeWithCoder:(id)arg1;
- (void)setInitingDesignableTableView:(BOOL)arg1;
- (BOOL)isInitingDesignableTableView;
@property unsigned long long ibInspectedControlSize;
- (BOOL)ibHasSingleCell;
- (void)ibDidRemoveFromDocument:(id)arg1;
- (void)ibDidAddToDocument:(id)arg1 phase:(unsigned long long)arg2;
- (BOOL)ibIsUserMovable;
- (BOOL)ibIsUserSizable;
- (BOOL)ibIsNSAppearanceContainer;
- (id)ibPasteboardTypes;
- (BOOL)ibIsChildInitiallySelectable:(id)arg1;
- (BOOL)ibIsChildTypicalConnectionTarget:(id)arg1;
@property(readonly) NSTableColumn *ibDefaultTableColumnForInsertion;
- (Class)ibDefaultTableColumnClassForInsertion;
@property(copy) NSArray *ibShadowedTableColumns;
- (void)ibRemoveTableColumnObservers;
- (void)ibAddTableColumnObservers;
- (struct CGSize)ibPreferredSize;
- (struct CGSize)ibPreferredSizeForSize:(struct CGSize)arg1 suggestedWidth:(char *)arg2 suggestedHeight:(char *)arg3 scaleAxesIndependently:(char *)arg4;
- (double)ibClosestHeightForHeight:(double)arg1;
- (void)ibDidSuggestLayout:(struct CGRect)arg1 inView:(id)arg2 context:(id)arg3;
- (struct CGRect)ibRectForChild:(id)arg1 inFrameController:(id)arg2;
- (Class)ibEditorClass;
- (void)ibWarnings:(id)arg1 forDocument:(id)arg2 withComputationContext:(id)arg3;
- (void)ibRemoveChildren:(id)arg1;
- (void)ibPopulateEditorSelectionOrderRelationLists:(id)arg1;
- (void)ibPopulateChildRelationOrder:(id)arg1;
- (void)ibPopulateObjectsForFloatingPanels:(id)arg1;
- (void)resizeSubviewsWithOldSize:(struct CGSize)arg1;
- (void)ibSwizzledViewWillDraw;
- (void)ibSyncSubviewsOfTableColumns;
- (void)ibLayoutSubviewsOfTableColumnsResizingTableCellViews:(BOOL)arg1;
- (void)setIbInspectedVerticalGridStyleMask:(unsigned long long)arg1;
- (unsigned long long)ibInspectedVerticalGridStyleMask;
- (void)setIbInspectedHorizontalGridStyleMask:(unsigned long long)arg1;
- (unsigned long long)ibInspectedHorizontalGridStyleMask;
@property long long ibInspectedNumberOfTableColumns;
- (void)setIbInspectedHasHeaderView:(BOOL)arg1;
- (BOOL)ibInspectedHasHeaderView;
- (id)ibContainingScrollViewInDocument:(id)arg1;
@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DevToolsInterface/XCElementAnchorImp.h>

@class NSCell, NSColor, NSCursor, NSMutableArray, NSObject, NSView, NSViewController, XCElementCPlacerImp, XCElementImp, XCElementView;

@interface XCElementMainImp : XCElementAnchorImp
{
    XCElementView *_elementView;
    struct _XCESize _layoutMinSize;
    struct _XCESize _layoutMaxSize;
    XCElementImp *_selectedElement;
    NSView *_firstKeyView;
    NSView *_lastKeyView;
    NSColor *_backgroundColor;
    NSColor *_alternateBackgroundColor;
    XCElementCPlacerImp *_editingPlacer;
    NSCell *_editingCell;
    struct NSObject *_editingElement;
    NSObject *_editingObject;
    struct CGRect _editingEditorOffsets;
    NSMutableArray *_tabCandidates;
    struct NSObject *_actionDelegate;
    NSViewController *_vC;
    NSView *_currentKeyView;
    struct __CFRunLoopObserver *_runLoopObserver;
    long long _inCallMakeFirstResponder;
    long long _withinDrawRect;
    struct NSObject *_higlightElement;
    NSObject *_editorRegistrationObject;
    NSCursor *_uniqueCursor;
    void *_observationInfo;
    int _positionIndependentSizing;
    BOOL _computedKeyLoop;
    BOOL _resizesLayoutVertically;
    BOOL _resizesLayoutHorizontally;
    BOOL _resizesViewVertically;
    BOOL _resizesViewHorizontally;
    BOOL _resizesWindowVertically;
    BOOL _resizesWindowHorizontally;
    BOOL _mayExtendBeyondWindowVertically;
    BOOL _mayExtendBeyondWindowHorizontally;
    BOOL _inResizingContext;
    BOOL _inResizingView;
    BOOL _continouslyPropagateMinSizeToWindow;
    BOOL _positioningView;
    BOOL _didDisableFlushWindow;
    BOOL _needsFinishPositioning;
    BOOL _frameChangedPostponed;
}

@property(retain, nonatomic) NSCursor *uniqueCursor; // @synthesize uniqueCursor=_uniqueCursor;
@property(nonatomic) long long withinDrawRect; // @synthesize withinDrawRect=_withinDrawRect;
@property(nonatomic) NSViewController *vC; // @synthesize vC=_vC;
- (void)finalize;
- (void)dealloc;
- (void)_releaseValuesMainElement;
- (void)clearView;
- (id)initInView:(id)arg1;
- (BOOL)hasEditingEditorsForAnchor:(struct NSObject *)arg1;
- (void)discardEditingEditorsForAnchor:(struct NSObject *)arg1;
- (BOOL)commitEditingEditorsForAnchor:(struct NSObject *)arg1;
- (void)objectDidEndEditing:(struct NSObject *)arg1 inElement:(struct NSObject *)arg2;
- (void)objectDidBeginEditing:(struct NSObject *)arg1 inElement:(struct NSObject *)arg2;
- (id)effectivEditorRegistrationObject;
- (id)editorRegistrationObject;
- (void)setEditorRegistrationObject:(id)arg1;
- (void *)observationInfo;
- (void)setObservationInfo:(void *)arg1;
- (void)highlightSearchResult:(id)arg1;
- (void)applicationDidUpdate:(id)arg1;
- (void)applicationWillUpdate:(id)arg1;
- (void)windowDidUpdate:(id)arg1;
- (void)detachFromWindow;
- (void)attachToWindow;
- (void)_invalidateRunLoopObserver;
- (void)_addRunLoopObserver;
- (void)_observeRunLoop:(unsigned long long)arg1;
- (struct NSObject *)actionDelegate;
- (void)setActionDelegate:(struct NSObject *)arg1;
- (void)_positionElements:(BOOL)arg1;
- (void)_resizeWindowOldVisibleSize:(struct CGSize)arg1 newSize:(struct CGSize)arg2;
- (void)_tileGrowBoxOwner;
- (void)updateData;
- (void)_processViewWillDraw;
- (void)_clearNeedPositionElementsState;
- (void)positionElementsIfNeeded;
- (void)_enableFlushWindowIfNeeded;
- (void)finishPositioningIfNeeded;
- (void)processFrameChangedIfNeeded;
- (void)_frameChanged:(id)arg1;
- (void)_frameChangedPostponed:(id)arg1;
- (void)needFinishPositioning;
- (void)needPositionElements;
- (void)deleteSelf;
- (void)addParent:(struct NSObject *)arg1;
- (void)setEditingObject:(id)arg1;
- (id)editingObject;
- (void)setEditingElement:(struct NSObject *)arg1;
- (struct NSObject *)editingElement;
- (struct CGRect)editingEditorOffsets;
- (void)setEditingEditorOffsets:(struct CGRect)arg1;
- (id)editingCell;
- (void)setEditingCell:(id)arg1;
- (id)editingPlacer;
- (void)setEditingPlacer:(id)arg1;
- (id)backgroundColor;
- (void)setBackgroundColor:(id)arg1;
- (id)alternateBackgroundColor;
- (void)setAlternateBackgroundColor:(id)arg1;
- (void)drawForeground:(struct CGRect)arg1;
- (void)drawOwnBackground:(struct CGRect)arg1;
- (id)currentKeyView;
- (id)setCurrentKeyView:(id)arg1;
- (id)lastKeyView;
- (id)setLastKeyView:(id)arg1;
- (id)firstKeyView;
- (id)setFirstKeyView:(id)arg1;
- (void)makeSelected:(id)arg1;
- (id)selectedElement;
- (void)setSelected:(BOOL)arg1 element:(id)arg2;
- (void)updateForSelection;
- (void)structureChanged;
- (struct NSObject *)tabCandidatePreceding:(struct NSObject *)arg1;
- (struct NSObject *)tabCandidateFollowing:(struct NSObject *)arg1;
- (void)removeTabCandidates;
- (void)addTabCandidate:(id)arg1;
- (struct _XCESize)positionMain;
- (void)setContinouslyPropagateMinSizeToWindow:(BOOL)arg1;
- (BOOL)continouslyPropagateMinSizeToWindow;
- (BOOL)_canResizeViewVertically;
- (BOOL)_canResizeViewHorizontally;
- (void)setInCallMakeFirstResponder:(long long)arg1;
- (long long)inCallMakeFirstResponder;
- (void)endPositionIndependentSizing;
- (void)beginPositionIndependentSizing;
- (BOOL)positionIndependentSizing;
- (void)setPositioningView:(BOOL)arg1;
- (BOOL)positioningView;
- (void)setMayExtendBeyondWindowHorizontally:(BOOL)arg1;
- (void)setMayExtendBeyondWindowVertically:(BOOL)arg1;
- (BOOL)mayExtendBeyondWindowHorizontally;
- (BOOL)mayExtendBeyondWindowVertically;
- (void)setResizesWindowHorizontally:(BOOL)arg1;
- (void)setResizesWindowVertically:(BOOL)arg1;
- (BOOL)resizesWindowHorizontally;
- (BOOL)resizesWindowVertically;
- (void)setResizesViewHorizontally:(BOOL)arg1;
- (void)setResizesViewVertically:(BOOL)arg1;
- (BOOL)resizesViewHorizontally;
- (BOOL)resizesViewVertically;
- (void)setResizesLayoutHorizontally:(BOOL)arg1;
- (void)setResizesLayoutVertically:(BOOL)arg1;
- (BOOL)resizesLayoutHorizontally;
- (BOOL)resizesLayoutVertically;
- (void)_calculateLayoutSizes;
- (struct _XCESize)_adjustLayoutSizeForWindowAndScreen:(struct _XCESize)arg1;
- (struct _XCESize)_layoutMaxSize;
- (struct _XCESize)_layoutMinSize;
- (id)elementView;

@end

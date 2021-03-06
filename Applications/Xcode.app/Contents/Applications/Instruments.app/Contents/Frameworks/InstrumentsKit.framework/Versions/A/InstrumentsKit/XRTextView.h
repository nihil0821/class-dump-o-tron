//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DVTSourceTextView.h"

#import "XREditableEntity.h"

@class NSString;

@interface XRTextView : DVTSourceTextView <XREditableEntity>
{
    id <XRTextViewDragDestination> _dragDestinationDelegate;
    BOOL _displaysVerticalMarkupInScroller;
    BOOL _isDirty;
    BOOL _disassembledTextOnly;
}

- (BOOL)isDirty;
- (void)setIsDirty:(BOOL)arg1;
- (void)_userDidEditText:(id)arg1;
- (void)viewDidMoveToWindow;
- (BOOL)writeSelectionToPasteboard:(id)arg1 type:(id)arg2;
- (BOOL)readSelectionFromPasteboard:(id)arg1 type:(id)arg2;
- (id)writablePasteboardTypes;
- (id)readablePasteboardTypes;
- (BOOL)displaysVerticalMarkupInScroller;
- (void)setDisplaysVerticalMarkupInScroller:(BOOL)arg1;
- (BOOL)performDragOperation:(id)arg1;
- (BOOL)prepareForDragOperation:(id)arg1;
- (unsigned long long)draggingUpdated:(id)arg1;
- (unsigned long long)draggingEntered:(id)arg1;
- (id)dragDestinationDelegate;
- (void)setDragDestinationDelegate:(id)arg1;
- (void)display;
- (BOOL)shouldTrimTrailingWhitespace;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


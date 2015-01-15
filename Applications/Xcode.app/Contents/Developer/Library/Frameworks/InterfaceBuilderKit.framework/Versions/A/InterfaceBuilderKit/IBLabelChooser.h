//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class IBLabelDefinition, NSArray, NSDictionary;

@interface IBLabelChooser : NSView
{
    NSArray *labelDefinitions;
    NSDictionary *labelDefinitionIndexes;
    NSDictionary *trackingTags;
    IBLabelDefinition *selectedLabelDefinition;
    IBLabelDefinition *trackedLabelDefinition;
    IBLabelDefinition *rolledOverLabelDefinition;
    long long displayedLabel;
    id target;
    SEL action;
    BOOL enabled;
    BOOL showsLabelNames;
}

+ (id)noLabelDefinition;
- (void)viewDidMoveToSuperview;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)viewDidMoveToWindow;
- (void)viewWillMoveToWindow:(id)arg1;
- (void)setupTrackingRects;
- (void)removeTrackingRects;
- (void)drawRect:(struct CGRect)arg1;
- (void)drawXSwatchInRect:(struct CGRect)arg1;
- (id)attributedRolledOverLabel;
- (id)labelAttributes;
- (void)drawLabelDefinition:(id)arg1 inRect:(struct CGRect)arg2;
- (void)invalidateLabelDefinition:(id)arg1;
- (void)layout;
- (struct CGRect)frameForTextualLabel;
- (id)labelDefinitionAtPoint:(struct CGPoint)arg1;
- (struct CGRect)boundingFrameForLabelDefinition:(id)arg1;
- (struct CGRect)borderFrameForLabelDefinition:(id)arg1;
- (struct CGRect)borderRectForRect:(struct CGRect)arg1;
- (struct CGRect)frameForLabelDefinition:(id)arg1;
- (void)setLabelDefinitions:(id)arg1;
- (id)selectedLabelDefinition;
- (BOOL)isFlipped;
- (id)font;
- (void)setEnabled:(BOOL)arg1;
- (void)setShowsLabelNames:(BOOL)arg1;
- (long long)numberOfLabels;
- (void)setFrame:(struct CGRect)arg1;
- (void)setAction:(SEL)arg1;
- (void)setTarget:(id)arg1;
- (void)setSelectedLabelDefinition:(id)arg1;
- (void)setTrackedLabelDefinition:(id)arg1;
- (void)setRolledOverLabelDefinition:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

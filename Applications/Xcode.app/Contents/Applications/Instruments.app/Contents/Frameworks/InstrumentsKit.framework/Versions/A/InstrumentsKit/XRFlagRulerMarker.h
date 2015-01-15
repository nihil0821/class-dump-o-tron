//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <InstrumentsKit/PFTRulerMarker.h>

#import "XRInspectorSource.h"

@class NSColor, NSString, XRTimeFlag;

@interface XRFlagRulerMarker : PFTRulerMarker <XRInspectorSource>
{
    BOOL _selected;
    BOOL _bubbleShown;
    NSColor *_color;
    XRTimeFlag *_representedFlag;
    BOOL _didDragDuringTracking;
    BOOL _isRemoving;
}

+ (id)flagRulerMarkerWithFlag:(id)arg1 rulerView:(id)arg2;
- (void)setIsRemoving:(BOOL)arg1;
- (BOOL)trackMouse:(id)arg1 adding:(BOOL)arg2;
- (void)refreshBubblePositionToLocation:(double)arg1;
- (void)refreshBubblePosition;
- (BOOL)bubbleShown;
- (void)hideBubble:(BOOL)arg1;
- (void)showBubble;
- (void)detach;
- (void)moveFlagRight;
- (void)moveFlagLeft;
- (BOOL)canMoveRight;
- (BOOL)canMoveLeft;
- (id)instrument;
- (id)dataElementsForInspector:(id)arg1;
- (void)inspectorDismissed:(id)arg1;
- (struct CGRect)imageHitRectInRuler;
- (id)representedFlag;
- (void)setRepresentedFlag:(id)arg1;
- (id)color;
- (void)setColor:(id)arg1;
- (BOOL)selected;
- (void)setSelected:(BOOL)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

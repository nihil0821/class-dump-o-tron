//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

#import "IBHICoding.h"
#import "IBHIHelpProtocol.h"

@class IBCarbonHILayoutInfo, NSMutableArray, NSString;

@interface IBHIView : NSView <IBHIHelpProtocol, IBHICoding>
{
    NSString *classID;
    struct OpaqueControlRef *_view;
    NSMutableArray *instantiationProperties;
    NSMutableArray *auxiliaryProperties;
    IBCarbonHILayoutInfo *layoutInfo;
    short helpTagDisplaySide;
    NSString *helpTagText;
    NSString *helpTagExtendedText;
    unsigned short controlSize;
    unsigned long controlSignature;
    unsigned long controlID;
    unsigned long command;
    BOOL enabled;
    BOOL layoutSuspended;
    int fontStyle;
    struct _NSRect brokenRootViewRelativeFrame;
    BOOL needsRootViewRelativeFrameFixup;
    BOOL calculatingViewRef;
}

+ (void)configureCell:(id)arg1 withStyleRec:(struct ControlFontStyleRec)arg2;
+ (id)classNameForHICoder;
- (id)cellForTextEditing;
- (void)setRuntimeFormattedAuxiliaryProperties:(id)arg1;
- (id)runtimeFormattedAuxiliaryProperties;
- (void)removeAuxiliaryProperty:(id)arg1;
- (void)replaceAuxiliaryPropertyAtIndex:(int)arg1 withProperty:(id)arg2;
- (void)addAuxiliaryProperty:(id)arg1;
- (void)setAuxiliaryProperties:(id)arg1;
- (id)auxiliaryProperties;
- (void)setRuntimeFormattedInstantiationProperties:(id)arg1;
- (id)runtimeFormattedInstantiationProperties;
- (void)removeInstantiationProperty:(id)arg1;
- (void)replaceInstantiationPropertyAtIndex:(int)arg1 withProperty:(id)arg2;
- (void)addInstantiationProperty:(id)arg1;
- (void)setInstantiationProperties:(id)arg1;
- (id)instantiationProperties;
- (void)setClassID:(id)arg1;
- (id)classID;
- (id)defaultClassID;
- (short)styleRecFont;
- (unsigned short)themeFontID;
- (void)setFont:(id)arg1;
- (id)font;
- (struct ControlFontStyleRec)controlFontStyle;
- (struct _NSRect)titleRect;
- (void)drawRect:(struct _NSRect)arg1;
- (BOOL)isNormalControlSize;
- (BOOL)supportsControlSize:(unsigned short)arg1;
- (unsigned short)defaultControlSize;
- (id)description;
- (void)addIB2RelevantSubview:(id)arg1;
- (id)ib2RelevantSubviews;
- (BOOL)layoutSuspended;
- (void)setLayoutSuspended:(BOOL)arg1;
- (id)layoutInfo;
- (void)setLayoutInfo:(id)arg1;
- (void)setHelpTagDisplaySide:(short)arg1;
- (short)helpTagDisplaySide;
- (void)setHelpTagExtendedText:(id)arg1;
- (id)helpTagExtendedText;
- (void)setHelpTagText:(id)arg1;
- (id)helpTagText;
- (void)setFontStyle:(int)arg1;
- (int)fontStyle;
- (void)setCommand:(unsigned long)arg1;
- (unsigned long)command;
- (BOOL)isEnabled;
- (void)setEnabled:(BOOL)arg1;
- (BOOL)supportsFontStyle;
- (BOOL)supportsScrolling;
- (void)setControlSize:(unsigned short)arg1;
- (unsigned short)controlSize;
- (unsigned int)cocoaControlSize;
- (void)setControlID:(long)arg1;
- (long)controlID;
- (void)setControlSignature:(unsigned long)arg1;
- (unsigned long)controlSignature;
- (void)customizeView:(struct OpaqueControlRef *)arg1;
- (struct OpaqueControlRef *)createViewInWindow:(struct OpaqueWindowPtr *)arg1 withFrame:(struct CGRect)arg2;
- (struct OpaqueControlRef *)view;
- (struct OpaqueControlRef *)createViewWithFrameSuggestion:(struct CGRect)arg1;
- (void)invalidate;
- (void)invalidateControl;
- (void)resizeWithOldSuperviewSize:(struct _NSSize)arg1;
- (void)resizeSubviewsWithOldSize:(struct _NSSize)arg1;
- (void)verifySize;
- (struct _NSSize)ibPreferredDesignSize;
- (void)setFrameOrigin:(struct _NSPoint)arg1;
- (void)setFrameSize:(struct _NSSize)arg1;
- (void)pushCocoaFrameToHIView;
- (float)ibBaselineAtIndex:(int)arg1;
- (struct IBInsetTag)structureOutset;
- (struct _NSRect)frameSuggestionForHIViewRefCreation;
- (void)customizeViewForStructureOutsetCalculation:(struct OpaqueControlRef *)arg1;
- (struct _NSSize)sizeSuggestionForStructureOutsetCalculation;
- (struct _NSRect)convertRectToHIView:(struct _NSRect)arg1;
- (struct _NSRect)convertRectFromHIView:(struct _NSRect)arg1;
- (BOOL)isFlipped;
- (BOOL)needsRootViewRelativeFrameFixup;
- (struct _NSRect)brokenRootViewRelativeFrame;
- (void)fixMyBrokenRootViewRelativeFrame:(id)arg1;
- (void)fixBrokenRootViewRelativeFrames;
- (void)fixBrokenRootViewRelativeFrames:(id)arg1;
- (void)encodeWithHICoder:(id)arg1;
- (id)initWithHIDecoder:(id)arg1;
- (id)windowTemplate;
- (struct _NSRect)computeRuntimeBounds;
- (struct _NSRect)convertRect:(struct _NSRect)arg1 fromSubviewForCarbonBoundsEncoding:(id)arg2;
- (struct _NSRect)partiallyComputedFrameForRuntimeFrame:(struct _NSRect)arg1;
- (struct _NSRect)partiallyComputedRuntimeFrameForView:(id)arg1;
- (struct _NSRect)partiallyComputedRuntimeFrame;
- (id)topLevelContentView;
- (id)nearestHIViewParent;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)buildRuntimeCodingDescription:(id)arg1;
- (void)buildDesignTimeCodingDescription:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct _NSRect)arg1;

@end


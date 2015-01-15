//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowController.h"

#import "NSWindowDelegate.h"

@class NSArray, NSSet, NSSplitView, NSString, NSView, PFTTraceDocument, XRInstrumentDebuggerWindowController, XRStrategiesToolbarViewController, XRStrategyInfo;

@interface PFTWindowController : NSWindowController <NSWindowDelegate>
{
    BOOL _strategyToolbarOpen;
    NSSplitView *_extendedDetailSplitView;
    NSView *_controlBarView;
    NSView *_inspectorChooserView;
    NSView *_inspectorDataViewer;
    XRInstrumentDebuggerWindowController *_debuggerWindowController;
    NSSet *_currentStrategyIdentifiers;
    XRStrategyInfo *_selectedStrategy;
    id <XRToolbarManager> _toolbarManager;
    XRStrategiesToolbarViewController *_strategiesToolbarViewController;
    NSArray *_upperLowerSplitViewVerticalNoStrategyToolbarConstraints;
    NSArray *_upperLowerSplitViewVerticalWithStrategyToolbarConstraints;
}

@property(retain, nonatomic) NSArray *upperLowerSplitViewVerticalWithStrategyToolbarConstraints; // @synthesize upperLowerSplitViewVerticalWithStrategyToolbarConstraints=_upperLowerSplitViewVerticalWithStrategyToolbarConstraints;
@property(retain, nonatomic) NSArray *upperLowerSplitViewVerticalNoStrategyToolbarConstraints; // @synthesize upperLowerSplitViewVerticalNoStrategyToolbarConstraints=_upperLowerSplitViewVerticalNoStrategyToolbarConstraints;
@property(retain, nonatomic) XRStrategiesToolbarViewController *strategiesToolbarViewController; // @synthesize strategiesToolbarViewController=_strategiesToolbarViewController;
@property(retain, nonatomic) id <XRToolbarManager> toolbarManager; // @synthesize toolbarManager=_toolbarManager;
@property(retain, nonatomic) XRStrategyInfo *selectedStrategy; // @synthesize selectedStrategy=_selectedStrategy;
@property(retain, nonatomic) NSSet *currentStrategyIdentifiers; // @synthesize currentStrategyIdentifiers=_currentStrategyIdentifiers;
@property(retain, nonatomic) XRInstrumentDebuggerWindowController *debuggerWindowController; // @synthesize debuggerWindowController=_debuggerWindowController;
@property(nonatomic) __weak NSView *inspectorDataViewer; // @synthesize inspectorDataViewer=_inspectorDataViewer;
@property(nonatomic) __weak NSView *inspectorChooserView; // @synthesize inspectorChooserView=_inspectorChooserView;
@property(nonatomic) __weak NSView *controlBarView; // @synthesize controlBarView=_controlBarView;
@property(retain, nonatomic) NSSplitView *extendedDetailSplitView; // @synthesize extendedDetailSplitView=_extendedDetailSplitView;
- (void).cxx_destruct;
- (void)_updateSupportedStrategies;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (BOOL)windowShouldClose:(id)arg1;
- (struct CGSize)windowWillResize:(id)arg1 toSize:(struct CGSize)arg2;
- (void)windowWillClose:(id)arg1;
- (struct CGRect)window:(id)arg1 willPositionSheet:(id)arg2 usingRect:(struct CGRect)arg3;
- (void)setupToolbar;
- (void)unhideStrategyToolbarForWatermark;
- (void)hideStrategyToolbarForWatermark;
- (void)reloadStrategyControls;
- (void)setStrategySummaryFilter:(id)arg1;
- (void)setStrategyToolbarVisible:(BOOL)arg1;
- (void)showSelfServiceDebugger:(id)arg1;
@property(readonly, nonatomic) __weak PFTTraceDocument *traceDocument;
- (void)setDocument:(id)arg1;
- (BOOL)shouldCloseDocument;
- (id)windowTitleForDocumentDisplayName:(id)arg1;
- (void)windowDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

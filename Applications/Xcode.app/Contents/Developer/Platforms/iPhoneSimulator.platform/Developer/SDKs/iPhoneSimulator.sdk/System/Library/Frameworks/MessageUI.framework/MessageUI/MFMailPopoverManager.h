//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIActionSheetDelegate.h"
#import "UIPopoverPresentationControllerDelegate.h"

@class MFPopoverController, NSArray, NSMutableArray, NSString, UIActionSheet, UIBarButtonItem, UIView;

@interface MFMailPopoverManager : NSObject <UIPopoverPresentationControllerDelegate, UIActionSheetDelegate>
{
    id _delegate;
    id _actionSheetDelegate;
    NSArray *_explicitPassthroughViews;
    UIActionSheet *_actionSheet;
    MFPopoverController *_popoverController;
    UIBarButtonItem *_currentBarButtonItem;
    UIView *_currentView;
    struct CGRect _currentRect;
    NSMutableArray *_passThroughContexts;
    unsigned long long _currentArrowDirections;
    double _popoverDismissalEnd;
    _Bool _popoverBeingHiddenDuringRotation;
    _Bool _isHandlingActionSheetClick;
    _Bool _popoverDismissalIsDelayed;
    _Bool _popoverDismissalShouldBeAnimated;
}

+ (void)dismissPopover:(id)arg1 animated:(_Bool)arg2;
+ (void)enumerateManagersUsingBlock:(CDUnknownBlockType)arg1;
+ (id)managerForWindow:(id)arg1 createIfNeeded:(_Bool)arg2;
@property(nonatomic) _Bool popoverBeingHiddenDuringRotation; // @synthesize popoverBeingHiddenDuringRotation=_popoverBeingHiddenDuringRotation;
@property(nonatomic) unsigned long long currentArrowDirections; // @synthesize currentArrowDirections=_currentArrowDirections;
@property(nonatomic) struct CGRect currentRect; // @synthesize currentRect=_currentRect;
@property(retain, nonatomic) UIView *currentView; // @synthesize currentView=_currentView;
@property(retain, nonatomic) UIBarButtonItem *currentBarButtonItem; // @synthesize currentBarButtonItem=_currentBarButtonItem;
@property(retain, nonatomic) MFPopoverController *popoverController; // @synthesize popoverController=_popoverController;
@property(retain, nonatomic) UIActionSheet *actionSheet; // @synthesize actionSheet=_actionSheet;
- (void)_cleanupCurrentPopover;
- (void)_willPresentPopover:(id)arg1;
- (_Bool)_isEquivalentToCurrentPopover:(id)arg1;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1;
- (void)popoverControllerDidDismissPopover:(id)arg1 isUserAction:(_Bool)arg2;
- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)actionSheet:(id)arg1 willDismissWithButtonIndex:(long long)arg2;
- (void)didPresentActionSheet:(id)arg1;
- (void)willPresentActionSheet:(id)arg1;
- (void)actionSheetCancel:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;
@property(nonatomic) _Bool rasterizePopoverLayer;
- (void)didRotate;
- (void)willRotate;
- (_Bool)_delegateSupportsRotation;
- (id)_allPassthroughViewsIncludingViews:(id)arg1 excludingViews:(id)arg2;
- (id)_currentPassthroughProviders;
- (void)removePassthroughView:(id)arg1;
- (void)addPassthroughView:(id)arg1;
- (void)endModalPassthroughContext;
- (void)beginModalPassthroughContext;
- (void)removePassthroughViewProvider:(id)arg1;
- (void)addPassthroughViewProvider:(id)arg1;
- (double)delayUntilPopoverFinishesDismissing;
- (_Bool)popoverDismissalIsDelayed;
- (void)_popoverDismissalDidFinish;
- (void)_dismissPopoverNow;
- (void)dismissPopoverAfterDelay:(double)arg1 animated:(_Bool)arg2;
- (void)dismissPopoverAnimated:(_Bool)arg1;
- (id)popover;
- (_Bool)popoverShowing;
- (void)presentPopover:(id)arg1 fromRect:(struct CGRect)arg2 inView:(id)arg3 direction:(unsigned long long)arg4 allowInteractionWithViews:(id)arg5 withDelegate:(id)arg6 animated:(_Bool)arg7;
- (void)presentPopover:(id)arg1 fromBarButtonItem:(id)arg2 withDelegate:(id)arg3 animated:(_Bool)arg4;
- (void)_configureDelegate:(id)arg1 forPopoverController:(id)arg2;
- (void)presentPopover:(id)arg1 fromView:(id)arg2 animated:(_Bool)arg3;
- (void)presentPopover:(id)arg1 fromBarButtonItem:(id)arg2 animated:(_Bool)arg3;
- (void)dealloc;
- (id)_init;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

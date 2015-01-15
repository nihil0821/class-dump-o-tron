//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewController.h"

@class CADisplayLink, NSIndexPath, UILongPressGestureRecognizer, UIView;

@interface WDReorderableTableViewController : UITableViewController
{
    UILongPressGestureRecognizer *_longPressRecognizer;
    CADisplayLink *_scrollTimer;
    UIView *_draggingView;
    double _scrollSpeed;
    NSIndexPath *_currentIndexPath;
    _Bool _reordering;
    id <WDReorderableTableViewControllerDelegate> _delegate;
    double _draggingViewOpacity;
}

@property(nonatomic, getter=isReordering) _Bool reordering; // @synthesize reordering=_reordering;
@property(nonatomic) double draggingViewOpacity; // @synthesize draggingViewOpacity=_draggingViewOpacity;
@property(nonatomic) __weak id <WDReorderableTableViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_alertDelegateDidEndReordering;
- (void)_alertDelegateDidMoveFromIndexPath:(id)arg1 toIndexPath:(id)arg2;
- (void)_alertDelegateDidBeginReordering:(id)arg1;
- (void)_performTableViewUpdatesWithBlock:(CDUnknownBlockType)arg1;
- (void)_updateCurrentIndexIfNecessary:(id)arg1;
- (unsigned long long)_numberOfRows;
- (void)_deactivateScrollTimer;
- (void)_activateScrollTimer;
- (void)_scrollTimerFired:(id)arg1;
- (void)_cancelLongPress;
- (void)_recognizerEnded:(id)arg1;
- (void)_recognizerPanned:(id)arg1;
- (void)_beginPressAndHoldGestureWithRecognizer:(id)arg1;
- (void)_longPressFired:(id)arg1;
- (void)didEndReordering;
- (void)willBeginReordering;
- (id)initWithStyle:(long long)arg1;

@end

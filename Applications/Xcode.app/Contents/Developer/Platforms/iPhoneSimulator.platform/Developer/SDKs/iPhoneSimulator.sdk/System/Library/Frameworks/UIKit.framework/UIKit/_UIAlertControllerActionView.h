//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIGestureRecognizerDelegate.h"
#import "_UIAlertActionRepresenting.h"

@class NSLayoutConstraint, NSMutableArray, NSString, UIAlertAction, UIAlertControllerVisualStyle, UIGestureRecognizer, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface _UIAlertControllerActionView : UIView <UIGestureRecognizerDelegate, _UIAlertActionRepresenting>
{
    NSLayoutConstraint *_minimumHeightConstraint;
    UIView *labelContainerView;
    UILabel *label;
    UILabel *descriptiveLabel;
    UIImageView *imageView;
    UIImageView *checkView;
    UIView *highlightedBackgroundContainerView;
    NSMutableArray *highlightedBackgroundConstraints;
    unsigned long long _roundedCorners;
    NSMutableArray *havingDescriptiveLabelConstraints;
    NSMutableArray *notHavingDescriptiveLabelConstraints;
    NSLayoutConstraint *_descriptiveLabelWidthConstraint;
    UIAlertAction *_action;
    UIAlertControllerVisualStyle *_visualStyle;
    id selectedTarget;
    SEL selectedAction;
    id highlightTarget;
    SEL highlightAction;
    _Bool _hasDescriptiveText;
    UIGestureRecognizer *_selectGestureRecognizer;
    _Bool _discrete;
}

@property _Bool discrete; // @synthesize discrete=_discrete;
- (void)_action:(id)arg1 changedToChecked:(_Bool)arg2;
- (void)_action:(id)arg1 changedToEnabled:(_Bool)arg2;
- (void)_focusStateDidChange;
- (_Bool)_isFocusableElement;
- (void)_selectGestureChanged:(id)arg1;
- (void)_uninstallSelectGestureRecognizer;
- (void)_installSelectGestureRecognizer;
- (void)traitCollectionDidChange:(id)arg1;
- (id)_titleFont;
- (double)_minimumLabelScaleFactor;
- (void)_contentSizeChanged;
@property(readonly, copy) NSString *description;
- (id)tintColor;
- (void)tintColorDidChange;
@property(copy, nonatomic) UIAlertAction *action;
- (void)_updateStyle;
@property UIAlertControllerVisualStyle *visualStyle;
- (void)_updateTextAlignmentForDescriptiveText:(_Bool)arg1;
- (void)_updateBackgroundView;
- (void)_updateMinimumHeight;
- (void)_updateFontSize;
- (void)_recomputeBackgroundColor;
- (void)_recomputeTextColor;
- (void)dealloc;
- (void)setHighlightTarget:(id)arg1 action:(SEL)arg2;
- (void)setSelectedTarget:(id)arg1 action:(SEL)arg2;
@property(readonly) double currentDescriptiveLabelTextWidth;
@property double alignedDescriptiveLabelTextWidth;
- (void)_triggerSelect;
@property(nonatomic, getter=isHighlighted) _Bool highlighted;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)_touchForEvent:(id)arg1;
- (void)_prepareConstraintsForDescriptiveText:(_Bool)arg1;
- (void)_prepareConstraints;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


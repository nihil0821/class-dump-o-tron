//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "PSHeaderFooterView.h"

@class UIActivityIndicatorView, UILabel, UIProgressView;

@interface SLTwitterUpdateContactsFooterView : UIView <PSHeaderFooterView>
{
    int _mode;
    UIActivityIndicatorView *_activityIndicator;
    UIProgressView *_progressIndicator;
    UILabel *_footerLabel;
}

@property(readonly, nonatomic) UILabel *footerLabel; // @synthesize footerLabel=_footerLabel;
@property(readonly, nonatomic) UIProgressView *progressIndicator; // @synthesize progressIndicator=_progressIndicator;
@property(readonly, nonatomic) UIActivityIndicatorView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
@property(nonatomic) int mode; // @synthesize mode=_mode;
- (void).cxx_destruct;
- (double)preferredHeightForWidth:(double)arg1;
- (void)layoutSubviews;
- (id)initWithSpecifier:(id)arg1;

@end


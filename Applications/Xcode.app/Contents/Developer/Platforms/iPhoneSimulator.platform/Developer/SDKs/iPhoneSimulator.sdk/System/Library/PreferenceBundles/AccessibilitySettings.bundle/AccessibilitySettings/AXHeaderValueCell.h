//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UILabel;

__attribute__((visibility("hidden")))
@interface AXHeaderValueCell : UIView
{
    UILabel *_headerLabel;
    UILabel *_contentLabel;
}

- (id)accessibilityLabel;
- (_Bool)isAccessibilityElement;
- (void)layoutSubviews;
- (_Bool)accessibilityScrollToVisible;
- (id)initWithFrame:(struct CGRect)arg1 header:(id)arg2 content:(id)arg3;

@end

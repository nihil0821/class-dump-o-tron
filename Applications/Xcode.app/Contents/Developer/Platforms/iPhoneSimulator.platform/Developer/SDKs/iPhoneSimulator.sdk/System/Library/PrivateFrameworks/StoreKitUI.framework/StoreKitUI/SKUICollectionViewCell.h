//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class UIColor, UIView;

@interface SKUICollectionViewCell : UICollectionViewCell
{
    UIView *_bottomBorderView;
    long long _position;
    UIView *_rightBorderView;
    UIColor *_separatorColor;
    long long _separatorStyle;
    UIView *_topBorderView;
}

@property(nonatomic) long long separatorStyle; // @synthesize separatorStyle=_separatorStyle;
@property(retain, nonatomic) UIColor *separatorColor; // @synthesize separatorColor=_separatorColor;
- (void).cxx_destruct;
- (void)_updateBorderVisibility;
- (_Bool)_showsTopBorder;
- (_Bool)_showsRightBorder;
- (_Bool)_showsBottomBorder;
- (void)_setPosition:(long long)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)layoutSubviews;
- (void)setSelected:(_Bool)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)applyLayoutAttributes:(id)arg1;
@property(nonatomic) _Bool showsCellSeparators;

@end


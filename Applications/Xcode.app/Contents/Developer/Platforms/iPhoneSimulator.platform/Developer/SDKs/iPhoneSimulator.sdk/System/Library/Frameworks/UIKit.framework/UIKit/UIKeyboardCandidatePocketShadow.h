//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIView.h>

__attribute__((visibility("hidden")))
@interface UIKeyboardCandidatePocketShadow : UIView
{
    _Bool _shadowFadesToBottom;
    _Bool _drawsShadow;
    double _shadowHeightGrowthFactor;
}

+ (double)width;
@property(nonatomic) _Bool drawsShadow; // @synthesize drawsShadow=_drawsShadow;
@property(nonatomic) _Bool shadowFadesToBottom; // @synthesize shadowFadesToBottom=_shadowFadesToBottom;
@property(nonatomic) double shadowHeightGrowthFactor; // @synthesize shadowHeightGrowthFactor=_shadowHeightGrowthFactor;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

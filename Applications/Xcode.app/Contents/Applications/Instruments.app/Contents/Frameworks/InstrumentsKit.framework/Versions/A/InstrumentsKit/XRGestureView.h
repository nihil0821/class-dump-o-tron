//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class NSAttributedString;

@interface XRGestureView : NSView
{
    NSAttributedString *_msg;
}

- (void)drawRect:(struct CGRect)arg1;
- (struct CGSize)minimumSize;
- (BOOL)isOpaque;
- (BOOL)acceptsFirstResponder;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (void)setAttributedGestureString:(id)arg1;
- (void)setGestureString:(id)arg1;
- (void)dealloc;
- (id)init;

@end


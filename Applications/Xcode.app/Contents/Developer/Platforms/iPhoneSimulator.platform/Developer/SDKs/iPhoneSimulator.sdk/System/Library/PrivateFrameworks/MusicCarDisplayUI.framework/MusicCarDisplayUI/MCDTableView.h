//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MusicTableView.h"

@interface MCDTableView : MusicTableView
{
    _Bool _shouldShowHeadersAndFooters;
}

@property(nonatomic) _Bool shouldShowHeadersAndFooters; // @synthesize shouldShowHeadersAndFooters=_shouldShowHeadersAndFooters;
- (void)_moveWithEvent:(id)arg1;
- (void)_selectAndScrollToIndexPath:(id)arg1;
- (void)selectRowAtIndexPath:(id)arg1 animated:(_Bool)arg2 scrollPosition:(long long)arg3;
- (_Bool)_shouldShowHeadersAndFooters;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBAwayViewPluginController.h"

#import "PLSlideshowPluginDelegate.h"
#import "SBLockScreenBundleController.h"

@class PLSlideshowPlugin;

@interface PLPictureFramePluginController : SBAwayViewPluginController <SBLockScreenBundleController, PLSlideshowPluginDelegate>
{
    PLSlideshowPlugin *_slideshow;
    double _secondsPerSlide;
    _Bool _shuffleAlbum;
    unsigned int _paused:1;
}

+ (id)rootViewController;
- (void)slideshowPluginDidDisplayFinalImage:(id)arg1;
- (void)slideshowPluginReadyToBegin:(id)arg1;
- (void)loadView;
- (void)deviceLockViewDidHide;
- (void)deviceLockViewWillShow;
- (_Bool)canBeAlwaysFullscreen;
- (_Bool)_tapHandler:(id)arg1;
- (void)_loadSlideshowPlugin;
- (id)_assetsForPictureFrame;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)setFullscreen:(_Bool)arg1 duration:(double)arg2;
- (_Bool)shouldDisableOnUnlock;
- (_Bool)shouldDisableOnRelock;
- (_Bool)canScreenDim;
- (_Bool)retainsPriorityWhileInactive;
- (double)viewFadeInDuration;
- (long long)pluginPriority;
- (_Bool)viewWantsFullscreenLayout;
- (_Bool)showDateView;
- (_Bool)showAwayItems;
- (_Bool)wantsAutomaticFullscreenTimer;
- (void)dealloc;
- (id)init;

@end


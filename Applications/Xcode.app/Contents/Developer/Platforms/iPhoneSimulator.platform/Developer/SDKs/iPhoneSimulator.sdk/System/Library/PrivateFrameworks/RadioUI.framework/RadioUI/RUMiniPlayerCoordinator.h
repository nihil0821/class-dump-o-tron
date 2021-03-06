//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MPUMiniPlayerCoordinator.h"

#import "RUMiniPlayerRadioTransportControlsTarget.h"
#import "RUStationActionsViewControllerDelegate.h"
#import "RUTrackActionsDelegate.h"
#import "UIModalItemDelegate.h"
#import "UIPopoverPresentationControllerDelegate.h"

@class NSString, RURadioPlaybackCoordinator, RUStationActionsViewController, RUTrackActionsModalItem, RUTrackActionsViewController, RadioStation, UIPopoverPresentationController;

@interface RUMiniPlayerCoordinator : MPUMiniPlayerCoordinator <RUMiniPlayerRadioTransportControlsTarget, RUStationActionsViewControllerDelegate, RUTrackActionsDelegate, UIModalItemDelegate, UIPopoverPresentationControllerDelegate>
{
    RURadioPlaybackCoordinator *_playbackCoordinator;
    RadioStation *_prospectiveStation;
    UIPopoverPresentationController *_stationActionsPresentationController;
    RUStationActionsViewController *_stationActionsViewController;
    RUTrackActionsModalItem *_trackActionsModalItem;
    UIPopoverPresentationController *_trackActionsPresentationController;
    RUTrackActionsViewController *_trackActionsViewController;
    id <RUMiniPlayerCoordinatorDelegate> _delegate;
}

@property(nonatomic) __weak id <RUMiniPlayerCoordinatorDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_presentTrackActionsFromView:(id)arg1;
- (void)_presentStationActionsFromView:(id)arg1;
- (void)_presentAddStation;
- (void)_prepareToAddStation;
- (void)_makeStationVisible:(id)arg1;
- (void)_completeAdditionOfStation:(id)arg1 fromItem:(id)arg2 usingArtist:(_Bool)arg3 canShowAlert:(_Bool)arg4;
- (void)_applyAttributesForItem:(id)arg1 toTrackActioningObject:(id)arg2;
- (void)_playbackCoordinatorCurrentStationDidChangeNotification:(id)arg1;
- (void)_avItemTitlesDidChangeNotification:(id)arg1;
- (void)_avItemStoreIDDidChangeNotification:(id)arg1;
- (void)_addStationFromItem:(id)arg1 usingArtist:(_Bool)arg2;
- (void)prepareForPopoverPresentation:(id)arg1;
- (void)popoverPresentationController:(id)arg1 willRepositionPopoverToRect:(inout struct CGRect *)arg2 inView:(inout id *)arg3;
- (void)popoverPresentationControllerDidDismissPopover:(id)arg1;
- (void)modalItem:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (id)presentationController:(id)arg1 viewControllerForAdaptivePresentationStyle:(long long)arg2;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1;
- (void)trackActioningObject:(id)arg1 didSelectAction:(long long)arg2 atIndex:(long long)arg3;
- (void)stationActionsViewController:(id)arg1 didFinishAction:(long long)arg2 withObject:(id)arg3 error:(id)arg4;
- (void)stationActionsViewController:(id)arg1 willBeginAction:(long long)arg2;
- (void)transportControls:(id)arg1 presentStationActionsForItem:(id)arg2;
- (void)transportControls:(id)arg1 addStationForItem:(id)arg2 usingArtist:(_Bool)arg3;
- (void)transportControls:(id)arg1 requestsStationVisibility:(id)arg2;
- (void)miniPlayerActionsViewController:(id)arg1 didSelectAction:(long long)arg2;
- (Class)_miniPlayerPlaybackControlsViewClass;
- (id)_currentProspectivePlaybackInformation;
- (void)navigationController:(id)arg1 traitCollectionDidChange:(id)arg2;
- (_Bool)transportControls:(id)arg1 tappedButtonPart:(unsigned long long)arg2;
- (void)dealloc;
- (id)initWithPlaybackCoordinator:(id)arg1;
- (id)initWithPlayer:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


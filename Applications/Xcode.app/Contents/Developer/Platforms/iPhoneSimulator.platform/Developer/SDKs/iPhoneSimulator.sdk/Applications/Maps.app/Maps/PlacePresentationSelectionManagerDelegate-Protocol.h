//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MKAnnotationView, PlacePresentationSelectionManager, PlacePresentationSelectionManagerContext, SearchResult, UIViewController, VKLabelMarker;

@protocol PlacePresentationSelectionManagerDelegate <NSObject>

@optional
- (_Bool)placePresentationSelectionManager:(PlacePresentationSelectionManager *)arg1 shouldUseDefaultPlaceCardPresentationForViewController:(UIViewController *)arg2;
- (void)updateMKApplicationStateAfterDeselection;
- (_Bool)shouldChangeMKApplicationStateForLabelMarker:(VKLabelMarker *)arg1;
- (_Bool)shouldShowFlyoverButtonForSearchResult:(SearchResult *)arg1;
- (_Bool)shouldShowFlyoverButtonForLabelMarker:(VKLabelMarker *)arg1;
- (_Bool)shouldShowDirectionsButtonForSearchResult:(SearchResult *)arg1;
- (_Bool)shouldShowPlacePresentationOptionInCalloutForAnnotationView:(MKAnnotationView *)arg1;
- (_Bool)shouldShowPlacePresentationOptionInCalloutForLabelMarker:(VKLabelMarker *)arg1;
- (PlacePresentationSelectionManagerContext *)placePresentationSelectionManagerContext;
@end

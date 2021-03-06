//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIImagePickerControllerDelegate.h"
#import "UINavigationControllerDelegate.h"

@class ALAssetsLibrary, AdaptivePresenter, CLLocation, NSMapTable, NSString, UIImage, UIViewController;

__attribute__((visibility("hidden")))
@interface RAPPhotoPickerController : NSObject <UINavigationControllerDelegate, UIImagePickerControllerDelegate>
{
    NSMapTable *_observers;
    AdaptivePresenter *_imagePickerPresenter;
    ALAssetsLibrary *_assetsLibrary;
    _Bool _picking;
    UIViewController *_presentingViewController;
    CDUnknownBlockType _positioningBlock;
    UIImage *_photo;
    CLLocation *_geotaggedLocation;
}

+ (_Bool)shouldShowImagePickingUI;
@property(readonly, nonatomic, getter=isPicking) _Bool picking; // @synthesize picking=_picking;
@property(readonly, nonatomic) CLLocation *geotaggedLocation; // @synthesize geotaggedLocation=_geotaggedLocation;
@property(readonly, nonatomic) UIImage *photo; // @synthesize photo=_photo;
@property(copy, nonatomic) CDUnknownBlockType positioningBlock; // @synthesize positioningBlock=_positioningBlock;
@property(retain, nonatomic) UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
- (void).cxx_destruct;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)_deletePhoto;
- (void)startPicking;
- (void)_invokeChangeHandlers;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1 changeHandler:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


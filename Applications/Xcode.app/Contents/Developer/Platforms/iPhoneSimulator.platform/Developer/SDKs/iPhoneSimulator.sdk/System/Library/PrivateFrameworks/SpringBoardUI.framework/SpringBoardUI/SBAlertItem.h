//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIAlertViewDelegate.h"

@class NSArray, NSString, UIAlertView;

@interface SBAlertItem : NSObject <UIAlertViewDelegate>
{
    UIAlertView *_alertSheet;
    _Bool _orderOverSBAlert;
    _Bool _preventLockOver;
    _Bool _didEverActivate;
    _Bool _ignoreIfAlreadyDisplaying;
    _Bool _didPlayPresentationSound;
    _Bool _allowInSetup;
    _Bool _pendInSetupIfNotAllowed;
    _Bool _pendWhileKeyBagLocked;
    NSArray *_allowedBundleIDs;
    _Bool _allowInCar;
    _Bool _allowMessageInCar;
}

+ (void)activateAlertItem:(id)arg1;
+ (id)_alertItemsController;
@property(nonatomic) _Bool allowMessageInCar; // @synthesize allowMessageInCar=_allowMessageInCar;
@property(nonatomic) _Bool allowInCar; // @synthesize allowInCar=_allowInCar;
@property(retain, nonatomic) NSArray *allowedBundleIDs; // @synthesize allowedBundleIDs=_allowedBundleIDs;
@property(nonatomic) _Bool pendWhileKeyBagLocked; // @synthesize pendWhileKeyBagLocked=_pendWhileKeyBagLocked;
@property(nonatomic) _Bool pendInSetupIfNotAllowed; // @synthesize pendInSetupIfNotAllowed=_pendInSetupIfNotAllowed;
@property(nonatomic) _Bool allowInSetup; // @synthesize allowInSetup=_allowInSetup;
@property(nonatomic) _Bool ignoreIfAlreadyDisplaying; // @synthesize ignoreIfAlreadyDisplaying=_ignoreIfAlreadyDisplaying;
- (_Bool)_dismissesOverlaysOnLockScreen;
- (_Bool)dismissesAutomatically;
- (id)prepareNewAlertSheetWithLockedState:(_Bool)arg1 requirePasscodeForActions:(_Bool)arg2;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (_Bool)displayActionButtonOnLockScreen;
- (_Bool)hasActiveKeyboardOnScreen;
- (int)alertPriority;
- (_Bool)preventInterruption;
- (_Bool)reappearsAfterUnlock;
- (_Bool)reappearsAfterLock;
- (_Bool)behavesSuperModally;
- (_Bool)forcesModalAlertAppearance;
- (id)alertItemNotificationSender;
- (id)alertItemNotificationDate;
- (int)alertItemNotificationType;
- (void)noteVolumeOrLockPressed;
- (void)didDeactivateForReason:(int)arg1;
- (void)willDeactivateForReason:(int)arg1;
- (void)didFailToActivate;
- (void)screenWillUndim;
- (void)dismiss:(int)arg1;
- (void)dismiss;
- (void)buttonDismissed;
- (void)willRelockForButtonPress:(_Bool)arg1;
- (void)didActivate;
- (void)willActivate;
- (_Bool)_didEverActivate;
- (void)setPreventLockOver:(_Bool)arg1;
- (_Bool)preventLockOver;
- (void)setOrderOverSBAlert:(_Bool)arg1;
- (void)performUnlockAction;
- (double)autoDismissInterval;
- (id)shortLockLabel;
- (id)lockLabel;
- (void)configure:(_Bool)arg1 requirePasscodeForActions:(_Bool)arg2;
- (void)cleanPreviousConfiguration;
- (void)playPresentationSound;
- (void)_playPresentationSound;
- (id)sound;
- (_Bool)didPlayPresentationSound;
- (_Bool)isCriticalAlert;
- (_Bool)dismissOnModalDisplayActivation;
- (_Bool)dismissOnLock;
- (_Bool)togglesMediaControls;
- (int)unlockSource;
- (_Bool)unlocksScreen;
- (_Bool)undimsScreen;
- (_Bool)shouldShowInEmergencyCall;
- (_Bool)shouldShowInLockScreen;
- (_Bool)allowAutoUnlock;
- (_Bool)allowLockScreenDismissal;
- (_Bool)allowMenuButtonDismissal;
- (void)dealloc;
- (id)init;
- (id)alertController;
- (id)alertSheet;
- (Class)alertSheetClass;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


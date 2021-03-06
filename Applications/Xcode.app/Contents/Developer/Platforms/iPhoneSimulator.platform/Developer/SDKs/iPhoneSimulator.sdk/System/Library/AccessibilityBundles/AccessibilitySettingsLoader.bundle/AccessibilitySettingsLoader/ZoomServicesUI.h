//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface ZoomServicesUI : NSObject
{
    _Bool _registeredForAppNotifications;
}

+ (void)disableZoomServices;
+ (void)enableZoomServices;
@property(nonatomic, getter=isRegisteredForAppNotifications) _Bool registeredForAppNotifications; // @synthesize registeredForAppNotifications=_registeredForAppNotifications;
- (void)_handleAppDidEnterBackgroundNotification:(id)arg1;
- (void)_handleAppDidBecomeActiveNotification:(id)arg1;
- (void)_handleAppSwitcherWillBeginRevealNotification:(id)arg1;
- (void)_handleLockButtonWasPressedNotification:(id)arg1;
- (void)_handleAlertWillAppearNotification:(id)arg1;
- (void)_handleKeyboardWillHideNotification:(id)arg1;
- (void)_handleKeyboardWillShowNotification:(id)arg1;
- (void)_handleRegisterZoomConflictNotification:(id)arg1;
- (void)_handleZoomFocusDidChangeNotification:(id)arg1;
- (void)_handleFirstResponderDidChangeNotification:(id)arg1;
- (void)_handleZoomEnabledStatusDidChangeNotification:(id)arg1;
- (struct CGRect)_keyboardFrameInScreenCoordinates;
- (void)_installZoomUISafeCategoriesIfNeeded;
- (void)_unregisterForAppNotifications;
- (void)_registerForAppNotifications;
- (void)_updateForCurrentZoomStatus;
- (void)dealloc;
- (id)init;

@end


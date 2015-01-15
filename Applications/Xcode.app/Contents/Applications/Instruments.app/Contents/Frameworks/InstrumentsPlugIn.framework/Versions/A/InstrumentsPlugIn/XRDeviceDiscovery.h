//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DVTExtension;

@interface XRDeviceDiscovery : NSObject
{
    DVTExtension *_extension;
}

+ (id)devicesMatching:(id)arg1;
+ (id)deviceForIdentifier:(id)arg1;
+ (id)allKnownDevices;
+ (id)availableDevices;
+ (void)unregisterForDeviceNotifications:(unsigned int)arg1;
+ (unsigned int)registerForDevicesNotifications:(CDUnknownBlockType)arg1;
+ (void)forgetDevice:(id)arg1;
+ (void)deviceStateChanged:(id)arg1;
+ (void)deviceConnected:(id)arg1;
+ (void)_systemDidWake:(id)arg1;
+ (void)_systemWillSleep:(id)arg1;
+ (void)initialize;
+ (id)deviceDiscoveryImplementations;
+ (void)_faultDeviceDiscoveryImpls;
+ (void)registerDeviceObserver:(id)arg1;
@property(retain, nonatomic) DVTExtension *extension; // @synthesize extension=_extension;
- (void).cxx_destruct;
- (void)stopListeningForDevices;
- (void)startListeningForDevices;
- (id)deviceList;
- (id)deviceManagementItems;

@end

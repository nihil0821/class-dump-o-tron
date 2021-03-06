//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <BluetoothSettings/BTSDevice.h>

@class CBCentralManager, CBPeripheral;

@interface BTSDeviceLE : BTSDevice
{
    CBPeripheral *_peripheral;
    CBCentralManager *_centralManager;
    _Bool healthDevice;
}

+ (id)deviceWithPeripheral:(id)arg1 manager:(id)arg2;
- (void)setHealthDevice:(_Bool)arg1;
- (_Bool)isHealthDevice;
- (void)unpair;
- (void)disconnect;
- (_Bool)connect;
- (_Bool)isMyDevice;
- (id)classicDevice;
- (_Bool)cloudPaired;
- (_Bool)paired;
- (_Bool)connected;
- (id)name;
- (id)identifier;
- (id)description;
- (void)dealloc;
- (id)initWithPeripheral:(id)arg1 manager:(id)arg2;

@end


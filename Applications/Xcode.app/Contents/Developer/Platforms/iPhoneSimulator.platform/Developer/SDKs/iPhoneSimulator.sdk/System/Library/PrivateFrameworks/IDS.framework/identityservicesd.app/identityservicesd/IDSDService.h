//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSMutableArray, NSString;

@interface IDSDService : NSObject
{
    NSDictionary *_serviceProperties;
    NSMutableArray *_adHocServices;
    _Bool _adHocServicesLoaded;
}

@property(readonly, retain, nonatomic) NSDictionary *properties; // @synthesize properties=_serviceProperties;
- (id)description;
@property(readonly, retain, nonatomic) NSString *legacyPreferencesDomain;
@property(readonly, retain, nonatomic) NSString *preferencesDomain;
@property(readonly, nonatomic) _Bool shouldRegisterUsingDSHandle;
@property(readonly, nonatomic) _Bool shouldAutoRegisterAllHandles;
@property(readonly, nonatomic) _Bool shouldShowUsageNotifications;
@property(readonly, nonatomic) _Bool tunnelService;
@property(readonly, nonatomic) _Bool iCloudBasedService;
@property(readonly, nonatomic) _Bool wantsPhoneNumberAccount;
@property(readonly, nonatomic) _Bool canUseLargePayload;
@property(readonly, nonatomic) _Bool allowPartialSendsToSucceed;
@property(readonly, nonatomic) _Bool allowMagnetDelivery;
@property(readonly, nonatomic) _Bool allowWiProxDelivery;
@property(readonly, nonatomic) _Bool allowLocalDelivery;
@property(readonly, retain, nonatomic) NSArray *duetIdentifiers;
@property(readonly, nonatomic) unsigned int adHocServiceType;
@property(readonly, retain, nonatomic) NSArray *adHocServices;
@property(readonly, retain, nonatomic) NSArray *linkedServices;
@property(readonly, retain, nonatomic) NSString *launchDarwinNotification;
@property(readonly, retain, nonatomic) NSString *pushTopic;
@property(readonly, retain, nonatomic) NSString *legacyIdentifier;
@property(readonly, retain, nonatomic) NSString *identifier;
@property(readonly, retain, nonatomic) NSString *displayName;
@property(readonly, retain, nonatomic) NSString *protocolName;
@property(readonly, retain, nonatomic) NSString *queryService;
@property(readonly, retain, nonatomic) NSString *serviceName;
- (void)dealloc;
- (id)initWithServiceDictionary:(id)arg1;

@end

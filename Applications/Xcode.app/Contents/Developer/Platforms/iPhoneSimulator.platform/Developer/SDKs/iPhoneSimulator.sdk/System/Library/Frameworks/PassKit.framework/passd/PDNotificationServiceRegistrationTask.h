//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PDNotificationServiceConnectionTask.h"

@class NSString, PDNetworkConnectionTask;

@interface PDNotificationServiceRegistrationTask : PDNotificationServiceConnectionTask
{
    long long _requestedStatus;
    NSString *_registrationData;
    NSString *_signature;
    NSString *_casdCertificate;
    PDNetworkConnectionTask *_completionTask;
}

+ (id)deregisterTaskWithNotificationService:(id)arg1;
+ (id)registerTaskWithNotificationService:(id)arg1 registrationData:(id)arg2 signature:(id)arg3 casdCertificate:(id)arg4 completionTask:(id)arg5;
@property(retain, nonatomic) PDNetworkConnectionTask *completionTask; // @synthesize completionTask=_completionTask;
@property(retain, nonatomic) NSString *casdCertificate; // @synthesize casdCertificate=_casdCertificate;
@property(retain, nonatomic) NSString *signature; // @synthesize signature=_signature;
@property(retain, nonatomic) NSString *registrationData; // @synthesize registrationData=_registrationData;
@property(nonatomic) long long requestedStatus; // @synthesize requestedStatus=_requestedStatus;
- (id)_authenticationTokenFromResponseData:(id)arg1;
- (_Bool)matchesTask:(id)arg1;
- (long long)actionForInactiveTask:(id)arg1;
- (_Bool)coalescesWithTaskSubclass:(Class)arg1;
- (_Bool)backoffComplete;
- (id)description;
- (void)handleResponse:(id)arg1 data:(id)arg2;
- (id)bodyDictionary;
- (id)endpointComponents;
- (id)method;
- (_Bool)isValid;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithNotificationService:(id)arg1 registrationData:(id)arg2 signature:(id)arg3 casdCertificate:(id)arg4 requestedStatus:(long long)arg5 completionTask:(id)arg6;

@end


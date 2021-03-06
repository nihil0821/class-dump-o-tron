//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MFStream, NSArray, NSCondition, NSData, NSInvocation, NSString;

@interface _MFSocket : NSObject
{
    NSCondition *_condition;
    MFStream *_stream;
    NSString *_protocol;
    NSString *_host;
    NSString *_service;
    struct __CFString *_connectionServiceType;
    NSInvocation *_eventHandler;
    NSArray *_clientCertificates;
    int _lowThroughputCounter;
    int _numTimeoutSecs;
    _Bool _allowsTrustPrompt;
    _Bool _usesOpportunisticSockets;
    _Bool _socketCanRead;
    _Bool _socketCanWrite;
    NSString *_sourceApplicationBundleIdentifier;
    NSString *_accountIdentifier;
}

@property(copy, nonatomic) NSString *accountIdentifier; // @synthesize accountIdentifier=_accountIdentifier;
@property(copy, nonatomic) NSString *sourceApplicationBundleIdentifier; // @synthesize sourceApplicationBundleIdentifier=_sourceApplicationBundleIdentifier;
@property(retain, nonatomic) NSArray *clientCertificates; // @synthesize clientCertificates=_clientCertificates;
@property(nonatomic) _Bool usesOpportunisticSockets; // @synthesize usesOpportunisticSockets=_usesOpportunisticSockets;
@property(nonatomic) _Bool allowsTrustPrompt; // @synthesize allowsTrustPrompt=_allowsTrustPrompt;
@property(nonatomic) int timeout; // @synthesize timeout=_numTimeoutSecs;
- (void)enableThroughputMonitoring:(_Bool)arg1;
@property(readonly, nonatomic) _Bool isCellularConnection;
@property(readonly, nonatomic) NSData *sourceIPAddress;
@property(readonly, nonatomic) unsigned int remotePortNumber;
@property(readonly, nonatomic) NSString *remoteHostname;
- (void)setEventHandler:(id)arg1;
- (long long)readBytes:(char *)arg1 length:(unsigned long long)arg2;
- (long long)writeBytes:(const char *)arg1 length:(unsigned long long)arg2;
- (unsigned int)_bufferedByteCount;
- (_Bool)connectToHost:(id)arg1 withPort:(unsigned int)arg2 service:(id)arg3;
@property(readonly, nonatomic) _Bool isValid;
@property(readonly, nonatomic) _Bool isWritable;
@property(readonly, nonatomic) _Bool isReadable;
- (void)abort;
- (void)dealloc;
- (id)init;
- (void)setConnectionServiceType:(struct __CFString *)arg1;
@property(readonly, nonatomic) NSArray *serverCertificates;
- (_Bool)setSecurityProtocol:(id)arg1;
- (id)securityProtocol;
- (_Bool)_startSSLHandshakeWithProtocol:(id)arg1 disableSSL2:(_Bool)arg2 errorPtr:(id *)arg3;

@end


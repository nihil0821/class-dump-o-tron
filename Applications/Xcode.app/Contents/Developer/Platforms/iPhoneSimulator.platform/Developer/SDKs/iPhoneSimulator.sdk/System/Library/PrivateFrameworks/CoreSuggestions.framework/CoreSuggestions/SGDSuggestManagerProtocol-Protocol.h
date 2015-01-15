//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSData, NSDate, NSString, SGRealtimeContact, SGRealtimeEvent;

@protocol SGDSuggestManagerProtocol <NSObject>
- (void)sendRTCLogsWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (void)relevantABRecordIDsWithLimit:(long long)arg1 completion:(void (^)(NSArray *, NSError *))arg2;
- (void)predictedCCEmailAddressesWithToAddresses:(NSArray *)arg1 ccAddresses:(NSArray *)arg2 fromAddress:(NSString *)arg3 date:(double)arg4 bounds:(NSArray *)arg5 completion:(void (^)(NSArray *, NSError *))arg6;
- (void)predictedToEmailAddressesWithToAddresses:(NSArray *)arg1 ccAddresses:(NSArray *)arg2 fromAddress:(NSString *)arg3 date:(double)arg4 bounds:(NSArray *)arg5 completion:(void (^)(NSArray *, NSError *))arg6;
- (void)resetConfirmationAndRejectionHistory:(void (^)(NSError *))arg1;
- (void)rejectContact:(SGRealtimeContact *)arg1 completion:(void (^)(NSError *))arg2;
- (void)confirmContact:(SGRealtimeContact *)arg1 completion:(void (^)(NSError *))arg2;
- (void)rejectEvent:(SGRealtimeEvent *)arg1 completion:(void (^)(NSError *))arg2;
- (void)confirmEvent:(SGRealtimeEvent *)arg1 completion:(void (^)(NSError *))arg2;
- (void)contactMatchesByEmailAddress:(NSString *)arg1 withCompletion:(void (^)(NSArray *, NSError *))arg2;
- (void)contactMatchesByPhoneNumber:(NSString *)arg1 withCompletion:(void (^)(NSArray *, NSError *))arg2;
- (void)contactFromABRecordID:(int)arg1 withCompletion:(void (^)(SGContact *, NSError *))arg2;
- (void)contactMatchesWithMessagingPrefix:(NSString *)arg1 limitTo:(unsigned long long)arg2 withCompletion:(void (^)(NSArray *, NSError *))arg3;
- (void)contactMatchesWithFullTextSearch:(NSString *)arg1 limitTo:(unsigned long long)arg2 withCompletion:(void (^)(NSArray *, NSError *))arg3;
- (void)contactsWithPrefix:(NSString *)arg1 limitTo:(unsigned long long)arg2 withCompletion:(void (^)(NSArray *, NSError *))arg3;
- (void)contactsFromEmailContent:(NSString *)arg1 headers:(NSData *)arg2 source:(NSString *)arg3 withCompletion:(void (^)(NSArray *, NSError *))arg4;
- (void)eventsFromEmailContent:(NSString *)arg1 headers:(NSData *)arg2 source:(NSString *)arg3 withCompletion:(void (^)(NSArray *, NSError *))arg4;
- (void)suggestionsFromRFC822Data:(NSData *)arg1 source:(NSString *)arg2 options:(unsigned long long)arg3 withCompletion:(void (^)(NSArray *, NSError *))arg4;
- (void)suggestionsFromEmailContent:(NSString *)arg1 headers:(NSData *)arg2 source:(NSString *)arg3 options:(unsigned long long)arg4 withCompletion:(void (^)(NSArray *, NSError *))arg5;
- (void)eventsInFutureLimitTo:(unsigned long long)arg1 options:(unsigned int)arg2 withCompletion:(void (^)(NSArray *, NSError *))arg3;
- (void)eventsStartingAt:(NSDate *)arg1 endingAt:(NSDate *)arg2 prefix:(NSString *)arg3 limitTo:(unsigned long long)arg4 options:(unsigned int)arg5 withCompletion:(void (^)(NSArray *, NSError *))arg6;
- (void)eventsStartingAt:(NSDate *)arg1 endingAt:(NSDate *)arg2 limitTo:(unsigned long long)arg3 options:(unsigned int)arg4 withCompletion:(void (^)(NSArray *, NSError *))arg5;
- (void)clearCachesFully:(_Bool)arg1 withCompletion:(void (^)(NSError *))arg2;
- (void)prepareForRealtimeExtraction:(void (^)(NSError *))arg1;
- (void)isEnabledWithCompletion:(void (^)(_Bool, NSError *))arg1;
@end

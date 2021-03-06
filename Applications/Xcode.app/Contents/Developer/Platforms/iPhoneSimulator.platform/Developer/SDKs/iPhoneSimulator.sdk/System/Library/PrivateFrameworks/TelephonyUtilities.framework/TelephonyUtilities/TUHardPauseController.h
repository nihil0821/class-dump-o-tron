//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface TUHardPauseController : NSObject
{
    _Bool _cachedValuesAreValid;
    unsigned short _state;
    unsigned short _cachedAppropriateState;
    NSString *_cachedDisplayString;
}

+ (id)sharedHardPauseController;
@property unsigned short cachedAppropriateState; // @synthesize cachedAppropriateState=_cachedAppropriateState;
@property _Bool cachedValuesAreValid; // @synthesize cachedValuesAreValid=_cachedValuesAreValid;
@property(retain) NSString *cachedDisplayString; // @synthesize cachedDisplayString=_cachedDisplayString;
@property(nonatomic) unsigned short state; // @synthesize state=_state;
- (void)updateCachedValuesIfNecessary;
- (unsigned short)appropriateState;
@property(readonly, nonatomic) NSString *displayString;
- (void)sendHardPauseDigitsRelayed;
- (void)sendHardPauseDigitsLocal;
- (void)sendHardPauseDigits;
- (_Bool)canQueryHardPauseDigits;
- (void)resetCacheValidity;
- (void)modelStateChangedNotification:(id)arg1;
- (void)stopListeningForHardPauseEvents;
- (void)startListeningToHardPauseEvents;
- (void)dealloc;
- (id)init;

@end


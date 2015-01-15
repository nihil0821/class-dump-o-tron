//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSMutableDictionary;

@interface DTCoreProfileTapConfig : NSObject <NSCopying>
{
    NSMutableDictionary *_dict;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)reset;
- (id)plistForTrigger:(int)arg1;
- (id)plist;
- (int)addTriggerConfig:(id)arg1;
- (unsigned long long)triggerConfigCount;
- (void)enumerateTriggerConfigs:(CDUnknownBlockType)arg1;
@property(nonatomic) CDStruct_1e94be47 windowSize;
@property(nonatomic) int recordingPriority;
@property(nonatomic) int bufferMode;
@property(nonatomic) CDStruct_1e94be47 displayInterval;
@property(nonatomic) BOOL spoolToDiskWhenPossible;
- (void)setIsDeferredDisplay:(BOOL)arg1;
@property(readonly, nonatomic) BOOL isDeferredDisplay;
- (id)initWithPlist:(id)arg1;
- (id)init;

@end

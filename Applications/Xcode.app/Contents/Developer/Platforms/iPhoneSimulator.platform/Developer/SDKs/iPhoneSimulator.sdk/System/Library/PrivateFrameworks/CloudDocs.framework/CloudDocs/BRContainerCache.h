//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface BRContainerCache : NSObject
{
    NSMutableDictionary *_containersByID;
    _Bool _didFetchAllContainers;
    id <NSObject> _containerStatusObserver;
}

+ (id)containerCache;
- (void)unsubscribeToContainerStatusUpdate;
- (void)subscribeToContainerStatusUpdate;
- (id)containerByID:(id)arg1 forURL:(id)arg2;
- (id)allContainersByID;
- (id)documentContainers;
- (id)allContainers;
- (id)_allContainersByIDUnsafe;
- (void)invalidate;
- (void)containerListDidChange;
- (void)dealloc;
- (id)init;

@end


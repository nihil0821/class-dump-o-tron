//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreDAV/CoreDAVTaskGroup.h>

#import "CoreDAVTaskDelegate.h"

@class NSString, NSURL;

@interface CoreDAVContainerInfoSyncTaskGroup : CoreDAVTaskGroup <CoreDAVTaskDelegate>
{
    NSString *_previousSyncToken;
    NSURL *_containerURL;
}

- (id)copyContainerParserMappings;
- (Class)containerItemClass;
- (void)task:(id)arg1 didFinishWithError:(id)arg2;
- (void)startTaskGroup;
@property(readonly, copy) NSString *description;
- (void)dealloc;
@property(nonatomic) id <CoreDAVContainerInfoSyncProvider> delegate;
- (id)initWithContainerURL:(id)arg1 previousSyncToken:(id)arg2 accountInfoProvider:(id)arg3 taskManager:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

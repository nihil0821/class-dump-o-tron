//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface AXBGuidedAccessManager : NSObject
{
    id _notificationToken;
    id _guidedAccessServer;
}

+ (_Bool)allowsTripleClickSheet;
+ (_Bool)inGuidedAccess;
+ (void)initializeMonitor;
- (void)_loadBackboardServerBundle;
- (id)_guidedAccessServer;
- (void)dealloc;
- (id)init;

@end


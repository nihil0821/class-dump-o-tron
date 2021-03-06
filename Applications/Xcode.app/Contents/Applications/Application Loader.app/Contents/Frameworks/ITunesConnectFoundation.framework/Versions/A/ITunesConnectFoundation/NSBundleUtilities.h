//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface NSBundleUtilities : NSObject
{
}

+ (BOOL)isBundleAtURL:(id)arg1;
+ (id)bundleIdentifierAndBundleVersionInfoForApplicationAtPath:(id)arg1 errors:(id *)arg2;
+ (id)bundleIdentifierAndBundleVersionInfoForURL:(id)arg1 errors:(id *)arg2;
+ (id)bundleIdentifierForApplicationAtPath:(id)arg1;
+ (id)bundleIdentifierForURL:(id)arg1;
+ (id)applicationName;
+ (id)applicationDescription;
+ (id)applicationShortenedVersion;
+ (id)applicationVersion;
+ (id)bundleShortenedVersion:(id)arg1;
+ (id)bundleVersion:(id)arg1;
+ (id)applicationBundleInfoDictionary;
+ (id)applicationBundle;

@end


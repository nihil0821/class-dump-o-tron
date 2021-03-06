//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableDictionary;

@interface DBGViewChildMemberList : NSObject
{
    NSMutableDictionary *_propertyValues;
    NSArray *_propertyEntriesToBeFetched;
}

@property(readonly) NSArray *propertyEntriesToBeFetched; // @synthesize propertyEntriesToBeFetched=_propertyEntriesToBeFetched;
- (void).cxx_destruct;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)valueForUndefinedKey:(id)arg1;
- (id)dbgInspectedCell;
- (void)_setPropertyValueFromMainThread:(id)arg1 forKey:(id)arg2;
- (void)setPropertyValue:(id)arg1 forKey:(id)arg2;
- (id)propertyValueForKey:(id)arg1;
- (id)initWithPropertyEntriesToBeFetched:(id)arg1;

@end


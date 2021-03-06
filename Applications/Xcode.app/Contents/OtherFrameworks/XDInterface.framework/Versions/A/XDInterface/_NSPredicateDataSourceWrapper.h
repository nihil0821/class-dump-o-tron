//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSPredicateViewDataSource.h"

@interface _NSPredicateDataSourceWrapper : NSObject <NSPredicateViewDataSource>
{
    id <NSPredicateViewDataSource> _dataSource;
    id _bindingAdaptor;
}

- (void)dealloc;
- (void)dataChangedForPredicateView:(id)arg1;
- (id)predicateView:(id)arg1 customControllerForType:(id)arg2 forKey:(id)arg3;
- (id)predicateView:(id)arg1 additionalTextForKeyPath:(id)arg2;
- (id)predicateView:(id)arg1 displayNamesForKeyPath:(id)arg2;
- (id)objectValueForPredicateView:(id)arg1;
- (void)predicateView:(id)arg1 setObjectValue:(id)arg2;
- (id)predicateView:(id)arg1 typeForKeyPath:(id)arg2;
- (id)predicateView:(id)arg1 keysForKeyPath:(id)arg2;
- (id)dataSource;
- (void)setDataSource:(id)arg1;
- (id)init;

@end


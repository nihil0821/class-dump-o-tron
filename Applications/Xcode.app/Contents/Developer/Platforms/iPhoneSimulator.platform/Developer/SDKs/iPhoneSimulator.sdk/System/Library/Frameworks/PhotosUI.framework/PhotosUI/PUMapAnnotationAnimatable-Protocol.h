//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MKAnnotation.h"
#import "NSCopying.h"
#import "NSObject.h"

@class NSArray, NSDate, NSMutableSet, NSObject, NSString;

@protocol PUMapAnnotationAnimatable <NSObject, MKAnnotation, NSCopying>
@property(nonatomic) unsigned long long relativeOrder;
@property(readonly, retain, nonatomic) NSMutableSet *subAnnotations;
@property(readonly, nonatomic) NSArray *mapItems;
@property(readonly, nonatomic) unsigned long long count;
@property(readonly, retain, nonatomic) NSDate *dateCreated;
@property(readonly, retain, nonatomic) NSObject *itemId;
@property(nonatomic) CDStruct_c3b9c2ee coordinate;
@property(readonly, nonatomic) CDStruct_c3b9c2ee originalCoordinate;
- (long long)annotationSortingCompareWithAnnotation:(id <PUMapAnnotationAnimatable>)arg1;
- (NSString *)compactDescription;
- (long long)compare:(id)arg1;
- (_Bool)containsAnnotation:(id)arg1;
- (NSArray *)newestMaxMapItems:(unsigned long long)arg1;
- (void)resetCoordinateToOriginal;
@end

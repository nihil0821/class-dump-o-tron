//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DVTOperation.h"

@class NSArray;

@interface IDEDiagnosticGeneratorOperation : DVTOperation
{
    NSArray *_diagnosticItems;
    long long _generation;
}

@property long long generation; // @synthesize generation=_generation;
@property(copy) NSArray *diagnosticItems; // @synthesize diagnosticItems=_diagnosticItems;
- (void).cxx_destruct;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "XRTimeFlag.h"

#import "NSCoding.h"

@class NSString, OGLAFindingSample, OGLAInstrument;

@interface OGLAFlag : XRTimeFlag <NSCoding>
{
    OGLAInstrument *_instrument;
    NSString *_instrumentUUID;
    OGLAFindingSample *_sample;
}

- (void)_showFinding:(id)arg1;
- (id)_instrument;
- (id)dataElementsForContext:(id)arg1;
- (id)detailedSummary;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithName:(id)arg1 finding:(id)arg2 instrument:(id)arg3;

@end

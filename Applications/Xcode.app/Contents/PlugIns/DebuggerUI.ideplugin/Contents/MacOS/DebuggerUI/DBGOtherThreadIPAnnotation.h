//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DebuggerUI/DBGInstructionPointerAnnotation.h>

@class DVTObservingToken;

@interface DBGOtherThreadIPAnnotation : DBGInstructionPointerAnnotation
{
    DVTObservingToken *_fileURLObserverToken;
    DVTObservingToken *_lineNumberURLObserverToken;
}

- (void).cxx_destruct;
- (void)annotationWillUninstall;
- (id)initWithWorkspaceWindowController:(id)arg1 documentLocation:(id)arg2 stackFrame:(id)arg3;
- (void)_updateLocation;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DVTMapTable;

@interface PBXBuildOperationContext : NSObject
{
    DVTMapTable *_vfsContentsForProject;
    BOOL _needsVFS;
    DVTMapTable *_targetMacroExpansionScopes;
}

@property(readonly, nonatomic) BOOL needsVFS; // @synthesize needsVFS=_needsVFS;
@property(readonly, retain, nonatomic) DVTMapTable *targetMacroExpansionScopes; // @synthesize targetMacroExpansionScopes=_targetMacroExpansionScopes;
- (void).cxx_destruct;
- (void)constructVFSForSnapshot:(id)arg1 withMacroExpansionScope:(id)arg2 atPath:(id)arg3;
- (id)initWithTargetMacroExpansionScopes:(id)arg1 needsVFS:(BOOL)arg2;

@end


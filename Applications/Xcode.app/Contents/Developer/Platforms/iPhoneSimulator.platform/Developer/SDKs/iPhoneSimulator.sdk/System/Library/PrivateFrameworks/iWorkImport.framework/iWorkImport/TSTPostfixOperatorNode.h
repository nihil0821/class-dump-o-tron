//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSTOperatorNode.h>

__attribute__((visibility("hidden")))
@interface TSTPostfixOperatorNode : TSTOperatorNode
{
}

- (void)saveToArchive:(struct PostfixOperatorNodeArchive *)arg1 archiver:(id)arg2;
- (id)initFromArchive:(const struct PostfixOperatorNodeArchive *)arg1 unarchiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (id)initFromUnarchiver:(id)arg1;
- (void)buildASTNodeArray:(struct TSCEASTNodeArray *)arg1 hostCell:(CDStruct_0441cfb5)arg2;
- (void)insertFormulaText:(id)arg1 includeWhitespace:(_Bool)arg2;

@end

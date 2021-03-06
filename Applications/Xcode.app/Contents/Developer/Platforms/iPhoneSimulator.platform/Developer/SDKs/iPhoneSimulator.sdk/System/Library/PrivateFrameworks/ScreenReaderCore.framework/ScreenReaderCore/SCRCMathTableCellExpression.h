//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ScreenReaderCore/SCRCMathRowExpression.h>

__attribute__((visibility("hidden")))
@interface SCRCMathTableCellExpression : SCRCMathRowExpression
{
    _Bool _didGetTablePosition;
    unsigned long long _rowIndex;
    unsigned long long _columnIndex;
    unsigned long long _tableRowCount;
    unsigned long long _tableColumnCount;
}

- (id)mathMLTag;
- (id)suffixForChildAtIndex:(unsigned long long)arg1;
- (id)prefixForChildAtIndex:(unsigned long long)arg1;
- (id)_suffixForCell;
- (id)_prefixForCell;
- (id)speakableSegmentsWithSpeakingStyle:(int)arg1 upToDepth:(unsigned long long)arg2 treePosition:(id)arg3;
- (id)speakableDescriptionWithSpeakingStyle:(int)arg1 arePausesAllowed:(_Bool)arg2;
- (void)_getTableDataIfNecessary;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <OfficeImport/CMMapper.h>

@class WDTable, WMBordersProperty, WMTableColumnInfo, WMTableStyle;

__attribute__((visibility("hidden")))
@interface WMTableMapper : CMMapper
{
    WDTable *mWdTable;
    WMBordersProperty *mInsideBorders;
    WMTableStyle *mStyle;
    WMTableColumnInfo *mColumnInfo;
}

+ (_Bool)isTableDeleted:(id)arg1;
- (void)mapAt:(id)arg1 withState:(id)arg2;
- (void)setInsideBorders:(id)arg1;
- (id)columnInfo;
- (id)insideBorders;
- (void)dealloc;
- (id)initWithWDTable:(id)arg1 parent:(id)arg2;
- (id)copyStopArrayForRow:(unsigned long long)arg1;
- (id)copyColumnInfo;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AccessibilityListController.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface AXNamedItemsListController : AccessibilityListController
{
    NSMutableArray *_namedItems;
    _Bool _shouldIgnoreNextSettingsUpdate;
}

- (id)tableView:(id)arg1 targetIndexPathForMoveFromRowAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (_Bool)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (_Bool)_isNamedItemSpecifierAtIndexPath:(id)arg1 tableView:(id)arg2;
- (void)_saveItems;
- (void)_updateIndexesOnSpecifiers;
- (id)_itemName:(id)arg1;
- (void)_setItemName:(id)arg1 specifier:(id)arg2;
- (void)_updateEditButton;
- (_Bool)_shouldShowEditButton;
- (_Bool)isNamedItemSpecifier:(id)arg1;
- (id)namedItemSpecifiers;
- (id)namedItems;
- (void)handleExternalSettingsChange;
- (void)setName:(id)arg1 forItem:(id)arg2;
- (id)nameForItem:(id)arg1;
@property(readonly, nonatomic) SEL settingsSetter;
@property(readonly, nonatomic) SEL settingsGetter;
- (void)viewWillAppear:(_Bool)arg1;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (id)specifiers;
- (void)dealloc;
- (id)init;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PSViewController.h"

@class AccountPSAdvancedController<MailboxBehaviorMailboxPickerDelegate>, MailboxListViewControllerPrefs;

@interface MailboxBehaviorMailboxPicker : PSViewController
{
    AccountPSAdvancedController<MailboxBehaviorMailboxPickerDelegate> *_target;
    MailboxListViewControllerPrefs *_mailboxListController;
    int _pickingForType;
}

- (void)selectedLocally:(id)arg1;
- (void)mailboxList:(id)arg1 didSelectMailbox:(id)arg2;
- (void)dealloc;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end


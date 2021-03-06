//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ACUIViewController.h"

#import "UITextFieldDelegate.h"

@class NSString, SLFacebookRegistrationInfo, UITextField;

@interface SLFacebookRegistrationInfoPrompt : ACUIViewController <UITextFieldDelegate>
{
    SLFacebookRegistrationInfo *_registrationInfo;
    UITextField *_firstTextField;
    id <SLFacebookRegistrationInfoPromptDelegate> _delegate;
}

@property(retain, nonatomic) id <SLFacebookRegistrationInfoPromptDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)showErrorMessage:(id)arg1 withTitle:(id)arg2;
- (void)cancelButtonTapped:(id)arg1;
- (void)returnPressedAtEnd;
- (void)nextButtonTapped:(id)arg1;
- (_Bool)isReadyToValidate;
- (_Bool)validate;
- (void)updateRegistrationInfo;
- (void)refreshNextButton;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)textFieldValueDidChange:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithRegistrationInfo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


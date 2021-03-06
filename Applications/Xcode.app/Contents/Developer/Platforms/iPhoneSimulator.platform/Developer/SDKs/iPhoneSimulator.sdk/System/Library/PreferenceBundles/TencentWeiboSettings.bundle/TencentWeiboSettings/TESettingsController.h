//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SLSettingsController.h"

#import "TEAccountCreationDelegate.h"

@class ACAccount, ACAccountType, NSArray, NSMutableDictionary, NSString, PSSetupController, PSSpecifier, SLNetworkReachabilityWarning;

@interface TESettingsController : SLSettingsController <TEAccountCreationDelegate>
{
    ACAccountType *_tencentWeiboAccountType;
    ACAccount *_signInAccount;
    ACAccount *_account;
    NSMutableDictionary *_authorizedAppList;
    NSArray *_accountStateDependentSpecifiers;
    NSArray *_authorizedAppListSpecifiers;
    PSSpecifier *_signInButtonSpecifier;
    PSSpecifier *_updateContactsSpecifier;
    SLNetworkReachabilityWarning *_networkWarning;
    PSSetupController *_accountCreationContainerVC;
}

- (void).cxx_destruct;
- (void)_learnMoreLinkButtonTapped:(id)arg1;
- (id)_tencentWeiboAccountType;
- (void)_accountStoreDidChange:(id)arg1;
- (void)_willEnterForeground:(id)arg1;
- (void)accountCreationController:(id)arg1 didFinishWithSuccess:(_Bool)arg2;
- (void)_createNewAccountButtonTapped:(id)arg1;
- (void)_updateSignInButton;
- (void)_textFieldValueDidChange:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)appInstallerWillStart:(id)arg1;
- (id)_tencentWeiboApp;
- (void)_showAppDownloadAlert;
- (void)_setAppAllowedAccess:(id)arg1 withSpecifier:(id)arg2;
- (id)_isAppAllowedAccountAccessWithSpecifier:(id)arg1;
- (_Bool)_isTencentWeiboParentalRestrictionEnabled;
- (void)_reloadAuthorizedAppList;
- (void)_handleAccountAuthenticationWithResult:(_Bool)arg1 error:(id)arg2;
- (void)_signInButtonTapped:(id)arg1;
- (void)setPassword:(id)arg1;
- (void)setUsername:(id)arg1;
- (id)_passwordWithSpecifier:(id)arg1;
- (void)_setPassword:(id)arg1 withSpecifier:(id)arg2;
- (id)_usernameWithSpecifier:(id)arg1;
- (void)_setUsername:(id)arg1 withSpecifier:(id)arg2;
- (id)_learnMoreLinkGroupSpecifier;
- (id)_createNewAccountButtonSpecifier;
- (id)_specifierForAccount:(id)arg1;
- (id)_authorizedAppsListSpecifiers;
- (id)_loginSpecifiers;
- (id)_accountListSpecifiers;
- (id)_noAccountsSpecifiers;
- (id)specifiers;
- (void)_stopObservingAccountStoreDidChangeNotification;
- (void)_beginObservingAccountStoreDidChangeNotification;
- (void)returnPressedAtEnd;
- (id)_networkWarning;
- (void)viewWillAppear:(_Bool)arg1;
- (id)navigationItem;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


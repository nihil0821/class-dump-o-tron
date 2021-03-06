//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MPUMediaDownloadObserver, NSString;

@interface MusicMediaOfferButtonState : NSObject
{
    _Bool _enabled;
    _Bool _hidden;
    _Bool _showsCloudButton;
    _Bool _showsConfirmationState;
    NSString *_confirmationTitle;
    MPUMediaDownloadObserver *_downloadObserver;
    long long _progressType;
    NSString *_title;
}

@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) _Bool showsConfirmationState; // @synthesize showsConfirmationState=_showsConfirmationState;
@property(nonatomic) _Bool showsCloudButton; // @synthesize showsCloudButton=_showsCloudButton;
@property(nonatomic) long long progressType; // @synthesize progressType=_progressType;
@property(nonatomic, getter=isHidden) _Bool hidden; // @synthesize hidden=_hidden;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(retain, nonatomic) MPUMediaDownloadObserver *downloadObserver; // @synthesize downloadObserver=_downloadObserver;
@property(copy, nonatomic) NSString *confirmationTitle; // @synthesize confirmationTitle=_confirmationTitle;
- (void).cxx_destruct;

@end


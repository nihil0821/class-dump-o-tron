//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@protocol ITunesFirenzeSoftwareValidationConfiguration <NSObject>
- (NSArray *)productFilesToSendOverride;
- (NSArray *)supportedProductArchitectures;
- (NSString *)productMetadataTemplate;
- (BOOL)validateFirenzeSPIUsage;
- (BOOL)validateProductRequiredArchitectures;
- (BOOL)validateProductSupportedArchitectures;
- (BOOL)validateProductBundleArchitectures;
- (BOOL)validateProductArchitectures;
- (BOOL)validateProductSymlinkResolvesLocally;
- (BOOL)validateProductSymlinkExists;
- (BOOL)validateProductMetadataServerSide;
- (BOOL)validateProductErrors;
- (BOOL)validateProductSignature;
@end

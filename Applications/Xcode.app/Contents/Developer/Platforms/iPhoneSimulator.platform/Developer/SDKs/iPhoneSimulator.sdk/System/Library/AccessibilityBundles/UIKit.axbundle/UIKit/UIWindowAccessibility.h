//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/__UIWindowAccessibility_super.h>

@interface UIWindowAccessibility : __UIWindowAccessibility_super
{
}

+ (Class)safeCategoryTargetClass;
+ (id)safeCategoryTargetClassName;
- (unsigned int)_accessibilityWindowContextId;
- (void)_orderFrontWithoutMakingKey;
- (_Bool)accessibilityIsWindow;
- (unsigned long long)accessibilityTraits;
- (struct CGPoint)warpPoint:(struct CGPoint)arg1;
- (void)_setFirstResponder:(id)arg1;
- (void)_accessibilityLoadAccessibilityInformation;
- (void)_axListenForRemoteElement;
- (void)_axRemoteElementRegistered:(id)arg1;
- (id)accessibilityRemoteSubstituteChildren:(id)arg1;
- (void)dealloc;
- (int)_accessibilityRemotePid;
- (id)accessibilityContainer;
- (id)_accessibilityUserTestingParent;
- (id)_accessibilityRemoteElement;
- (id)initWithFrame:(struct CGRect)arg1;

@end

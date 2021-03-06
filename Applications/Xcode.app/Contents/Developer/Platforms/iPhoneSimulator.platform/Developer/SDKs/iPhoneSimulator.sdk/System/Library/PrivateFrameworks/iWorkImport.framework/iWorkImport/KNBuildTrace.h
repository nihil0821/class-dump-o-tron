//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/KNAnimationEffect.h>

#import "KNFrameBuildAnimator.h"

@class KNAnimParameterGroup, NSMutableArray, NSString, TSDGLShader;

__attribute__((visibility("hidden")))
@interface KNBuildTrace : KNAnimationEffect <KNFrameBuildAnimator>
{
    KNAnimParameterGroup *_parameterGroup;
    TSDGLShader *_objectShader;
    TSDGLShader *_circleShader;
    TSDGLShader *_lineShader;
    NSMutableArray *_traceDrawObjects;
    struct CGRect _drawableFrame;
    struct CGRect _animationRect;
}

+ (id)thumbnailImageNameForType:(int)arg1;
+ (_Bool)requiresSingleTexturePerStage;
+ (id)defaultAttributes;
+ (void)fillLocalizedDirectionMenu:(id)arg1 forType:(int)arg2;
+ (unsigned long long)directionType;
+ (id)localizedMenuString:(int)arg1;
+ (id)supportedTypes;
+ (id)animationFilter;
+ (int)animationCategory;
+ (id)animationName;
- (void)animationDidEndWithContext:(id)arg1;
- (void)renderFrameWithContext:(id)arg1;
- (void)animationWillBeginWithContext:(id)arg1;
- (id)p_extraTraceObjectsWithContext:(id)arg1 originalTraceObjects:(id)arg2;
- (void)p_setupShaders;
- (void)p_setupTraceEffectsWithContext:(id)arg1;
- (struct CGRect)frameOfEffectWithFrame:(struct CGRect)arg1 context:(id)arg2;
- (void)dealloc;
- (void)teardown;
- (id)initWithAnimationContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


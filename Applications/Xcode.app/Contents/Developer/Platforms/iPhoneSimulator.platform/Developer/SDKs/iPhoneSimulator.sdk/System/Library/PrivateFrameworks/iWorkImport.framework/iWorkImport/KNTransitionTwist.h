//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/KNAnimationEffect.h>

#import "KNAnimationPluginArchiving.h"
#import "KNFrameAnimator.h"

@class NSArray, NSString, TSDGLDataBuffer, TSDGLMotionBlurEffect, TSDGLShader;

__attribute__((visibility("hidden")))
@interface KNTransitionTwist : KNAnimationEffect <KNFrameAnimator, KNAnimationPluginArchiving>
{
    TSDGLMotionBlurEffect *_motionBlurEffect;
    TSDGLShader *_shader;
    TSDGLDataBuffer *_dataBuffer;
    NSArray *_bufferAttributes;
    unsigned long long _positionAttributeIndex;
    unsigned long long _texCoordAttributeIndex;
    unsigned long long _normalAttributeIndex;
    unsigned long long _prevPositionAttributeIndex;
    long long _numPoints;
    double _twistyness;
}

+ (void)downgradeAttributes:(id *)arg1 animationName:(id *)arg2 warning:(id *)arg3 type:(int)arg4 isToClassic:(_Bool)arg5 version:(unsigned long long)arg6;
+ (void)upgradeAttributes:(id *)arg1 animationName:(id)arg2 warning:(id *)arg3 type:(int)arg4 isFromClassic:(_Bool)arg5 version:(unsigned long long)arg6;
+ (id)thumbnailImageNameForType:(int)arg1;
+ (id)customAttributes;
+ (id)defaultAttributes;
+ (void)fillLocalizedDirectionMenu:(id)arg1 forType:(int)arg2;
+ (unsigned long long)directionType;
+ (id)localizedMenuString:(int)arg1;
+ (id)supportedTypes;
+ (id)animationFilter;
+ (int)animationCategory;
+ (id)animationName;
- (void)renderFrameWithContext:(id)arg1;
- (void)animationDidEndWithContext:(id)arg1;
- (void)animationWillBeginWithContext:(id)arg1;
- (void)p_drawTwistWithPercent:(double)arg1 texture:(id)arg2 oldTexture:(id)arg3;
- (void)update:(id)arg1 withContext:(id)arg2;
- (double)fx:(double)arg1 withPercent:(double)arg2;
- (void)drawGrid:(id)arg1;
- (void)createArrays:(id)arg1 context:(id)arg2;
- (void)dealloc;
- (void)p_teardown;
- (id)initWithAnimationContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSCH3DChartGrowAnimationClip.h>

__attribute__((visibility("hidden")))
@interface TSCH3DChartSeparateCapGrowAnimationClip : TSCH3DChartGrowAnimationClip
{
}

- (void)renderAnimationElementInfo:(const struct ChartAnimationElementInfo *)arg1;
- (_Bool)p_renderCapWithAnimationElementInfo:(const struct ChartAnimationElementInfo *)arg1;
- (_Bool)p_renderBodyWithAnimationElementInfo:(const struct ChartAnimationElementInfo *)arg1;
- (void)p_submitGrowState:(struct ChartGrowAnimationState *)arg1 info:(const struct ChartAnimationElementInfo *)arg2 portion:(int)arg3;
- (void)enableBlendingForProcessor:(id)arg1 enableDepth:(_Bool)arg2;
- (id)makeClipEffectAtIndex:(const tvec2_3b141483 *)arg1 sceneObject:(id)arg2 scene:(id)arg3;

@end


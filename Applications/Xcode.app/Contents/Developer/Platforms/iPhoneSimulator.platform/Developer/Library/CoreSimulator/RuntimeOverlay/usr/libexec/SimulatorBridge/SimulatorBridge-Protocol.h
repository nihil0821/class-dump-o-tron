//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSArray, NSData, NSDictionary, NSString;

@protocol SimulatorBridge
- (void)setLocationWithLatitude:(double)arg1 andLongitude:(double)arg2;
- (void)setLocationScenarioWithPath:(in bycopy NSString *)arg1;
- (void)setLocationScenario:(in bycopy NSString *)arg1;
- (out bycopy NSString *)localizedNameForLocationScenario:(in bycopy NSString *)arg1;
- (out bycopy NSArray *)availableLocationScenarios;
- (void)setCADebugFlag:(unsigned int)arg1 enabled:(_Bool)arg2;
- (_Bool)getCADebugFlagEnabled:(unsigned int)arg1;
- (out bycopy NSDictionary *)accessibilityElementForPoint:(double)arg1 andY:(double)arg2;
- (out bycopy NSArray *)accessibilityElements;
- (out bycopy NSDictionary *)updateAccessibilityElement:(NSDictionary *)arg1;
- (_Bool)performIncrementAction:(NSDictionary *)arg1;
- (_Bool)performDecrementAction:(NSDictionary *)arg1;
- (_Bool)performPressAction:(NSDictionary *)arg1;
- (void)pasteWebArchiveData:(in bycopy NSData *)arg1;
- (out bycopy NSData *)pasteboardWebArchiveData;
- (void)pasteImageData:(in bycopy NSData *)arg1;
- (out bycopy NSData *)pasteboardImageData;
- (void)pasteString:(in bycopy NSString *)arg1;
- (out bycopy NSString *)pasteboardString;
- (void)setHardwareKeyboardEnabled:(_Bool)arg1 keyboardType:(unsigned int)arg2;
- (out bycopy NSDictionary *)basicLaunchApplicationPid:(int)arg1 options:(in bycopy NSDictionary *)arg2;
@end

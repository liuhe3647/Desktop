//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface IMYUserTrackAPMSupport : NSObject
{
}

+ (_Bool)isStartUserTrackSDKOnLoad;
+ (void)checkDoorStatus;
+ (void)load;
- (void)userTracerOnTouchEvent:(id)arg1;
- (void)userTracerOnPageTrack:(id)arg1;
- (void)userTracerOnExposureEvent:(id)arg1;
- (void)userTracerOnClickEvent:(id)arg1;
- (void)visualTracerOnWhitePage:(id)arg1 successHandler:(CDUnknownBlockType)arg2 failHandler:(CDUnknownBlockType)arg3;
- (void)visualTracerOnBindEvent:(id)arg1 successHandler:(CDUnknownBlockType)arg2 failHandler:(CDUnknownBlockType)arg3;

@end

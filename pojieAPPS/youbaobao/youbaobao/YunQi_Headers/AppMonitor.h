//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface AppMonitor : NSObject
{
}

+ (void)setSamplingConfigWithJson:(id)arg1;
+ (void)setSampling:(id)arg1;
+ (id)realTimeDebugId;
+ (id)realTimeDebugUploadUrl;
+ (_Bool)isTurnOnRealTimeDebug;
+ (void)turnOffAppMonitorRealtimeDebug;
+ (void)turnOnAppMonitorRealtimeDebug:(id)arg1;
+ (void)disableSample;
+ (_Bool)isInit;
+ (id)sharedInstance;
- (void)appDidEnterBackground;
- (id)init;

@end


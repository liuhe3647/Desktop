//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMYRNNativeModule.h"

@interface IMYRNNativeModule (EventDispatcher)
+ (void)old_sendEventWithBridge:(id)arg1 name:(id)arg2 body:(id)arg3;
+ (void)sendEventWithBridge:(id)arg1 name:(id)arg2 body:(id)arg3;
+ (void)sendEventWithBridge:(id)arg1 name:(id)arg2 viewID:(id)arg3 body:(id)arg4;
+ (void)load;
- (id)supportedEventDic;
- (void)sendEventWithName:(id)arg1 body:(id)arg2;
- (id)supportedEvents;
- (void)imy_addListener:(id)arg1;
@end


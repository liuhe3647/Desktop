//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UTMCLifeCycleProtocol-Protocol.h"

@class NSString;

@interface UTSelfStaticsManager : NSObject <UTMCLifeCycleProtocol>
{
    long long mSwitchForeGroundTime;
    long long mLastBackGroundOccuredTime;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)getInstance;
- (id)getAppState;
- (void)onEventForCrash;
- (void)switchBackGround;
- (void)switchForeGround;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


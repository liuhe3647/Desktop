//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AFNetworkReachabilityManager.h"

@class NSObject;
@protocol OS_nw_path_monitor;

@interface MRTNetworkReachabilityManager : AFNetworkReachabilityManager
{
    NSObject<OS_nw_path_monitor> *_monitor;
}

@property(retain, nonatomic) NSObject<OS_nw_path_monitor> *monitor; // @synthesize monitor=_monitor;
- (void).cxx_destruct;
- (void)fireStatusUpdated:(long long)arg1;
- (long long)statusFromPath:(id)arg1;
- (void)stopMonitoring;
- (void)startMonitoring;
- (void)dealloc;
- (id)initWithReachability:(struct __SCNetworkReachability *)arg1;

@end


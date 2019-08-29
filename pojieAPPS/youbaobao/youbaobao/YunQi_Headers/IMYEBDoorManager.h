//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IMYEBTopNofityModel, NSArray, NSDictionary, RACReplaySubject, RACSignal;

@interface IMYEBDoorManager : NSObject
{
    struct _opaque_pthread_rwlock_t _rwlock;
    _Bool _isLatestDoorConfigs;
    RACSignal *_dataLoadFinishedSignal;
    double _latestDoorFileTimeDiff;
    double _lastEnterBackgroundTime;
    NSArray *_allSwitchArray;
    IMYEBTopNofityModel *_topNotifyModel;
    NSArray *_allRefreshTips;
    NSArray *_allRefreshImgs;
    NSDictionary *_allSwitchDictionary;
    RACReplaySubject *_dataLoadFinishedSubject;
}

+ (id)sharedManager;
+ (void)load;
@property(retain, nonatomic) RACReplaySubject *dataLoadFinishedSubject; // @synthesize dataLoadFinishedSubject=_dataLoadFinishedSubject;
@property(retain, nonatomic) NSDictionary *allSwitchDictionary; // @synthesize allSwitchDictionary=_allSwitchDictionary;
@property(retain, nonatomic) NSArray *allRefreshImgs; // @synthesize allRefreshImgs=_allRefreshImgs;
@property(retain, nonatomic) NSArray *allRefreshTips; // @synthesize allRefreshTips=_allRefreshTips;
@property(retain, nonatomic) IMYEBTopNofityModel *topNotifyModel; // @synthesize topNotifyModel=_topNotifyModel;
@property(retain, nonatomic) NSArray *allSwitchArray; // @synthesize allSwitchArray=_allSwitchArray;
@property(nonatomic) double lastEnterBackgroundTime; // @synthesize lastEnterBackgroundTime=_lastEnterBackgroundTime;
@property(nonatomic) double latestDoorFileTimeDiff; // @synthesize latestDoorFileTimeDiff=_latestDoorFileTimeDiff;
@property(nonatomic) _Bool isLatestDoorConfigs; // @synthesize isLatestDoorConfigs=_isLatestDoorConfigs;
@property(retain, nonatomic) RACSignal *dataLoadFinishedSignal; // @synthesize dataLoadFinishedSignal=_dataLoadFinishedSignal;
- (void).cxx_destruct;
- (id)ebSwitchForType:(id)arg1;
- (void)addItemDetailClick:(id)arg1;
- (void)addShowedNotifyID:(long long)arg1;
- (_Bool)hasShowedNotifyID:(long long)arg1;
- (void)clearTopNofityModel;
- (void)requestTopNofityModel_HAHA;
- (void)requestTopNofityModel;
- (void)requestRefreshTips;
- (void)requestTaeConfig;
- (void)loadCacheSwitchModel;
@property(readonly, nonatomic) double nowDiffLastBackgroundTime;
- (void)requestData;
- (id)anyRefreshTip;
- (id)switchForType:(id)arg1;
- (void)hideEBBadge;
- (_Bool)hasEBBadge;
- (void)hideEBTabImg;
- (_Bool)hasEBTabImg;
- (void)dealloc;
- (id)init;

@end


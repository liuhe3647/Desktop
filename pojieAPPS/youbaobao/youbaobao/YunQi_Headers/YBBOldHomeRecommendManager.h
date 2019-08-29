//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, RACSignal, YBBOldHomeRecommendInterItem;

@interface YBBOldHomeRecommendManager : NSObject
{
    RACSignal *_refreshSignal;
    RACSignal *_moreDataSignal;
    long long _timestamp;
    YBBOldHomeRecommendInterItem *_interItem;
    NSArray *_dataArray;
    long long _userMode;
}

+ (_Bool)checkFeedsDoorOpen;
+ (_Bool)checkHotTopicDoorOpen;
+ (id)shareManager;
@property(nonatomic) long long userMode; // @synthesize userMode=_userMode;
@property(retain, nonatomic) NSArray *dataArray; // @synthesize dataArray=_dataArray;
@property(retain, nonatomic) YBBOldHomeRecommendInterItem *interItem; // @synthesize interItem=_interItem;
@property(nonatomic) long long timestamp; // @synthesize timestamp=_timestamp;
@property(readonly, nonatomic) RACSignal *moreDataSignal; // @synthesize moreDataSignal=_moreDataSignal;
@property(readonly, nonatomic) RACSignal *refreshSignal; // @synthesize refreshSignal=_refreshSignal;
- (void).cxx_destruct;
- (void)requestMoreDataWithWithParam:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)refreshDataWithParam:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)refreshDataInCurrentModeWithhandler:(CDUnknownBlockType)arg1;
- (void)reset;
- (void)checkInterItem;
- (id)firstModel;
- (id)lastModel;
- (_Bool)checkFeedsAvailable;
- (id)topicsArray;
- (id)init;

@end


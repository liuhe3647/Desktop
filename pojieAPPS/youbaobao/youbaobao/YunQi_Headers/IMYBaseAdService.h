//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IMYIAdModelPara-Protocol.h"
#import "IMYIAdvertiserService-Protocol.h"

@class IMYAdvertiserInfo, IMYCommonAdViewBuilder, NSMutableArray, NSString;
@protocol IMYAdvertiserViewEventDelegate, IMYIAdvertiserModel;

@interface IMYBaseAdService : NSObject <IMYIAdvertiserService, IMYIAdModelPara>
{
    IMYAdvertiserInfo *_adInfo;
    NSMutableArray *_rawModels;
    id <IMYAdvertiserViewEventDelegate> _eventDelegate;
    id <IMYIAdvertiserModel> _adModel;
    IMYCommonAdViewBuilder *_viewBuilder;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failBlock;
}

+ (void)load;
@property(copy, nonatomic) CDUnknownBlockType failBlock; // @synthesize failBlock=_failBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
@property(retain, nonatomic) IMYCommonAdViewBuilder *viewBuilder; // @synthesize viewBuilder=_viewBuilder;
@property(retain, nonatomic) id <IMYIAdvertiserModel> adModel; // @synthesize adModel=_adModel;
@property(nonatomic) __weak id <IMYAdvertiserViewEventDelegate> eventDelegate; // @synthesize eventDelegate=_eventDelegate;
@property(readonly, nonatomic) NSMutableArray *rawModels; // @synthesize rawModels=_rawModels;
@property(readonly, nonatomic) IMYAdvertiserInfo *adInfo; // @synthesize adInfo=_adInfo;
- (void).cxx_destruct;
- (void)dealloc;
- (void)playVideoWithModel:(id)arg1 sender:(id)arg2 userInfo:(id)arg3;
- (void)otherActionModel:(id)arg1 action:(long long)arg2 sender:(id)arg3 userInfo:(id)arg4;
- (void)statisticExternalAdvertisement:(id)arg1 action:(long long)arg2;
- (void)loadedWithModel:(id)arg1 sender:(id)arg2 userInfo:(id)arg3;
- (void)dismissWithModel:(id)arg1 sender:(id)arg2 userInfo:(id)arg3;
- (void)closeWithModel:(id)arg1 sender:(id)arg2 userInfo:(id)arg3;
- (void)action:(id)arg1 userInfo:(id)arg2;
- (void)clickWithModel:(id)arg1 sender:(id)arg2 userInfo:(id)arg3;
- (void)displayWithModel:(id)arg1 sender:(id)arg2 userInfo:(id)arg3;
- (void)postRequestStatisticsWithAds:(id)arg1 isUserful:(_Bool)arg2 withModel:(id)arg3 response:(id)arg4;
- (void)postRequestStatisticsWithAds:(id)arg1 withModel:(id)arg2 response:(id)arg3;
- (id)getAdModelwith:(id)arg1;
- (id)viewWithModel:(id)arg1;
- (id)modelWithIndex:(long long)arg1;
- (long long)modelCount;
- (void)cleanup;
- (void)cancelRequest;
- (void)callFailBlock:(id)arg1;
- (void)callSuccessBlock;
- (void)preparationCompleted:(CDUnknownBlockType)arg1;
- (void)requestDataWithParams:(id)arg1 success:(CDUnknownBlockType)arg2 fail:(CDUnknownBlockType)arg3;
- (id)initWithADInfo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


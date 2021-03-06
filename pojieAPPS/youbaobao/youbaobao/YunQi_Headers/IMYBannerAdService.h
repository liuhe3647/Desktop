//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMYBaseAdvertiserService.h"

@class IMYADCloseView, IMYAnimatedImageView, IMYBannerView, IMYMiniBannerAdView, IMYSpreadLabelView, NSArray, NSMapTable, UITableView, UIView;
@protocol IMYIAdvertiserService;

@interface IMYBannerAdService : IMYBaseAdvertiserService
{
    _Bool _miniBannerShow;
    UITableView *_tableView;
    IMYMiniBannerAdView *_minibannerAdView;
    IMYAnimatedImageView *_adImageView;
    IMYSpreadLabelView *_spreadLabelView;
    IMYADCloseView *_closeButton;
    UIView *_headAdView;
    UIView *_headContentView;
    id <IMYIAdvertiserService> _topicsBannerSerivce;
    IMYBannerView *_cycleBannerView;
    NSMapTable *_cycleServiceMap;
    NSArray *_vaildRawModels;
    CDUnknownBlockType _reloadHeaderBlock;
}

@property(copy, nonatomic) CDUnknownBlockType reloadHeaderBlock; // @synthesize reloadHeaderBlock=_reloadHeaderBlock;
@property(retain, nonatomic) NSArray *vaildRawModels; // @synthesize vaildRawModels=_vaildRawModels;
@property(nonatomic) _Bool miniBannerShow; // @synthesize miniBannerShow=_miniBannerShow;
@property(retain, nonatomic) NSMapTable *cycleServiceMap; // @synthesize cycleServiceMap=_cycleServiceMap;
@property(retain, nonatomic) IMYBannerView *cycleBannerView; // @synthesize cycleBannerView=_cycleBannerView;
@property(retain, nonatomic) id <IMYIAdvertiserService> topicsBannerSerivce; // @synthesize topicsBannerSerivce=_topicsBannerSerivce;
@property(retain, nonatomic) UIView *headContentView; // @synthesize headContentView=_headContentView;
@property(retain, nonatomic) UIView *headAdView; // @synthesize headAdView=_headAdView;
@property(retain, nonatomic) IMYADCloseView *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) IMYSpreadLabelView *spreadLabelView; // @synthesize spreadLabelView=_spreadLabelView;
@property(retain, nonatomic) IMYAnimatedImageView *adImageView; // @synthesize adImageView=_adImageView;
@property(retain, nonatomic) IMYMiniBannerAdView *minibannerAdView; // @synthesize minibannerAdView=_minibannerAdView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (void)closeWithModel:(id)arg1 sender:(id)arg2 userInfo:(id)arg3;
- (void)displayWithModel:(id)arg1 sender:(id)arg2 userInfo:(id)arg3;
- (void)clickWithModel:(id)arg1 sender:(id)arg2 userInfo:(id)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)cycleBannerViewClick:(long long)arg1;
- (id)getAdModelWithIndex:(long long)arg1;
- (void)cycleBannerView:(id)arg1 didScrollToIndex:(long long)arg2;
- (void)downloadBannerImage:(id)arg1 withModel:(id)arg2;
- (void)closesBannerAds:(id)arg1 withTyep:(long long)arg2;
- (void)clickAdsBanner:(id)arg1 userInfo:(id)arg2;
- (void)setupTopicBannerViews;
- (void)setupTopicBannerAdServiceWithRawModel:(id)arg1;
- (id)createAdServiceWithRawModel:(id)arg1;
- (void)setupTopicsTableMiniHeader:(id)arg1;
- (void)setupTopicsTableHeader:(id)arg1;
- (void)setupHomeTableHeader:(id)arg1;
- (id)viewWithModel:(id)arg1;
- (id)modelWithIndex:(long long)arg1;
- (void)cancelRequest;
- (long long)modelCount;
- (void)requestDataWithParams:(id)arg1 success:(CDUnknownBlockType)arg2 fail:(CDUnknownBlockType)arg3;
- (void)cleanup;
- (id)initWithADInfo:(id)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMYBaseAdTool.h"

@class IMYBannerView, RACDisposable, UIScrollView, UITableView;

@interface IMYTTQBannerAdTool : IMYBaseAdTool
{
    _Bool _needSetupBanner;
    _Bool _waterfall_flow;
    IMYBannerView *_cycleBannerView;
    UITableView *_tableView;
    UIScrollView *_scrollView;
    CDUnknownBlockType _bannerBlock;
    CDUnknownBlockType _reloadHeaderBlock;
    RACDisposable *_visibleDisposable;
}

+ (void)load;
@property(nonatomic) __weak RACDisposable *visibleDisposable; // @synthesize visibleDisposable=_visibleDisposable;
@property(copy, nonatomic) CDUnknownBlockType reloadHeaderBlock; // @synthesize reloadHeaderBlock=_reloadHeaderBlock;
@property(nonatomic) _Bool waterfall_flow; // @synthesize waterfall_flow=_waterfall_flow;
@property(copy, nonatomic) CDUnknownBlockType bannerBlock; // @synthesize bannerBlock=_bannerBlock;
@property(nonatomic) _Bool needSetupBanner; // @synthesize needSetupBanner=_needSetupBanner;
@property(nonatomic) __weak UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) IMYBannerView *cycleBannerView; // @synthesize cycleBannerView=_cycleBannerView;
- (void).cxx_destruct;
- (struct CGRect)totalRect;
- (struct CGRect)showRect;
- (double)bannerHeight;
- (void)closesBannerAds:(id)arg1 withTyep:(long long)arg2;
- (void)adStaticAction:(id)arg1 index:(long long)arg2;
- (void)cycleBannerView:(id)arg1 didScrollToIndex:(long long)arg2;
- (void)setupBannerAdView;
- (void)cleanupBanner;
- (void)setupBanner;
- (void)cleanupWithView;
- (void)addAdService:(id)arg1;
- (void)initVisibleDisposable;
- (id)initWithADInfo:(id)arg1;

@end


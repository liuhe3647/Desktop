//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YBBToolsEatDoForbidListVC.h"

@class NSMutableArray, UIScrollView, YBBToolsEatDoScrolltView;

@interface YBBToolsEatDoDoListVC : YBBToolsEatDoForbidListVC
{
    UIScrollView *_containterView;
    NSMutableArray *_tableViews;
    YBBToolsEatDoScrolltView *_contentView;
    NSMutableArray *_VMs;
}

@property(retain, nonatomic) NSMutableArray *VMs; // @synthesize VMs=_VMs;
@property(retain, nonatomic) YBBToolsEatDoScrolltView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) NSMutableArray *tableViews; // @synthesize tableViews=_tableViews;
@property(retain, nonatomic) UIScrollView *containterView; // @synthesize containterView=_containterView;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)rightBarButtonItemTouchUpInside:(id)arg1;
- (void)buildSearchBar;
- (void)buildXiaoYouZi;
- (void)relayoutSubview;
- (void)initContainterView;
- (void)initVMs;
- (void)viewDidLoad;

@end


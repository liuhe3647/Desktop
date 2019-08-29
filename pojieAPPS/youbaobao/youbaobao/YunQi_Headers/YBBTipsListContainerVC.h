//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMYPublicBaseViewController.h"

#import "UIScrollViewDelegate-Protocol.h"

@class NSArray, NSString, UIScrollView, YBBCategoryTitleView;

@interface YBBTipsListContainerVC : IMYPublicBaseViewController <UIScrollViewDelegate>
{
    NSString *_source;
    long long _userMode;
    YBBCategoryTitleView *_titleView;
    UIScrollView *_containerView;
    NSArray *_vcList;
}

@property(retain, nonatomic) NSArray *vcList; // @synthesize vcList=_vcList;
@property(retain, nonatomic) UIScrollView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) YBBCategoryTitleView *titleView; // @synthesize titleView=_titleView;
@property(nonatomic) long long userMode; // @synthesize userMode=_userMode;
@property(copy, nonatomic) NSString *source; // @synthesize source=_source;
- (void).cxx_destruct;
- (void)searchTip;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)resetScrollsToTop:(long long)arg1;
- (void)setupPageView;
- (void)setupContainerView;
- (void)setupSearchIcon;
- (void)setupTitleView;
- (void)initViews;
- (void)viewDidLoad;
- (void)viewWillDisappear:(_Bool)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


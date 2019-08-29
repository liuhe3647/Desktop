//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMYPublicBaseViewController.h"

#import "UIScrollViewDelegate-Protocol.h"

@class NSArray, NSString, UIScrollView, YBBCategoryTitleView;

@interface YBBHomeMergeFoodsContainerVC : IMYPublicBaseViewController <UIScrollViewDelegate>
{
    YBBCategoryTitleView *_titleView;
    UIScrollView *_containerView;
    NSArray *_vcList;
}

+ (void)foodCommentShowDialogByWeb;
@property(retain, nonatomic) NSArray *vcList; // @synthesize vcList=_vcList;
@property(retain, nonatomic) UIScrollView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) YBBCategoryTitleView *titleView; // @synthesize titleView=_titleView;
- (void).cxx_destruct;
- (void)addInputView;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)resetScrollsToTop:(long long)arg1;
- (long long)ageForH5Format:(long long)arg1;
- (void)setupPageView;
- (void)setupContainerView;
- (void)setupTitleView;
- (void)initViews;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


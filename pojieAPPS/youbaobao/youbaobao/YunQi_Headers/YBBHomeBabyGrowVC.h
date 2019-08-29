//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMYPublicBaseViewController.h"

#import "UIPageViewControllerDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class NSArray, NSMutableDictionary, NSString, UIPageViewController, UIView, YBBHomeBabyGrowDataSource, YBBTipsSegmentedControl;

@interface YBBHomeBabyGrowVC : IMYPublicBaseViewController <UIPageViewControllerDelegate, UIScrollViewDelegate>
{
    _Bool _isLocked;
    YBBHomeBabyGrowDataSource *_babyDataSource;
    long long _selectedIndex;
    long long _defaultIndex;
    UIPageViewController *_pageViewController;
    YBBTipsSegmentedControl *_segmented;
    double _oldOffsetX;
    NSMutableDictionary *_viewControllers;
    NSArray *_pageData;
    UIView *_specialNavBar;
}

@property _Bool isLocked; // @synthesize isLocked=_isLocked;
@property(retain, nonatomic) UIView *specialNavBar; // @synthesize specialNavBar=_specialNavBar;
@property(retain, nonatomic) NSArray *pageData; // @synthesize pageData=_pageData;
@property(retain, nonatomic) NSMutableDictionary *viewControllers; // @synthesize viewControllers=_viewControllers;
@property(nonatomic) double oldOffsetX; // @synthesize oldOffsetX=_oldOffsetX;
@property(nonatomic) __weak YBBTipsSegmentedControl *segmented; // @synthesize segmented=_segmented;
@property(retain, nonatomic) UIPageViewController *pageViewController; // @synthesize pageViewController=_pageViewController;
@property(nonatomic) long long defaultIndex; // @synthesize defaultIndex=_defaultIndex;
@property(nonatomic) long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(readonly, nonatomic) YBBHomeBabyGrowDataSource *babyDataSource; // @synthesize babyDataSource=_babyDataSource;
- (void).cxx_destruct;
- (void)shareBabyInfo;
- (void)scrollToLeft:(_Bool)arg1;
- (void)scrollToIndex:(long long)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (long long)pageViewController:(id)arg1 spineLocationForInterfaceOrientation:(long long)arg2;
- (void)pageViewController:(id)arg1 didFinishAnimating:(_Bool)arg2 previousViewControllers:(id)arg3 transitionCompleted:(_Bool)arg4;
- (void)initPageView;
- (long long)statusBarStyle;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithCurrentIndex:(long long)arg1;
- (_Bool)enableFullPopGestureRecognizer;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

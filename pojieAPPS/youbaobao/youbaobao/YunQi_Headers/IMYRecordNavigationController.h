//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMYPublicBaseNavigationController.h"

@class UIImageView;

@interface IMYRecordNavigationController : IMYPublicBaseNavigationController
{
    _Bool _shouldShowNightCoverView;
    UIImageView *_nightCover;
}

@property(retain, nonatomic) UIImageView *nightCover; // @synthesize nightCover=_nightCover;
@property(nonatomic) _Bool shouldShowNightCoverView; // @synthesize shouldShowNightCoverView=_shouldShowNightCoverView;
- (void).cxx_destruct;
- (void)applyTheme;
- (void)didReceiveMemoryWarning;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMYLaunchBaseVC.h"

@class RACDisposable;

@interface IMYLaunchAdvertisementVC : IMYLaunchBaseVC
{
    _Bool _isAdvertisementSkip;
    RACDisposable *_disposable;
}

@property(nonatomic) __weak RACDisposable *disposable; // @synthesize disposable=_disposable;
@property _Bool isAdvertisementSkip; // @synthesize isAdvertisementSkip=_isAdvertisementSkip;
- (void).cxx_destruct;
- (double)showRootFadeAnimationTime;
- (void)showRootViewControllerAtDelay:(double)arg1;
- (void)viewDidLoad;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMYPublicBaseViewController.h"

@protocol IMYAnalyzeChartWrapper;

@interface IMYAnalyzeLandscapeBaseVC : IMYPublicBaseViewController
{
    _Bool _previousStatusBarHidden;
    id <IMYAnalyzeChartWrapper> _chartWrapper;
    unsigned long long _showInterfaceOrientation;
}

+ (void)showWithParentViewController:(id)arg1;
@property(nonatomic) _Bool previousStatusBarHidden; // @synthesize previousStatusBarHidden=_previousStatusBarHidden;
@property(nonatomic) unsigned long long showInterfaceOrientation; // @synthesize showInterfaceOrientation=_showInterfaceOrientation;
@property(retain, nonatomic) id <IMYAnalyzeChartWrapper> chartWrapper; // @synthesize chartWrapper=_chartWrapper;
- (void).cxx_destruct;
- (long long)preferredInterfaceOrientationForPresentation;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (long long)preferredStatusBarUpdateAnimation;
- (_Bool)prefersStatusBarHidden;
- (void)dimissSelf;
- (void)viewDidLoad;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;

@end


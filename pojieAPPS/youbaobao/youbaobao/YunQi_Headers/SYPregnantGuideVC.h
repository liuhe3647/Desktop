//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMYLaunchGuideVC.h"

@class UIActivityIndicatorView;

@interface SYPregnantGuideVC : IMYLaunchGuideVC
{
    _Bool _isSkipUnionLogin;
    _Bool _isNeedSkipUnionLogin;
    CDUnknownBlockType _replaceShowRootVCBlock;
    UIActivityIndicatorView *_activityIndicatorView;
}

+ (id)pregnantGuideWithNewUser:(_Bool)arg1;
@property(nonatomic) _Bool isNeedSkipUnionLogin; // @synthesize isNeedSkipUnionLogin=_isNeedSkipUnionLogin;
@property(nonatomic) _Bool isSkipUnionLogin; // @synthesize isSkipUnionLogin=_isSkipUnionLogin;
@property(retain, nonatomic) UIActivityIndicatorView *activityIndicatorView; // @synthesize activityIndicatorView=_activityIndicatorView;
@property(copy, nonatomic) CDUnknownBlockType replaceShowRootVCBlock; // @synthesize replaceShowRootVCBlock=_replaceShowRootVCBlock;
- (void).cxx_destruct;
- (void)unionLoginDo:(CDUnknownBlockType)arg1;
- (void)downloadRecordData;
- (void)showRootViewController;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)onStartButtonPressed;
- (void)viewDidLoad;
- (void)goSettingVC;
- (double)showRootActionFinishedAtDelay;
- (void)_initMyself;
@property(readonly, nonatomic) _Bool isNewUser;

@end


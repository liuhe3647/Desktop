//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMYPublicBaseViewController.h"

@class IMYAccount, IMYButton, IMYSimpleTableView, IMYTouchEXButton, NSTimer, UIButton, UITextField;

@interface IMYAccountPhoneVerifyVC : IMYPublicBaseViewController
{
    _Bool _hasReqCode;
    long long _type;
    IMYAccount *_account;
    CDUnknownBlockType _completion;
    IMYSimpleTableView *_tableView;
    IMYButton *_codeButton;
    UIButton *_nextButton;
    UITextField *_codeTextField;
    UITextField *_pwdTextField;
    long long _times;
    NSTimer *_timer;
    IMYTouchEXButton *_eyeButton;
}

@property(nonatomic) _Bool hasReqCode; // @synthesize hasReqCode=_hasReqCode;
@property(retain, nonatomic) IMYTouchEXButton *eyeButton; // @synthesize eyeButton=_eyeButton;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) long long times; // @synthesize times=_times;
@property(nonatomic) __weak UITextField *pwdTextField; // @synthesize pwdTextField=_pwdTextField;
@property(nonatomic) __weak UITextField *codeTextField; // @synthesize codeTextField=_codeTextField;
@property(nonatomic) __weak UIButton *nextButton; // @synthesize nextButton=_nextButton;
@property(retain, nonatomic) IMYButton *codeButton; // @synthesize codeButton=_codeButton;
@property(retain, nonatomic) IMYSimpleTableView *tableView; // @synthesize tableView=_tableView;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(retain, nonatomic) IMYAccount *account; // @synthesize account=_account;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (double)getHeaderHeight:(id)arg1;
- (void)handleReqCode:(_Bool)arg1 times:(unsigned long long)arg2 error:(id)arg3;
- (void)togglePasswordAction:(id)arg1;
- (void)verifyFindPhone:(long long)arg1 pwd:(id)arg2;
- (void)verifyCurrentPhone:(long long)arg1;
- (void)verifyOldPhone:(long long)arg1;
- (void)reqCode;
- (void)codeButtonAction:(id)arg1;
- (void)handleOnCodeAvailable;
- (void)restartTimer;
- (void)stopTimer;
- (void)updateCodeButtonEnable:(_Bool)arg1;
- (void)handleTimerExpired;
- (void)initTableViewData;
- (void)createUI;
- (void)didReceiveMemoryWarning;
- (void)handlePresentingCase;
- (void)viewDidLoad;
- (id)init;
- (void)imy_topLeftButtonTouchupInside;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)dealloc;

@end


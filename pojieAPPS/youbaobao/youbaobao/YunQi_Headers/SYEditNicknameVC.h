//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SYBaseViewController.h"

@class UIButton, UIImageView, UILabel, UITextField;

@interface SYEditNicknameVC : SYBaseViewController
{
    UILabel *_tipsLabel;
    UITextField *_textField;
    UIButton *_saveButton;
    UIImageView *_bg_text;
    UILabel *_auto_150_label;
}

@property(nonatomic) __weak UILabel *auto_150_label; // @synthesize auto_150_label=_auto_150_label;
@property(nonatomic) __weak UIImageView *bg_text; // @synthesize bg_text=_bg_text;
@property(nonatomic) __weak UIButton *saveButton; // @synthesize saveButton=_saveButton;
@property(nonatomic) __weak UITextField *textField; // @synthesize textField=_textField;
@property(nonatomic) __weak UILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
- (void).cxx_destruct;
- (void)initTextXib;
- (void)handleResult:(id)arg1 statusCode:(long long)arg2;
- (void)syncScreenName:(id)arg1;
- (void)save:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;

@end


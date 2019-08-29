//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMYTLView.h"

#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSString, UIButton, UILabel, UIView;

@interface IMYTLInviteView : IMYTLView <UIGestureRecognizerDelegate>
{
    _Bool _isShow;
    NSString *_inviteCode;
    UIView *_backgroundView;
    UIView *_bottomView;
    UIButton *_buttonSMS;
    UILabel *_labelSMS;
    UIButton *_buttonWeixin;
    UILabel *_labelWeixin;
    UIButton *_buttonQQ;
    UILabel *_labelQQ;
}

+ (_Bool)shareEnabled;
+ (id)addToView:(id)arg1 inviteCode:(id)arg2;
@property(retain, nonatomic) UILabel *labelQQ; // @synthesize labelQQ=_labelQQ;
@property(retain, nonatomic) UIButton *buttonQQ; // @synthesize buttonQQ=_buttonQQ;
@property(retain, nonatomic) UILabel *labelWeixin; // @synthesize labelWeixin=_labelWeixin;
@property(retain, nonatomic) UIButton *buttonWeixin; // @synthesize buttonWeixin=_buttonWeixin;
@property(retain, nonatomic) UILabel *labelSMS; // @synthesize labelSMS=_labelSMS;
@property(retain, nonatomic) UIButton *buttonSMS; // @synthesize buttonSMS=_buttonSMS;
@property(retain, nonatomic) UIView *bottomView; // @synthesize bottomView=_bottomView;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(copy, nonatomic) NSString *inviteCode; // @synthesize inviteCode=_inviteCode;
@property(nonatomic) _Bool isShow; // @synthesize isShow=_isShow;
- (void).cxx_destruct;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)getBabyImage;
- (void)resortShareButtons;
- (void)dismiss;
- (void)show;
- (void)shareWithType:(int)arg1 shortURL:(id)arg2;
- (void)shareAction:(id)arg1;
- (id)shareButtonWithName:(id)arg1;
- (id)shareLabelWithTitle:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMYBaseAdView.h"

@class IMYRecordPopView, MBProgressHUD, UIButton, UIImageView, UIWindow;

@interface IMYRecordPopupAdView : IMYBaseAdView
{
    long long _actionType;
    UIImageView *_imageView;
    UIButton *_closeButton;
    MBProgressHUD *_hud;
    IMYRecordPopView *_backView;
    UIWindow *_showWindow;
}

+ (void)load;
@property(retain, nonatomic) UIWindow *showWindow; // @synthesize showWindow=_showWindow;
@property(retain, nonatomic) IMYRecordPopView *backView; // @synthesize backView=_backView;
@property(retain, nonatomic) MBProgressHUD *hud; // @synthesize hud=_hud;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) long long actionType; // @synthesize actionType=_actionType;
- (void).cxx_destruct;
- (void)handleCloseButton:(id)arg1;
- (void)hide;
- (void)showAnimate;
- (void)show;
- (void)layoutWithModel:(id)arg1;
- (void)setupSubviews;

@end


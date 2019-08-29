//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class IMYEBShowCaseCountDown, NSString, UIButton, UIImageView, UILabel;

@interface IMYEBWindowShowCaseItem : UIView
{
    UIImageView *_imageView;
    UIButton *_button;
    NSString *_redirectUrl;
    NSString *_imageUrl;
    UILabel *_titleLabel;
    UILabel *_subTitleLabel;
    IMYEBShowCaseCountDown *_countDownView;
    CDUnknownBlockType _onClick;
}

@property(copy, nonatomic) CDUnknownBlockType onClick; // @synthesize onClick=_onClick;
@property(retain, nonatomic) IMYEBShowCaseCountDown *countDownView; // @synthesize countDownView=_countDownView;
@property(retain, nonatomic) UILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(copy, nonatomic) NSString *imageUrl; // @synthesize imageUrl=_imageUrl;
@property(copy, nonatomic) NSString *redirectUrl; // @synthesize redirectUrl=_redirectUrl;
@property(retain, nonatomic) UIButton *button; // @synthesize button=_button;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)refreshTimer:(id)arg1;
- (void)refreshWithActivity:(id)arg1 titleColor:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end


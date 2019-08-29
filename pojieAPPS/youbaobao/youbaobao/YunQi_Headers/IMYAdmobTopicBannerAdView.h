//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMYBaseAdView.h"

@class IMYCapsuleButton, IMYSpreadLabelView, IMYTouchEXButton, NSMutableArray, UIImageView, UILabel, UIView;

@interface IMYAdmobTopicBannerAdView : IMYBaseAdView
{
    IMYSpreadLabelView *_spreadLabelView;
    UILabel *_titleLabel;
    UIImageView *_iconImageView;
    UIImageView *_imageView;
    UIView *_blurView;
    IMYTouchEXButton *_closeButton;
    UILabel *_subtitleLabel;
    NSMutableArray *_starImageViews;
    UILabel *_descriptLabel;
    IMYCapsuleButton *_downloadButton;
}

+ (double)heightWithModel:(id)arg1;
@property(retain, nonatomic) IMYCapsuleButton *downloadButton; // @synthesize downloadButton=_downloadButton;
@property(retain, nonatomic) UILabel *descriptLabel; // @synthesize descriptLabel=_descriptLabel;
@property(retain, nonatomic) NSMutableArray *starImageViews; // @synthesize starImageViews=_starImageViews;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) IMYTouchEXButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UIView *blurView; // @synthesize blurView=_blurView;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) IMYSpreadLabelView *spreadLabelView; // @synthesize spreadLabelView=_spreadLabelView;
- (void).cxx_destruct;
- (id)imageViews;
- (id)actionView;
- (id)closeView;
- (void)setupDownloadSubviews;
- (void)setupContentSubviews;
- (void)layoutWithModel:(id)arg1;
- (void)setupSubviews;

@end


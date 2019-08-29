//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMYFeedsBoxAdView.h"

@class IMYADCallOutView, UIImageView;
@protocol IMYIAdvertiserModel;

@interface IMYNewTaTaFeedAdView : IMYFeedsBoxAdView
{
    UIImageView *_iconImageView;
    UIImageView *_imageView;
    UIImageView *_secondImageView;
    UIImageView *_thirdImageView;
    IMYADCallOutView *_downloadBtn;
    id <IMYIAdvertiserModel> _model;
}

+ (id)titleFont;
+ (struct UIEdgeInsets)edgeInsets;
+ (double)setTwoImagesStyleHeightWithModel:(id)arg1;
+ (double)setImagesStyleHeightWithModel:(id)arg1;
+ (double)setImageStyleHeightWithModel:(id)arg1;
+ (double)heightWithModel:(id)arg1;
+ (void)load;
@property(retain, nonatomic) id <IMYIAdvertiserModel> model; // @synthesize model=_model;
@property(retain, nonatomic) IMYADCallOutView *downloadBtn; // @synthesize downloadBtn=_downloadBtn;
@property(retain, nonatomic) UIImageView *thirdImageView; // @synthesize thirdImageView=_thirdImageView;
@property(retain, nonatomic) UIImageView *secondImageView; // @synthesize secondImageView=_secondImageView;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
- (void).cxx_destruct;
- (void)showCallOutBtnOrDownloadBtnWithModel:(id)arg1;
- (void)setupTwoImagesStyleWithModel:(id)arg1;
- (void)setupImagesStyleWithModel:(id)arg1;
- (void)setupImageStyleWithModel:(id)arg1;
- (void)layoutWithModel:(id)arg1;
- (id)imageViews;
- (void)clickImageWithIndex:(long long)arg1;
- (void)setupImageViewTap;
- (void)setPlaceholderImage;
- (void)dailingWithPhoneNum:(id)arg1;
- (void)setupSubviews;

// Remaining properties
@property(retain, nonatomic) IMYADCallOutView *callOutBtn; // @dynamic callOutBtn;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMYFeedsBoxAdView.h"

@class IMYAdRNView, IMYAdVideoTagView, UIImageView, UITapGestureRecognizer;

@interface IMYVideoTagHomeFeedsView : IMYFeedsBoxAdView
{
    UIImageView *_lineView;
    UIImageView *_imageView;
    IMYAdVideoTagView *_videoPlayerView;
    IMYAdRNView *_rnView;
    UITapGestureRecognizer *_tap;
}

+ (struct UIEdgeInsets)edgeInsets;
+ (double)setVideoStyleHeightWithModel:(id)arg1;
+ (double)setRNStyleHeightWithModel:(id)arg1;
+ (double)setImageStyleHeightWithModel:(id)arg1;
+ (double)heightWithModel:(id)arg1;
@property(retain, nonatomic) UITapGestureRecognizer *tap; // @synthesize tap=_tap;
@property(retain, nonatomic) IMYAdRNView *rnView; // @synthesize rnView=_rnView;
@property(retain, nonatomic) IMYAdVideoTagView *videoPlayerView; // @synthesize videoPlayerView=_videoPlayerView;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIImageView *lineView; // @synthesize lineView=_lineView;
- (void).cxx_destruct;
- (id)imageViews;
- (id)videoView;
- (void)clickMyeVideoAd;
- (void)setupVideoStyleWithModel:(id)arg1;
- (void)setupRNStyleWithModel:(id)arg1;
- (void)setupImageStyleWithModel:(id)arg1;
- (void)layoutWithModel:(id)arg1;
- (void)clickImageWithIndex:(long long)arg1;
- (void)setupImageViewTap;
- (void)setPlaceholderImage;
- (void)setupSubviews;
- (void)dealloc;

@end


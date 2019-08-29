//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMYFeedsBoxAdView.h"

@class IMYADCloseView, IMYFeedAdContentView, UIControl, UIImageView, UIView;

@interface IMYXiaoShiPinAdView : IMYFeedsBoxAdView
{
    UIImageView *_imageView;
    UIImageView *_secondImageView;
    UIImageView *_thirdImageView;
    UIImageView *_sideIconImageView;
    IMYFeedAdContentView *_outerIconEntryView;
    UIView *_cardBgView;
    IMYADCloseView *_closeButton;
    UIControl *_topTapControl;
}

+ (struct UIEdgeInsets)edgeInsets;
+ (double)heightWithModel:(id)arg1;
+ (void)load;
@property(retain, nonatomic) UIControl *topTapControl; // @synthesize topTapControl=_topTapControl;
@property(retain, nonatomic) IMYADCloseView *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UIView *cardBgView; // @synthesize cardBgView=_cardBgView;
@property(retain, nonatomic) IMYFeedAdContentView *outerIconEntryView; // @synthesize outerIconEntryView=_outerIconEntryView;
@property(retain, nonatomic) UIImageView *sideIconImageView; // @synthesize sideIconImageView=_sideIconImageView;
@property(retain, nonatomic) UIImageView *thirdImageView; // @synthesize thirdImageView=_thirdImageView;
@property(retain, nonatomic) UIImageView *secondImageView; // @synthesize secondImageView=_secondImageView;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
- (id)imageViews;
- (id)descriptLabel;
- (id)actionView;
- (id)iconImageView;
- (id)subtitleLabel;
- (id)titleLabel;
- (void)showCardView:(_Bool)arg1;
- (void)topTapEvent:(id)arg1;
- (id)iconEntryView;
- (void)setupImagesStyleWithModel:(id)arg1;
- (void)setupImageStyleWithModel:(id)arg1;
- (void)layoutIconEntryViewWithModel:(id)arg1;
- (void)layoutWithModel:(id)arg1;
- (void)setPlaceholderImage;
- (void)setupSubviews;
- (void)dealloc;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMYBaseAdView.h"

@class IMYADCloseView, IMYSpreadLabelView, UIImageView, UILabel;

@interface IMYYunqiHomeFeedsAdViewOld : IMYBaseAdView
{
    UIImageView *_iconImageView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    IMYADCloseView *_closeButton;
    UIImageView *_imageView;
    IMYSpreadLabelView *_spreadLabelView;
}

+ (double)heightWithModel:(id)arg1;
@property(retain, nonatomic) IMYSpreadLabelView *spreadLabelView; // @synthesize spreadLabelView=_spreadLabelView;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) IMYADCloseView *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
- (void).cxx_destruct;
- (id)imageViews;
- (id)closeView;
- (void)setupWithImageNoTitleStyle;
- (void)setupWithImageStyle;
- (void)setupWithTextAndImageStyle;
- (void)setupWithTextStyle;
- (void)layoutWithModel:(id)arg1;
- (void)layoutWithNoneModel;
- (void)prepareForReuse;
- (void)setPlaceholderImage;
- (void)setupSubviews;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class IMYRoundButton, UIImageView, UILabel;

@interface IMYVCelluarHintView : UIView
{
    UIImageView *_imageView;
    UILabel *_contentLabel;
    UILabel *_titleLabel;
    IMYRoundButton *_playButton;
    IMYRoundButton *_collectButton;
    UIView *_maskLayerView;
}

+ (id)shareView;
@property(retain, nonatomic) UIView *maskLayerView; // @synthesize maskLayerView=_maskLayerView;
@property(retain, nonatomic) IMYRoundButton *collectButton; // @synthesize collectButton=_collectButton;
@property(retain, nonatomic) IMYRoundButton *playButton; // @synthesize playButton=_playButton;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
- (void)layout;
- (id)initWithFrame:(struct CGRect)arg1;

@end


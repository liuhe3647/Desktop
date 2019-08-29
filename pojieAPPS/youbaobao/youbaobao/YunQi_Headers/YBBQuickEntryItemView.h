//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class IMYTouchEXButton, UIImageView, UILabel, UIView, YBBHomeQuickEntryModel;

@interface YBBQuickEntryItemView : UIButton
{
    UIImageView *_imgView;
    UIView *_adBgView;
    UILabel *_adTagLabel;
    UILabel *_label;
    YBBHomeQuickEntryModel *_adItemModel;
    IMYTouchEXButton *_closeBtn;
    UIView *_maskView;
}

@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) IMYTouchEXButton *closeBtn; // @synthesize closeBtn=_closeBtn;
@property(retain, nonatomic) YBBHomeQuickEntryModel *adItemModel; // @synthesize adItemModel=_adItemModel;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(retain, nonatomic) UILabel *adTagLabel; // @synthesize adTagLabel=_adTagLabel;
@property(retain, nonatomic) UIView *adBgView; // @synthesize adBgView=_adBgView;
@property(retain, nonatomic) UIImageView *imgView; // @synthesize imgView=_imgView;
- (void).cxx_destruct;
- (void)closeBtnEvent:(id)arg1;
- (void)addShadow:(id)arg1;
- (void)layoutSubviews;
- (void)setHighlighted:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end


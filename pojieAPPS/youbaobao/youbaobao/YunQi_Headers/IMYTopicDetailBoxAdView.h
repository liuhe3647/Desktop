//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMYBaseAdView.h"

@class IMYADCloseView, UIImageView, UILabel;

@interface IMYTopicDetailBoxAdView : IMYBaseAdView
{
    UIImageView *_iconImageView;
    UILabel *_nameLabel;
    IMYADCloseView *_closeButton;
    UILabel *_adLabel;
    struct CGRect _contentBoxFrame;
}

+ (struct UIEdgeInsets)edgeInsets;
@property(retain, nonatomic) UILabel *adLabel; // @synthesize adLabel=_adLabel;
@property(nonatomic) struct CGRect contentBoxFrame; // @synthesize contentBoxFrame=_contentBoxFrame;
@property(retain, nonatomic) IMYADCloseView *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
- (void).cxx_destruct;
- (id)closeView;
- (void)layoutWithModel:(id)arg1;
- (void)layoutWithContentBoxFrame:(struct CGRect)arg1;
- (void)setupSubviews;

@end


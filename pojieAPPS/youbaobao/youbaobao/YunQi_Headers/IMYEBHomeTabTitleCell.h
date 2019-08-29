//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class IMYEBChannelItem, UIImageView, UILabel, UIView;

@interface IMYEBHomeTabTitleCell : UICollectionViewCell
{
    _Bool _showCircleView;
    UILabel *_titleLabel;
    UIImageView *_imageView;
    UIImageView *_selImageView;
    UIView *_circleView;
    IMYEBChannelItem *_channelItem;
}

@property(nonatomic) _Bool showCircleView; // @synthesize showCircleView=_showCircleView;
@property(retain, nonatomic) IMYEBChannelItem *channelItem; // @synthesize channelItem=_channelItem;
@property(retain, nonatomic) UIView *circleView; // @synthesize circleView=_circleView;
@property(retain, nonatomic) UIImageView *selImageView; // @synthesize selImageView=_selImageView;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1;
- (void)layoutSubviews;
- (void)setChannelItem:(id)arg1 activeLightColor:(id)arg2 activeDarkColor:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

@end

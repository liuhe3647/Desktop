//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class CAGradientLayer, UIImageView, UILabel, UIView;

@interface YBBHomeMotherLessonListCell : UITableViewCell
{
    CAGradientLayer *_gradientLayer;
    UIImageView *_bigImageView;
    UILabel *_titleLabel;
    UILabel *_contentLabel;
    UIImageView *_playView;
    UIView *_maskImageView;
    UIView *_containerView;
}

@property(nonatomic) __weak UIView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) __weak UIView *maskImageView; // @synthesize maskImageView=_maskImageView;
@property(nonatomic) __weak UIImageView *playView; // @synthesize playView=_playView;
@property(nonatomic) __weak UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak UIImageView *bigImageView; // @synthesize bigImageView=_bigImageView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)awakeFromNib;

@end


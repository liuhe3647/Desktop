//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class UIImageView, UILabel, UIView;

@interface YBBOldMotherLessonItemCell : UICollectionViewCell
{
    _Bool _isSelected;
    UIImageView *_bigImageView;
    UILabel *_titleLabel;
    UIView *_timeContentView;
    UILabel *_timeLabel;
}

@property(nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) UIView *timeContentView; // @synthesize timeContentView=_timeContentView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *bigImageView; // @synthesize bigImageView=_bigImageView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setTimeWithString:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end


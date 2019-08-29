//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSLayoutConstraint, UIImageView, UILabel;

@interface YBBToolsTodayTipCell : UITableViewCell
{
    UIImageView *_iconImageView;
    UILabel *_titleLabel;
    UILabel *_introductionLabel;
    UILabel *_defaultLabel;
    NSLayoutConstraint *_contentLabelRightConstraint;
}

+ (double)ToolsTodayTipCellHeight;
@property(nonatomic) __weak NSLayoutConstraint *contentLabelRightConstraint; // @synthesize contentLabelRightConstraint=_contentLabelRightConstraint;
@property(retain, nonatomic) UILabel *defaultLabel; // @synthesize defaultLabel=_defaultLabel;
@property(retain, nonatomic) UILabel *introductionLabel; // @synthesize introductionLabel=_introductionLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
- (void).cxx_destruct;
- (void)configureViewWithHomeModel:(id)arg1 row:(long long)arg2 rowCount:(long long)arg3 info:(id)arg4;
- (void)layoutWithModelNew:(id)arg1 indexCell:(long long)arg2;
- (void)layoutSubviews;
- (void)awakeFromNib;

@end


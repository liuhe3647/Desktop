//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class IMYMineContentModel, UIButton, UIImageView, UILabel, UIView;

@interface YQMineBaseTableViewCell : UITableViewCell
{
    CDUnknownBlockType _moreBlock;
    UIView *_bgView;
    UILabel *_titleLabel;
    UILabel *_subTitleLabel;
    UILabel *_moreLabel;
    UIImageView *_moreIcon;
    UIButton *_moreBtn;
    IMYMineContentModel *_smodel;
}

+ (double)cellTopHeight:(id)arg1;
@property(retain, nonatomic) IMYMineContentModel *smodel; // @synthesize smodel=_smodel;
@property(retain, nonatomic) UIButton *moreBtn; // @synthesize moreBtn=_moreBtn;
@property(retain, nonatomic) UIImageView *moreIcon; // @synthesize moreIcon=_moreIcon;
@property(retain, nonatomic) UILabel *moreLabel; // @synthesize moreLabel=_moreLabel;
@property(retain, nonatomic) UILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *bgView; // @synthesize bgView=_bgView;
@property(copy, nonatomic) CDUnknownBlockType moreBlock; // @synthesize moreBlock=_moreBlock;
- (void).cxx_destruct;
- (void)moreBtnAction;
- (double)configData:(id)arg1;
- (void)configUI;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;

@end


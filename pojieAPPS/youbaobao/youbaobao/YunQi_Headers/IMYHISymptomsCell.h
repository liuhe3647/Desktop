//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIImageView, UILabel;

@interface IMYHISymptomsCell : UITableViewCell
{
    UIImageView *_iconIV;
    UILabel *_titleLabel;
    UILabel *_numberLable;
    UIImageView *_progressIV;
    UIImageView *_arrow;
    UIImageView *_progressbg;
    UIImageView *_iv_progress;
}

@property(nonatomic) __weak UIImageView *iv_progress; // @synthesize iv_progress=_iv_progress;
@property(nonatomic) __weak UIImageView *progressbg; // @synthesize progressbg=_progressbg;
@property(nonatomic) __weak UIImageView *arrow; // @synthesize arrow=_arrow;
@property(nonatomic) __weak UIImageView *progressIV; // @synthesize progressIV=_progressIV;
@property(nonatomic) __weak UILabel *numberLable; // @synthesize numberLable=_numberLable;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak UIImageView *iconIV; // @synthesize iconIV=_iconIV;
- (void).cxx_destruct;
- (void)awakeFromNib;
- (void)showCellLineAtIndexPath:(id)arg1 rowCount:(unsigned long long)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end


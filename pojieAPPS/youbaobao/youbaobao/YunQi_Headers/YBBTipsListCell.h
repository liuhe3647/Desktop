//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIImageView, UILabel, YBBTipModel;

@interface YBBTipsListCell : UITableViewCell
{
    UIImageView *_imgView;
    UILabel *_nameLabel;
    UILabel *_contentLabel;
    YBBTipModel *_model;
}

@property(retain, nonatomic) YBBTipModel *model; // @synthesize model=_model;
@property(retain, nonatomic) UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIImageView *imgView; // @synthesize imgView=_imgView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end


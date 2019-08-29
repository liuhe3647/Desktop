//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "YBBHomeCell-Protocol.h"

@class IMYSimpleCellModel, NSString, UIImageView, UILabel, YBBHomeSwitch;
@protocol YBBHomeCellActionPerformer;

@interface YBBHomePageCell : UITableViewCell <YBBHomeCell>
{
    id <YBBHomeCellActionPerformer> actionDelegate;
    UIImageView *_icon;
    UILabel *_nameLabel;
    UILabel *_infoLabel;
    YBBHomeSwitch *_switchBtn;
    UIImageView *_rightImageView;
    IMYSimpleCellModel *_model;
    CDUnknownBlockType _tapBlock;
}

@property(copy, nonatomic) CDUnknownBlockType tapBlock; // @synthesize tapBlock=_tapBlock;
@property(retain, nonatomic) IMYSimpleCellModel *model; // @synthesize model=_model;
@property(retain, nonatomic) UIImageView *rightImageView; // @synthesize rightImageView=_rightImageView;
@property(retain, nonatomic) YBBHomeSwitch *switchBtn; // @synthesize switchBtn=_switchBtn;
@property(retain, nonatomic) UILabel *infoLabel; // @synthesize infoLabel=_infoLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIImageView *icon; // @synthesize icon=_icon;
@property(nonatomic) __weak id <YBBHomeCellActionPerformer> actionDelegate; // @synthesize actionDelegate;
- (void).cxx_destruct;
- (id)datePickerView;
- (void)configureViewWithHomeModel:(id)arg1 row:(long long)arg2 rowCount:(long long)arg3 info:(id)arg4;
- (void)setAnimationModel:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)layoutSubviews;
- (void)setup;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


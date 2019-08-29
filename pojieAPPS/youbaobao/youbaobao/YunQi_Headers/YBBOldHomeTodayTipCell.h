//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "YBBOldHomeCell-Protocol.h"

@class IMYPaddingLabel, NSString, UIImageView, UILabel;
@protocol YBBOldHomeCellActionPerformer;

@interface YBBOldHomeTodayTipCell : UITableViewCell <YBBOldHomeCell>
{
    _Bool _isDefault;
    id <YBBOldHomeCellActionPerformer> actionDelegate;
    UIImageView *_iconImageView;
    UILabel *_titleLabel;
    UILabel *_introductionLabel;
    IMYPaddingLabel *_tagLabel;
    UIImageView *_playIconImageView;
    UILabel *_defaultLabel;
}

@property(retain, nonatomic) UILabel *defaultLabel; // @synthesize defaultLabel=_defaultLabel;
@property(nonatomic) _Bool isDefault; // @synthesize isDefault=_isDefault;
@property(retain, nonatomic) UIImageView *playIconImageView; // @synthesize playIconImageView=_playIconImageView;
@property(nonatomic) __weak IMYPaddingLabel *tagLabel; // @synthesize tagLabel=_tagLabel;
@property(retain, nonatomic) UILabel *introductionLabel; // @synthesize introductionLabel=_introductionLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(nonatomic) __weak id <YBBOldHomeCellActionPerformer> actionDelegate; // @synthesize actionDelegate;
- (void).cxx_destruct;
- (void)yq_cellDidEndDisplayingWithModel:(id)arg1 row:(long long)arg2 info:(id)arg3;
- (void)yq_cellWillDisplayWithModel:(id)arg1 row:(long long)arg2 info:(id)arg3;
- (void)configureViewWithHomeModel:(id)arg1 row:(long long)arg2 rowCount:(long long)arg3 info:(id)arg4;
- (id)colorAtIndex:(long long)arg1;
- (void)layoutWithModelNew:(id)arg1 indexCell:(long long)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


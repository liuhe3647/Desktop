//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "YBBHomeCell-Protocol.h"

@class NSString, UILabel, YBBHomeRecommendImageView, YBBHomeRecommendModel;
@protocol YBBHomeCellActionPerformer;

@interface YBBHomeRecommendCell : UITableViewCell <YBBHomeCell>
{
    id <YBBHomeCellActionPerformer> actionDelegate;
    UILabel *_title;
    UILabel *_forumLabel;
    UILabel *_replyLabel;
    YBBHomeRecommendImageView *_bigImageView;
    YBBHomeRecommendModel *_model;
}

@property(nonatomic) __weak YBBHomeRecommendModel *model; // @synthesize model=_model;
@property(nonatomic) __weak YBBHomeRecommendImageView *bigImageView; // @synthesize bigImageView=_bigImageView;
@property(nonatomic) __weak UILabel *replyLabel; // @synthesize replyLabel=_replyLabel;
@property(nonatomic) __weak UILabel *forumLabel; // @synthesize forumLabel=_forumLabel;
@property(nonatomic) __weak UILabel *title; // @synthesize title=_title;
@property(nonatomic) __weak id <YBBHomeCellActionPerformer> actionDelegate; // @synthesize actionDelegate;
- (void).cxx_destruct;
- (void)configureViewWithHomeModel:(id)arg1 row:(long long)arg2 rowCount:(long long)arg3 info:(id)arg4;
- (void)layoutSubviews;
- (void)layoutWithModel:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


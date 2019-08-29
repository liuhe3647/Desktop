//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "ReactiveTableViewCell-Protocol.h"

@class IMYAvatarImageView, IMYTouchEXButton, NSString, TTQTopicModel, UIImageView, UILabel, UIView;

@interface TTQTopicsWaterFlowCell : UICollectionViewCell <ReactiveTableViewCell>
{
    CDUnknownBlockType _refreshCell;
    UIView *_contentBgView;
    UIImageView *_corverView;
    UIView *_infoView;
    IMYAvatarImageView *_avatarImageView;
    UIImageView *_vipIcon;
    IMYTouchEXButton *_avatarImageButton;
    UILabel *_nickNameLabel;
    UILabel *_titleLabel;
    UIImageView *_viewCountIcon;
    UILabel *_playCountLabel;
    UIImageView *_videoIcon;
    IMYTouchEXButton *_feedbackBtn;
    TTQTopicModel *_newsModel;
}

@property(nonatomic) __weak TTQTopicModel *newsModel; // @synthesize newsModel=_newsModel;
@property(retain, nonatomic) IMYTouchEXButton *feedbackBtn; // @synthesize feedbackBtn=_feedbackBtn;
@property(retain, nonatomic) UIImageView *videoIcon; // @synthesize videoIcon=_videoIcon;
@property(retain, nonatomic) UILabel *playCountLabel; // @synthesize playCountLabel=_playCountLabel;
@property(retain, nonatomic) UIImageView *viewCountIcon; // @synthesize viewCountIcon=_viewCountIcon;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UILabel *nickNameLabel; // @synthesize nickNameLabel=_nickNameLabel;
@property(retain, nonatomic) IMYTouchEXButton *avatarImageButton; // @synthesize avatarImageButton=_avatarImageButton;
@property(retain, nonatomic) UIImageView *vipIcon; // @synthesize vipIcon=_vipIcon;
@property(retain, nonatomic) IMYAvatarImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(retain, nonatomic) UIView *infoView; // @synthesize infoView=_infoView;
@property(retain, nonatomic) UIImageView *corverView; // @synthesize corverView=_corverView;
@property(retain, nonatomic) UIView *contentBgView; // @synthesize contentBgView=_contentBgView;
@property(copy, nonatomic) CDUnknownBlockType refreshCell; // @synthesize refreshCell=_refreshCell;
- (void).cxx_destruct;
- (void)feedbackTouchUpInside:(id)arg1 cellForRowAtIndexPath:(id)arg2 viewModel:(id)arg3;
- (id)countStringWithTopic:(id)arg1;
- (id)bindModel:(id)arg1 cellForRowAtIndexPath:(id)arg2 viewModel:(id)arg3;
- (id)getPlayCountByPlayCount:(long long)arg1;
- (void)refreshWithThemeItemModel:(id)arg1;
- (void)refreshWith:(id)arg1;
- (void)prepareUI;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

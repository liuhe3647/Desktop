//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMYBaseTableViewCell.h"

#import "IMYRM80AttributedLabelDelegate-Protocol.h"

@class IMYAvatarImageView, IMYCapsuleButton, IMYLineView, IMYRM80AttributedLabel, IMYRecommendWeiboActionBar, IMYRecommendWeiboImagesView, IMYRecommendWeiboModel, IMYTouchEXButton, NSString, UIImageView, UILabel;
@protocol IMYRecommendWeiboCellDelegate;

@interface IMYRecommendWeiboABCell : IMYBaseTableViewCell <IMYRM80AttributedLabelDelegate>
{
    _Bool _isRead;
    id <IMYRecommendWeiboCellDelegate> _delegate;
    IMYTouchEXButton *_newsDeleteBtn;
    IMYRecommendWeiboModel *_model;
    IMYAvatarImageView *_avatarImageView;
    IMYCapsuleButton *_followBtn;
    UIImageView *_weiboTagImageView;
    UILabel *_usernameLabel;
    UILabel *_descriptionLabel;
    IMYRM80AttributedLabel *_statusLabel;
    IMYRecommendWeiboActionBar *_actionBar;
    IMYRecommendWeiboImagesView *_imagesView;
    IMYLineView *_separatorLineView;
}

@property(retain, nonatomic) IMYLineView *separatorLineView; // @synthesize separatorLineView=_separatorLineView;
@property(retain, nonatomic) IMYRecommendWeiboImagesView *imagesView; // @synthesize imagesView=_imagesView;
@property(retain, nonatomic) IMYRecommendWeiboActionBar *actionBar; // @synthesize actionBar=_actionBar;
@property(retain, nonatomic) IMYRM80AttributedLabel *statusLabel; // @synthesize statusLabel=_statusLabel;
@property(retain, nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(retain, nonatomic) UILabel *usernameLabel; // @synthesize usernameLabel=_usernameLabel;
@property(retain, nonatomic) UIImageView *weiboTagImageView; // @synthesize weiboTagImageView=_weiboTagImageView;
@property(retain, nonatomic) IMYCapsuleButton *followBtn; // @synthesize followBtn=_followBtn;
@property(retain, nonatomic) IMYAvatarImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(retain, nonatomic) IMYRecommendWeiboModel *model; // @synthesize model=_model;
@property(nonatomic) _Bool isRead; // @synthesize isRead=_isRead;
@property(retain, nonatomic) IMYTouchEXButton *newsDeleteBtn; // @synthesize newsDeleteBtn=_newsDeleteBtn;
@property(nonatomic) __weak id <IMYRecommendWeiboCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)m80AttributedLabel:(id)arg1 clickedOnLink:(id)arg2;
- (void)updateStyleWithReadState:(_Bool)arg1;
- (void)setCellModel:(id)arg1;
- (void)didClickUserAction;
- (void)prepareUI;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class IMYButton, NSLayoutConstraint, UIImageView, UILabel, UIView, YBBHomeTLPhotoListModel;

@interface YBBHomeTLPhotoListCell : UITableViewCell
{
    NSLayoutConstraint *_titleHeighConstraint;
    UILabel *_titleLabel;
    UIView *_imgContentView;
    IMYButton *_updateButton;
    IMYButton *_inviteButton;
    UIImageView *_imgView0;
    UIImageView *_imgView1;
    UIImageView *_imgView2;
    CDUnknownBlockType _uploadActionBlock;
    CDUnknownBlockType _photoTapActionBlock;
    CDUnknownBlockType _titleTapActionBlock;
    CDUnknownBlockType _inviteActionBlock;
    YBBHomeTLPhotoListModel *_model;
    UIImageView *_playIconView;
}

@property(retain, nonatomic) UIImageView *playIconView; // @synthesize playIconView=_playIconView;
@property(retain, nonatomic) YBBHomeTLPhotoListModel *model; // @synthesize model=_model;
@property(copy, nonatomic) CDUnknownBlockType inviteActionBlock; // @synthesize inviteActionBlock=_inviteActionBlock;
@property(copy, nonatomic) CDUnknownBlockType titleTapActionBlock; // @synthesize titleTapActionBlock=_titleTapActionBlock;
@property(copy, nonatomic) CDUnknownBlockType photoTapActionBlock; // @synthesize photoTapActionBlock=_photoTapActionBlock;
@property(copy, nonatomic) CDUnknownBlockType uploadActionBlock; // @synthesize uploadActionBlock=_uploadActionBlock;
@property(retain, nonatomic) UIImageView *imgView2; // @synthesize imgView2=_imgView2;
@property(retain, nonatomic) UIImageView *imgView1; // @synthesize imgView1=_imgView1;
@property(retain, nonatomic) UIImageView *imgView0; // @synthesize imgView0=_imgView0;
@property(nonatomic) __weak IMYButton *inviteButton; // @synthesize inviteButton=_inviteButton;
@property(nonatomic) __weak IMYButton *updateButton; // @synthesize updateButton=_updateButton;
@property(nonatomic) __weak UIView *imgContentView; // @synthesize imgContentView=_imgContentView;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) NSLayoutConstraint *titleHeighConstraint; // @synthesize titleHeighConstraint=_titleHeighConstraint;
- (void).cxx_destruct;
- (void)layoutThreeImg;
- (void)layoutTwoImg;
- (void)layoutOneImg;
- (void)resetImageView:(id)arg1 netDatas:(id)arg2 isNet:(_Bool)arg3;
- (void)updateUI:(id)arg1;
- (void)inviteBtnAction:(id)arg1;
- (void)updateButtonAction:(id)arg1;
- (void)awakeFromNib;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class CAGradientLayer, IMYButton, IMYCapsuleButton, IMYCaptionView, TTQVideoPlayer, UIButton, UIImageView, UILabel, UIView;

@interface TTQVideoPlayCell : UICollectionViewCell
{
    TTQVideoPlayer *_player;
    CDUnknownBlockType _goBackButtonBlock;
    CDUnknownBlockType _shareButtonBlock;
    CDUnknownBlockType _likeButtonBlock;
    CDUnknownBlockType _commentsButtonBlock;
    CDUnknownBlockType _collectButtonBlock;
    CDUnknownBlockType _followButtonBlock;
    CDUnknownBlockType _homePageButtonBlock;
    CDUnknownBlockType _joinButtonBlock;
    CDUnknownBlockType _tapThemeBlock;
    CDUnknownBlockType _addCommentButtonBlock;
    CDUnknownBlockType _tapReloadBlock;
    CAGradientLayer *_topGradient;
    CAGradientLayer *_bottomGradient;
    UILabel *_titleLabel;
    IMYButton *_joinButton;
    UIView *_themeView;
    UILabel *_nickNameLabel;
    UIView *_topView;
    UIButton *_topBackButton;
    UIButton *_topShareButton;
    UIView *_bottomView;
    UIView *_commentBackView;
    IMYButton *_commentNumsButton;
    IMYButton *_pariseNumsButton;
    IMYButton *_collectButton;
    UIImageView *_avatorButton;
    UIImageView *_brandImageView;
    UIImageView *_expertImageView;
    UIImageView *_waterImageView;
    IMYCapsuleButton *_focusButton;
    UILabel *_commentsLabel;
    UILabel *_pariseLabel;
    UIImageView *_animateImageView;
    IMYCaptionView *_captionView;
}

@property(retain, nonatomic) IMYCaptionView *captionView; // @synthesize captionView=_captionView;
@property(retain, nonatomic) UIImageView *animateImageView; // @synthesize animateImageView=_animateImageView;
@property(retain, nonatomic) UILabel *pariseLabel; // @synthesize pariseLabel=_pariseLabel;
@property(retain, nonatomic) UILabel *commentsLabel; // @synthesize commentsLabel=_commentsLabel;
@property(retain, nonatomic) IMYCapsuleButton *focusButton; // @synthesize focusButton=_focusButton;
@property(retain, nonatomic) UIImageView *waterImageView; // @synthesize waterImageView=_waterImageView;
@property(retain, nonatomic) UIImageView *expertImageView; // @synthesize expertImageView=_expertImageView;
@property(retain, nonatomic) UIImageView *brandImageView; // @synthesize brandImageView=_brandImageView;
@property(retain, nonatomic) UIImageView *avatorButton; // @synthesize avatorButton=_avatorButton;
@property(retain, nonatomic) IMYButton *collectButton; // @synthesize collectButton=_collectButton;
@property(retain, nonatomic) IMYButton *pariseNumsButton; // @synthesize pariseNumsButton=_pariseNumsButton;
@property(retain, nonatomic) IMYButton *commentNumsButton; // @synthesize commentNumsButton=_commentNumsButton;
@property(retain, nonatomic) UIView *commentBackView; // @synthesize commentBackView=_commentBackView;
@property(retain, nonatomic) UIView *bottomView; // @synthesize bottomView=_bottomView;
@property(retain, nonatomic) UIButton *topShareButton; // @synthesize topShareButton=_topShareButton;
@property(retain, nonatomic) UIButton *topBackButton; // @synthesize topBackButton=_topBackButton;
@property(retain, nonatomic) UIView *topView; // @synthesize topView=_topView;
@property(retain, nonatomic) UILabel *nickNameLabel; // @synthesize nickNameLabel=_nickNameLabel;
@property(retain, nonatomic) UIView *themeView; // @synthesize themeView=_themeView;
@property(retain, nonatomic) IMYButton *joinButton; // @synthesize joinButton=_joinButton;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) CAGradientLayer *bottomGradient; // @synthesize bottomGradient=_bottomGradient;
@property(retain, nonatomic) CAGradientLayer *topGradient; // @synthesize topGradient=_topGradient;
@property(copy, nonatomic) CDUnknownBlockType tapReloadBlock; // @synthesize tapReloadBlock=_tapReloadBlock;
@property(copy, nonatomic) CDUnknownBlockType addCommentButtonBlock; // @synthesize addCommentButtonBlock=_addCommentButtonBlock;
@property(copy, nonatomic) CDUnknownBlockType tapThemeBlock; // @synthesize tapThemeBlock=_tapThemeBlock;
@property(copy, nonatomic) CDUnknownBlockType joinButtonBlock; // @synthesize joinButtonBlock=_joinButtonBlock;
@property(copy, nonatomic) CDUnknownBlockType homePageButtonBlock; // @synthesize homePageButtonBlock=_homePageButtonBlock;
@property(copy, nonatomic) CDUnknownBlockType followButtonBlock; // @synthesize followButtonBlock=_followButtonBlock;
@property(copy, nonatomic) CDUnknownBlockType collectButtonBlock; // @synthesize collectButtonBlock=_collectButtonBlock;
@property(copy, nonatomic) CDUnknownBlockType commentsButtonBlock; // @synthesize commentsButtonBlock=_commentsButtonBlock;
@property(copy, nonatomic) CDUnknownBlockType likeButtonBlock; // @synthesize likeButtonBlock=_likeButtonBlock;
@property(copy, nonatomic) CDUnknownBlockType shareButtonBlock; // @synthesize shareButtonBlock=_shareButtonBlock;
@property(copy, nonatomic) CDUnknownBlockType goBackButtonBlock; // @synthesize goBackButtonBlock=_goBackButtonBlock;
@property(retain, nonatomic) TTQVideoPlayer *player; // @synthesize player=_player;
- (void).cxx_destruct;
- (void)stopPlayer;
- (void)videoDidPlaying;
- (void)refreshPlayerWithData:(id)arg1;
- (void)setfocusButtonStatus:(_Bool)arg1 animate:(_Bool)arg2;
- (void)setCollectButtonStatus:(_Bool)arg1 animate:(_Bool)arg2;
- (void)setPariseButtonStatus:(_Bool)arg1 animate:(_Bool)arg2;
- (void)refreshWithData:(id)arg1;
- (void)setCaptionState:(unsigned long long)arg1;
- (void)hideGradient:(_Bool)arg1;
- (void)setSubViewAlpha:(double)arg1;
- (id)createIconButtonWithSize:(double)arg1 title:(id)arg2 tapBlock:(CDUnknownBlockType)arg3;
- (void)avatorButtonTap:(id)arg1;
- (void)nickNameLabelTap:(id)arg1;
- (void)makeConstraints;
- (void)initSubviews;
- (void)setup;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end


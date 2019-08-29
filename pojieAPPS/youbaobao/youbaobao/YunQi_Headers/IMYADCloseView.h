//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMYTouchEXView.h"

@class IMYTouchEXButton, UIButton, UIControl, UILabel, UIView;

@interface IMYADCloseView : IMYTouchEXView
{
    _Bool _hasShowCloseImage;
    _Bool _hasShowTextLabel;
    _Bool _hasShowCloseFeedback;
    _Bool _isNew;
    CDUnknownBlockType _closeAD;
    UILabel *_tagLabel;
    IMYTouchEXButton *_closeButton;
    UIButton *_noInterestButton;
    UIButton *_tooMoreButton;
    UIView *_containView;
    UIControl *_viewBox;
    UIView *_maskView;
    struct CGRect _containFrame;
}

+ (id)closeView;
@property(nonatomic) struct CGRect containFrame; // @synthesize containFrame=_containFrame;
@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) UIControl *viewBox; // @synthesize viewBox=_viewBox;
@property(retain, nonatomic) UIView *containView; // @synthesize containView=_containView;
@property(retain, nonatomic) UIButton *tooMoreButton; // @synthesize tooMoreButton=_tooMoreButton;
@property(retain, nonatomic) UIButton *noInterestButton; // @synthesize noInterestButton=_noInterestButton;
@property(retain, nonatomic) IMYTouchEXButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UILabel *tagLabel; // @synthesize tagLabel=_tagLabel;
@property(nonatomic) _Bool isNew; // @synthesize isNew=_isNew;
@property(nonatomic) _Bool hasShowCloseFeedback; // @synthesize hasShowCloseFeedback=_hasShowCloseFeedback;
@property(nonatomic) _Bool hasShowTextLabel; // @synthesize hasShowTextLabel=_hasShowTextLabel;
@property(nonatomic) _Bool hasShowCloseImage; // @synthesize hasShowCloseImage=_hasShowCloseImage;
@property(copy, nonatomic) CDUnknownBlockType closeAD; // @synthesize closeAD=_closeAD;
- (void).cxx_destruct;
- (void)hideContainView;
- (void)viewBoxPressedAction:(id)arg1;
- (void)tooMoreButtonPressedAction:(id)arg1;
- (void)noInterestButtonPressedAction:(id)arg1;
- (void)newCloseButtonPressedAction:(id)arg1;
- (void)closeButtonPressedAction:(id)arg1;
- (void)homeFeedToBWithOutTextLabel;
- (void)waterFlowWithOutTextLabel;
- (void)xiaoShiPinWithOutTextLabel;
- (void)fitSizeWithOutTextLabel;
- (void)centerClosePostionWithText;
- (void)setImageWithoutText;
- (void)setTagTitle:(id)arg1;
- (void)setupSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end


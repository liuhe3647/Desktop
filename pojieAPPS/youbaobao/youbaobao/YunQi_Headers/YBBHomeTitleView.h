//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UILabel;

@interface YBBHomeTitleView : UIView
{
    _Bool _hideButtons;
    _Bool _leftButtonHiden;
    _Bool _rightButtonHiden;
    UILabel *_titleLabel;
    CDUnknownBlockType _leftArrowHandler;
    CDUnknownBlockType _rightArrowHandler;
    UIButton *_leftButton;
    UIButton *_rightButton;
}

@property(retain, nonatomic) UIButton *rightButton; // @synthesize rightButton=_rightButton;
@property(retain, nonatomic) UIButton *leftButton; // @synthesize leftButton=_leftButton;
@property(nonatomic) _Bool rightButtonHiden; // @synthesize rightButtonHiden=_rightButtonHiden;
@property(nonatomic) _Bool leftButtonHiden; // @synthesize leftButtonHiden=_leftButtonHiden;
@property(nonatomic) _Bool hideButtons; // @synthesize hideButtons=_hideButtons;
@property(copy, nonatomic) CDUnknownBlockType rightArrowHandler; // @synthesize rightArrowHandler=_rightArrowHandler;
@property(copy, nonatomic) CDUnknownBlockType leftArrowHandler; // @synthesize leftArrowHandler=_leftArrowHandler;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)rightBtnClick:(id)arg1;
- (void)leftBtnCLick:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end


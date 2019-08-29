//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSMutableArray, NSString, SYButtonEX, UIButton, UIImageView, UILabel;
@protocol SYNavigationBarDelegate;

@interface SYNavigationBar : UIView <UIGestureRecognizerDelegate>
{
    unsigned long long _maxExtendButtonCount;
    _Bool _isExpand;
    _Bool _backButtonEnable;
    _Bool _rightButtonEnable;
    _Bool _expandEnable;
    UIImageView *_backgroundView;
    UIButton *_backButton;
    SYButtonEX *_rightButton;
    UILabel *_titleLabel;
    NSString *_title;
    UIImageView *_expandView;
    NSMutableArray *_extendButtons;
    id <SYNavigationBarDelegate> _navBarDelegate;
}

@property(nonatomic) __weak id <SYNavigationBarDelegate> navBarDelegate; // @synthesize navBarDelegate=_navBarDelegate;
@property(nonatomic) _Bool expandEnable; // @synthesize expandEnable=_expandEnable;
@property(nonatomic) _Bool rightButtonEnable; // @synthesize rightButtonEnable=_rightButtonEnable;
@property(nonatomic) _Bool backButtonEnable; // @synthesize backButtonEnable=_backButtonEnable;
@property(retain, nonatomic) NSMutableArray *extendButtons; // @synthesize extendButtons=_extendButtons;
@property(nonatomic) _Bool isExpand; // @synthesize isExpand=_isExpand;
@property(retain, nonatomic) UIImageView *expandView; // @synthesize expandView=_expandView;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) SYButtonEX *rightButton; // @synthesize rightButton=_rightButton;
@property(retain, nonatomic) UIButton *backButton; // @synthesize backButton=_backButton;
@property(retain, nonatomic) UIImageView *backgroundView; // @synthesize backgroundView=_backgroundView;
- (void).cxx_destruct;
- (void)justAnimationExpand:(_Bool)arg1;
- (void)animatedExpand:(_Bool)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)didClickTitle:(id)arg1;
- (void)clearBackBtn;
- (void)cleanExtendButtons;
- (_Bool)addExtendButton:(id)arg1;
- (_Bool)addExtendButtonWithTarget:(id)arg1 touchUpInSideSelector:(SEL)arg2 normalImage:(id)arg3 highlightedImage:(id)arg4;
- (_Bool)addExtendButtons:(id)arg1;
- (void)setExtendButtonsEnable:(_Bool)arg1;
@property(readonly, nonatomic) double barHeight;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


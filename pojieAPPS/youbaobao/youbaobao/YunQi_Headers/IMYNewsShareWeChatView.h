//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class IMYTouchEXButton, UILabel;

@interface IMYNewsShareWeChatView : UIView
{
    CDUnknownBlockType _tapShareAction;
    UILabel *_titleLabel;
    IMYTouchEXButton *_shareWeChatButton;
    IMYTouchEXButton *_shareMomentsButton;
}

@property(retain, nonatomic) IMYTouchEXButton *shareMomentsButton; // @synthesize shareMomentsButton=_shareMomentsButton;
@property(retain, nonatomic) IMYTouchEXButton *shareWeChatButton; // @synthesize shareWeChatButton=_shareWeChatButton;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(copy, nonatomic) CDUnknownBlockType tapShareAction; // @synthesize tapShareAction=_tapShareAction;
- (void).cxx_destruct;
- (void)setup;
- (void)makeConstraints;
- (void)initSubviews;
- (id)init;

@end

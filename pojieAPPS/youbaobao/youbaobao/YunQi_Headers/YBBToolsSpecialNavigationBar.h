//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UILabel;

@interface YBBToolsSpecialNavigationBar : UIView
{
    UIView *_backView;
    UIButton *_topLeftButton;
    UIButton *_topRightButton;
    UILabel *_titleLabel;
    UIView *_customTitleView;
}

@property(retain, nonatomic) UIView *customTitleView; // @synthesize customTitleView=_customTitleView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIButton *topRightButton; // @synthesize topRightButton=_topRightButton;
@property(retain, nonatomic) UIButton *topLeftButton; // @synthesize topLeftButton=_topLeftButton;
@property(retain, nonatomic) UIView *backView; // @synthesize backView=_backView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end


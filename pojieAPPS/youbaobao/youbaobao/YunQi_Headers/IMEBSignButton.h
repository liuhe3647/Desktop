//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMYTouchEXView.h"

@class FLAnimatedImageView, IMYTouchEXButton, NSArray, UILabel;

@interface IMEBSignButton : IMYTouchEXView
{
    int _status;
    CDUnknownBlockType _onTouchUpInside;
    IMYTouchEXButton *_backgroupButton;
    UILabel *_titleLabel;
    FLAnimatedImageView *_imageView;
    NSArray *_animatedImages;
}

@property(copy, nonatomic) NSArray *animatedImages; // @synthesize animatedImages=_animatedImages;
@property(retain, nonatomic) FLAnimatedImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) IMYTouchEXButton *backgroupButton; // @synthesize backgroupButton=_backgroupButton;
@property(nonatomic) int status; // @synthesize status=_status;
@property(copy, nonatomic) CDUnknownBlockType onTouchUpInside; // @synthesize onTouchUpInside=_onTouchUpInside;
- (void).cxx_destruct;
- (void)dealloc;
- (void)refreshCoinAnimationWithSignStatus:(_Bool)arg1;
- (void)refresh;
- (void)languageChange;
- (void)resetTitleLabelColor:(id)arg1;
- (void)applyTheme;
- (void)bt_pressed:(id)arg1;
- (id)init;

@end


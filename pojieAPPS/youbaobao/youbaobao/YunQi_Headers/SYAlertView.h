//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class IMYButton, UIButton, UIImageView, UILabel;

@interface SYAlertView : UIView
{
    UIView *_containerView;
    UIImageView *_iconView;
    IMYButton *_confirmButton;
    UILabel *_contentLabel;
    UIImageView *_containerImageView;
    UIButton *_cancelButton;
}

@property(nonatomic) __weak UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(nonatomic) __weak UIImageView *containerImageView; // @synthesize containerImageView=_containerImageView;
@property(nonatomic) __weak UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(nonatomic) __weak IMYButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(nonatomic) __weak UIImageView *iconView; // @synthesize iconView=_iconView;
@property(nonatomic) __weak UIView *containerView; // @synthesize containerView=_containerView;
- (void).cxx_destruct;
- (void)awakeFromNib;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UILabel;

@interface IMYTLBabayManageSiderHeaderView : UIView
{
    UILabel *_titleLabel;
    UIButton *_manageButton;
    CDUnknownBlockType _manageButtonPressBlock;
}

+ (double)fitHeight;
@property(nonatomic) CDUnknownBlockType manageButtonPressBlock; // @synthesize manageButtonPressBlock=_manageButtonPressBlock;
@property(nonatomic) __weak UIButton *manageButton; // @synthesize manageButton=_manageButton;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)manageButtonAction:(id)arg1;
- (void)updateTitleBabyCount:(long long)arg1;
- (void)awakeFromNib;

@end


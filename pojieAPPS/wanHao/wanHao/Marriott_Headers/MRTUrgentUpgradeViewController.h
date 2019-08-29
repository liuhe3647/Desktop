//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class MRTAppConfiguration, MRTStyledButton, MRTStyledLabel, NSURL, UIImageView, UIScrollView;

@interface MRTUrgentUpgradeViewController : UIViewController
{
    MRTAppConfiguration *_appConfig;
    NSURL *_appStoreURL;
    UIImageView *_iconView;
    MRTStyledLabel *_titleLabel;
    MRTStyledLabel *_contentLabel;
    MRTStyledButton *_learnMoreButton;
    UIScrollView *_scrollView;
}

@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) MRTStyledButton *learnMoreButton; // @synthesize learnMoreButton=_learnMoreButton;
@property(retain, nonatomic) MRTStyledLabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) MRTStyledLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(copy, nonatomic) NSURL *appStoreURL; // @synthesize appStoreURL=_appStoreURL;
@property(retain, nonatomic) MRTAppConfiguration *appConfig; // @synthesize appConfig=_appConfig;
- (void).cxx_destruct;
- (void)showLearnMore:(id)arg1;
- (void)showAppStore:(id)arg1;
- (void)didMoveToParentViewController:(id)arg1;

@end


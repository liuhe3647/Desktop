//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class MRTOneButtonItem, NSString;

@interface UIViewController (OneButtonAdditions)
- (void)mrt_presentInsetModalViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)mrt_oneButtonDidLandOnStartup;
- (id)viewControllerForAppNavigationIdentifier:(id)arg1;
- (void)navigateToPath:(id)arg1;
- (void)willBePresented;
- (void)oneButtonItemTintColorDidChange;
- (void)oneButtonOverlayViewWillDisplay;
- (void)oneButtonOverlayLayoutMarginsDidChange:(struct UIEdgeInsets)arg1;
- (void)oneButtonOverlayLayoutMarginsWillChange:(struct UIEdgeInsets)arg1;
- (id)statusBarStyleTarget;
- (void)setNeedsOneButtonUpdate;
- (id)oneButtonHeaderViewBottomAnchor;
- (id)oneButtonHeaderButtonsLeadingAnchor;
- (id)oneButtonTitleViewLastBaselineAnchor;
- (id)oneButtonTitleViewTopAnchor;
- (id)oneButtonTitleViewLeadingAnchor;
- (id)childViewControllerForOneButtonConfiguration;
@property(nonatomic) _Bool allowsBackGesture;
@property(copy, nonatomic) NSString *analyticsPageName;
@property(copy, nonatomic) NSString *appNavigationIdentifier;
- (void)setOneButtonItem:(id)arg1;
@property(readonly, nonatomic) MRTOneButtonItem *oneButtonItem;
@end


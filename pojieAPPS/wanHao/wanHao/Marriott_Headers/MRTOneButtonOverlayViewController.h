//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "MRTOneButtonItemResponding-Protocol.h"
#import "UIToolbarDelegate-Protocol.h"

@class MRTCoachMarkConfiguration, MRTContextButtonItem, MRTMaskedDimmingView, MRTOneButtonHeaderToolbar, MRTOneButtonItem, MRTPressAndHoldCoachMarkView, MRTStyledButton, MRTStyledLabel, MRTSubviewHitTestView, NSLayoutConstraint, NSLayoutXAxisAnchor, NSLayoutYAxisAnchor, NSString, UIView;

@interface MRTOneButtonOverlayViewController : UIViewController <UIToolbarDelegate, MRTOneButtonItemResponding>
{
    _Bool _callToActionButtonShowing;
    _Bool _headerViewHidden;
    _Bool _needsDisplayCheck;
    _Bool _hidingCallToActionButtonAfterPop;
    _Bool _contextButtonsAreVisible;
    _Bool _callToActionButtonVisible;
    UIViewController *_enclosedViewController;
    UIView *_layoutView;
    UIView *_headerBackgroundView;
    MRTSubviewHitTestView *_contextButtonView;
    UIView *_headerView;
    MRTOneButtonHeaderToolbar *_headerToolbar;
    MRTStyledLabel *_titleLabel;
    NSLayoutConstraint *_titleLeadingConstraint;
    NSLayoutConstraint *_headerHeightConstraint;
    NSLayoutConstraint *_titleLabelTopConstraint;
    NSLayoutConstraint *_titleLabelToolbarConstraint;
    NSLayoutConstraint *_headerTopConstraint;
    NSLayoutConstraint *_contextButtonCenterXRightConstraint;
    NSLayoutConstraint *_contextButtonBottomConstraint;
    NSLayoutConstraint *_belowSafeAreaViewHeightConstraint;
    UIView *_callToActionContainerView;
    UIView *_belowSafeAreaView;
    MRTMaskedDimmingView *_coachMarkViewDimmingView;
    MRTPressAndHoldCoachMarkView *_coachMarkView;
    MRTContextButtonItem *_coachMarkButtonItem;
    MRTCoachMarkConfiguration *_coachMarkConfiguration;
    MRTStyledButton *_callToActionButton;
    NSLayoutConstraint *_callToActionButtonBottomConstraint;
    double _topLayoutGuideLengthUsedForLayoutMargins;
}

@property(nonatomic) double topLayoutGuideLengthUsedForLayoutMargins; // @synthesize topLayoutGuideLengthUsedForLayoutMargins=_topLayoutGuideLengthUsedForLayoutMargins;
@property(retain, nonatomic) NSLayoutConstraint *callToActionButtonBottomConstraint; // @synthesize callToActionButtonBottomConstraint=_callToActionButtonBottomConstraint;
@property(retain, nonatomic) MRTStyledButton *callToActionButton; // @synthesize callToActionButton=_callToActionButton;
@property(nonatomic, getter=isCallToActionButtonVisible) _Bool callToActionButtonVisible; // @synthesize callToActionButtonVisible=_callToActionButtonVisible;
@property(nonatomic) _Bool contextButtonsAreVisible; // @synthesize contextButtonsAreVisible=_contextButtonsAreVisible;
@property(nonatomic) _Bool hidingCallToActionButtonAfterPop; // @synthesize hidingCallToActionButtonAfterPop=_hidingCallToActionButtonAfterPop;
@property(nonatomic) _Bool needsDisplayCheck; // @synthesize needsDisplayCheck=_needsDisplayCheck;
@property(retain, nonatomic) MRTCoachMarkConfiguration *coachMarkConfiguration; // @synthesize coachMarkConfiguration=_coachMarkConfiguration;
@property(retain, nonatomic) MRTContextButtonItem *coachMarkButtonItem; // @synthesize coachMarkButtonItem=_coachMarkButtonItem;
@property(retain, nonatomic) MRTPressAndHoldCoachMarkView *coachMarkView; // @synthesize coachMarkView=_coachMarkView;
@property(retain, nonatomic) MRTMaskedDimmingView *coachMarkViewDimmingView; // @synthesize coachMarkViewDimmingView=_coachMarkViewDimmingView;
@property(retain, nonatomic) UIView *belowSafeAreaView; // @synthesize belowSafeAreaView=_belowSafeAreaView;
@property(retain, nonatomic) UIView *callToActionContainerView; // @synthesize callToActionContainerView=_callToActionContainerView;
@property(retain, nonatomic) NSLayoutConstraint *belowSafeAreaViewHeightConstraint; // @synthesize belowSafeAreaViewHeightConstraint=_belowSafeAreaViewHeightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *contextButtonBottomConstraint; // @synthesize contextButtonBottomConstraint=_contextButtonBottomConstraint;
@property(retain, nonatomic) NSLayoutConstraint *contextButtonCenterXRightConstraint; // @synthesize contextButtonCenterXRightConstraint=_contextButtonCenterXRightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *headerTopConstraint; // @synthesize headerTopConstraint=_headerTopConstraint;
@property(retain, nonatomic) NSLayoutConstraint *titleLabelToolbarConstraint; // @synthesize titleLabelToolbarConstraint=_titleLabelToolbarConstraint;
@property(retain, nonatomic) NSLayoutConstraint *titleLabelTopConstraint; // @synthesize titleLabelTopConstraint=_titleLabelTopConstraint;
@property(retain, nonatomic) NSLayoutConstraint *headerHeightConstraint; // @synthesize headerHeightConstraint=_headerHeightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *titleLeadingConstraint; // @synthesize titleLeadingConstraint=_titleLeadingConstraint;
@property(retain, nonatomic) MRTStyledLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MRTOneButtonHeaderToolbar *headerToolbar; // @synthesize headerToolbar=_headerToolbar;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) MRTSubviewHitTestView *contextButtonView; // @synthesize contextButtonView=_contextButtonView;
@property(retain, nonatomic) UIView *headerBackgroundView; // @synthesize headerBackgroundView=_headerBackgroundView;
@property(retain, nonatomic) UIView *layoutView; // @synthesize layoutView=_layoutView;
@property(nonatomic, getter=isHeaderViewHidden) _Bool headerViewHidden; // @synthesize headerViewHidden=_headerViewHidden;
@property(retain, nonatomic) UIViewController *enclosedViewController; // @synthesize enclosedViewController=_enclosedViewController;
- (void).cxx_destruct;
- (id)viewControllerForAppNavigationIdentifier:(id)arg1;
- (void)oneButtonItemHeaderBarButtonsDidChange:(id)arg1 animated:(_Bool)arg2;
- (void)oneButtonItemHeaderVisibleDidChange:(_Bool)arg1;
- (void)oneButtonItemTitleAlphaDidChange:(double)arg1;
- (void)oneButtonItemTitleDidChange:(id)arg1;
- (void)contextButtonVisibilityDidChange:(_Bool)arg1;
- (void)callToActionButtonVisibilityDidChange:(_Bool)arg1;
- (void)oneButtonItemTintColorDidChange:(id)arg1;
- (void)oneButtonItem:(id)arg1 contextButtonHideCoachMark:(id)arg2;
- (void)oneButtonItem:(id)arg1 contextButtonShowCoachMark:(id)arg2 configuration:(id)arg3;
- (void)oneButtonItemContextButtonDidChange:(id)arg1;
- (void)oneButtonItemContextButtonItemsDidChange:(id)arg1;
- (id)contextButtonForContextButtonItem:(id)arg1;
- (void)_updateTitleAlpha:(double)arg1;
- (void)_updateContextButtonsAsRefresh:(_Bool)arg1;
- (void)_updateHeaderButtonItems:(id)arg1 animated:(_Bool)arg2;
- (void)_updateHeader;
- (void)_addViewController:(id)arg1;
- (void)_addOverlayViews;
- (void)_updateCallToActionButtonContentInsetsIfNeeded;
- (void)_updateLayoutViewMargins:(struct UIEdgeInsets)arg1;
- (void)_updateLayoutMarginsIfNeeded;
- (void)_updateLeftMarginForViewSize:(struct CGSize)arg1;
- (void)_oneButtonPositionDidChangeNotification:(id)arg1;
- (id)_contextButtonAtIndex:(unsigned long long)arg1;
- (void)_updateBelowSafeAreaViewBackgroundColor;
- (void)_makeCallToActionButtonVisible:(_Bool)arg1 animated:(_Bool)arg2;
@property(nonatomic, getter=isCallToActionButtonShowing) _Bool callToActionButtonShowing; // @synthesize callToActionButtonShowing=_callToActionButtonShowing;
- (void)_createBelowSafeAreaView;
- (void)_createCallToActionButton;
- (void)_createCallToActionButtonContainerView;
- (void)_updateDimmingViewMaskForButton:(id)arg1;
- (void)_hideCoachMarkAnimated:(_Bool)arg1;
- (void)_showCoachMarkAnimated:(_Bool)arg1;
- (void)_addCoachMarkConstraintsIfNeeded;
- (void)_updateCoachMarkVisibilityAnimated:(_Bool)arg1;
- (id)coachMarkContextButton;
- (_Bool)isWithinTimeIntervalToDelayShowingCallToActionButton;
- (void)setNeedsOneButtonUpdate;
- (void)performTitleBounceAnimationWithDuration:(double)arg1 direction:(unsigned long long)arg2;
- (void)hideTitleForDuration:(double)arg1;
@property(readonly, nonatomic) NSLayoutYAxisAnchor *headerViewBottomAnchor;
@property(readonly, nonatomic) NSLayoutXAxisAnchor *headerToolbarLeadingAnchor;
@property(readonly, nonatomic) NSLayoutYAxisAnchor *titleViewLastBaselineAnchor;
@property(readonly, nonatomic) NSLayoutYAxisAnchor *titleViewTopAnchor;
@property(readonly, nonatomic) NSLayoutXAxisAnchor *titleViewLeadingAnchor;
- (id)title;
- (id)viewForContextButtonItem:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (id)childViewControllerForScreenEdgesDeferringSystemGestures;
- (id)childViewControllerForHomeIndicatorAutoHidden;
- (id)childViewControllerForStatusBarHidden;
- (id)childViewControllerForStatusBarStyle;
- (id)childViewControllerForOneButtonConfiguration;
- (void)updateTitle;
@property(readonly, nonatomic) MRTOneButtonItem *targetOneButtonItem;
- (void)_oneButtonOverlayViewWillDisplay;
- (long long)positionForBar:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (void)_commonInit;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


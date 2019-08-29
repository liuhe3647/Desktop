//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "MRTOneButtonDelegate-Protocol.h"
#import "MRTOneButtonItemResponding-Protocol.h"

@class MRTOneButton, MRTPressAndHoldCoachMarkView, NSLayoutConstraint, NSString, NSTimer, UIButton, UIView;

@interface MRTOneButtonViewController : UIViewController <MRTOneButtonDelegate, MRTOneButtonItemResponding>
{
    _Bool _oneButtonRaised;
    _Bool _oneButtonForceHidden;
    UIView *_messageView;
    MRTOneButton *_oneButton;
    UIButton *_menuCoachMarkSkipButton;
    UIViewController *_topViewController;
    NSLayoutConstraint *_buttonBottomConstraint;
    NSLayoutConstraint *_buttonRightConstraint;
    UIViewController *_unwindRevertToViewController;
    NSTimer *_unwindRevertTimer;
    UIView *_offlineView;
    double _keyboardHeight;
    MRTPressAndHoldCoachMarkView *_menuCoachMarkView;
    UIView *_thumbsUpCoachMarkView;
}

+ (id)sharedInstance;
@property(retain, nonatomic) UIView *thumbsUpCoachMarkView; // @synthesize thumbsUpCoachMarkView=_thumbsUpCoachMarkView;
@property(retain, nonatomic) MRTPressAndHoldCoachMarkView *menuCoachMarkView; // @synthesize menuCoachMarkView=_menuCoachMarkView;
@property(nonatomic) double keyboardHeight; // @synthesize keyboardHeight=_keyboardHeight;
@property(retain, nonatomic) UIView *offlineView; // @synthesize offlineView=_offlineView;
@property(retain, nonatomic) NSTimer *unwindRevertTimer; // @synthesize unwindRevertTimer=_unwindRevertTimer;
@property(retain, nonatomic) UIViewController *unwindRevertToViewController; // @synthesize unwindRevertToViewController=_unwindRevertToViewController;
@property(retain, nonatomic) NSLayoutConstraint *buttonRightConstraint; // @synthesize buttonRightConstraint=_buttonRightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *buttonBottomConstraint; // @synthesize buttonBottomConstraint=_buttonBottomConstraint;
@property(nonatomic, getter=isOneButtonForceHidden) _Bool oneButtonForceHidden; // @synthesize oneButtonForceHidden=_oneButtonForceHidden;
@property(nonatomic, getter=isOneButtonRaised) _Bool oneButtonRaised; // @synthesize oneButtonRaised=_oneButtonRaised;
@property(retain, nonatomic) UIViewController *topViewController; // @synthesize topViewController=_topViewController;
@property(nonatomic) __weak UIButton *menuCoachMarkSkipButton; // @synthesize menuCoachMarkSkipButton=_menuCoachMarkSkipButton;
@property(nonatomic) __weak MRTOneButton *oneButton; // @synthesize oneButton=_oneButton;
@property(retain, nonatomic) UIView *messageView; // @synthesize messageView=_messageView;
- (void).cxx_destruct;
- (void)removeMessageView;
- (void)showAccessibilityMessage:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)showMessageView:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)networkChanged:(id)arg1;
- (void)_networkChanged;
- (void)showOffline:(_Bool)arg1 animated:(_Bool)arg2;
- (double)_offlineViewHeight;
- (double)_offlineDeviceHeightAdjustment;
- (void)oneButton:(id)arg1 extendedLongTouchEnded:(id)arg2;
- (void)oneButton:(id)arg1 extendedLongTouchMoved:(id)arg2;
- (void)oneButtonLongTouchInside:(id)arg1;
- (void)oneButtonTouchUpInside:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (double)_oneButtonCenterXRightMarginForTraitCollection:(id)arg1;
- (double)_oneButtonBottomMarginForTraitCollection:(id)arg1;
- (void)_updateTopViewControllerAndPerformTransition:(id)arg1;
- (_Bool)_isOneButtonHiddenForOneButtonItem:(id)arg1;
- (void)_updateOneButtonVisibilityForUpcomingChange;
- (id)_viewControllerByUnwindingViewController:(id)arg1;
- (id)_viewControllerContainingIconTypeForTopViewController:(id)arg1 futureParentViewController:(id)arg2 isUnwind:(_Bool)arg3;
- (id)_viewControllerContainingOneButtonAccessibilityLabelForTopViewController:(id)arg1 futureParentViewController:(id)arg2;
- (id)_viewControllerContainingOneButtonVisibilityForTopViewController:(id)arg1 futureParentViewController:(id)arg2;
- (void)_unwindRevertTimerFired:(id)arg1;
- (id)_childViewControllerForStatusBarStyleAndHidden;
- (_Bool)_isFullScreenViewController:(id)arg1;
- (void)_setMainWindowNeedsLayout;
- (id)_mainWindowRootViewController;
- (void)_updateOneButtonPosition;
@property(nonatomic, getter=isThumbsUpCoachMarkVisible) _Bool thumbsUpCoachMarkVisible;
@property(nonatomic, getter=isMenuCoachMarkVisible) _Bool menuCoachMarkVisible;
- (void)_skipCoachMarksButtonTapped:(id)arg1;
- (void)_hideCoachMarkView:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_showCoachMarkView:(id)arg1;
- (void)_showMenuCoachMark;
- (void)_showThumbsUpCoachMark;
- (void)callToActionButtonVisibilityDidChange:(_Bool)arg1;
- (void)oneButtonItemTintColorDidChange:(id)arg1;
- (void)oneButtonItemDidChange:(id)arg1;
- (void)transitionToConfigurationForViewController:(id)arg1 futureParentViewController:(id)arg2 animated:(_Bool)arg3 options:(unsigned long long)arg4;
- (void)viewControllerDidDisappear;
- (void)viewControllerDidAppear;
- (void)viewControllerWillDisappear;
- (void)viewControllerWillAppear;
- (void)setOneButtonRaised:(_Bool)arg1 animated:(_Bool)arg2;
@property(readonly, nonatomic) double oneButtonCenterYBottomDistance;
@property(readonly, nonatomic) double oneButtonBottomDistance;
@property(readonly, nonatomic) double oneButtonCenterXRightDistance;
- (double)_raisedOneButtonOffset;
@property(readonly, nonatomic) double suggestedOneButtonBottomMargin;
- (unsigned long long)preferredScreenEdgesDeferringSystemGestures;
- (_Bool)prefersHomeIndicatorAutoHidden;
- (long long)preferredStatusBarUpdateAnimation;
- (long long)preferredStatusBarStyle;
- (_Bool)prefersStatusBarHidden;
- (id)childViewControllerForScreenEdgesDeferringSystemGestures;
- (id)childViewControllerForHomeIndicatorAutoHidden;
- (id)childViewControllerForStatusBarHidden;
- (id)childViewControllerForStatusBarStyle;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMYPublicBaseNavigationController.h"

#import "UIViewControllerTransitioningDelegate-Protocol.h"

@class NSString, TTQPhotoTransitionAnimator, UIImage, UIView, UIViewController;

@interface TTQPhotoSetNavigationController : IMYPublicBaseNavigationController <UIViewControllerTransitioningDelegate>
{
    _Bool _previousStatusBarHidden;
    TTQPhotoTransitionAnimator *_animator;
    UIImage *_oriImage;
    UIView *_oriView;
    long long _scrollPage;
    long long _previousStatusBarStyle;
    UIViewController *_holdPresentingVC;
    struct CGRect _oriRect;
    struct CGRect _fromRect;
}

@property(nonatomic) __weak UIViewController *holdPresentingVC; // @synthesize holdPresentingVC=_holdPresentingVC;
@property(nonatomic) _Bool previousStatusBarHidden; // @synthesize previousStatusBarHidden=_previousStatusBarHidden;
@property(nonatomic) long long previousStatusBarStyle; // @synthesize previousStatusBarStyle=_previousStatusBarStyle;
@property(nonatomic) long long scrollPage; // @synthesize scrollPage=_scrollPage;
@property(nonatomic) struct CGRect fromRect; // @synthesize fromRect=_fromRect;
@property(retain, nonatomic) UIView *oriView; // @synthesize oriView=_oriView;
@property(retain, nonatomic) UIImage *oriImage; // @synthesize oriImage=_oriImage;
@property(nonatomic) struct CGRect oriRect; // @synthesize oriRect=_oriRect;
@property(retain, nonatomic) TTQPhotoTransitionAnimator *animator; // @synthesize animator=_animator;
- (void).cxx_destruct;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)_initMyself;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MRTCarouselController.h"

#import "MRTOneButtonResponding-Protocol.h"

@class MRTCarouselMenuController, MRTOneButtonWindow, NSString, UIViewController;

@interface MRTOneButtonCarouselController : MRTCarouselController <MRTOneButtonResponding>
{
    unsigned long long _menuCoachMarkSkipIterationLimit;
    unsigned long long _positionCoachMarkStageShowIterationLimit;
    unsigned long long _positionCoachMarkStageShowThenHideIterationLimit;
    MRTOneButtonWindow *_oneButtonWindow;
    MRTCarouselMenuController *_menuController;
    UIViewController *_coachMarkLandingViewController;
    unsigned long long _coachMarkCarouselIterationCount;
    unsigned long long _positionCoachMarkStage;
}

+ (void)resetAllCoachMarks;
@property(nonatomic) unsigned long long positionCoachMarkStage; // @synthesize positionCoachMarkStage=_positionCoachMarkStage;
@property(nonatomic) unsigned long long coachMarkCarouselIterationCount; // @synthesize coachMarkCarouselIterationCount=_coachMarkCarouselIterationCount;
@property(nonatomic) __weak UIViewController *coachMarkLandingViewController; // @synthesize coachMarkLandingViewController=_coachMarkLandingViewController;
@property(retain, nonatomic) MRTCarouselMenuController *menuController; // @synthesize menuController=_menuController;
@property(retain, nonatomic) MRTOneButtonWindow *oneButtonWindow; // @synthesize oneButtonWindow=_oneButtonWindow;
@property(nonatomic) unsigned long long positionCoachMarkStageShowThenHideIterationLimit; // @synthesize positionCoachMarkStageShowThenHideIterationLimit=_positionCoachMarkStageShowThenHideIterationLimit;
@property(nonatomic) unsigned long long positionCoachMarkStageShowIterationLimit; // @synthesize positionCoachMarkStageShowIterationLimit=_positionCoachMarkStageShowIterationLimit;
@property(nonatomic) unsigned long long menuCoachMarkSkipIterationLimit; // @synthesize menuCoachMarkSkipIterationLimit=_menuCoachMarkSkipIterationLimit;
- (void).cxx_destruct;
- (void)oneButtonLongPressed:(id)arg1;
- (void)unwoundOneButtonPressed:(id)arg1;
- (void)oneButtonPressed:(id)arg1;
- (void)_markPositionCoachMarkStageCompleteForIterationNumber:(unsigned long long)arg1;
- (void)_markOneButtonTapAsComplete;
- (void)_markCoachMarkAsComplete;
- (void)_performButtonHeartbeatAnimationIfNeeded;
- (void)didBecomeReady;
- (void)didSetViewControllersAfterSignIn;
- (void)_showMenuCoachMark;
- (void)showMenu;
- (void)setSelectedViewController:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setSelectedViewController:(id)arg1;
- (void)setViewControllers:(id)arg1;
- (id)childViewControllerForOneButtonConfiguration;
- (void)willTransitionFromViewController:(id)arg1 toViewController:(id)arg2 usesUnwindTransition:(_Bool)arg3 animated:(_Bool)arg4;
- (void)viewWillAppear:(_Bool)arg1;
- (void)initializeCoachMarkLimits;
- (void)viewDidLoad;
- (void)loadView;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


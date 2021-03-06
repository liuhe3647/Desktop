//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "CAAnimationDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSString, UIPanGestureRecognizer, UIScrollView;

@interface IMYDragableBaseView : UIView <UIGestureRecognizerDelegate, CAAnimationDelegate>
{
    _Bool _enableHorizonDrag;
    _Bool _enableVerticalDrag;
    _Bool _enableFreedomDrag;
    _Bool _defaultHideAnimateWhenDragFreedom;
    _Bool _notLayoutSubviews;
    double _topSpace;
    double _contentViewCornerRadius;
    unsigned long long _cornerEdge;
    long long _dragDirection;
    long long _showViewType;
    UIView *_dragViewBg;
    UIView *_dragContentView;
    UIPanGestureRecognizer *_panRecognizer;
    UIScrollView *_conflictView;
}

@property(nonatomic) __weak UIScrollView *conflictView; // @synthesize conflictView=_conflictView;
@property(retain, nonatomic) UIPanGestureRecognizer *panRecognizer; // @synthesize panRecognizer=_panRecognizer;
@property(retain, nonatomic) UIView *dragContentView; // @synthesize dragContentView=_dragContentView;
@property(retain, nonatomic) UIView *dragViewBg; // @synthesize dragViewBg=_dragViewBg;
@property(nonatomic) _Bool notLayoutSubviews; // @synthesize notLayoutSubviews=_notLayoutSubviews;
@property(nonatomic) long long showViewType; // @synthesize showViewType=_showViewType;
@property(nonatomic) _Bool defaultHideAnimateWhenDragFreedom; // @synthesize defaultHideAnimateWhenDragFreedom=_defaultHideAnimateWhenDragFreedom;
@property(nonatomic) _Bool enableFreedomDrag; // @synthesize enableFreedomDrag=_enableFreedomDrag;
@property(nonatomic) _Bool enableVerticalDrag; // @synthesize enableVerticalDrag=_enableVerticalDrag;
@property(nonatomic) _Bool enableHorizonDrag; // @synthesize enableHorizonDrag=_enableHorizonDrag;
@property(nonatomic) long long dragDirection; // @synthesize dragDirection=_dragDirection;
@property(nonatomic) unsigned long long cornerEdge; // @synthesize cornerEdge=_cornerEdge;
@property(nonatomic) double contentViewCornerRadius; // @synthesize contentViewCornerRadius=_contentViewCornerRadius;
@property(nonatomic) double topSpace; // @synthesize topSpace=_topSpace;
- (void).cxx_destruct;
- (void)removePanGesture;
- (void)adjustCornerRadius;
- (void)viewDidDisappear;
- (void)viewWillDisappear;
- (void)viewDidAppear;
- (void)viewWillAppear;
- (void)dragEndWithPoint:(struct CGPoint)arg1 shouldHideView:(_Bool)arg2;
- (void)dragingWithPoint:(struct CGPoint)arg1;
- (void)dragBeginWithPoint:(struct CGPoint)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)pushOutToRight:(_Bool)arg1;
- (void)pushIn;
- (void)popOutToTop:(_Bool)arg1;
- (void)popIn;
- (void)startHide;
- (void)startShow;
- (void)restoreView;
- (long long)determineDirection:(struct CGPoint)arg1;
- (void)panRecognizer:(id)arg1;
- (void)initDragableBaseView;
- (void)dealloc;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


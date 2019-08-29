//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UIViewControllerAnimatedTransitioning-Protocol.h"

@class NSString, UIImage, UIView;

@interface IMYTLPhotoBrowserTransition : NSObject <UIViewControllerAnimatedTransitioning>
{
    UIImage *_bgImg;
    UIImage *_showingImg;
    UIView *_player;
    struct CGRect _beginFrame;
    struct CGRect _endFrame;
}

@property(retain, nonatomic) UIView *player; // @synthesize player=_player;
@property(retain, nonatomic) UIImage *showingImg; // @synthesize showingImg=_showingImg;
@property(nonatomic) struct CGRect endFrame; // @synthesize endFrame=_endFrame;
@property(nonatomic) struct CGRect beginFrame; // @synthesize beginFrame=_beginFrame;
@property(retain, nonatomic) UIImage *bgImg; // @synthesize bgImg=_bgImg;
- (void).cxx_destruct;
- (id)getViewPicture:(id)arg1 size:(struct CGSize)arg2;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


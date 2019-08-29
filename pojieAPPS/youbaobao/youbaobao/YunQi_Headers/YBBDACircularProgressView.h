//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "CAAnimationDelegate-Protocol.h"

@class CADisplayLink, NSString, UIColor;

@interface YBBDACircularProgressView : UIView <CAAnimationDelegate>
{
    double _indeterminateDuration;
    CDUnknownBlockType _progressAnimDidChanged;
    CADisplayLink *_displayLink;
}

+ (Class)layerClass;
+ (void)initialize;
@property(retain, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property(copy, nonatomic) CDUnknownBlockType progressAnimDidChanged; // @synthesize progressAnimDidChanged=_progressAnimDidChanged;
@property(nonatomic) double indeterminateDuration; // @synthesize indeterminateDuration=_indeterminateDuration;
- (void).cxx_destruct;
@property(nonatomic) long long clockwiseProgress;
@property(nonatomic) long long indeterminate;
@property(nonatomic) double thicknessRatio;
@property(nonatomic) long long roundedCorners;
@property(retain, nonatomic) UIColor *progressTintColor;
@property(retain, nonatomic) UIColor *trackTintColor;
- (double)timeOfProgressAnimation:(double)arg1;
- (void)checkProgressValue;
- (void)startListenser;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)setProgress:(double)arg1 animated:(_Bool)arg2 progressTime:(double *)arg3;
- (void)setProgress:(double)arg1 animated:(_Bool)arg2;
@property(nonatomic) double progress;
- (void)didMoveToWindow;
- (id)init;
- (id)circularProgressLayer;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAShapeLayer, IMYButton, NSNumber;

@interface SYUserModeIconView : UIView
{
    _Bool _isChangeMode;
    NSNumber *_motivateState;
    IMYButton *_button;
    CAShapeLayer *_rotatingLayer;
}

@property(retain, nonatomic) CAShapeLayer *rotatingLayer; // @synthesize rotatingLayer=_rotatingLayer;
@property(nonatomic) _Bool isChangeMode; // @synthesize isChangeMode=_isChangeMode;
@property(retain, nonatomic) IMYButton *button; // @synthesize button=_button;
@property(retain, nonatomic) NSNumber *motivateState; // @synthesize motivateState=_motivateState;
- (void).cxx_destruct;
- (void)iconImageWithUserMode:(unsigned long long)arg1;
- (void)setupIconUI;
- (void)keepAnimation:(id)arg1;
- (void)stopRotatingAnimation;
- (void)startRotatingAnimation;
- (void)updatePositionWithFrame:(struct CGRect)arg1;
- (id)initIconViewWithFrame:(struct CGRect)arg1 andUserMode:(unsigned long long)arg2 isChangeMode:(_Bool)arg3;
- (void)dealloc;

@end


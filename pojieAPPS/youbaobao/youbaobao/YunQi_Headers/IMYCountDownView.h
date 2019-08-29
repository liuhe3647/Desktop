//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "IMYTimerRuningProtocol-Protocol.h"

@class IMYPaddingLabel, NSString, UIColor, UILabel;

@interface IMYCountDownView : UIView <IMYTimerRuningProtocol>
{
    _Bool isAddedTimer;
    _Bool _isAddObserver;
    long long _countDownInterval;
    IMYPaddingLabel *_hourLabel;
    IMYPaddingLabel *_minuteLabel;
    IMYPaddingLabel *_secondLabel;
    UILabel *_colonLabel_1;
    UILabel *_colonLabel_2;
}

@property _Bool isAddObserver; // @synthesize isAddObserver=_isAddObserver;
@property(retain, nonatomic) UILabel *colonLabel_2; // @synthesize colonLabel_2=_colonLabel_2;
@property(retain, nonatomic) UILabel *colonLabel_1; // @synthesize colonLabel_1=_colonLabel_1;
@property(retain, nonatomic) IMYPaddingLabel *secondLabel; // @synthesize secondLabel=_secondLabel;
@property(retain, nonatomic) IMYPaddingLabel *minuteLabel; // @synthesize minuteLabel=_minuteLabel;
@property(retain, nonatomic) IMYPaddingLabel *hourLabel; // @synthesize hourLabel=_hourLabel;
@property(nonatomic) long long countDownInterval; // @synthesize countDownInterval=_countDownInterval;
- (void).cxx_destruct;
- (void)imy_timerRuning;
- (struct CGSize)intrinsicContentSize;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)refreshCountDownView;
- (void)dealloc;
@property(retain, nonatomic) UIColor *labelBackgroundColor;
- (void)_initMyself;
- (void)awakeFromNib;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


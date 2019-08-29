//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray;

@interface IMYCalendarModelTypeView : UIView
{
    _Bool _onTipsView;
    _Bool _isSmallType;
    _Bool _hasJingqi;
    CDUnknownBlockType _selectModelBlock;
    CDUnknownBlockType _changeGuideBlock;
    CDUnknownBlockType _tapCurrentModeBlock;
    unsigned long long _mode;
    NSArray *_titleArray;
    NSArray *_buttonArray;
}

@property(nonatomic) _Bool hasJingqi; // @synthesize hasJingqi=_hasJingqi;
@property(nonatomic) _Bool isSmallType; // @synthesize isSmallType=_isSmallType;
@property(retain, nonatomic) NSArray *buttonArray; // @synthesize buttonArray=_buttonArray;
@property(retain, nonatomic) NSArray *titleArray; // @synthesize titleArray=_titleArray;
@property(nonatomic) unsigned long long mode; // @synthesize mode=_mode;
@property(copy, nonatomic) CDUnknownBlockType tapCurrentModeBlock; // @synthesize tapCurrentModeBlock=_tapCurrentModeBlock;
@property(copy, nonatomic) CDUnknownBlockType changeGuideBlock; // @synthesize changeGuideBlock=_changeGuideBlock;
@property(nonatomic) _Bool onTipsView; // @synthesize onTipsView=_onTipsView;
@property(copy, nonatomic) CDUnknownBlockType selectModelBlock; // @synthesize selectModelBlock=_selectModelBlock;
- (void).cxx_destruct;
- (unsigned long long)modeWithIndex:(long long)arg1;
- (long long)indexWithMode:(unsigned long long)arg1;
- (void)changeTipsToIndex:(long long)arg1;
- (void)refresh;
- (void)changeToMode:(unsigned long long)arg1;
- (void)resetTitle;
- (void)buttonTapAction:(id)arg1;
- (void)setModeUnselected:(unsigned long long)arg1;
- (void)setDataStyle:(unsigned long long)arg1 fontColor:(id)arg2 arrowColor:(id)arg3;
- (void)setModelType:(unsigned long long)arg1;
- (void)setup;
- (id)initWithFrame:(struct CGRect)arg1;

@end

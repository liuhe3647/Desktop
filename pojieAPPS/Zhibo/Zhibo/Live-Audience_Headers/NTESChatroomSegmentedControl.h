//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray;

@interface NTESChatroomSegmentedControl : UIView
{
    NSMutableArray *_segments;
    NSMutableArray *_invocations;
    long long _selectedIndex;
}

@property(nonatomic) long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(retain, nonatomic) NSMutableArray *invocations; // @synthesize invocations=_invocations;
@property(retain, nonatomic) NSMutableArray *segments; // @synthesize segments=_segments;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)invokeValueChangedAction;
- (void)refresh;
- (void)addTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(unsigned long long)arg3;
- (void)onSegmentTouchUpInside:(id)arg1;
- (void)setFont:(id)arg1 atIndex:(long long)arg2;
- (void)setTitleColor:(id)arg1 forState:(unsigned long long)arg2 atIndex:(long long)arg3;
- (void)setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 atIndex:(long long)arg3;
@property(nonatomic) long long selectedSegmentIndex;
- (void)insertSegmentWithTitle:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

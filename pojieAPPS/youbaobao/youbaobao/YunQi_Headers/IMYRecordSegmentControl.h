//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSMutableArray, UIButton, UIScrollView;

@interface IMYRecordSegmentControl : UIView
{
    long long _selectedSegmentIndex;
    CDUnknownBlockType _seleledAction;
    NSArray *_items;
    double _selectedItemMinX;
    double _selectedItemWidth;
    UIButton *_selectedButton;
    UIScrollView *_scrollView;
    UIView *_indicator;
    NSMutableArray *_buttonArray;
    double _itemWidth;
    struct CGPoint _contentOffset;
}

@property(nonatomic) double itemWidth; // @synthesize itemWidth=_itemWidth;
@property(retain, nonatomic) NSMutableArray *buttonArray; // @synthesize buttonArray=_buttonArray;
@property(nonatomic) __weak UIView *indicator; // @synthesize indicator=_indicator;
@property(nonatomic) __weak UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) __weak UIButton *selectedButton; // @synthesize selectedButton=_selectedButton;
@property(nonatomic) struct CGPoint contentOffset; // @synthesize contentOffset=_contentOffset;
@property(nonatomic) double selectedItemWidth; // @synthesize selectedItemWidth=_selectedItemWidth;
@property(nonatomic) double selectedItemMinX; // @synthesize selectedItemMinX=_selectedItemMinX;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
@property(copy, nonatomic) CDUnknownBlockType seleledAction; // @synthesize seleledAction=_seleledAction;
@property(nonatomic) long long selectedSegmentIndex; // @synthesize selectedSegmentIndex=_selectedSegmentIndex;
- (void).cxx_destruct;
- (void)addGradientLayer;
- (void)setContentOffsetX:(double)arg1;
- (void)updateScrollViewWithAnimation:(_Bool)arg1;
- (double)getWidth;
- (void)updateIndicatorWithAnimation:(_Bool)arg1;
- (double)getWidthForSegmentAtIndex:(unsigned long long)arg1;
- (double)getMinXForSegmentAtIndex:(unsigned long long)arg1;
- (void)scrollToIndex:(long long)arg1;
- (void)segmentedTapped:(id)arg1 animation:(_Bool)arg2;
- (void)segmentedTapped:(id)arg1;
- (id)initWithItems:(id)arg1 itemWidth:(double)arg2 frame:(struct CGRect)arg3 indicatorWidth:(double)arg4 selectedColor:(id)arg5 normalColor:(id)arg6;
- (id)initWithItems:(id)arg1 itemWidth:(double)arg2 frame:(struct CGRect)arg3 indicatorWidth:(double)arg4;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "WMMenuItemDelegate-Protocol.h"

@class NSArray, NSMutableArray, NSString, UIColor, UIScrollView, WMMenuItem, WMProgressView;
@protocol WMMenuViewDataSource, WMMenuViewDelegate;

@interface WMMenuView : UIView <WMMenuItemDelegate>
{
    NSArray *_progressWidths;
    WMProgressView *_progressView;
    double _progressHeight;
    unsigned long long _style;
    double _contentMargin;
    UIColor *_lineColor;
    double _progressViewBottomSpace;
    id <WMMenuViewDelegate> _delegate;
    id <WMMenuViewDataSource> _dataSource;
    UIView *_leftView;
    UIView *_rightView;
    NSString *_fontName;
    UIScrollView *_scrollView;
    WMMenuItem *_selItem;
    NSMutableArray *_frames;
}

@property(retain, nonatomic) NSMutableArray *frames; // @synthesize frames=_frames;
@property(nonatomic) __weak WMMenuItem *selItem; // @synthesize selItem=_selItem;
@property(nonatomic) __weak UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(copy, nonatomic) NSString *fontName; // @synthesize fontName=_fontName;
@property(nonatomic) __weak UIView *rightView; // @synthesize rightView=_rightView;
@property(nonatomic) __weak UIView *leftView; // @synthesize leftView=_leftView;
@property(nonatomic) __weak id <WMMenuViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <WMMenuViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double progressViewBottomSpace; // @synthesize progressViewBottomSpace=_progressViewBottomSpace;
@property(retain, nonatomic) UIColor *lineColor; // @synthesize lineColor=_lineColor;
@property(nonatomic) double contentMargin; // @synthesize contentMargin=_contentMargin;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
@property(nonatomic) double progressHeight; // @synthesize progressHeight=_progressHeight;
@property(nonatomic) __weak WMProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) NSArray *progressWidths; // @synthesize progressWidths=_progressWidths;
- (void).cxx_destruct;
- (void)didPressedMenuItem:(id)arg1;
- (void)addFloodViewHollow:(_Bool)arg1;
- (void)addProgressView;
- (double)itemMarginAtIndex:(long long)arg1;
- (void)calculateItemFrames;
- (void)addItems;
- (void)addScrollView;
- (void)deselectedItemsIfNeeded;
- (void)refreshContenOffset;
- (void)makeStyle;
- (void)addBadgeViewAtIndex:(long long)arg1;
- (void)addBadgeViews;
- (id)convertProgressWidthsToFrames;
- (void)resetFramesFromIndex:(long long)arg1;
- (void)resetFrames;
- (void)willMoveToSuperview:(id)arg1;
@property(readonly, nonatomic) long long titlesCount;
- (void)updateBadgeViewAtIndex:(long long)arg1;
- (void)updateTitle:(id)arg1 atIndex:(long long)arg2 andWidth:(_Bool)arg3;
- (void)selectItemAtIndex:(long long)arg1;
- (void)slideMenuAtProgress:(double)arg1;
- (void)reload;
- (id)badgeViewAtIndex:(long long)arg1;
@property(readonly, nonatomic) double normalSize;
@property(readonly, nonatomic) double selectedSize;
@property(readonly, nonatomic) UIColor *normalColor;
@property(readonly, nonatomic) UIColor *selectedColor;
- (void)setFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

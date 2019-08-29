//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class NSArray, NSString, TTQCategoryCollectionView, UIScrollView;

@interface TTQCategoryBaseView : UIView <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout>
{
    _Bool _averageCellSpacingEnabled;
    _Bool _cellWidthZoomEnabled;
    _Bool _cellWidthZoomScrollGradientEnabled;
    TTQCategoryCollectionView *_collectionView;
    NSArray *_dataSource;
    UIScrollView *_contentScrollView;
    long long _defaultSelectedIndex;
    long long _selectedIndex;
    double _contentEdgeInsetLeft;
    double _contentEdgeInsetRight;
    double _cellWidth;
    double _cellWidthIncrement;
    double _cellSpacing;
    double _cellWidthZoomScale;
    double _innerCellSpacing;
    struct CGPoint _lastContentViewContentOffset;
}

@property(nonatomic) struct CGPoint lastContentViewContentOffset; // @synthesize lastContentViewContentOffset=_lastContentViewContentOffset;
@property(nonatomic) double innerCellSpacing; // @synthesize innerCellSpacing=_innerCellSpacing;
@property(nonatomic) double cellWidthZoomScale; // @synthesize cellWidthZoomScale=_cellWidthZoomScale;
@property(nonatomic) _Bool cellWidthZoomScrollGradientEnabled; // @synthesize cellWidthZoomScrollGradientEnabled=_cellWidthZoomScrollGradientEnabled;
@property(nonatomic) _Bool cellWidthZoomEnabled; // @synthesize cellWidthZoomEnabled=_cellWidthZoomEnabled;
@property(nonatomic) _Bool averageCellSpacingEnabled; // @synthesize averageCellSpacingEnabled=_averageCellSpacingEnabled;
@property(nonatomic) double cellSpacing; // @synthesize cellSpacing=_cellSpacing;
@property(nonatomic) double cellWidthIncrement; // @synthesize cellWidthIncrement=_cellWidthIncrement;
@property(nonatomic) double cellWidth; // @synthesize cellWidth=_cellWidth;
@property(nonatomic) double contentEdgeInsetRight; // @synthesize contentEdgeInsetRight=_contentEdgeInsetRight;
@property(nonatomic) double contentEdgeInsetLeft; // @synthesize contentEdgeInsetLeft=_contentEdgeInsetLeft;
@property(nonatomic) long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(nonatomic) long long defaultSelectedIndex; // @synthesize defaultSelectedIndex=_defaultSelectedIndex;
@property(retain, nonatomic) UIScrollView *contentScrollView; // @synthesize contentScrollView=_contentScrollView;
@property(retain, nonatomic) NSArray *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) TTQCategoryCollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void).cxx_destruct;
- (void)scrollselectItemAtIndex:(long long)arg1;
- (void)clickselectItemAtIndex:(long long)arg1;
- (double)getContentEdgeInsetRight;
- (double)getContentEdgeInsetLeft;
- (struct CGRect)getTargetCellFrame:(long long)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)refreshCellModel:(id)arg1 index:(long long)arg2;
- (Class)preferredCellClass;
- (double)preferredCellWidthAtIndex:(long long)arg1;
- (void)contentOffsetOfContentScrollViewDidChanged:(struct CGPoint)arg1;
- (void)refreshSelectedCellModel:(id)arg1 unselectedCellModel:(id)arg2;
- (_Bool)_selectCellAtIndex:(long long)arg1 handleContentScrollView:(_Bool)arg2 isClicked:(_Bool)arg3;
- (_Bool)selectCellAtIndex:(long long)arg1 isClicked:(_Bool)arg2;
- (void)refreshState;
- (void)refreshDataSource;
- (void)layoutSubviews;
- (void)selectItemAtIndex:(long long)arg1;
- (void)reloadCellAtIndex:(long long)arg1;
- (void)reloadData;
- (void)initializeViews;
- (void)initializeData;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


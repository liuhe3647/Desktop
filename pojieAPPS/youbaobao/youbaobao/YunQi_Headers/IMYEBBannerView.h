//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class NSArray, NSMutableArray, NSString, UICollectionView, UIImageView, UILabel, UIPageControl, UIScrollView;

@interface IMYEBBannerView : UIView <UIScrollViewDelegate, UICollectionViewDelegate, UICollectionViewDataSource>
{
    _Bool _userSDWebImage;
    _Bool _isNotLoopPlay;
    _Bool _isAutoLoopPlay;
    NSArray *_images;
    NSArray *_titles;
    CDUnknownBlockType _onItemViewCreating;
    CDUnknownBlockType _onDidItemViewCreated;
    CDUnknownBlockType _onDidClickEvent;
    CDUnknownBlockType _onDidScrollToIndex;
    UIPageControl *_pageControl;
    unsigned long long _position;
    CDUnknownBlockType _onCurrentShowItemView;
    UICollectionView *_collectionView;
    UILabel *_titleLabel;
    UIView *_titleBgView;
    NSMutableArray *_itemViews;
    NSMutableArray *_imageViews;
    NSMutableArray *_customViews;
    long long _draggingIndex;
    UIImageView *_maskView;
}

@property(retain, nonatomic) UIImageView *maskView; // @synthesize maskView=_maskView;
@property(nonatomic) long long draggingIndex; // @synthesize draggingIndex=_draggingIndex;
@property(retain, nonatomic) NSMutableArray *customViews; // @synthesize customViews=_customViews;
@property(retain, nonatomic) NSMutableArray *imageViews; // @synthesize imageViews=_imageViews;
@property(retain, nonatomic) NSMutableArray *itemViews; // @synthesize itemViews=_itemViews;
@property(retain, nonatomic) UIView *titleBgView; // @synthesize titleBgView=_titleBgView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(copy, nonatomic) CDUnknownBlockType onCurrentShowItemView; // @synthesize onCurrentShowItemView=_onCurrentShowItemView;
@property(nonatomic) _Bool isAutoLoopPlay; // @synthesize isAutoLoopPlay=_isAutoLoopPlay;
@property(nonatomic) _Bool isNotLoopPlay; // @synthesize isNotLoopPlay=_isNotLoopPlay;
@property(nonatomic) _Bool userSDWebImage; // @synthesize userSDWebImage=_userSDWebImage;
@property(nonatomic) unsigned long long position; // @synthesize position=_position;
@property(retain, nonatomic) UIPageControl *pageControl; // @synthesize pageControl=_pageControl;
@property(copy, nonatomic) CDUnknownBlockType onDidScrollToIndex; // @synthesize onDidScrollToIndex=_onDidScrollToIndex;
@property(copy, nonatomic) CDUnknownBlockType onDidClickEvent; // @synthesize onDidClickEvent=_onDidClickEvent;
@property(copy, nonatomic) CDUnknownBlockType onDidItemViewCreated; // @synthesize onDidItemViewCreated=_onDidItemViewCreated;
@property(copy, nonatomic) CDUnknownBlockType onItemViewCreating; // @synthesize onItemViewCreating=_onItemViewCreating;
@property(retain, nonatomic) NSArray *titles; // @synthesize titles=_titles;
@property(retain, nonatomic) NSArray *images; // @synthesize images=_images;
- (void).cxx_destruct;
- (void)dealloc;
@property(readonly, nonatomic) UIView *currentShowView;
@property(nonatomic) long long currentIndex;
- (void)willMoveToWindow:(id)arg1;
- (void)autoScrollToNext;
- (void)cancelAutoScroll;
- (void)startAutoScroll;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)resizeTitleBgView;
- (void)fixStartPosition;
- (void)loadData;
- (void)clearAllItemViews;
- (id)reusableImageView;
- (id)itemViewForIndex:(long long)arg1 data:(id)arg2;
- (void)imy_themeChanged;
- (void)layoutSubviews;
- (void)initCollectionView;
@property(readonly, nonatomic) UIScrollView *scrollView;
- (void)_initMyself;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setBannerMaskPicture:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMYEBSelectionTabView.h"

@interface IMYEBFlashSaleSelectionTabView : IMYEBSelectionTabView
{
    double _cellWidth;
}

@property(nonatomic) double cellWidth; // @synthesize cellWidth=_cellWidth;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)configCell:(id)arg1 atIndexPath:(id)arg2;
- (void)setUnderLineFrameWithIndex:(long long)arg1 animated:(_Bool)arg2;
- (void)setCurrentIndex:(long long)arg1 animated:(_Bool)arg2;
- (id)createSelectBackgroundView;
- (void)addUnderLineView;
- (void)addCollectionView;
- (id)initWithTitles:(id)arg1;

@end


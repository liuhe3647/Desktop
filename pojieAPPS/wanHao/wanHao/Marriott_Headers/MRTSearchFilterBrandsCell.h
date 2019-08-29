//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "CAAnimationDelegate-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class NSArray, NSMutableDictionary, NSString, UICollectionView, UICollectionViewFlowLayout;

@interface MRTSearchFilterBrandsCell : UITableViewCell <UICollectionViewDataSource, UICollectionViewDelegate, CAAnimationDelegate>
{
    UICollectionView *_collectionView;
    NSArray *_brandList;
    UICollectionViewFlowLayout *_flowLayout;
    double _brandCellSpacing;
    NSMutableDictionary *_brandsByIdentifier;
}

@property(retain, nonatomic) NSMutableDictionary *brandsByIdentifier; // @synthesize brandsByIdentifier=_brandsByIdentifier;
@property(nonatomic) double brandCellSpacing; // @synthesize brandCellSpacing=_brandCellSpacing;
@property(retain, nonatomic) UICollectionViewFlowLayout *flowLayout; // @synthesize flowLayout=_flowLayout;
@property(retain, nonatomic) NSArray *brandList; // @synthesize brandList=_brandList;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void).cxx_destruct;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)_sendBrandsUpdated;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;
- (void)setSelectedBrandIndentifiers:(id)arg1;
- (id)brandForIdentifier:(id)arg1;
- (void)setSelectedBrands:(id)arg1;
- (id)selectedBrands;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


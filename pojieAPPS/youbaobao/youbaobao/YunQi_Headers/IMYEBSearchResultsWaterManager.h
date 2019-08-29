//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMYEBSessionViewManager.h"

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class IMYEBSearchHotWordModel, NSArray, NSString, UICollectionView;
@protocol IMYEBSearchResultsWaterManagerDelegate;

@interface IMYEBSearchResultsWaterManager : IMYEBSessionViewManager <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout>
{
    UICollectionView *_gridView;
    double _preBottom;
    NSString *_keyword;
    id <IMYEBSearchResultsWaterManagerDelegate> _delegate;
    NSArray *_dataArray;
    IMYEBSearchHotWordModel *_searchHotModel;
}

@property(retain, nonatomic) IMYEBSearchHotWordModel *searchHotModel; // @synthesize searchHotModel=_searchHotModel;
@property(retain, nonatomic) NSArray *dataArray; // @synthesize dataArray=_dataArray;
@property(nonatomic) __weak id <IMYEBSearchResultsWaterManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *keyword; // @synthesize keyword=_keyword;
@property(nonatomic) double preBottom; // @synthesize preBottom=_preBottom;
@property(retain, nonatomic) UICollectionView *gridView; // @synthesize gridView=_gridView;
- (void).cxx_destruct;
- (void)dealloc;
- (void)scrollToIndexPath:(id)arg1;
- (id)currentScollAtIndexPath;
- (void)removeAll;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)tableViewAutoScroll;
- (void)reloadData;
- (void)initContentView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


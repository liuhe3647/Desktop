//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMYBaseTableViewCell.h"

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class IMYNewsRecommendTTQHeader, IMYRecommendTTQCardModel, IMYTouchEXButton, NSArray, NSString, UICollectionView;
@protocol IMYNewsRecommendTTQCellDelegate;

@interface IMYNewsRecommendTTQABCell : IMYBaseTableViewCell <UICollectionViewDelegate, UICollectionViewDataSource>
{
    id <IMYNewsRecommendTTQCellDelegate> _delegate;
    IMYTouchEXButton *_newsDeleteBtn;
    IMYNewsRecommendTTQHeader *_headerView;
    UICollectionView *_collectionView;
    NSArray *_dataSource;
    IMYRecommendTTQCardModel *_model;
}

@property(retain, nonatomic) IMYRecommendTTQCardModel *model; // @synthesize model=_model;
@property(retain, nonatomic) NSArray *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) IMYNewsRecommendTTQHeader *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) IMYTouchEXButton *newsDeleteBtn; // @synthesize newsDeleteBtn=_newsDeleteBtn;
@property(nonatomic) __weak id <IMYNewsRecommendTTQCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)setCellModel:(id)arg1;
- (void)setup;
- (void)makeConstraints;
- (void)initSubviews;
- (void)prepareUI;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


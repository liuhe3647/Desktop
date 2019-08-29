//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMYBaseListAdManager.h"

#import "IMYAdCollectionViewCellDelegate-Protocol.h"
#import "IMYICollectionAdManager-Protocol.h"

@class IMYAOPCollectionViewUtils, IMYAdvertiserInfo, NSString, UICollectionView;
@protocol IMYIAdRawDataRequest;

@interface IMYCollectionViewAdManager : IMYBaseListAdManager <IMYICollectionAdManager, IMYAdCollectionViewCellDelegate>
{
    UICollectionView *_collectionView;
    IMYAOPCollectionViewUtils *_aopUtils;
}

@property(readonly, nonatomic) __weak IMYAOPCollectionViewUtils *aopUtils; // @synthesize aopUtils=_aopUtils;
@property(nonatomic) __weak UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void).cxx_destruct;
- (void)cellDisplayProportion;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)aopCollectionUtils:(id)arg1 numberOfSections:(long long)arg2;
- (void)cellReusePauseVideo:(id)arg1;
- (void)aopCollectionUtils:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)aopCollectionUtils:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)getAdCellForPosition:(id)arg1 indexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)removeAdPosition:(id)arg1;
- (void)setupPositionMapWithArray:(id)arg1;
- (void)setupAopUtilsWithCollectionView:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) IMYAdvertiserInfo *adInfo;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) _Bool hasAdsData;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSString *lastRawIds;
@property(readonly, nonatomic) id <IMYIAdRawDataRequest> request;
@property(readonly) Class superclass;

@end

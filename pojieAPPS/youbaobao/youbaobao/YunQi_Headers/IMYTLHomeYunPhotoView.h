//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class NSArray, NSString, UICollectionView;

@interface IMYTLHomeYunPhotoView : UIView <UICollectionViewDelegate, UICollectionViewDataSource>
{
    _Bool _isVideo;
    _Bool _isHome;
    UICollectionView *_collectionview;
    NSArray *_datas;
    long long _totalPhotos;
    long long _maxPhotoCnt;
    CDUnknownBlockType _imgTapBlock;
    CDUnknownBlockType _videoTapBlock;
    CDUnknownBlockType _tapMoreBlock;
    struct CGSize _itemSize;
}

@property(nonatomic) struct CGSize itemSize; // @synthesize itemSize=_itemSize;
@property(nonatomic) _Bool isHome; // @synthesize isHome=_isHome;
@property(nonatomic) _Bool isVideo; // @synthesize isVideo=_isVideo;
@property(copy, nonatomic) CDUnknownBlockType tapMoreBlock; // @synthesize tapMoreBlock=_tapMoreBlock;
@property(copy, nonatomic) CDUnknownBlockType videoTapBlock; // @synthesize videoTapBlock=_videoTapBlock;
@property(copy, nonatomic) CDUnknownBlockType imgTapBlock; // @synthesize imgTapBlock=_imgTapBlock;
@property(nonatomic) long long maxPhotoCnt; // @synthesize maxPhotoCnt=_maxPhotoCnt;
@property(nonatomic) long long totalPhotos; // @synthesize totalPhotos=_totalPhotos;
@property(retain, nonatomic) NSArray *datas; // @synthesize datas=_datas;
@property(retain, nonatomic) UICollectionView *collectionview; // @synthesize collectionview=_collectionview;
- (void).cxx_destruct;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)checkAndGetVideoCell;
- (double)currentVideoFrame;
- (_Bool)cacheCompleted;
- (_Bool)isPlaying;
- (void)clearVideo;
- (void)pauseVideo;
- (void)stopVideo;
- (void)resumeVideo;
- (void)playVideo;
- (void)setCellPhotoModel:(id)arg1 imageView:(id)arg2;
- (id)configVideoCell:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (id)configPhotoCell:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (double)updateImages:(id)arg1 isVideo:(_Bool)arg2 isHome:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


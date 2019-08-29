//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMYTLViewController.h"

#import "IMYTLCloudAlbumCollectionViewDelegate-Protocol.h"

@class IMYCaptionView, IMYTLCloudAlbumCollectionView, IMYTLCloudAlbumVM, NSString, UIView;

@interface IMYTLCloudAlbumVC : IMYTLViewController <IMYTLCloudAlbumCollectionViewDelegate>
{
    IMYTLCloudAlbumCollectionView *_collectionView;
    IMYTLCloudAlbumVM *_viewModel;
    UIView *_emptyView;
    IMYCaptionView *_captionView;
}

@property(retain, nonatomic) IMYCaptionView *captionView; // @synthesize captionView=_captionView;
@property(retain, nonatomic) UIView *emptyView; // @synthesize emptyView=_emptyView;
@property(retain, nonatomic) IMYTLCloudAlbumVM *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) __weak IMYTLCloudAlbumCollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void).cxx_destruct;
- (void)collectionView:(id)arg1 didSelectHeaderAtSection:(long long)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)collectionView:(id)arg1 layoutCell:(id)arg2 indexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)showNoUploadPowerAlert;
- (void)turnToUploadVC;
- (void)showSheetView;
- (void)registerNotification;
- (void)initData;
- (void)updateNavItem;
- (void)initViews;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

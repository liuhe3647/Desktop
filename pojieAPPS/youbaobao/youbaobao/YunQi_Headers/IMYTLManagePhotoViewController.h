//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMYTLViewController.h"

@class IMYCaptionView, IMYPickerView, IMYTLCollectionView, IMYTLGalleryBottomView, IMYTLGalleryCell, IMYTLGalleryVM, IMYTLHomeListVM, NSIndexPath, NSString;

@interface IMYTLManagePhotoViewController : IMYTLViewController
{
    _Bool _needReloadCell;
    _Bool _automaticallyRefresh;
    IMYTLCollectionView *_collectionView;
    double _time;
    IMYTLGalleryCell *_currentDisplayCell;
    IMYTLHomeListVM *_viewModel;
    IMYTLGalleryVM *_galleryVM;
    IMYTLGalleryBottomView *_bottomView;
    IMYCaptionView *_captionView;
    NSString *_birthTitle;
    NSIndexPath *_currentDisplayCellIndexPath;
    IMYPickerView *_updateTimePicker;
}

@property(retain, nonatomic) IMYPickerView *updateTimePicker; // @synthesize updateTimePicker=_updateTimePicker;
@property(nonatomic) _Bool automaticallyRefresh; // @synthesize automaticallyRefresh=_automaticallyRefresh;
@property(nonatomic) _Bool needReloadCell; // @synthesize needReloadCell=_needReloadCell;
@property(retain, nonatomic) NSIndexPath *currentDisplayCellIndexPath; // @synthesize currentDisplayCellIndexPath=_currentDisplayCellIndexPath;
@property(copy, nonatomic) NSString *birthTitle; // @synthesize birthTitle=_birthTitle;
@property(retain, nonatomic) IMYCaptionView *captionView; // @synthesize captionView=_captionView;
@property(retain, nonatomic) IMYTLGalleryBottomView *bottomView; // @synthesize bottomView=_bottomView;
@property(retain, nonatomic) IMYTLGalleryVM *galleryVM; // @synthesize galleryVM=_galleryVM;
@property(retain, nonatomic) IMYTLHomeListVM *viewModel; // @synthesize viewModel=_viewModel;
@property(readonly, nonatomic) IMYTLGalleryCell *currentDisplayCell; // @synthesize currentDisplayCell=_currentDisplayCell;
@property(nonatomic) double time; // @synthesize time=_time;
@property(retain, nonatomic) IMYTLCollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void).cxx_destruct;
- (void)showUpdateTimePickerWithConfirmBlock:(CDUnknownBlockType)arg1 cancelBlock:(CDUnknownBlockType)arg2;
- (void)handleFinishPhotoChangeWithToRemoveArray:(id)arg1 toRemoveIndexPathArray:(id)arg2 toRemoveIndexArray:(id)arg3 isDelete:(long long)arg4;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)updatePhotosTime:(id)arg1 photos:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)updateSelectePhotosTime:(id)arg1;
- (void)deletePhotos:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)deleteSelectePhotos;
- (void)requestData;
- (_Bool)isLoadNextPage:(id)arg1;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)initBottomView;
- (void)initData;
- (void)initUI;
- (void)updatePhotoLayoutSubviews;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;

@end


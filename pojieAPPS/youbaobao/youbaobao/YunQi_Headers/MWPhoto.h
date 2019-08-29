//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MWPhoto-Protocol.h"

@class NSString, NSURL, PHAsset, UIImage;
@protocol SDWebImageOperation;

@interface MWPhoto : NSObject <MWPhoto>
{
    _Bool _loadingInProgress;
    id <SDWebImageOperation> _webImageOperation;
    int _assetRequestID;
    int _assetVideoRequestID;
    _Bool _emptyImage;
    _Bool _isVideo;
    UIImage *_underlyingImage;
    NSString *_caption;
    NSURL *_videoURL;
    UIImage *_image;
    NSURL *_photoURL;
    PHAsset *_asset;
    struct CGSize _assetTargetSize;
}

+ (id)videoWithURL:(id)arg1;
+ (id)photoWithAsset:(id)arg1 targetSize:(struct CGSize)arg2;
+ (id)photoWithURL:(id)arg1;
+ (id)photoWithImage:(id)arg1;
@property(nonatomic) struct CGSize assetTargetSize; // @synthesize assetTargetSize=_assetTargetSize;
@property(retain, nonatomic) PHAsset *asset; // @synthesize asset=_asset;
@property(retain, nonatomic) NSURL *photoURL; // @synthesize photoURL=_photoURL;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(nonatomic) _Bool isVideo; // @synthesize isVideo=_isVideo;
@property(nonatomic) _Bool emptyImage; // @synthesize emptyImage=_emptyImage;
@property(retain, nonatomic) NSURL *videoURL; // @synthesize videoURL=_videoURL;
@property(retain, nonatomic) NSString *caption; // @synthesize caption=_caption;
@property(retain, nonatomic) UIImage *underlyingImage; // @synthesize underlyingImage=_underlyingImage;
- (void).cxx_destruct;
- (void)autoResizePHAssetTargetSize;
- (void)cancelVideoRequest;
- (void)cancelImageRequest;
- (void)cancelAnyLoading;
- (void)postCompleteNotification;
- (void)imageLoadingComplete;
- (void)unloadUnderlyingImage;
- (void)_performLoadUnderlyingImageAndNotifyWithAsset:(id)arg1 targetSize:(struct CGSize)arg2;
- (void)_performLoadUnderlyingImageAndNotifyWithAssetsLibraryURL:(id)arg1;
- (void)_performLoadUnderlyingImageAndNotifyWithLocalFileURL:(id)arg1;
- (void)_performLoadUnderlyingImageAndNotifyWithWebURL:(id)arg1;
- (void)performLoadUnderlyingImageAndNotify;
- (void)loadUnderlyingImageAndNotify;
- (void)getVideoURL:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (void)setup;
- (id)initWithVideoURL:(id)arg1;
- (id)initWithAsset:(id)arg1 targetSize:(struct CGSize)arg2;
- (id)initWithURL:(id)arg1;
- (id)initWithImage:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


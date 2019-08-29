//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "IMYImagePickerControllerDelegate-Protocol.h"
#import "UIImagePickerControllerDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"

@class ALAssetsLibrary, IMYActionSheet, IMYFeedbackCameraButton, NSMutableArray, NSString, UIImagePickerController, UIViewController;

@interface IMYFeedbackPublishPhotoView : UIView <IMYImagePickerControllerDelegate, UINavigationControllerDelegate, UIImagePickerControllerDelegate>
{
    int _cameraButtonTag;
    unsigned long long _limit;
    NSMutableArray *_cameraButtons;
    CDUnknownBlockType _touchBlock;
    UIViewController *_controller;
    CDUnknownBlockType _removeBlock;
    CDUnknownBlockType _imageChangeBlock;
    NSMutableArray *_urlsArray;
    unsigned long long _lastAssetSelectedIndex;
    UIImagePickerController *_imagePickerController;
    ALAssetsLibrary *_assetLibrary;
    IMYFeedbackCameraButton *_activeCameraButton;
    IMYActionSheet *_actionSheet;
}

+ (id)viewWithLimit:(unsigned long long)arg1 controller:(id)arg2;
@property(nonatomic) __weak IMYActionSheet *actionSheet; // @synthesize actionSheet=_actionSheet;
@property(nonatomic) int cameraButtonTag; // @synthesize cameraButtonTag=_cameraButtonTag;
@property(retain, nonatomic) IMYFeedbackCameraButton *activeCameraButton; // @synthesize activeCameraButton=_activeCameraButton;
@property(retain, nonatomic) ALAssetsLibrary *assetLibrary; // @synthesize assetLibrary=_assetLibrary;
@property(retain, nonatomic) UIImagePickerController *imagePickerController; // @synthesize imagePickerController=_imagePickerController;
@property(nonatomic) unsigned long long lastAssetSelectedIndex; // @synthesize lastAssetSelectedIndex=_lastAssetSelectedIndex;
@property(retain, nonatomic) NSMutableArray *urlsArray; // @synthesize urlsArray=_urlsArray;
@property(copy, nonatomic) CDUnknownBlockType imageChangeBlock; // @synthesize imageChangeBlock=_imageChangeBlock;
@property(copy, nonatomic) CDUnknownBlockType removeBlock; // @synthesize removeBlock=_removeBlock;
@property(nonatomic) __weak UIViewController *controller; // @synthesize controller=_controller;
@property(copy, nonatomic) CDUnknownBlockType touchBlock; // @synthesize touchBlock=_touchBlock;
@property(retain, nonatomic) NSMutableArray *cameraButtons; // @synthesize cameraButtons=_cameraButtons;
@property(nonatomic) unsigned long long limit; // @synthesize limit=_limit;
- (void).cxx_destruct;
- (void)dismissActionSheet;
- (void)clearAllImages;
- (void)removeFromSuperview;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)imagePickerController:(id)arg1 didSelectAssets:(id)arg2;
- (void)takeImage;
- (void)showOriginalImage;
- (void)handleCameraButtonTouchUpInside:(id)arg1;
- (void)layoutViews;
- (void)startWithPhotos:(id)arg1 urls:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


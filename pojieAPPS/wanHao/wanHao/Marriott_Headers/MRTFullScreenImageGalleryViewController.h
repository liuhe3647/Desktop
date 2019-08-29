//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MRTImageGalleryViewController.h"

@class UIImageView, UILabel, UIView;

@interface MRTFullScreenImageGalleryViewController : MRTImageGalleryViewController
{
    MRTImageGalleryViewController *_origGallery;
    UILabel *_titleLabel;
    UIImageView *_resizeImageView;
    UIView *_resizeImageTappableView;
}

@property(retain, nonatomic) UIView *resizeImageTappableView; // @synthesize resizeImageTappableView=_resizeImageTappableView;
@property(retain, nonatomic) UIImageView *resizeImageView; // @synthesize resizeImageView=_resizeImageView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak MRTImageGalleryViewController *origGallery; // @synthesize origGallery=_origGallery;
- (void).cxx_destruct;
- (void)pageViewController:(id)arg1 didFinishAnimating:(_Bool)arg2 previousViewControllers:(id)arg3 transitionCompleted:(_Bool)arg4;
- (id)mediaItem;
- (void)performMediaRequestWithCompletion:(CDUnknownBlockType)arg1;
- (void)expandOrCollapse:(id)arg1;
- (_Bool)prefersHomeIndicatorAutoHidden;
- (_Bool)prefersStatusBarHidden;
- (long long)preferredInterfaceOrientationForPresentation;
- (unsigned long long)supportedInterfaceOrientations;
- (void)makeResizeImageView;
- (void)makeTitleLabel;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;

@end


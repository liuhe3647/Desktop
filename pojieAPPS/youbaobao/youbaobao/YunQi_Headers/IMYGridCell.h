//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class IMYAsset, UIImageView, UILabel, UIView;

@interface IMYGridCell : UICollectionViewCell
{
    _Bool _marked;
    IMYAsset *_asset;
    UIImageView *_mediaView;
    UIImageView *_indicatorView;
    UIView *_hasUploadBG;
    UIView *_videoInfoBG;
    unsigned long long _markerType;
    UIView *_maskView;
    UILabel *_hasUploadLabel;
    UIImageView *_statusImageView;
    UIImageView *_markerIconImageView;
    UILabel *_videoTimeLabel;
    unsigned long long _status;
}

@property(nonatomic) unsigned long long status; // @synthesize status=_status;
@property(nonatomic) __weak UILabel *videoTimeLabel; // @synthesize videoTimeLabel=_videoTimeLabel;
@property(retain, nonatomic) UIImageView *markerIconImageView; // @synthesize markerIconImageView=_markerIconImageView;
@property(nonatomic) __weak UIImageView *statusImageView; // @synthesize statusImageView=_statusImageView;
@property(nonatomic) __weak UILabel *hasUploadLabel; // @synthesize hasUploadLabel=_hasUploadLabel;
@property(nonatomic) __weak UIView *maskView; // @synthesize maskView=_maskView;
@property(nonatomic) unsigned long long markerType; // @synthesize markerType=_markerType;
@property(nonatomic) __weak UIView *videoInfoBG; // @synthesize videoInfoBG=_videoInfoBG;
@property(nonatomic) __weak UIView *hasUploadBG; // @synthesize hasUploadBG=_hasUploadBG;
@property(nonatomic) __weak UIImageView *indicatorView; // @synthesize indicatorView=_indicatorView;
@property(nonatomic) __weak UIImageView *mediaView; // @synthesize mediaView=_mediaView;
@property(nonatomic) _Bool marked; // @synthesize marked=_marked;
@property(retain, nonatomic) IMYAsset *asset; // @synthesize asset=_asset;
- (void).cxx_destruct;
- (void)showAnimation;
@property(readonly, nonatomic) _Bool uploaded;
- (id)timeFormatted:(double)arg1;
- (void)updateHasUploadLabel;
- (void)awakeFromNib;

@end


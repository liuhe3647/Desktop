//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class ALAsset, NSString, NSURL, UIImage;

@interface TTQCameraButton : UIButton
{
    unsigned char _cacheImage;
    NSString *_content;
    NSURL *_assetURL;
    UIImage *_originalImage;
    UIImage *_thumbImage;
    ALAsset *_asset;
    NSString *_key;
}

+ (id)cachePath;
@property(copy, nonatomic) NSString *key; // @synthesize key=_key;
@property(nonatomic) unsigned char cacheImage; // @synthesize cacheImage=_cacheImage;
@property(retain, nonatomic) ALAsset *asset; // @synthesize asset=_asset;
@property(retain, nonatomic) UIImage *thumbImage; // @synthesize thumbImage=_thumbImage;
@property(retain, nonatomic) UIImage *originalImage; // @synthesize originalImage=_originalImage;
@property(copy, nonatomic) NSURL *assetURL; // @synthesize assetURL=_assetURL;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
- (void).cxx_destruct;
- (id)getImageName;
- (void)setupOriginalImage;
- (id)initWithFrame:(struct CGRect)arg1;

@end


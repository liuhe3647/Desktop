//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, UILabel;

@interface TTQThreeImageView : UIView
{
    _Bool _video;
    _Bool _showGIF;
    unsigned char _img_type;
    NSArray *_imageViews;
    NSArray *_images;
    UILabel *_imgNumLabel;
}

@property(retain, nonatomic) UILabel *imgNumLabel; // @synthesize imgNumLabel=_imgNumLabel;
@property(nonatomic) unsigned char img_type; // @synthesize img_type=_img_type;
@property(nonatomic) _Bool showGIF; // @synthesize showGIF=_showGIF;
@property(nonatomic) _Bool video; // @synthesize video=_video;
@property(retain, nonatomic) NSArray *images; // @synthesize images=_images;
@property(retain, nonatomic) NSArray *imageViews; // @synthesize imageViews=_imageViews;
- (void).cxx_destruct;
- (void)updateTotalImageNum:(long long)arg1;
- (id)init;

@end


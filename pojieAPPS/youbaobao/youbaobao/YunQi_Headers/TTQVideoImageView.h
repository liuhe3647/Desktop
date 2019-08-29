//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FLAnimatedImageView.h"

@class UIButton, UILabel;

@interface TTQVideoImageView : FLAnimatedImageView
{
    _Bool _video;
    unsigned char _showGIF;
    CDUnknownBlockType _ClickImage;
    CDUnknownBlockType _ClickPlayBtn;
    UILabel *_imageIcon;
    UIButton *_playBtn;
}

@property(retain, nonatomic) UIButton *playBtn; // @synthesize playBtn=_playBtn;
@property(retain, nonatomic) UILabel *imageIcon; // @synthesize imageIcon=_imageIcon;
@property(nonatomic) unsigned char showGIF; // @synthesize showGIF=_showGIF;
@property(nonatomic) _Bool video; // @synthesize video=_video;
@property(copy, nonatomic) CDUnknownBlockType ClickPlayBtn; // @synthesize ClickPlayBtn=_ClickPlayBtn;
@property(copy, nonatomic) CDUnknownBlockType ClickImage; // @synthesize ClickImage=_ClickImage;
- (void).cxx_destruct;
- (void)ttq_setImageURL:(id)arg1;
- (void)updateImage;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end


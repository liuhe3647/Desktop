//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RNSVGRenderable.h"

@class NSString, RCTBridge, RNSVGLength;

@interface RNSVGImage : RNSVGRenderable
{
    struct CGImage *_image;
    struct CGSize _imageSize;
    CDUnknownBlockType _reloadImageCancellationBlock;
    int _meetOrSlice;
    RCTBridge *_bridge;
    id _src;
    RNSVGLength *_x;
    RNSVGLength *_y;
    RNSVGLength *_imagewidth;
    RNSVGLength *_imageheight;
    NSString *_align;
}

@property(nonatomic) int meetOrSlice; // @synthesize meetOrSlice=_meetOrSlice;
@property(retain, nonatomic) NSString *align; // @synthesize align=_align;
@property(retain, nonatomic) RNSVGLength *imageheight; // @synthesize imageheight=_imageheight;
@property(retain, nonatomic) RNSVGLength *imagewidth; // @synthesize imagewidth=_imagewidth;
@property(retain, nonatomic) RNSVGLength *y; // @synthesize y=_y;
@property(retain, nonatomic) RNSVGLength *x; // @synthesize x=_x;
@property(nonatomic) id src; // @synthesize src=_src;
@property(nonatomic) __weak RCTBridge *bridge; // @synthesize bridge=_bridge;
- (void).cxx_destruct;
- (struct CGPath *)getPath:(struct CGContext *)arg1;
- (struct CGRect)getHitArea;
- (void)renderLayerTo:(struct CGContext *)arg1 rect:(struct CGRect)arg2;
- (void)dealloc;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MyCamGPUFilter.h"

@interface TTGPUImageTwoLookupFilter : MyCamGPUFilter
{
    double _sliderValue;
}

@property(nonatomic) double sliderValue; // @synthesize sliderValue=_sliderValue;
- (void)renderToTextureWithVertices:(const float *)arg1 textureCoordinates:(const float *)arg2;
- (id)initWithLeftLut:(id)arg1 rightLut:(id)arg2;

@end

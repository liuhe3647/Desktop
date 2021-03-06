//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MCBaseFilter.h"

@class SCNRenderer;

@interface MCSceneKitFilter : MCBaseFilter
{
    float _upsampleRatio;
    SCNRenderer *_scnRenderer;
    double _timeStamp;
}

@property(nonatomic) float upsampleRatio; // @synthesize upsampleRatio=_upsampleRatio;
@property(nonatomic) double timeStamp; // @synthesize timeStamp=_timeStamp;
@property(retain, nonatomic) SCNRenderer *scnRenderer; // @synthesize scnRenderer=_scnRenderer;
- (void).cxx_destruct;
- (void)renderToTextureWithVertices:(const float *)arg1 textureCoordinates:(const float *)arg2;
- (void)setupWithPointOfView:(id)arg1;
- (void)setupWithScene:(id)arg1;
- (void)recursiveReleaseNode:(id)arg1;
- (void)releaseSceneContentWithScene:(id)arg1;
- (void)releaseSceneContent;
- (id)init;

@end


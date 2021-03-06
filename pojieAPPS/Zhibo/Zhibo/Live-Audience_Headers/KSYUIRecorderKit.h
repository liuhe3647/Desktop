//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GPUImageTextureInput, GPUImageUIElement, KSYAudioMixer, KSYDummyAudioSource, KSYGPUPicMixer, KSYGPUPicOutput, KSYMovieWriter, UIView;

@interface KSYUIRecorderKit : NSObject
{
    _Bool _bBackground;
    _Bool _bPlayRecord;
    int _dummyTrack;
    int _playerTrack;
    UIView *_contentView;
    KSYMovieWriter *_writer;
    GPUImageTextureInput *_textureInput;
    long long _playerLayer;
    GPUImageUIElement *_uiElementInput;
    long long _uiLayer;
    KSYGPUPicMixer *_uiMixer;
    KSYAudioMixer *_aMixer;
    KSYDummyAudioSource *_dummyAudio;
    KSYGPUPicOutput *_gpuToStr;
    unsigned long long _scheme;
    CDStruct_1b6d18a9 _lastPts;
}

@property(nonatomic) unsigned long long scheme; // @synthesize scheme=_scheme;
@property CDStruct_1b6d18a9 lastPts; // @synthesize lastPts=_lastPts;
@property(retain) KSYGPUPicOutput *gpuToStr; // @synthesize gpuToStr=_gpuToStr;
@property(readonly, nonatomic) int playerTrack; // @synthesize playerTrack=_playerTrack;
@property(readonly, nonatomic) int dummyTrack; // @synthesize dummyTrack=_dummyTrack;
@property(retain) KSYDummyAudioSource *dummyAudio; // @synthesize dummyAudio=_dummyAudio;
@property(retain) KSYAudioMixer *aMixer; // @synthesize aMixer=_aMixer;
@property(retain) KSYGPUPicMixer *uiMixer; // @synthesize uiMixer=_uiMixer;
@property long long uiLayer; // @synthesize uiLayer=_uiLayer;
@property(retain) GPUImageUIElement *uiElementInput; // @synthesize uiElementInput=_uiElementInput;
@property long long playerLayer; // @synthesize playerLayer=_playerLayer;
@property(retain) GPUImageTextureInput *textureInput; // @synthesize textureInput=_textureInput;
@property(retain, nonatomic) KSYMovieWriter *writer; // @synthesize writer=_writer;
@property _Bool bPlayRecord; // @synthesize bPlayRecord=_bPlayRecord;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
- (void).cxx_destruct;
- (void)applicationWillTerminate;
- (void)applicationDidEnterBackground;
- (void)applicationWillResignActive;
- (void)applicationDidBecomeActive;
- (void)applicationWillEnterForeground;
- (void)unregisterApplicationObservers;
- (void)registerApplicationObservers;
- (void)processWithTextureId:(unsigned int)arg1 TextureSize:(struct CGSize)arg2 Time:(CDStruct_1b6d18a9)arg3;
- (void)processVideoSampleBuffer:(struct __CVBuffer *)arg1 timeInfo:(CDStruct_1b6d18a9)arg2;
- (void)processAudioSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)createAudioMixer;
- (void)createVideoMixer;
- (void)createWriter;
- (void)stopRecord;
- (void)startRecord:(id)arg1;
- (void)dealloc;
- (id)initWithScheme:(unsigned long long)arg1;
- (id)init;

@end


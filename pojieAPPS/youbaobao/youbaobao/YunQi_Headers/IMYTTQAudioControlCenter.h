//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface IMYTTQAudioControlCenter : NSObject
{
    CDUnknownBlockType _pulloutHeadphonespHandle;
    CDUnknownBlockType _backstageAudioClickHandle;
}

+ (id)shareManager;
@property(copy, nonatomic) CDUnknownBlockType backstageAudioClickHandle; // @synthesize backstageAudioClickHandle=_backstageAudioClickHandle;
@property(copy, nonatomic) CDUnknownBlockType pulloutHeadphonespHandle; // @synthesize pulloutHeadphonespHandle=_pulloutHeadphonespHandle;
- (void).cxx_destruct;
- (void)removeBackstagePlayBackPositio;
- (void)configBackstagePlayBackPosition:(CDUnknownBlockType)arg1;
- (void)nextAction:(id)arg1;
- (void)previousAction:(id)arg1;
- (void)pauseAction:(id)arg1;
- (void)playAction:(id)arg1;
- (void)restoreBackstageAudioButtons;
- (void)configBackstageAudioButtons:(unsigned long long)arg1 backstageAudioClickHandle:(CDUnknownBlockType)arg2;
- (void)configControlCenterAudioInfo:(id)arg1 artist:(id)arg2 duration:(id)arg3 playbackTime:(id)arg4 artwork:(id)arg5;
- (void)routeChange:(id)arg1;
- (void)removePulloutHeadphonesNotification;
- (void)configPulloutHeadphonesNotification:(CDUnknownBlockType)arg1;
- (void)openBackstageControlAudio;

@end


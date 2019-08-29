//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YBBToolsAlbumPlayerDelegate-Protocol.h"

@class NSArray, NSString, RACSignal, YBBToolsMusicAlbum, YBBToolsMusicSong;

@interface YBBToolsAlbumPlayerViewModel : NSObject <YBBToolsAlbumPlayerDelegate>
{
    _Bool _isEmpty;
    _Bool _isRequestContent;
    _Bool _isChartsData;
    YBBToolsMusicAlbum *_album;
    NSArray *_dataList;
    YBBToolsMusicSong *_currentSong;
    NSString *_storyContent;
    RACSignal *_updatedContentSignal;
}

+ (_Bool)isSelectedAtSong:(id)arg1;
+ (_Bool)hasPlayHistory;
@property(nonatomic) _Bool isChartsData; // @synthesize isChartsData=_isChartsData;
@property(nonatomic) _Bool isRequestContent; // @synthesize isRequestContent=_isRequestContent;
@property(retain, nonatomic) RACSignal *updatedContentSignal; // @synthesize updatedContentSignal=_updatedContentSignal;
@property(nonatomic) _Bool isEmpty; // @synthesize isEmpty=_isEmpty;
@property(copy, nonatomic) NSString *storyContent; // @synthesize storyContent=_storyContent;
@property(retain, nonatomic) YBBToolsMusicSong *currentSong; // @synthesize currentSong=_currentSong;
@property(retain, nonatomic) NSArray *dataList; // @synthesize dataList=_dataList;
@property(retain, nonatomic) YBBToolsMusicAlbum *album; // @synthesize album=_album;
- (void).cxx_destruct;
- (void)setChartsAlbum;
- (void)playerDidReachEnd:(id)arg1;
- (void)playerDidChangeCurrentItem:(id)arg1;
- (void)player:(id)arg1 didPreLoadCurrentItemWithProgress:(float)arg2;
- (void)playerDidChangeClockTime:(id)arg1;
- (void)uploadPlayCount;
- (void)requestStoryContentWithStory:(id)arg1;
- (void)resetAlbum:(id)arg1;
- (id)eachElement:(id)arg1;
- (void)requestMyAlbumListWithPage:(long long)arg1 handler:(CDUnknownBlockType)arg2;
- (void)requestXmlyWithPage:(long long)arg1 handler:(CDUnknownBlockType)arg2;
- (void)requestDataWithPage:(long long)arg1 handler:(CDUnknownBlockType)arg2;
- (void)requestMoreDataHandler:(CDUnknownBlockType)arg1;
- (void)refreshDataHandler:(CDUnknownBlockType)arg1;
- (void)showDatalistPickerView;
- (void)requestCurrentStoryContent;
- (void)playAsynFromSongs:(id)arg1;
- (void)requestDataAndPlaySongs;
- (void)pause;
- (void)play;
- (void)setSelectedSongIndex:(long long)arg1;
- (void)initSetting;
- (id)initWithChartsPlayerData;
- (id)initWithPlayerData;
- (id)initWithAlbum:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


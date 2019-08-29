//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ADBMedia, ADBMediaState, NSDate, NSMutableArray, NSString;
@protocol OS_dispatch_queue;

@interface ADBMediaItem : NSObject
{
    NSObject<OS_dispatch_queue> *_monitorThread;
    _Bool _segmentByMilestones;
    _Bool _segmentByOffsetMilestones;
    _Bool _completeTracked;
    _Bool _mediaAd;
    _Bool _itemClosed;
    _Bool _trackCalled;
    _Bool _canceled;
    CDUnknownBlockType _callback;
    NSString *_name;
    double _length;
    NSString *_playerName;
    NSString *_playerID;
    double _timestamp;
    NSString *_channel;
    ADBMediaState *_currentMediaState;
    ADBMediaState *_previousMediaState;
    ADBMedia *_mediaMeasurement;
    unsigned long long _trackCount;
    NSMutableArray *_firstEventList;
    NSMutableArray *_milestones;
    NSMutableArray *_offsetMilestones;
    NSDate *_openTime;
    unsigned long long _lastTrackSegmentNumber;
    unsigned long long _completeCloseOffsetThreshold;
    unsigned long long _trackSecondsThreshold;
    NSString *_parentName;
    NSString *_parentPod;
    double _parentPodPosition;
    NSString *_CPM;
}

@property _Bool canceled; // @synthesize canceled=_canceled;
@property _Bool trackCalled; // @synthesize trackCalled=_trackCalled;
@property _Bool itemClosed; // @synthesize itemClosed=_itemClosed;
@property(copy) NSString *CPM; // @synthesize CPM=_CPM;
@property double parentPodPosition; // @synthesize parentPodPosition=_parentPodPosition;
@property(copy) NSString *parentPod; // @synthesize parentPod=_parentPod;
@property(copy) NSString *parentName; // @synthesize parentName=_parentName;
@property _Bool mediaAd; // @synthesize mediaAd=_mediaAd;
@property(nonatomic) unsigned long long trackSecondsThreshold; // @synthesize trackSecondsThreshold=_trackSecondsThreshold;
@property(nonatomic) unsigned long long completeCloseOffsetThreshold; // @synthesize completeCloseOffsetThreshold=_completeCloseOffsetThreshold;
@property(nonatomic) unsigned long long lastTrackSegmentNumber; // @synthesize lastTrackSegmentNumber=_lastTrackSegmentNumber;
@property(nonatomic) _Bool completeTracked; // @synthesize completeTracked=_completeTracked;
@property(retain, nonatomic) NSDate *openTime; // @synthesize openTime=_openTime;
@property _Bool segmentByOffsetMilestones; // @synthesize segmentByOffsetMilestones=_segmentByOffsetMilestones;
@property _Bool segmentByMilestones; // @synthesize segmentByMilestones=_segmentByMilestones;
@property(retain, nonatomic) NSMutableArray *offsetMilestones; // @synthesize offsetMilestones=_offsetMilestones;
@property(retain, nonatomic) NSMutableArray *milestones; // @synthesize milestones=_milestones;
@property(retain, nonatomic) NSMutableArray *firstEventList; // @synthesize firstEventList=_firstEventList;
@property(nonatomic) unsigned long long trackCount; // @synthesize trackCount=_trackCount;
@property(retain, nonatomic) ADBMedia *mediaMeasurement; // @synthesize mediaMeasurement=_mediaMeasurement;
@property(retain, nonatomic) ADBMediaState *previousMediaState; // @synthesize previousMediaState=_previousMediaState;
@property(retain, nonatomic) ADBMediaState *currentMediaState; // @synthesize currentMediaState=_currentMediaState;
@property(copy) NSString *channel; // @synthesize channel=_channel;
@property double timestamp; // @synthesize timestamp=_timestamp;
@property(copy) NSString *playerID; // @synthesize playerID=_playerID;
@property(copy) NSString *playerName; // @synthesize playerName=_playerName;
@property double length; // @synthesize length=_length;
@property(copy) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
- (void)dealloc;
- (id)getReportMediaState;
- (void)setOffsetMilestonesString:(id)arg1;
- (void)setMilestonesString:(id)arg1;
- (_Bool)isLive;
- (_Bool)isCurrentOffsetPastCompleteThreshold;
- (void)setEventFirstTime:(id)arg1;
- (void)updateTimePlayed:(unsigned long long)arg1;
- (double)validateOffset:(double)arg1;
- (void)updateCurrentMediaStateMediaEventIfNeeded:(unsigned long long)arg1;
- (long long)calculateLastPassedOffsetMilestoneIndex;
- (long long)calculateLastPassedMilestoneIndex;
- (void)calculateCurrentOffsetMilestoneAndSegment;
- (void)calculateCurrentMilestoneAndSegment;
- (void)updateCurrentMediaStateWithOffset:(double)arg1 DefaultEventType:(unsigned long long)arg2;
- (void)completeWithOffset:(double)arg1;
- (void)close;
- (void)clickWithOffset:(double)arg1;
- (void)stopWithOffset:(double)arg1;
- (void)monitorWithOffset:(double)arg1;
- (void)playWithOffset:(double)arg1;
- (void)monitor:(id)arg1;
- (void)stopMonitor;
- (void)startMonitor;
- (id)initWithSettings:(id)arg1 media:(id)arg2;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface ADBMediaSettings : NSObject
{
    _Bool _segmentByMilestones;
    _Bool _segmentByOffsetMilestones;
    _Bool _isMediaAd;
    double _length;
    NSString *_channel;
    NSString *_name;
    NSString *_playerName;
    NSString *_playerID;
    NSString *_milestones;
    NSString *_offsetMilestones;
    unsigned long long _trackSeconds;
    unsigned long long _completeCloseOffsetThreshold;
    double _parentPodPosition;
    NSString *_CPM;
    NSString *_parentName;
    NSString *_parentPod;
}

@property(retain, nonatomic) NSString *parentPod; // @synthesize parentPod=_parentPod;
@property(retain, nonatomic) NSString *parentName; // @synthesize parentName=_parentName;
@property(retain, nonatomic) NSString *CPM; // @synthesize CPM=_CPM;
@property double parentPodPosition; // @synthesize parentPodPosition=_parentPodPosition;
@property _Bool isMediaAd; // @synthesize isMediaAd=_isMediaAd;
@property(nonatomic) unsigned long long completeCloseOffsetThreshold; // @synthesize completeCloseOffsetThreshold=_completeCloseOffsetThreshold;
@property(nonatomic) unsigned long long trackSeconds; // @synthesize trackSeconds=_trackSeconds;
@property(retain, nonatomic) NSString *offsetMilestones; // @synthesize offsetMilestones=_offsetMilestones;
@property(retain, nonatomic) NSString *milestones; // @synthesize milestones=_milestones;
@property(retain, nonatomic) NSString *playerID; // @synthesize playerID=_playerID;
@property(retain, nonatomic) NSString *playerName; // @synthesize playerName=_playerName;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *channel; // @synthesize channel=_channel;
@property double length; // @synthesize length=_length;
@property _Bool segmentByOffsetMilestones; // @synthesize segmentByOffsetMilestones=_segmentByOffsetMilestones;
@property _Bool segmentByMilestones; // @synthesize segmentByMilestones=_segmentByMilestones;
- (void)dealloc;
- (id)init;

@end


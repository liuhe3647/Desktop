//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface YBBToolsXimalayaRecord : NSObject
{
    long long _trackId;
    long long _duration;
    long long _playedSecs;
    unsigned long long _playType;
}

+ (id)getTableName;
+ (id)getUsingLKDBHelper;
+ (void)initialize;
@property(nonatomic) unsigned long long playType; // @synthesize playType=_playType;
@property(nonatomic) long long playedSecs; // @synthesize playedSecs=_playedSecs;
@property(nonatomic) long long duration; // @synthesize duration=_duration;
@property(nonatomic) long long trackId; // @synthesize trackId=_trackId;

@end


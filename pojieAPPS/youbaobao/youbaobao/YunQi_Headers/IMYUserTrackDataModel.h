//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IMYUTViewPath, NSDictionary, NSString;

@interface IMYUserTrackDataModel : NSObject
{
    IMYUTViewPath *_viewPath;
    unsigned long long _eventType;
    NSString *_pageClass;
    NSString *_listIndex;
    NSDictionary *_detailInfo;
    NSString *_eventID;
    NSString *_eventName;
    NSString *_dataKeyPath;
    NSString *_dataKeyName;
}

@property(copy, nonatomic) NSString *dataKeyName; // @synthesize dataKeyName=_dataKeyName;
@property(copy, nonatomic) NSString *dataKeyPath; // @synthesize dataKeyPath=_dataKeyPath;
@property(copy, nonatomic) NSString *eventName; // @synthesize eventName=_eventName;
@property(copy, nonatomic) NSString *eventID; // @synthesize eventID=_eventID;
@property(copy, nonatomic) NSDictionary *detailInfo; // @synthesize detailInfo=_detailInfo;
@property(copy, nonatomic) NSString *listIndex; // @synthesize listIndex=_listIndex;
@property(copy, nonatomic) NSString *pageClass; // @synthesize pageClass=_pageClass;
@property(nonatomic) unsigned long long eventType; // @synthesize eventType=_eventType;
@property(retain, nonatomic) IMYUTViewPath *viewPath; // @synthesize viewPath=_viewPath;
- (void).cxx_destruct;
- (id)description;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (id)visualTrackDataDic;
- (id)userTrackDataDic;
- (id)eventTypeString;

@end


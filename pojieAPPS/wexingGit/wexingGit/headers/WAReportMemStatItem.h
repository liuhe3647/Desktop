//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAReportBaseItem.h"

@interface WAReportMemStatItem : WAReportBaseItem
{
    _Bool _isCache;
    unsigned int _eventType;
    unsigned int _openSeq;
    unsigned int _openInterval;
    unsigned int _waThreadMemUsed;
    unsigned int _mainThreadMemUsed;
    long long _processMemUsed;
}

@property(nonatomic) unsigned int mainThreadMemUsed; // @synthesize mainThreadMemUsed=_mainThreadMemUsed;
@property(nonatomic) unsigned int waThreadMemUsed; // @synthesize waThreadMemUsed=_waThreadMemUsed;
@property(nonatomic) long long processMemUsed; // @synthesize processMemUsed=_processMemUsed;
@property(nonatomic) unsigned int openInterval; // @synthesize openInterval=_openInterval;
@property(nonatomic) unsigned int openSeq; // @synthesize openSeq=_openSeq;
@property(nonatomic) _Bool isCache; // @synthesize isCache=_isCache;
@property(nonatomic) unsigned int eventType; // @synthesize eventType=_eventType;
- (id)reportString;
- (int)reportID;

@end

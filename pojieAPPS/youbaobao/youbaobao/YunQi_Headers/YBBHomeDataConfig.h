//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface YBBHomeDataConfig : NSObject
{
    _Bool _reloadData;
    _Bool _isToday;
    _Bool _isNewPage;
    _Bool _requestByUploadPhoto;
    unsigned long long _userMode;
    long long _pageIndex;
    long long _todayIndex;
    long long _todayDiff;
}

@property(nonatomic) _Bool requestByUploadPhoto; // @synthesize requestByUploadPhoto=_requestByUploadPhoto;
@property(nonatomic) _Bool isNewPage; // @synthesize isNewPage=_isNewPage;
@property(nonatomic) long long todayDiff; // @synthesize todayDiff=_todayDiff;
@property(nonatomic) long long todayIndex; // @synthesize todayIndex=_todayIndex;
@property(nonatomic) long long pageIndex; // @synthesize pageIndex=_pageIndex;
@property(nonatomic) _Bool isToday; // @synthesize isToday=_isToday;
@property(nonatomic) _Bool reloadData; // @synthesize reloadData=_reloadData;
@property(nonatomic) unsigned long long userMode; // @synthesize userMode=_userMode;

@end


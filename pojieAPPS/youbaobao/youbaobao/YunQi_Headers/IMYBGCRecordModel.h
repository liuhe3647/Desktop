//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface IMYBGCRecordModel : NSObject
{
    _Bool _isSynced;
    _Bool _isDelete;
    NSString *_dateString;
    long long _recordTime;
    double _height;
    double _weight;
    double _headCircumference;
    long long _year;
    long long _month;
    long long _day;
    NSString *_updateTime;
}

+ (void)downloadData;
+ (id)getPrimaryKey;
+ (id)getTableName;
+ (id)getUsingLKDBHelper;
+ (void)imy_userIDChanged:(id)arg1;
+ (void)jsonKeyBinding;
+ (void)initialize;
@property(retain, nonatomic) NSString *updateTime; // @synthesize updateTime=_updateTime;
@property(nonatomic) _Bool isDelete; // @synthesize isDelete=_isDelete;
@property(nonatomic) long long day; // @synthesize day=_day;
@property(nonatomic) long long month; // @synthesize month=_month;
@property(nonatomic) long long year; // @synthesize year=_year;
@property(nonatomic) _Bool isSynced; // @synthesize isSynced=_isSynced;
@property(nonatomic) double headCircumference; // @synthesize headCircumference=_headCircumference;
@property(nonatomic) double weight; // @synthesize weight=_weight;
@property(nonatomic) double height; // @synthesize height=_height;
@property(nonatomic) long long recordTime; // @synthesize recordTime=_recordTime;
@property(retain, nonatomic) NSString *dateString; // @synthesize dateString=_dateString;
- (void).cxx_destruct;
- (double)typeValue:(unsigned long long)arg1;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface YBBHomeLamaBabyBodyInfoModel : NSObject
{
    double _boyHeightMin;
    double _boyHeightMax;
    double _boyWeightMin;
    double _boyWeightMax;
    double _girlHeightMin;
    double _girlHeightMax;
    double _girlWeightMin;
    double _girlWeightMax;
    unsigned long long _day;
}

+ (id)getInfoAtDay:(unsigned long long)arg1;
+ (id)getPrimaryKey;
+ (id)getTableName;
+ (id)getUsingLKDBHelper;
@property(nonatomic) unsigned long long day; // @synthesize day=_day;
@property(nonatomic) double girlWeightMax; // @synthesize girlWeightMax=_girlWeightMax;
@property(nonatomic) double girlWeightMin; // @synthesize girlWeightMin=_girlWeightMin;
@property(nonatomic) double girlHeightMax; // @synthesize girlHeightMax=_girlHeightMax;
@property(nonatomic) double girlHeightMin; // @synthesize girlHeightMin=_girlHeightMin;
@property(nonatomic) double boyWeightMax; // @synthesize boyWeightMax=_boyWeightMax;
@property(nonatomic) double boyWeightMin; // @synthesize boyWeightMin=_boyWeightMin;
@property(nonatomic) double boyHeightMax; // @synthesize boyHeightMax=_boyHeightMax;
@property(nonatomic) double boyHeightMin; // @synthesize boyHeightMin=_boyHeightMin;

@end


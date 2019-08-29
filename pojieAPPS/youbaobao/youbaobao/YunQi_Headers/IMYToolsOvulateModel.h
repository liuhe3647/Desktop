//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface IMYToolsOvulateModel : NSObject
{
    long long _imageDate;
    NSString *_imageDateString;
    NSString *_imageURLString;
    unsigned long long _state;
    unsigned long long _operationState;
    long long _ovulate_id;
}

+ (id)getPrimaryKey;
+ (id)getTableName;
+ (void)SY_UserIDChanged:(id)arg1;
+ (id)getUsingLKDBHelper;
+ (void)initialize;
+ (id)getOvulatesWithOperationState:(unsigned long long)arg1;
+ (id)turnWeakWithStartData:(long long)arg1 endDate:(long long)arg2;
+ (id)turnStrongWithStartData:(long long)arg1 endDate:(long long)arg2;
+ (id)getLocalOvulate;
+ (id)getOvulateDataWithPeriodStartDate:(long long)arg1 endDate:(long long)arg2;
+ (id)getOvulateBeforeFirstPeriodStartDate:(long long)arg1;
+ (id)getOvulateCountWithPeriodsStartDateArray:(id)arg1;
+ (void)saveOvulates:(id)arg1;
+ (id)getLastModel:(id)arg1;
+ (void)saveWithTempUserModel:(id)arg1;
+ (id)getCurrentUserData;
+ (id)getTempUserData;
+ (_Bool)deleteTempUserTable;
+ (_Bool)hasTempUserTable;
@property(nonatomic) long long ovulate_id; // @synthesize ovulate_id=_ovulate_id;
@property(nonatomic) unsigned long long operationState; // @synthesize operationState=_operationState;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(copy, nonatomic) NSString *imageURLString; // @synthesize imageURLString=_imageURLString;
@property(copy, nonatomic) NSString *imageDateString; // @synthesize imageDateString=_imageDateString;
@property(nonatomic) long long imageDate; // @synthesize imageDate=_imageDate;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *stateDesc;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface IMYEBFlashSaleBrandCheckModel : NSObject
{
    long long _current_time;
    long long _checked_date_id;
    long long _checked_brand_area_id;
    long long _checked_result;
    NSString *_result_msg;
}

@property(copy, nonatomic) NSString *result_msg; // @synthesize result_msg=_result_msg;
@property(nonatomic) long long checked_result; // @synthesize checked_result=_checked_result;
@property(nonatomic) long long checked_brand_area_id; // @synthesize checked_brand_area_id=_checked_brand_area_id;
@property(nonatomic) long long checked_date_id; // @synthesize checked_date_id=_checked_date_id;
@property(nonatomic) long long current_time; // @synthesize current_time=_current_time;
- (void).cxx_destruct;

@end


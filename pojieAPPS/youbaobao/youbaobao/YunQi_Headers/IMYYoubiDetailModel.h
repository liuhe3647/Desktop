//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface IMYYoubiDetailModel : NSObject
{
    long long _ID;
    NSString *_date;
    long long _type;
    NSString *_remark;
    NSString *_score;
}

+ (void)initialize;
@property(copy, nonatomic) NSString *score; // @synthesize score=_score;
@property(copy, nonatomic) NSString *remark; // @synthesize remark=_remark;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *date; // @synthesize date=_date;
@property(nonatomic) long long ID; // @synthesize ID=_ID;
- (void).cxx_destruct;

@end


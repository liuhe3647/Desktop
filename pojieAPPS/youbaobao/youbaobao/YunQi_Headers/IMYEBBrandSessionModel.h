//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IMYEBBrandSessionItemData, NSString;

@interface IMYEBBrandSessionModel : NSObject
{
    long long _status;
    long long _code;
    NSString *_msg;
    IMYEBBrandSessionItemData *_data;
}

@property(retain, nonatomic) IMYEBBrandSessionItemData *data; // @synthesize data=_data;
@property(copy, nonatomic) NSString *msg; // @synthesize msg=_msg;
@property(nonatomic) long long code; // @synthesize code=_code;
@property(nonatomic) long long status; // @synthesize status=_status;
- (void).cxx_destruct;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMYIAdModelPara-Protocol.h"
#import "NSObject-Protocol.h"

@class IMYAdvertisementModel, IMYAdvertiserInfo;

@protocol IMYIAdvertiserModel <IMYIAdModelPara, NSObject>
@property(readonly, nonatomic) IMYAdvertiserInfo *adInfo;
@property(readonly, nonatomic) IMYAdvertisementModel *rawData;
- (id)initWithRawData:(IMYAdvertisementModel *)arg1 adInfo:(IMYAdvertiserInfo *)arg2;
@end


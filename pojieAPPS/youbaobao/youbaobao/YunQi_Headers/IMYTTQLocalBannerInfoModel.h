//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface IMYTTQLocalBannerInfoModel : NSObject
{
    NSString *_filePath;
    unsigned long long _bannerId;
    NSString *_fileName;
    unsigned long long _userId;
    unsigned long long _errTimes;
}

@property(nonatomic) unsigned long long errTimes; // @synthesize errTimes=_errTimes;
@property(nonatomic) unsigned long long userId; // @synthesize userId=_userId;
@property(retain, nonatomic) NSString *fileName; // @synthesize fileName=_fileName;
@property(nonatomic) unsigned long long bannerId; // @synthesize bannerId=_bannerId;
@property(retain, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
- (void).cxx_destruct;

@end


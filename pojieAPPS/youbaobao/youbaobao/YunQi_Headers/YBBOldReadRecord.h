//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface YBBOldReadRecord : NSObject
{
    double _cacheTime;
    NSString *_redirect_url;
}

+ (_Bool)dbWillInsert:(id)arg1;
+ (id)getPrimaryKeyUnionArray;
+ (_Bool)hasRead:(id)arg1;
+ (void)checkCacheTimeOutOrSizeOut;
+ (id)getTableName;
+ (void)initialize;
@property(copy, nonatomic) NSString *redirect_url; // @synthesize redirect_url=_redirect_url;
@property(nonatomic) double cacheTime; // @synthesize cacheTime=_cacheTime;
- (void).cxx_destruct;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IMYIAdvertiserManagerFactory-Protocol.h"

@class NSMutableDictionary;

@interface IMYAdManagerFactory : NSObject <IMYIAdvertiserManagerFactory>
{
    NSMutableDictionary *_pageMapDic;
}

+ (id)shareInstance;
@property(retain, nonatomic) NSMutableDictionary *pageMapDic; // @synthesize pageMapDic=_pageMapDic;
- (void).cxx_destruct;
- (id)getCollectionViewAdManagerWithADInfo:(id)arg1;
- (id)getTableViewAdManagerWithADInfo:(id)arg1;
- (id)getAdManagerWithADInfo:(id)arg1;
- (void)addAdManagerBlock:(CDUnknownBlockType)arg1 forPage:(long long)arg2;
- (id)getPopupAdManagerWithADInfo:(id)arg1;
- (id)getLaunchAdManagerWithADInfo:(id)arg1;

@end


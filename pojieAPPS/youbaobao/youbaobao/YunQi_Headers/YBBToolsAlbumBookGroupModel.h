//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface YBBToolsAlbumBookGroupModel : NSObject
{
    long long _albumId;
    NSString *_albumName;
    NSString *_coverUrl;
    NSString *_direction;
    NSArray *_pbookList;
}

+ (id)modelContainerPropertyGenericClass;
+ (void)initialize;
@property(copy, nonatomic) NSArray *pbookList; // @synthesize pbookList=_pbookList;
@property(copy, nonatomic) NSString *direction; // @synthesize direction=_direction;
@property(copy, nonatomic) NSString *coverUrl; // @synthesize coverUrl=_coverUrl;
@property(copy, nonatomic) NSString *albumName; // @synthesize albumName=_albumName;
@property(nonatomic) long long albumId; // @synthesize albumId=_albumId;
- (void).cxx_destruct;

@end


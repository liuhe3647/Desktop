//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface IMYURIBlockObject : NSObject
{
    NSArray *_keyComponent;
    NSString *_path;
    long long _level;
    CDUnknownBlockType _actionBlock;
}

@property(copy, nonatomic) CDUnknownBlockType actionBlock; // @synthesize actionBlock=_actionBlock;
@property(nonatomic) long long level; // @synthesize level=_level;
@property(copy, nonatomic) NSString *path; // @synthesize path=_path;
@property(readonly, nonatomic) NSArray *keyComponent; // @synthesize keyComponent=_keyComponent;
- (void).cxx_destruct;
- (id)description;

@end


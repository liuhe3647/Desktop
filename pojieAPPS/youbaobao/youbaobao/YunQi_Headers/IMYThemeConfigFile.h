//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface IMYThemeConfigFile : NSObject
{
    NSDictionary *_defaultDict;
    NSDictionary *_currentDict;
    NSString *_fileName;
    long long _level;
}

@property(nonatomic) long long level; // @synthesize level=_level;
@property(copy, nonatomic) NSString *fileName; // @synthesize fileName=_fileName;
- (void).cxx_destruct;
- (void)resetCurrentDict;
@property(readonly, nonatomic) NSDictionary *currentDict; // @synthesize currentDict=_currentDict;
@property(readonly, nonatomic) NSDictionary *defaultDict; // @synthesize defaultDict=_defaultDict;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YYJSONHelperProtocol-Protocol.h"

@class NSString;

@interface YBBQuestionCategory : NSObject <YYJSONHelperProtocol>
{
    long long _c_id;
    NSString *_name;
    NSString *_title;
    NSString *_icon;
    NSString *_icon_bg;
    long long _views;
}

+ (void)initialize;
@property(nonatomic) long long views; // @synthesize views=_views;
@property(copy, nonatomic) NSString *icon_bg; // @synthesize icon_bg=_icon_bg;
@property(copy, nonatomic) NSString *icon; // @synthesize icon=_icon;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) long long c_id; // @synthesize c_id=_c_id;
- (void).cxx_destruct;

@end


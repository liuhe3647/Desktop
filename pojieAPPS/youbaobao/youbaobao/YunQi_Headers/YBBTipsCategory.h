//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface YBBTipsCategory : NSObject
{
    int _categoryID;
    NSString *_name;
    NSString *_icon;
    NSString *_icon2;
    NSString *_desc;
    NSString *_latest_title;
}

+ (void)initialize;
@property(copy, nonatomic) NSString *latest_title; // @synthesize latest_title=_latest_title;
@property(copy, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(copy, nonatomic) NSString *icon2; // @synthesize icon2=_icon2;
@property(copy, nonatomic) NSString *icon; // @synthesize icon=_icon;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) int categoryID; // @synthesize categoryID=_categoryID;
- (void).cxx_destruct;

@end


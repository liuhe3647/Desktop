//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface IMYMenseAdviceModel : NSObject
{
    long long _type;
    NSArray *_item;
    NSString *_title;
    NSString *_url;
}

@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSArray *item; // @synthesize item=_item;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;

@end


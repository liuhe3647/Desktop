//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface IMYVKEventClickObject : NSObject
{
    long long _eventId;
    NSString *_name;
    long long _count;
}

+ (id)getPrimaryKeyUnionArray;
@property(nonatomic) long long count; // @synthesize count=_count;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) long long eventId; // @synthesize eventId=_eventId;
- (void).cxx_destruct;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface TTQCommentObject : NSObject
{
    NSMutableDictionary *_items;
}

+ (void)saveComment:(id)arg1 topicId:(unsigned long long)arg2;
+ (id)commentForNews:(unsigned long long)arg1;
+ (id)shareComment;
@property(retain, nonatomic) NSMutableDictionary *items; // @synthesize items=_items;
- (void).cxx_destruct;
- (void)SY_UserIDChanged:(id)arg1;

@end


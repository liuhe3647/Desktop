//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface TTQForumInfoItem : NSObject
{
    int _itemType;
    int _arrowStatus;
    NSString *_title;
    NSString *_attr_title;
    NSString *_text;
    NSArray *_avatars;
    long long _fontSize;
    CDUnknownBlockType _itemBlock;
    CDUnknownBlockType _itemArrowBlock;
}

@property(nonatomic) int arrowStatus; // @synthesize arrowStatus=_arrowStatus;
@property(copy, nonatomic) CDUnknownBlockType itemArrowBlock; // @synthesize itemArrowBlock=_itemArrowBlock;
@property(copy, nonatomic) CDUnknownBlockType itemBlock; // @synthesize itemBlock=_itemBlock;
@property(nonatomic) int itemType; // @synthesize itemType=_itemType;
@property(nonatomic) long long fontSize; // @synthesize fontSize=_fontSize;
@property(retain, nonatomic) NSArray *avatars; // @synthesize avatars=_avatars;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(copy, nonatomic) NSString *attr_title; // @synthesize attr_title=_attr_title;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;

@end


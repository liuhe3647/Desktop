//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YYJSONHelperProtocol-Protocol.h"

@class NSArray, NSString;
@protocol TTQVoteItemModel;

@interface TTQVoteModel : NSObject <YYJSONHelperProtocol>
{
    unsigned char _is_voted;
    long long _voteID;
    NSString *_title;
    unsigned long long _vote_type;
    unsigned long long _most_choose;
    unsigned long long _item_type;
    unsigned long long _vote_times;
    double _over_time;
    NSArray<TTQVoteItemModel> *_items;
}

+ (void)initialize;
@property(retain, nonatomic) NSArray<TTQVoteItemModel> *items; // @synthesize items=_items;
@property(nonatomic) double over_time; // @synthesize over_time=_over_time;
@property(nonatomic) unsigned long long vote_times; // @synthesize vote_times=_vote_times;
@property(nonatomic) unsigned char is_voted; // @synthesize is_voted=_is_voted;
@property(nonatomic) unsigned long long item_type; // @synthesize item_type=_item_type;
@property(nonatomic) unsigned long long most_choose; // @synthesize most_choose=_most_choose;
@property(nonatomic) unsigned long long vote_type; // @synthesize vote_type=_vote_type;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) long long voteID; // @synthesize voteID=_voteID;
- (void).cxx_destruct;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YYJSONHelperProtocol-Protocol.h"

@class NSString;

@interface TTQVoteItemModel : NSObject <YYJSONHelperProtocol>
{
    unsigned char _is_selected;
    long long _itemID;
    NSString *_name;
    unsigned long long _rate;
}

+ (void)initialize;
@property(nonatomic) unsigned char is_selected; // @synthesize is_selected=_is_selected;
@property(nonatomic) unsigned long long rate; // @synthesize rate=_rate;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) long long itemID; // @synthesize itemID=_itemID;
- (void).cxx_destruct;

@end


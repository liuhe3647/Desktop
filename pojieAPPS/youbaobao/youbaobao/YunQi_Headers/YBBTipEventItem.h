//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface YBBTipEventItem : NSObject
{
    unsigned long long _action;
    unsigned long long _entrance_id;
    unsigned long long _floor;
    long long _tips_id;
}

+ (id)itemWithAction:(unsigned long long)arg1 entrance:(unsigned long long)arg2 floor:(long long)arg3 tipsId:(long long)arg4;
@property(nonatomic) long long tips_id; // @synthesize tips_id=_tips_id;
@property(nonatomic) unsigned long long floor; // @synthesize floor=_floor;
@property(nonatomic) unsigned long long entrance_id; // @synthesize entrance_id=_entrance_id;
@property(nonatomic) unsigned long long action; // @synthesize action=_action;
- (id)initWithAction:(unsigned long long)arg1 entrance:(unsigned long long)arg2 floor:(long long)arg3 tipsId:(long long)arg4;

@end


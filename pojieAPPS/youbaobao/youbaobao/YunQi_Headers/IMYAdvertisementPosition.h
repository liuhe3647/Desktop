//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface IMYAdvertisementPosition : NSObject
{
    long long _page_id;
    long long _pos_id;
    NSString *_ordinal;
    long long _forum_id;
    long long _iswake;
    long long _index;
}

@property(nonatomic) long long index; // @synthesize index=_index;
@property(nonatomic) long long iswake; // @synthesize iswake=_iswake;
@property(nonatomic) long long forum_id; // @synthesize forum_id=_forum_id;
@property(copy, nonatomic) NSString *ordinal; // @synthesize ordinal=_ordinal;
@property(nonatomic) long long pos_id; // @synthesize pos_id=_pos_id;
@property(nonatomic) long long page_id; // @synthesize page_id=_page_id;
- (void).cxx_destruct;
@property(copy, nonatomic, setter=_setindex:) CDUnknownBlockType Index;
@property(readonly, nonatomic) CDUnknownBlockType IsWake;
@property(readonly, nonatomic) CDUnknownBlockType ForumId;
@property(readonly, nonatomic) CDUnknownBlockType PositionId;
@property(readonly, nonatomic) CDUnknownBlockType PageId;

@end


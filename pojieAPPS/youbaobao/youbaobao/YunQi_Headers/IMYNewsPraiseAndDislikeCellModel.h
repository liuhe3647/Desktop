//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMYSimpleCellModel.h"

@class NSArray;

@interface IMYNewsPraiseAndDislikeCellModel : IMYSimpleCellModel
{
    _Bool _is_show_praise;
    _Bool _is_praise;
    long long _newsId;
    long long _recomm_type;
    long long _praise_count;
    long long _review_count;
    NSArray *_label;
    CDUnknownBlockType _clickDisLike;
}

+ (id)cellModelWithCommentModel:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType clickDisLike; // @synthesize clickDisLike=_clickDisLike;
@property(copy, nonatomic) NSArray *label; // @synthesize label=_label;
@property(nonatomic) long long review_count; // @synthesize review_count=_review_count;
@property(nonatomic) _Bool is_praise; // @synthesize is_praise=_is_praise;
@property(nonatomic) long long praise_count; // @synthesize praise_count=_praise_count;
@property(nonatomic) _Bool is_show_praise; // @synthesize is_show_praise=_is_show_praise;
@property(nonatomic) long long recomm_type; // @synthesize recomm_type=_recomm_type;
@property(nonatomic) long long newsId; // @synthesize newsId=_newsId;
- (void).cxx_destruct;

@end

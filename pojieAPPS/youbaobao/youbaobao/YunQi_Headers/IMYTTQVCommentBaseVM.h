//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMYPublicBaseViewModel.h"

@class NSArray, NSMutableArray, RACDisposable, RACSignal, UIViewController;
@protocol RACSubscriber;

@interface IMYTTQVCommentBaseVM : IMYPublicBaseViewModel
{
    RACDisposable *commentDeleteDisposable;
    RACSignal *commentDeleteSignal;
    id <RACSubscriber> commentDeleteSubscriber;
    _Bool _isHideRecommend;
    NSArray *_commentsArray;
    NSMutableArray *_recommendArray;
    NSMutableArray *_reviewsArray;
    long long _newsId;
    long long _review_id;
    long long _reviewCount;
    UIViewController *_vc;
}

@property(nonatomic) __weak UIViewController *vc; // @synthesize vc=_vc;
@property(nonatomic) _Bool isHideRecommend; // @synthesize isHideRecommend=_isHideRecommend;
@property(nonatomic) long long reviewCount; // @synthesize reviewCount=_reviewCount;
@property(nonatomic) long long review_id; // @synthesize review_id=_review_id;
@property(nonatomic) long long newsId; // @synthesize newsId=_newsId;
@property(retain, nonatomic) NSMutableArray *reviewsArray; // @synthesize reviewsArray=_reviewsArray;
@property(retain, nonatomic) NSMutableArray *recommendArray; // @synthesize recommendArray=_recommendArray;
@property(retain, nonatomic) NSArray *commentsArray; // @synthesize commentsArray=_commentsArray;
- (void).cxx_destruct;
- (void)showReportActionSheetWithCellModel:(id)arg1;
- (void)showActionSheetWithCellModel:(id)arg1;
- (_Bool)insertCellOnTopWithModel:(id)arg1;
- (id)imy_commentDeleteSubscriber;
- (id)commentDeleteSignal;

@end


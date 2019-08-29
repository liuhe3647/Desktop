//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSMutableArray, UIButton;

@interface TTQPublishVoteView : UIView
{
    long long _maximun;
    CDUnknownBlockType _changeVotesBlock;
    CDUnknownBlockType _addVoteBlock;
    CDUnknownBlockType _shouldEditingVoteBlock;
    CDUnknownBlockType _didEditingVoteBlock;
    CDUnknownBlockType _didEndEditingVoteBlock;
    NSMutableArray *_voteItems;
    UIButton *_addBtn;
}

@property(retain, nonatomic) UIButton *addBtn; // @synthesize addBtn=_addBtn;
@property(retain, nonatomic) NSMutableArray *voteItems; // @synthesize voteItems=_voteItems;
@property(copy, nonatomic) CDUnknownBlockType didEndEditingVoteBlock; // @synthesize didEndEditingVoteBlock=_didEndEditingVoteBlock;
@property(copy, nonatomic) CDUnknownBlockType didEditingVoteBlock; // @synthesize didEditingVoteBlock=_didEditingVoteBlock;
@property(copy, nonatomic) CDUnknownBlockType shouldEditingVoteBlock; // @synthesize shouldEditingVoteBlock=_shouldEditingVoteBlock;
@property(copy, nonatomic) CDUnknownBlockType addVoteBlock; // @synthesize addVoteBlock=_addVoteBlock;
@property(copy, nonatomic) CDUnknownBlockType changeVotesBlock; // @synthesize changeVotesBlock=_changeVotesBlock;
@property(nonatomic) long long maximun; // @synthesize maximun=_maximun;
- (void).cxx_destruct;
- (void)setupView;
- (_Bool)isFirstResponder;
- (_Bool)becomeFirstResponder;
- (void)removeVoteItems:(id)arg1;
- (void)addVoteTexts:(id)arg1 changeBlock:(CDUnknownBlockType)arg2;
@property(retain, nonatomic) NSArray *voteTexts;
@property(readonly, nonatomic) NSArray *validTexts;
- (id)initWithLimit:(long long)arg1;

@end


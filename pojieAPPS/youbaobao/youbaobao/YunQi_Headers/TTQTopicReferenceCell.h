//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTQTableViewCell.h"

#import "IMYRM80AttributedLabelDelegate-Protocol.h"

@class IMYAvatarImageView, IMYRM80AttributedLabel, NSMutableArray, NSString, TTQPraiseView, UIImageView, UILabel, UIView;

@interface TTQTopicReferenceCell : TTQTableViewCell <IMYRM80AttributedLabelDelegate>
{
    IMYRM80AttributedLabel *_referenceContentLabel;
    UIImageView *_bgView;
    UILabel *_nameLabel;
    UILabel *_timeLabel;
    TTQPraiseView *_praiseView;
    UILabel *_comIconLb;
    NSMutableArray *_iconTags;
    IMYAvatarImageView *_avatarButton;
    UIView *_tagIconView;
    UILabel *_babyInfo;
}

@property(retain, nonatomic) UILabel *babyInfo; // @synthesize babyInfo=_babyInfo;
@property(retain, nonatomic) UIView *tagIconView; // @synthesize tagIconView=_tagIconView;
@property(retain, nonatomic) IMYAvatarImageView *avatarButton; // @synthesize avatarButton=_avatarButton;
@property(retain, nonatomic) NSMutableArray *iconTags; // @synthesize iconTags=_iconTags;
@property(retain, nonatomic) UILabel *comIconLb; // @synthesize comIconLb=_comIconLb;
@property(retain, nonatomic) TTQPraiseView *praiseView; // @synthesize praiseView=_praiseView;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIImageView *bgView; // @synthesize bgView=_bgView;
@property(retain, nonatomic) IMYRM80AttributedLabel *referenceContentLabel; // @synthesize referenceContentLabel=_referenceContentLabel;
- (void).cxx_destruct;
- (int)getWordFont;
- (id)getColorKey;
- (void)setupCommentLabel:(long long)arg1;
- (id)countString:(long long)arg1;
- (double)bindModel:(id)arg1 heightForRowAtIndexPath:(id)arg2 viewModel:(id)arg3;
- (id)bindModel:(id)arg1 cellForRowAtIndexPath:(id)arg2 viewModel:(id)arg3;
- (void)commonInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


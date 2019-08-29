//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMYTableViewCell.h"

#import "IMYRM80AttributedLabelDelegate-Protocol.h"

@class IMYRM80AttributedLabel, NSString, UIButton, UIImageView, UIView;

@interface IMYNewsStackCommentCell : IMYTableViewCell <IMYRM80AttributedLabelDelegate>
{
    UIView *_commentContentView;
    IMYRM80AttributedLabel *_contentLabel;
    UIImageView *_highlightedView;
    UIView *_headerView;
    UIView *_footerView;
    UIButton *_moreReplyButton;
    UIImageView *_fullSelectImageView;
}

@property(retain, nonatomic) UIImageView *fullSelectImageView; // @synthesize fullSelectImageView=_fullSelectImageView;
@property(retain, nonatomic) UIButton *moreReplyButton; // @synthesize moreReplyButton=_moreReplyButton;
@property(retain, nonatomic) UIView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) UIImageView *highlightedView; // @synthesize highlightedView=_highlightedView;
@property(retain, nonatomic) IMYRM80AttributedLabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) UIView *commentContentView; // @synthesize commentContentView=_commentContentView;
- (void).cxx_destruct;
- (void)moreReplyButtonAction;
- (void)setupStackComment:(id)arg1 content:(id)arg2;
- (void)m80AttributedLabel:(id)arg1 clickedOnLink:(id)arg2;
- (_Bool)showLineNeedAutoAdd;
- (void)reloadDisplay;
- (void)initContentView;
- (void)setCellFullSelect:(_Bool)arg1;
- (void)_initMyself;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


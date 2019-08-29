//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "TTTAttributedLabelDelegate-Protocol.h"

@class IMYEBRecommentModel, NSString, TTTAttributedLabel, UILabel;

@interface IMYEBRecommentContentCell : UITableViewCell <TTTAttributedLabelDelegate>
{
    IMYEBRecommentModel *_model;
    UILabel *_recommendTitleLabel;
    TTTAttributedLabel *_recommendContentLabel;
}

@property(retain, nonatomic) TTTAttributedLabel *recommendContentLabel; // @synthesize recommendContentLabel=_recommendContentLabel;
@property(retain, nonatomic) UILabel *recommendTitleLabel; // @synthesize recommendTitleLabel=_recommendTitleLabel;
@property(retain, nonatomic) IMYEBRecommentModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)attributedLabel:(id)arg1 didSelectLinkWithURL:(id)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMYTableViewCell.h"

@class IMYTTQVPraiseView, UILabel;

@interface IMYTTQVCommentPraiseCell : IMYTableViewCell
{
    UILabel *_commentLabel;
    IMYTTQVPraiseView *_praiseView;
}

@property(retain, nonatomic) IMYTTQVPraiseView *praiseView; // @synthesize praiseView=_praiseView;
@property(retain, nonatomic) UILabel *commentLabel; // @synthesize commentLabel=_commentLabel;
- (void).cxx_destruct;
- (void)pariseAction;
- (void)doCommentAction;
- (void)reloadDisplay;
- (void)setComments:(unsigned long long)arg1;
- (void)initContentView;
- (void)_initMyself;

@end


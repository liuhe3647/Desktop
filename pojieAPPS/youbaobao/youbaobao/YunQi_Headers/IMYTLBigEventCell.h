//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class IMYTLHomeListCache, UIImageView, UILabel, UIView;

@interface IMYTLBigEventCell : UITableViewCell
{
    UIImageView *_contentInfoView;
    UIView *_lineView;
    UIImageView *_eventImageView;
    UILabel *_eventLabel;
    UILabel *_dateLabel;
    UIImageView *_imgView;
    UIImageView *_playImageView;
    IMYTLHomeListCache *_model;
}

+ (double)fitHeight;
@property(retain, nonatomic) IMYTLHomeListCache *model; // @synthesize model=_model;
@property(nonatomic) __weak UIImageView *playImageView; // @synthesize playImageView=_playImageView;
@property(nonatomic) __weak UIImageView *imgView; // @synthesize imgView=_imgView;
@property(nonatomic) __weak UILabel *dateLabel; // @synthesize dateLabel=_dateLabel;
@property(nonatomic) __weak UILabel *eventLabel; // @synthesize eventLabel=_eventLabel;
@property(nonatomic) __weak UIImageView *eventImageView; // @synthesize eventImageView=_eventImageView;
@property(nonatomic) __weak UIView *lineView; // @synthesize lineView=_lineView;
@property(nonatomic) __weak UIImageView *contentInfoView; // @synthesize contentInfoView=_contentInfoView;
- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;

@end


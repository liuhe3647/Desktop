//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMYTableViewCell.h"

@class UILabel, UIView;

@interface IMYRecordAllTimeCell : IMYTableViewCell
{
    UILabel *_timeLabel;
    UIView *_view;
}

@property(nonatomic) __weak UIView *view; // @synthesize view=_view;
@property(nonatomic) __weak UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
- (void).cxx_destruct;
- (void)setDate:(id)arg1;
- (void)awakeFromNib;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UILabel, YBBAdVideoView;

@interface YBBHomeMotherVideoCell : UITableViewCell
{
    _Bool _isBaby;
    YBBAdVideoView *_videoView;
    UILabel *_bottomlabel;
}

@property(nonatomic) _Bool isBaby; // @synthesize isBaby=_isBaby;
@property(retain, nonatomic) UILabel *bottomlabel; // @synthesize bottomlabel=_bottomlabel;
@property(retain, nonatomic) YBBAdVideoView *videoView; // @synthesize videoView=_videoView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end


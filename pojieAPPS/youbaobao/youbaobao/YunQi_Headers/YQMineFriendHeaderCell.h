//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMYSimpleLabelCell.h"

@class IMYAvatarImageView, UIImageView;

@interface YQMineFriendHeaderCell : IMYSimpleLabelCell
{
    IMYAvatarImageView *_avatatView;
    UIImageView *_arrowNewImageView;
}

@property(retain, nonatomic) UIImageView *arrowNewImageView; // @synthesize arrowNewImageView=_arrowNewImageView;
@property(retain, nonatomic) IMYAvatarImageView *avatatView; // @synthesize avatatView=_avatatView;
- (void).cxx_destruct;
- (void)reloadDisplay;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;

@end


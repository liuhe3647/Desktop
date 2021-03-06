//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NIMAvatarImageView, UIImageView, UILabel;

@interface NTESLiveMasterInfoView : UIView
{
    NIMAvatarImageView *_avatarImageView;
    UILabel *_nameLabel;
    UIImageView *_countIconImageView;
    UILabel *_countLabel;
    UIView *_topSep;
    UIView *_bottomSep;
}

@property(retain, nonatomic) UIView *bottomSep; // @synthesize bottomSep=_bottomSep;
@property(retain, nonatomic) UIView *topSep; // @synthesize topSep=_topSep;
@property(retain, nonatomic) UILabel *countLabel; // @synthesize countLabel=_countLabel;
@property(retain, nonatomic) UIImageView *countIconImageView; // @synthesize countIconImageView=_countIconImageView;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) NIMAvatarImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
- (void).cxx_destruct;
- (double)avatarWidth;
- (void)layoutSubviews;
- (void)refresh:(id)arg1 chatroom:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end


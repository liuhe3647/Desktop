//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class IMYButton, UIImageView, UILabel, UIView, YBBHomeGroupItem;

@interface YBBHomeSectionTitleCell : UITableViewCell
{
    _Bool _contentHidden;
    UILabel *_sectionLabel;
    IMYButton *_refreshButton;
    UILabel *_infoLabel;
    UIImageView *_arrowImageView;
    unsigned long long _state;
    CDUnknownBlockType _handler;
    unsigned long long _type;
    YBBHomeGroupItem *_group;
    UIView *_lineView;
    UIView *_roundCornerBG;
    UIView *_rightAngleBG;
}

@property(retain, nonatomic) UIView *rightAngleBG; // @synthesize rightAngleBG=_rightAngleBG;
@property(retain, nonatomic) UIView *roundCornerBG; // @synthesize roundCornerBG=_roundCornerBG;
@property(nonatomic) __weak UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) YBBHomeGroupItem *group; // @synthesize group=_group;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(nonatomic) _Bool contentHidden; // @synthesize contentHidden=_contentHidden;
@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) UILabel *infoLabel; // @synthesize infoLabel=_infoLabel;
@property(retain, nonatomic) IMYButton *refreshButton; // @synthesize refreshButton=_refreshButton;
@property(retain, nonatomic) UILabel *sectionLabel; // @synthesize sectionLabel=_sectionLabel;
- (void).cxx_destruct;
- (void)configureWithItem:(id)arg1 mode:(unsigned long long)arg2 handler:(CDUnknownBlockType)arg3;
- (void)clickAction:(id)arg1;
- (void)showAnimationWithState:(unsigned long long)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end


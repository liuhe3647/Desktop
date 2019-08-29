//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class TTQTagIconModel, UIImageView, UILabel;

@interface TTQTagIcon : UIView
{
    _Bool _semicircleCornerRadius;
    _Bool _bgColorLock;
    unsigned long long _tagType;
    UILabel *_tagLabel;
    UIImageView *_tagImageView;
    TTQTagIconModel *_tagModel;
}

@property(nonatomic) _Bool bgColorLock; // @synthesize bgColorLock=_bgColorLock;
@property(nonatomic) _Bool semicircleCornerRadius; // @synthesize semicircleCornerRadius=_semicircleCornerRadius;
@property(retain, nonatomic) TTQTagIconModel *tagModel; // @synthesize tagModel=_tagModel;
@property(retain, nonatomic) UIImageView *tagImageView; // @synthesize tagImageView=_tagImageView;
@property(retain, nonatomic) UILabel *tagLabel; // @synthesize tagLabel=_tagLabel;
@property(nonatomic) unsigned long long tagType; // @synthesize tagType=_tagType;
- (void).cxx_destruct;
- (id)tagIconImage;
- (void)setBackgroundColor:(id)arg1;
- (void)manualSetBgColor:(id)arg1;
- (void)startInit;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end

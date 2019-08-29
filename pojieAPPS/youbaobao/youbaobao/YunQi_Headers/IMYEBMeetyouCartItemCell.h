//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMYEBSwipeCell.h"

@class NSIndexPath, UIImageView, UILabel, UIView;

@interface IMYEBMeetyouCartItemCell : IMYEBSwipeCell
{
    UIImageView *_shopImageView;
    UILabel *_shopNameLabel;
    UILabel *_currentTipLabel;
    UILabel *_currentTagLabel;
    UILabel *_currentPriceLabel;
    UIImageView *_buyImageView;
    UILabel *_buyLabel;
    UIView *_bottomLine;
    UIView *_tagView;
    NSIndexPath *_indexPath;
    CDUnknownBlockType _deleteAction;
}

+ (void)setMargin:(double)arg1;
+ (double)cellHeight;
@property(copy, nonatomic) CDUnknownBlockType deleteAction; // @synthesize deleteAction=_deleteAction;
@property(retain, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property(retain, nonatomic) UIView *tagView; // @synthesize tagView=_tagView;
@property(retain, nonatomic) UIView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(retain, nonatomic) UILabel *buyLabel; // @synthesize buyLabel=_buyLabel;
@property(retain, nonatomic) UIImageView *buyImageView; // @synthesize buyImageView=_buyImageView;
@property(retain, nonatomic) UILabel *currentPriceLabel; // @synthesize currentPriceLabel=_currentPriceLabel;
@property(retain, nonatomic) UILabel *currentTagLabel; // @synthesize currentTagLabel=_currentTagLabel;
@property(retain, nonatomic) UILabel *currentTipLabel; // @synthesize currentTipLabel=_currentTipLabel;
@property(retain, nonatomic) UILabel *shopNameLabel; // @synthesize shopNameLabel=_shopNameLabel;
@property(retain, nonatomic) UIImageView *shopImageView; // @synthesize shopImageView=_shopImageView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setIsLastCell:(_Bool)arg1;
- (double)creatExceptionnalTagViewWithModel:(id)arg1 leftSpace:(double)arg2;
- (double)creatAllPromotionWithList:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)fillDataWithModel:(id)arg1 indexPath:(id)arg2;
- (void)createUI;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end


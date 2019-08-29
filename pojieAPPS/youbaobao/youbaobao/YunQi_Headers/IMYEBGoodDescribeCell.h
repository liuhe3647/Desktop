//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class IMYEBDetailCountDownView, IMYEBEvaluateView, UIButton, UIImageView, UILabel, UIView;

@interface IMYEBGoodDescribeCell : UITableViewCell
{
    double _promptViewHeight;
    CDUnknownBlockType _gotoShopBlock;
    CDUnknownBlockType _clickToGetCouponBlock;
    UIView *_goodsInfoSessionView;
    UIImageView *_shopTypeImageView;
    UILabel *_priceTypeLabel;
    UILabel *_mainTitleLabel;
    UIView *_tagView;
    UILabel *_postageLabel;
    UILabel *_priceTextLabel;
    UILabel *_moneyIconLabel;
    UILabel *_currentPriceLabel;
    UILabel *_originPriceLabel;
    UILabel *_originPriceTextLabel;
    UIView *_couponSessionView;
    UIButton *_couponImgButton;
    UILabel *_couponTitleLabel;
    UILabel *_couponValidDateLabel;
    UILabel *_togetCouponLabel;
    UIView *_shopInfoSessionView;
    UIImageView *_shopImageView;
    UILabel *_shopTitleLabe;
    UIView *_creditLevelView;
    UIButton *_commingShopping;
    IMYEBEvaluateView *_goodEvaluateView;
    IMYEBEvaluateView *_sellEvaluateView;
    IMYEBEvaluateView *_transEvaluateView;
    IMYEBDetailCountDownView *_countDownView;
    double _cellWidth;
    double _cellHeight;
    UIView *_promptSessionView;
}

+ (struct CGSize)cellSizeWithModel:(id)arg1;
@property(retain, nonatomic) UIView *promptSessionView; // @synthesize promptSessionView=_promptSessionView;
@property(nonatomic) double cellHeight; // @synthesize cellHeight=_cellHeight;
@property(nonatomic) double cellWidth; // @synthesize cellWidth=_cellWidth;
@property(retain, nonatomic) IMYEBDetailCountDownView *countDownView; // @synthesize countDownView=_countDownView;
@property(retain, nonatomic) IMYEBEvaluateView *transEvaluateView; // @synthesize transEvaluateView=_transEvaluateView;
@property(retain, nonatomic) IMYEBEvaluateView *sellEvaluateView; // @synthesize sellEvaluateView=_sellEvaluateView;
@property(retain, nonatomic) IMYEBEvaluateView *goodEvaluateView; // @synthesize goodEvaluateView=_goodEvaluateView;
@property(retain, nonatomic) UIButton *commingShopping; // @synthesize commingShopping=_commingShopping;
@property(retain, nonatomic) UIView *creditLevelView; // @synthesize creditLevelView=_creditLevelView;
@property(retain, nonatomic) UILabel *shopTitleLabe; // @synthesize shopTitleLabe=_shopTitleLabe;
@property(retain, nonatomic) UIImageView *shopImageView; // @synthesize shopImageView=_shopImageView;
@property(retain, nonatomic) UIView *shopInfoSessionView; // @synthesize shopInfoSessionView=_shopInfoSessionView;
@property(retain, nonatomic) UILabel *togetCouponLabel; // @synthesize togetCouponLabel=_togetCouponLabel;
@property(retain, nonatomic) UILabel *couponValidDateLabel; // @synthesize couponValidDateLabel=_couponValidDateLabel;
@property(retain, nonatomic) UILabel *couponTitleLabel; // @synthesize couponTitleLabel=_couponTitleLabel;
@property(retain, nonatomic) UIButton *couponImgButton; // @synthesize couponImgButton=_couponImgButton;
@property(retain, nonatomic) UIView *couponSessionView; // @synthesize couponSessionView=_couponSessionView;
@property(retain, nonatomic) UILabel *originPriceTextLabel; // @synthesize originPriceTextLabel=_originPriceTextLabel;
@property(retain, nonatomic) UILabel *originPriceLabel; // @synthesize originPriceLabel=_originPriceLabel;
@property(retain, nonatomic) UILabel *currentPriceLabel; // @synthesize currentPriceLabel=_currentPriceLabel;
@property(retain, nonatomic) UILabel *moneyIconLabel; // @synthesize moneyIconLabel=_moneyIconLabel;
@property(retain, nonatomic) UILabel *priceTextLabel; // @synthesize priceTextLabel=_priceTextLabel;
@property(retain, nonatomic) UILabel *postageLabel; // @synthesize postageLabel=_postageLabel;
@property(retain, nonatomic) UIView *tagView; // @synthesize tagView=_tagView;
@property(retain, nonatomic) UILabel *mainTitleLabel; // @synthesize mainTitleLabel=_mainTitleLabel;
@property(retain, nonatomic) UILabel *priceTypeLabel; // @synthesize priceTypeLabel=_priceTypeLabel;
@property(retain, nonatomic) UIImageView *shopTypeImageView; // @synthesize shopTypeImageView=_shopTypeImageView;
@property(retain, nonatomic) UIView *goodsInfoSessionView; // @synthesize goodsInfoSessionView=_goodsInfoSessionView;
@property(copy, nonatomic) CDUnknownBlockType clickToGetCouponBlock; // @synthesize clickToGetCouponBlock=_clickToGetCouponBlock;
@property(copy, nonatomic) CDUnknownBlockType gotoShopBlock; // @synthesize gotoShopBlock=_gotoShopBlock;
@property(nonatomic) double promptViewHeight; // @synthesize promptViewHeight=_promptViewHeight;
- (void).cxx_destruct;
- (void)addCouponInfoModule:(id)arg1;
- (id)creditlevelViewWithLevel:(long long)arg1;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setupTagViewWithDataArray:(id)arg1;
- (void)layoutWithModel:(id)arg1;
- (void)dealloc;
- (void)awakeFromNib;

@end


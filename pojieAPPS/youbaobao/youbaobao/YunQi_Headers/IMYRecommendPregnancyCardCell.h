//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMYBaseTableViewCell.h"

@class UIImageView, UILabel;

@interface IMYRecommendPregnancyCardCell : IMYBaseTableViewCell
{
    UILabel *_pregnancyLabel;
    UIImageView *_pregnancyImageView;
}

+ (double)cellHeight;
@property(retain, nonatomic) UIImageView *pregnancyImageView; // @synthesize pregnancyImageView=_pregnancyImageView;
@property(retain, nonatomic) UILabel *pregnancyLabel; // @synthesize pregnancyLabel=_pregnancyLabel;
- (void).cxx_destruct;
- (void)setCellModel:(id)arg1;
- (void)prepareUI;

@end


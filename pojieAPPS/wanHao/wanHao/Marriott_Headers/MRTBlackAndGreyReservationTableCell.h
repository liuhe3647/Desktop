//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MRTReviewReservationTableCell.h"

@class UILabel;

@interface MRTBlackAndGreyReservationTableCell : MRTReviewReservationTableCell
{
    _Bool _isSectionEndingRow;
    UILabel *_titleLabel;
    UILabel *_contentLabel;
}

@property(nonatomic) _Bool isSectionEndingRow; // @synthesize isSectionEndingRow=_isSectionEndingRow;
@property(nonatomic) __weak UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)reset;
- (void)prepareForReuse;
- (void)awakeFromNib;
- (void)layoutSubviews;

@end


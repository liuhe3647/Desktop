//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MRTReviewReservationTableCell.h"

@class MRTStyledLabel;

@interface MRTListItemTwoLinesCell : MRTReviewReservationTableCell
{
    MRTStyledLabel *_titleLabel;
    MRTStyledLabel *_contentLabel1;
    MRTStyledLabel *_contentLabel2;
    unsigned long long _cellType;
}

@property(nonatomic) unsigned long long cellType; // @synthesize cellType=_cellType;
@property(retain, nonatomic) MRTStyledLabel *contentLabel2; // @synthesize contentLabel2=_contentLabel2;
@property(retain, nonatomic) MRTStyledLabel *contentLabel1; // @synthesize contentLabel1=_contentLabel1;
@property(retain, nonatomic) MRTStyledLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)reset;
- (void)prepareForReuse;

@end


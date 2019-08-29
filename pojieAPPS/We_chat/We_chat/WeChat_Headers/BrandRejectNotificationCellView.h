//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMMultiMenuTableViewCell.h"

@class BrandRejectNotificationCellViewModel, CALayer, MMUILabel, MMWebImageView, NSArray, RichTextView, UIButton, UIImageView;

@interface BrandRejectNotificationCellView : MMMultiMenuTableViewCell
{
    BrandRejectNotificationCellViewModel *_viewModel;
    MMWebImageView *_headerView;
    RichTextView *_contactNameLabel;
    RichTextView *_messageLabel;
    UIButton *_brandAccountContentView;
    MMUILabel *_rejectTipsLabel;
    NSArray *_arrRejectBrandHeaderImgView;
    UIImageView *_arrowImgView;
    MMUILabel *_timeLabel;
    CALayer *_bottomLine;
}

@property(retain, nonatomic) CALayer *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(retain, nonatomic) MMUILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) UIImageView *arrowImgView; // @synthesize arrowImgView=_arrowImgView;
@property(retain, nonatomic) NSArray *arrRejectBrandHeaderImgView; // @synthesize arrRejectBrandHeaderImgView=_arrRejectBrandHeaderImgView;
@property(retain, nonatomic) MMUILabel *rejectTipsLabel; // @synthesize rejectTipsLabel=_rejectTipsLabel;
@property(retain, nonatomic) UIButton *brandAccountContentView; // @synthesize brandAccountContentView=_brandAccountContentView;
@property(retain, nonatomic) RichTextView *messageLabel; // @synthesize messageLabel=_messageLabel;
@property(retain, nonatomic) RichTextView *contactNameLabel; // @synthesize contactNameLabel=_contactNameLabel;
@property(retain, nonatomic) MMWebImageView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) BrandRejectNotificationCellViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)onClickDetail:(id)arg1;
- (id)genHeaderViewArrayFromRejectInfoList:(id)arg1;
- (id)genMenuItems;
- (void)layoutSubviews;
- (void)updateViewModel:(id)arg1;
- (void)updateTimeLabel;
- (void)initSubViews;
- (id)initWithModel:(id)arg1;

@end

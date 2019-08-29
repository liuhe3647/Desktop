//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class MRTAccessibilityView, MRTSuiteNightAwardRequestItemModel, NSLayoutConstraint, UIButton, UIControl, UIImageView, UILabel, UIView;

@interface MRTSuiteNightAwardRequestItemModelTableViewCell : UITableViewCell
{
    MRTSuiteNightAwardRequestItemModel *_itemModel;
    UILabel *_headerLabel;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIImageView *_roomImageView;
    UIView *_checkBoxContainerView;
    UIControl *_checkBox;
    UILabel *_roomTypeLabel;
    UIButton *_roomDetailsButton;
    NSLayoutConstraint *_roomDetailsLeadingHorizontalSpacerConstraint;
    MRTAccessibilityView *_roomCheckboxAccessibilityView;
    MRTAccessibilityView *_roomDetailsButtonAccessibilityView;
    CDUnknownBlockType _updateBlock;
    CDUnknownBlockType _roomDetailsBlock;
}

@property(copy, nonatomic) CDUnknownBlockType roomDetailsBlock; // @synthesize roomDetailsBlock=_roomDetailsBlock;
@property(copy, nonatomic) CDUnknownBlockType updateBlock; // @synthesize updateBlock=_updateBlock;
@property(nonatomic) __weak MRTAccessibilityView *roomDetailsButtonAccessibilityView; // @synthesize roomDetailsButtonAccessibilityView=_roomDetailsButtonAccessibilityView;
@property(nonatomic) __weak MRTAccessibilityView *roomCheckboxAccessibilityView; // @synthesize roomCheckboxAccessibilityView=_roomCheckboxAccessibilityView;
@property(nonatomic) __weak NSLayoutConstraint *roomDetailsLeadingHorizontalSpacerConstraint; // @synthesize roomDetailsLeadingHorizontalSpacerConstraint=_roomDetailsLeadingHorizontalSpacerConstraint;
@property(nonatomic) __weak UIButton *roomDetailsButton; // @synthesize roomDetailsButton=_roomDetailsButton;
@property(nonatomic) __weak UILabel *roomTypeLabel; // @synthesize roomTypeLabel=_roomTypeLabel;
@property(nonatomic) __weak UIControl *checkBox; // @synthesize checkBox=_checkBox;
@property(nonatomic) __weak UIView *checkBoxContainerView; // @synthesize checkBoxContainerView=_checkBoxContainerView;
@property(nonatomic) __weak UIImageView *roomImageView; // @synthesize roomImageView=_roomImageView;
@property(nonatomic) __weak UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak UILabel *headerLabel; // @synthesize headerLabel=_headerLabel;
@property(retain, nonatomic) MRTSuiteNightAwardRequestItemModel *itemModel; // @synthesize itemModel=_itemModel;
- (void).cxx_destruct;
- (void)tapRoomDetails:(id)arg1;
- (void)tapSelect:(id)arg1;
- (void)inject:(id)arg1 headerString:(id)arg2 titleString:(id)arg3 subtitleString:(id)arg4 shouldShowImage:(_Bool)arg5 updateBlock:(CDUnknownBlockType)arg6 roomDetailsBlock:(CDUnknownBlockType)arg7;
- (void)layoutSubviews;
- (void)awakeFromNib;

@end


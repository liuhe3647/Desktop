//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewHeaderFooterView.h>

@class MRTStyledButton, MRTStyledLabel, UIImageView;

@interface MRTRecentlyViewedLocationHeaderFooterView : UITableViewHeaderFooterView
{
    MRTStyledLabel *_titleLabel;
    MRTStyledButton *_actionButton;
    UIImageView *_disclosureImageView;
}

@property(retain, nonatomic) UIImageView *disclosureImageView; // @synthesize disclosureImageView=_disclosureImageView;
@property(retain, nonatomic) MRTStyledButton *actionButton; // @synthesize actionButton=_actionButton;
@property(retain, nonatomic) MRTStyledLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)setDisclosureViewsHidden:(_Bool)arg1;
- (void)awakeFromNib;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTQTableViewCell.h"

@class UILabel;

@interface TTQSearchAssociateCell : TTQTableViewCell
{
    UILabel *_titleLabel;
    UILabel *_resultLabel;
}

@property(nonatomic) __weak UILabel *resultLabel; // @synthesize resultLabel=_resultLabel;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (double)bindModel:(id)arg1 heightForRowAtIndexPath:(id)arg2 viewModel:(id)arg3;
- (id)bindModel:(id)arg1 cellForRowAtIndexPath:(id)arg2 viewModel:(id)arg3;
- (void)awakeFromNib;

@end


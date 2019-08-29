//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTQTableViewCell.h"

#import "ReactiveTableViewCell-Protocol.h"

@class NSString, UILabel, UIScrollView;

@interface TTQForumInfoCell : TTQTableViewCell <ReactiveTableViewCell>
{
    UILabel *_firstInfo;
    UIScrollView *_imagesScroll;
}

@property(retain, nonatomic) UIScrollView *imagesScroll; // @synthesize imagesScroll=_imagesScroll;
@property(retain, nonatomic) UILabel *firstInfo; // @synthesize firstInfo=_firstInfo;
- (void).cxx_destruct;
- (double)bindModel:(id)arg1 heightForRowAtIndexPath:(id)arg2 viewModel:(id)arg3;
- (id)bindModel:(id)arg1 cellForRowAtIndexPath:(id)arg2 viewModel:(id)arg3;
- (void)commonInit;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


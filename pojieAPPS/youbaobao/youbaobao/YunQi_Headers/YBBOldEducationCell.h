//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "YBBHomeCell-Protocol.h"

@class NSArray, NSString, UIScrollView;
@protocol YBBHomeCellActionPerformer;

@interface YBBOldEducationCell : UITableViewCell <YBBHomeCell>
{
    id <YBBHomeCellActionPerformer> actionDelegate;
    UIScrollView *_cellScrollView;
    NSArray *_itemsView;
    NSArray *_models;
}

@property(retain, nonatomic) NSArray *models; // @synthesize models=_models;
@property(retain, nonatomic) NSArray *itemsView; // @synthesize itemsView=_itemsView;
@property(retain, nonatomic) UIScrollView *cellScrollView; // @synthesize cellScrollView=_cellScrollView;
@property(nonatomic) __weak id <YBBHomeCellActionPerformer> actionDelegate; // @synthesize actionDelegate;
- (void).cxx_destruct;
- (void)yq_cellWillDisplayWithModel:(id)arg1 row:(long long)arg2 info:(id)arg3;
- (void)uploadBIWithAlias:(id)arg1;
- (void)uploadBIWithIndex:(long long)arg1 redirectUrl:(id)arg2;
- (void)itemViewSelectAction:(long long)arg1;
- (void)itemViewPlayButtonAction:(long long)arg1;
- (void)refreshPlayState;
- (void)addItemViewsWithModel:(id)arg1;
- (void)configureViewWithHomeModel:(id)arg1 row:(long long)arg2 rowCount:(long long)arg3 info:(id)arg4;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


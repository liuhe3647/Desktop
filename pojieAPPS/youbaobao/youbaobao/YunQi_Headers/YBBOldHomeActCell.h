//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "YBBOldHomeCell-Protocol.h"

@class NSString, UIImageView, UILabel;
@protocol YBBOldHomeCellActionPerformer;

@interface YBBOldHomeActCell : UITableViewCell <YBBOldHomeCell>
{
    id <YBBOldHomeCellActionPerformer> actionDelegate;
    UIImageView *_icon;
    UILabel *_nameLabel;
    UILabel *_contentLabel;
    UIImageView *_stateIcon;
    UILabel *_warnLabel;
}

@property(nonatomic) __weak UILabel *warnLabel; // @synthesize warnLabel=_warnLabel;
@property(nonatomic) __weak UIImageView *stateIcon; // @synthesize stateIcon=_stateIcon;
@property(nonatomic) __weak UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(nonatomic) __weak UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(nonatomic) __weak UIImageView *icon; // @synthesize icon=_icon;
@property(nonatomic) __weak id <YBBOldHomeCellActionPerformer> actionDelegate; // @synthesize actionDelegate;
- (void).cxx_destruct;
- (void)yq_cellWillDisplayWithModel:(id)arg1 row:(long long)arg2 info:(id)arg3;
- (void)configureViewWithHomeModel:(id)arg1 row:(long long)arg2 rowCount:(long long)arg3 info:(id)arg4;
- (void)configureWithModel:(id)arg1;
- (void)setup;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


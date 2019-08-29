//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMYBaseTableViewCell.h"

@class IMYButton, IMYRM80AttributedLabel, UIImageView, UILabel;
@protocol IMYNewsHomePageTopicListCellDelegate;

@interface IMYHomePageTopicListBaseCell : IMYBaseTableViewCell
{
    id <IMYNewsHomePageTopicListCellDelegate> _delegate;
    IMYRM80AttributedLabel *_topicTitleLabel;
    UILabel *_userNameLabel;
    UILabel *_repliesLabel;
    IMYButton *_moreBtn;
    UIImageView *_eliteImageView;
}

+ (id)createTopicTitleLabel;
@property(retain, nonatomic) UIImageView *eliteImageView; // @synthesize eliteImageView=_eliteImageView;
@property(retain, nonatomic) IMYButton *moreBtn; // @synthesize moreBtn=_moreBtn;
@property(retain, nonatomic) UILabel *repliesLabel; // @synthesize repliesLabel=_repliesLabel;
@property(retain, nonatomic) UILabel *userNameLabel; // @synthesize userNameLabel=_userNameLabel;
@property(retain, nonatomic) IMYRM80AttributedLabel *topicTitleLabel; // @synthesize topicTitleLabel=_topicTitleLabel;
@property(nonatomic) __weak id <IMYNewsHomePageTopicListCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setCellModel:(id)arg1;
- (void)prepareUI;
- (void)awakeFromNib;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class TTQHome5TopicModel, UIImageView, UILabel;

@interface TTQNewFirstPageTagVIew : UIView
{
    CDUnknownBlockType _topicTapAction;
    TTQHome5TopicModel *_cellModel;
    UIImageView *_iconImageView;
    UILabel *_topicLabel;
}

+ (double)getTagWidthWithText:(id)arg1 font:(double)arg2;
@property(retain, nonatomic) UILabel *topicLabel; // @synthesize topicLabel=_topicLabel;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) TTQHome5TopicModel *cellModel; // @synthesize cellModel=_cellModel;
@property(copy, nonatomic) CDUnknownBlockType topicTapAction; // @synthesize topicTapAction=_topicTapAction;
- (void).cxx_destruct;
- (void)prepareUI;
- (void)updateModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class TTQHome5ForumsView, TTQHomeFeaturedActivitiesView, TTQVideoUploadStatusView;

@interface TTQHome5HeadTopView : UIView
{
    double _bottomSpacing;
    CDUnknownBlockType _onForumsActionBlock;
    CDUnknownBlockType _onFeaturedActivitiesBlock;
    CDUnknownBlockType _forumsShowBlock;
    TTQHome5ForumsView *_forumsView;
    TTQHomeFeaturedActivitiesView *_activitiesView;
    TTQVideoUploadStatusView *_uploadStatusView;
    UIView *_extraTopView;
}

@property(retain, nonatomic) UIView *extraTopView; // @synthesize extraTopView=_extraTopView;
@property(retain, nonatomic) TTQVideoUploadStatusView *uploadStatusView; // @synthesize uploadStatusView=_uploadStatusView;
@property(retain, nonatomic) TTQHomeFeaturedActivitiesView *activitiesView; // @synthesize activitiesView=_activitiesView;
@property(retain, nonatomic) TTQHome5ForumsView *forumsView; // @synthesize forumsView=_forumsView;
@property(copy, nonatomic) CDUnknownBlockType forumsShowBlock; // @synthesize forumsShowBlock=_forumsShowBlock;
@property(copy, nonatomic) CDUnknownBlockType onFeaturedActivitiesBlock; // @synthesize onFeaturedActivitiesBlock=_onFeaturedActivitiesBlock;
@property(copy, nonatomic) CDUnknownBlockType onForumsActionBlock; // @synthesize onForumsActionBlock=_onForumsActionBlock;
@property(nonatomic) double bottomSpacing; // @synthesize bottomSpacing=_bottomSpacing;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isHaveContent) _Bool haveContent;
- (double)recalculateHeight;
- (double)setVideoUploadStatusViewWithTopic:(id)arg1;
- (double)setExtraTopViewWith:(id)arg1;
- (double)setFeaturedActivitiesWith:(id)arg1;
- (double)setForumsWith:(id)arg1;
- (CDUnknownBlockType)mc_recalculateHeight;
- (CDUnknownBlockType)mc_setUploadingItem;
- (CDUnknownBlockType)mc_setExtraTopView;
- (CDUnknownBlockType)mc_FeaturedActivities;
- (CDUnknownBlockType)mc_setForums;
- (void)setupRetryBlock:(CDUnknownBlockType)arg1 cancelBlock:(CDUnknownBlockType)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMYPublicBaseViewController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class IMYAvatarImageView, IMYCaptionView, NSMutableArray, NSString, SYDynamicRefreshView, UIImageView, UILabel, UITableView, UIView, YQTopToastView;

@interface YQMyAttentionVC : IMYPublicBaseViewController <UITableViewDataSource, UITableViewDelegate>
{
    UIView *_bannerView;
    IMYAvatarImageView *_avatarImageView;
    UIImageView *_bannerBackImgView;
    UITableView *_tableView;
    IMYCaptionView *_captionView;
    SYDynamicRefreshView *_refreshView;
    YQTopToastView *_toastView;
    UIView *_noDataView;
    UILabel *_tipLabel;
    UILabel *_notMoreDataLable;
    NSMutableArray *_dataList;
}

@property(retain, nonatomic) NSMutableArray *dataList; // @synthesize dataList=_dataList;
@property(retain, nonatomic) UILabel *notMoreDataLable; // @synthesize notMoreDataLable=_notMoreDataLable;
@property(retain, nonatomic) UILabel *tipLabel; // @synthesize tipLabel=_tipLabel;
@property(retain, nonatomic) UIView *noDataView; // @synthesize noDataView=_noDataView;
@property(retain, nonatomic) YQTopToastView *toastView; // @synthesize toastView=_toastView;
@property(retain, nonatomic) SYDynamicRefreshView *refreshView; // @synthesize refreshView=_refreshView;
@property(retain, nonatomic) IMYCaptionView *captionView; // @synthesize captionView=_captionView;
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak UIImageView *bannerBackImgView; // @synthesize bannerBackImgView=_bannerBackImgView;
@property(nonatomic) __weak IMYAvatarImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(nonatomic) __weak UIView *bannerView; // @synthesize bannerView=_bannerView;
- (void).cxx_destruct;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)getNextPageData;
- (void)getFrontPageData;
- (void)requestData;
- (void)setNotMoreData:(_Bool)arg1;
- (void)attentionAction:(id)arg1;
- (void)tapIconAction:(id)arg1;
- (void)setupNoDataView;
- (void)setupCaptionView;
- (void)setupTableView;
- (void)setupAvatarImageView;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)headerStretchSetting;
- (void)viewWillAppear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YBBToolsPageView.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "UIViewControllerPreviewingDelegate-Protocol.h"

@class IMYCaptionView, NSMutableArray, NSString, UITableView, UIViewController, YBBToolsBUltrasonicExplainViewModel, YBBToolsHcgModel;

@interface YBBToolsBUltrasonicPageView : YBBToolsPageView <UITableViewDataSource, UITableViewDelegate, UIViewControllerPreviewingDelegate>
{
    UITableView *_tableView;
    IMYCaptionView *_captionView;
    unsigned long long _week;
    UIViewController *_viewController;
    YBBToolsBUltrasonicExplainViewModel *_viewModel;
    YBBToolsHcgModel *_pandHModel;
    NSMutableArray *_weekItems;
    NSMutableArray *_normalItems;
}

@property(retain, nonatomic) NSMutableArray *normalItems; // @synthesize normalItems=_normalItems;
@property(retain, nonatomic) NSMutableArray *weekItems; // @synthesize weekItems=_weekItems;
@property(retain, nonatomic) YBBToolsHcgModel *pandHModel; // @synthesize pandHModel=_pandHModel;
@property(retain, nonatomic) YBBToolsBUltrasonicExplainViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) UIViewController *viewController; // @synthesize viewController=_viewController;
@property(nonatomic) unsigned long long week; // @synthesize week=_week;
@property(retain, nonatomic) IMYCaptionView *captionView; // @synthesize captionView=_captionView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (void)previewingContext:(id)arg1 commitViewController:(id)arg2;
- (id)previewingContext:(id)arg1 viewControllerForLocation:(struct CGPoint)arg2;
- (void)onOtherItemClicked:(id)arg1;
- (id)getOtherIndexesGridCell:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)createOrDequeueTitleCell:(id)arg1 CellId:(id)arg2 label:(id *)arg3 andIsSmall:(_Bool)arg4;
- (id)sortItemsByKey:(id)arg1;
- (void)mergeItemValue:(id)arg1;
- (void)requestData;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTQInputTableViewController.h"

#import "TTQMessageDetailCellDelegate-Protocol.h"

@class NSString, TTQMessageDetailViewModel, UIView;

@interface TTQMessageDetailViewController : TTQInputTableViewController <TTQMessageDetailCellDelegate>
{
    unsigned long long _topic_id;
    unsigned long long _messageType;
    NSString *_more_uri;
    TTQMessageDetailViewModel *_viewModel;
    UIView *_footerView;
}

@property(retain, nonatomic) UIView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) TTQMessageDetailViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(copy, nonatomic) NSString *more_uri; // @synthesize more_uri=_more_uri;
@property(nonatomic) unsigned long long messageType; // @synthesize messageType=_messageType;
@property(nonatomic) unsigned long long topic_id; // @synthesize topic_id=_topic_id;
- (void).cxx_destruct;
- (void)deleteReivew:(unsigned long long)arg1;
- (id)requestRemoteDataForType:(long long)arg1 params:(id)arg2;
- (void)postWithImageNames:(id)arg1;
- (_Bool)inputViewShouldBeginEdit:(id)arg1;
- (_Bool)loginActicon;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)identifierRowAtIndexPath:(id)arg1;
- (void)TTQMessageDetailCellDidClickUserIconAction:(id)arg1;
- (void)TTQMessageDetailCellReplyAction:(id)arg1;
- (void)refreshMessageView;
- (void)removeMessageDetailViewController:(unsigned long long)arg1;
- (void)inputViewOfTextViewDidChange:(id)arg1;
- (void)bindViewModel;
- (void)setupInputView;
- (long long)tableViewStyle;
- (void)prepareData;
- (void)prepareUI;
- (void)didReceiveMemoryWarning;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


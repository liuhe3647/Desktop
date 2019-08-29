//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMYPublicBaseViewController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSArray, NSString, UITableView;

@interface YBBHomeSearchAssociateVC : IMYPublicBaseViewController <UITableViewDelegate, UITableViewDataSource>
{
    _Bool _isActive;
    NSString *_text;
    NSString *_firstText;
    unsigned long long _requestType;
    unsigned long long _searchType;
    CDUnknownBlockType _handler;
    NSArray *_dataArray;
    UITableView *_tableView;
    NSString *_tempWord;
}

@property(copy, nonatomic) NSString *tempWord; // @synthesize tempWord=_tempWord;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) NSArray *dataArray; // @synthesize dataArray=_dataArray;
@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property(nonatomic) unsigned long long searchType; // @synthesize searchType=_searchType;
@property(nonatomic) unsigned long long requestType; // @synthesize requestType=_requestType;
@property(nonatomic) _Bool isActive; // @synthesize isActive=_isActive;
@property(copy, nonatomic) NSString *firstText; // @synthesize firstText=_firstText;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


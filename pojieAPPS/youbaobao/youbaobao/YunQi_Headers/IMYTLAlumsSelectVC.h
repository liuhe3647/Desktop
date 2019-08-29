//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMYTLViewController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class IMYCaptionView, NSArray, NSMutableArray, NSString, UITableView;

@interface IMYTLAlumsSelectVC : IMYTLViewController <UITableViewDelegate, UITableViewDataSource>
{
    _Bool _isPushEnter;
    NSArray *_phAssetCollections;
    CDUnknownBlockType _dismissActionBlock;
    CDUnknownBlockType _didSelectActionBlock;
    NSArray *_assetMediaTypes;
    NSString *_virtualCollectionName;
    NSString *_virtualCollectionImageUrl;
    long long _virtualCollectionCount;
    UITableView *_tableview;
    NSMutableArray *_datas;
    IMYCaptionView *_caption;
}

@property(retain, nonatomic) IMYCaptionView *caption; // @synthesize caption=_caption;
@property(retain, nonatomic) NSMutableArray *datas; // @synthesize datas=_datas;
@property(retain, nonatomic) UITableView *tableview; // @synthesize tableview=_tableview;
@property(nonatomic) long long virtualCollectionCount; // @synthesize virtualCollectionCount=_virtualCollectionCount;
@property(retain, nonatomic) NSString *virtualCollectionImageUrl; // @synthesize virtualCollectionImageUrl=_virtualCollectionImageUrl;
@property(retain, nonatomic) NSString *virtualCollectionName; // @synthesize virtualCollectionName=_virtualCollectionName;
@property(nonatomic) _Bool isPushEnter; // @synthesize isPushEnter=_isPushEnter;
@property(retain, nonatomic) NSArray *assetMediaTypes; // @synthesize assetMediaTypes=_assetMediaTypes;
@property(copy, nonatomic) CDUnknownBlockType didSelectActionBlock; // @synthesize didSelectActionBlock=_didSelectActionBlock;
@property(copy, nonatomic) CDUnknownBlockType dismissActionBlock; // @synthesize dismissActionBlock=_dismissActionBlock;
@property(retain, nonatomic) NSArray *phAssetCollections; // @synthesize phAssetCollections=_phAssetCollections;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)dismissAction;
- (_Bool)virtualCollectionExist;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)initTableview;
- (void)loadDatas;
- (void)initEffect;
- (void)cancelAction;
- (void)viewDidLoad;
- (id)initWithPHAssetCollections:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


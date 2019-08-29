//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMYBaseAdvertiserManager.h"

@class IMYAdSignal, NSHashTable, UITableView;
@protocol IMYIAdvertiserService;

@interface IMYWaitBirthAdManager : IMYBaseAdvertiserManager
{
    NSHashTable *_tableViewArray;
    UITableView *_vaildTableView;
    IMYAdSignal *_addTableSignal;
    id <IMYIAdvertiserService> _adSerivce;
}

+ (void)load;
@property(retain, nonatomic) id <IMYIAdvertiserService> adSerivce; // @synthesize adSerivce=_adSerivce;
@property(retain, nonatomic) IMYAdSignal *addTableSignal; // @synthesize addTableSignal=_addTableSignal;
@property(retain, nonatomic) UITableView *vaildTableView; // @synthesize vaildTableView=_vaildTableView;
@property(retain, nonatomic) NSHashTable *tableViewArray; // @synthesize tableViewArray=_tableViewArray;
- (void).cxx_destruct;
- (void)closeWithModel:(id)arg1 sender:(id)arg2 userInfo:(id)arg3;
- (void)setTableHeader;
- (id)createServicesWithRawModels:(id)arg1;
- (void)setupServicesWithRawModels:(id)arg1;
- (void)appendServicesWithRawModels:(id)arg1 isFilter:(_Bool)arg2;
- (void)removeAllAppendServices;
- (id)initWithADInfo:(id)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMYBaseAdvertiserService.h"

@class NSArray, NSMutableArray;

@interface IMYRecordAdService : IMYBaseAdvertiserService
{
    NSArray *_adModels;
    CDUnknownBlockType _getRecordAdViewBlock;
    NSMutableArray *_adModelPool;
    long long _dialog_action;
}

@property(nonatomic) long long dialog_action; // @synthesize dialog_action=_dialog_action;
@property(retain, nonatomic) NSMutableArray *adModelPool; // @synthesize adModelPool=_adModelPool;
@property(copy, nonatomic) CDUnknownBlockType getRecordAdViewBlock; // @synthesize getRecordAdViewBlock=_getRecordAdViewBlock;
@property(retain, nonatomic) NSArray *adModels; // @synthesize adModels=_adModels;
- (void).cxx_destruct;
- (void)clickWithModel:(id)arg1 sender:(id)arg2 userInfo:(id)arg3;
- (void)setLoveSignal;
- (void)setAuntSignal;
- (void)requestDataWithParams:(id)arg1 success:(CDUnknownBlockType)arg2 fail:(CDUnknownBlockType)arg3;
- (id)modelWithIndex:(long long)arg1;
- (long long)modelCount;
- (id)initWithADInfo:(id)arg1;

@end


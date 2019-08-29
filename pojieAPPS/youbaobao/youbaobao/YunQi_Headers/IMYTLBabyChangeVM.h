//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMYTLViewModel.h"

@class NSDate, NSMutableArray, NSString, RACSignal, RACSubject;

@interface IMYTLBabyChangeVM : IMYTLViewModel
{
    _Bool _isOwn;
    _Bool _requesting;
    _Bool _noMoreDatas;
    _Bool _noMorePreDatas;
    _Bool _isRequestPre;
    NSDate *_birthday;
    unsigned long long _gender;
    NSString *_nickName;
    NSMutableArray *_datas;
    RACSignal *_updateDatasSignal;
    long long _nowDayIndex;
    RACSubject *_updateDatasSubject;
    long long _currentStartDay;
}

@property(nonatomic) long long currentStartDay; // @synthesize currentStartDay=_currentStartDay;
@property(nonatomic) _Bool isRequestPre; // @synthesize isRequestPre=_isRequestPre;
@property(retain, nonatomic) RACSubject *updateDatasSubject; // @synthesize updateDatasSubject=_updateDatasSubject;
@property(nonatomic) long long nowDayIndex; // @synthesize nowDayIndex=_nowDayIndex;
@property(nonatomic) _Bool noMorePreDatas; // @synthesize noMorePreDatas=_noMorePreDatas;
@property(nonatomic) _Bool noMoreDatas; // @synthesize noMoreDatas=_noMoreDatas;
@property(nonatomic) _Bool requesting; // @synthesize requesting=_requesting;
@property(retain, nonatomic) RACSignal *updateDatasSignal; // @synthesize updateDatasSignal=_updateDatasSignal;
@property(retain, nonatomic) NSMutableArray *datas; // @synthesize datas=_datas;
@property(retain, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
@property(nonatomic) _Bool isOwn; // @synthesize isOwn=_isOwn;
@property(nonatomic) unsigned long long gender; // @synthesize gender=_gender;
@property(retain, nonatomic) NSDate *birthday; // @synthesize birthday=_birthday;
- (void).cxx_destruct;
- (void)requestNetDatas:(id)arg1;
- (id)requestParasmStartDay:(long long)arg1 endDay:(long long)arg2;
- (void)requestPreDatas;
- (void)requestNextDatas;
- (void)requestDatas;
- (id)title;
- (id)init;

@end

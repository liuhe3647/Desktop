//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMYRecordCellVM.h"

@class IMYRecordHelper, RACCommand, RACReplaySubject, RACSignal;

@interface IMYRecordYESNOCellVM : IMYRecordCellVM
{
    _Bool _isYES;
    _Bool _showButton;
    _Bool _showFirstRecordPrompt;
    IMYRecordHelper *_recordHelper;
    RACCommand *_pressYESNOCMD;
    RACReplaySubject *_yesnoPressedSubject;
    RACSignal *_yesnoPressedSignal;
}

@property(retain, nonatomic) RACSignal *yesnoPressedSignal; // @synthesize yesnoPressedSignal=_yesnoPressedSignal;
@property(retain, nonatomic) RACReplaySubject *yesnoPressedSubject; // @synthesize yesnoPressedSubject=_yesnoPressedSubject;
@property(nonatomic) _Bool showFirstRecordPrompt; // @synthesize showFirstRecordPrompt=_showFirstRecordPrompt;
@property(retain, nonatomic) RACCommand *pressYESNOCMD; // @synthesize pressYESNOCMD=_pressYESNOCMD;
@property(nonatomic) _Bool showButton; // @synthesize showButton=_showButton;
@property(nonatomic) _Bool isYES; // @synthesize isYES=_isYES;
@property(retain, nonatomic) IMYRecordHelper *recordHelper; // @synthesize recordHelper=_recordHelper;
- (void).cxx_destruct;
- (void)menseYesNoAdPosition:(long long)arg1;
- (void)handleMakeLove:(_Bool)arg1;
- (void)huaiYunTypeYuceWithCheckYes:(_Bool)arg1;
- (void)huaiYunTypeBirthWithCheckYes:(_Bool)arg1;
- (void)huaiYunTypePregnancyWithCheckYes:(_Bool)arg1;
- (void)handleHuaiyun:(_Bool)arg1;
- (int)usermodeFromPublic:(unsigned long long)arg1;
- (void)handleBeiyun:(_Bool)arg1;
- (void)activeMensesAd:(_Bool)arg1;
- (void)handleJingqi:(_Bool)arg1;
- (void)menseChangePrompt;
- (void)sendInsertCommand;
- (void)sendEndMenses:(id)arg1;
- (void)showAlter:(id)arg1;
- (void)showNotTime;
- (void)showShorttime;
- (void)showLongtime;
- (void)showOldEnd:(id)arg1 newEnd:(id)arg2;
- (void)showOldStart:(id)arg1 newStart:(id)arg2;
- (id)getAlertMMDDFormart;
- (_Bool)huaiyunButtonHide;
- (_Bool)beiyunButtonHide;
- (_Bool)enableTouchPressed;
@property(nonatomic) _Bool hideButton;
@property(nonatomic) long long vmType; // @dynamic vmType;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMYTLHucaiPrintModel.h"

@class IMYTLHucaiPrintCalendarConfigModel, IMYTLHucaiPrintCalendarCoverModel, IMYTLHucaiPrintUserEidtDataModel;

@interface IMYTLHucaiPrintCalendarModel : IMYTLHucaiPrintModel
{
    unsigned long long _modelType;
    IMYTLHucaiPrintCalendarCoverModel *_coverModel;
    IMYTLHucaiPrintUserEidtDataModel *_userEidtModel;
    IMYTLHucaiPrintCalendarConfigModel *_layConfigModel;
}

@property(retain, nonatomic) IMYTLHucaiPrintCalendarConfigModel *layConfigModel; // @synthesize layConfigModel=_layConfigModel;
@property(retain, nonatomic) IMYTLHucaiPrintUserEidtDataModel *userEidtModel; // @synthesize userEidtModel=_userEidtModel;
@property(retain, nonatomic) IMYTLHucaiPrintCalendarCoverModel *coverModel; // @synthesize coverModel=_coverModel;
@property(nonatomic) unsigned long long modelType; // @synthesize modelType=_modelType;
- (void).cxx_destruct;
@property(readonly, nonatomic) long long noEidtImageCount;
- (unsigned long long)imageEidtStatus;

@end


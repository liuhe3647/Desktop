//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

@interface WCSafetyReportBaseData : MMObject
{
    unsigned int _scanResultCodeType;
}

@property(nonatomic) unsigned int scanResultCodeType; // @synthesize scanResultCodeType=_scanResultCodeType;
@property(readonly, nonatomic) _Bool hasQRUrl;
- (id)reportStr;

@end

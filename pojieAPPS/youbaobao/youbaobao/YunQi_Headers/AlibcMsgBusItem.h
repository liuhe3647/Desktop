//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface AlibcMsgBusItem : NSObject
{
    _Bool _bUI;
    int _targetAddress;
    SEL _actionSEL;
    NSObject *_target;
    unsigned long long _dataTypeCount;
    Class _dataType1;
    Class _dataType2;
    Class _dataType3;
    long long _type;
}

@property(nonatomic) int targetAddress; // @synthesize targetAddress=_targetAddress;
@property(nonatomic) _Bool bUI; // @synthesize bUI=_bUI;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) Class dataType3; // @synthesize dataType3=_dataType3;
@property(nonatomic) Class dataType2; // @synthesize dataType2=_dataType2;
@property(nonatomic) Class dataType1; // @synthesize dataType1=_dataType1;
@property(nonatomic) unsigned long long dataTypeCount; // @synthesize dataTypeCount=_dataTypeCount;
@property(nonatomic) __weak NSObject *target; // @synthesize target=_target;
@property(nonatomic) SEL actionSEL; // @synthesize actionSEL=_actionSEL;
- (void).cxx_destruct;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SYUserinfoModel : NSObject
{
    _Bool _bTextFieldEnabled;
    _Bool _bHiddenArrow;
    int _type;
    NSString *_nameStr;
    NSString *_valueStr;
    NSString *_placeholderStr;
    NSString *_unitStr;
}

@property(nonatomic) _Bool bHiddenArrow; // @synthesize bHiddenArrow=_bHiddenArrow;
@property(nonatomic) _Bool bTextFieldEnabled; // @synthesize bTextFieldEnabled=_bTextFieldEnabled;
@property(retain, nonatomic) NSString *unitStr; // @synthesize unitStr=_unitStr;
@property(retain, nonatomic) NSString *placeholderStr; // @synthesize placeholderStr=_placeholderStr;
@property(nonatomic) int type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *valueStr; // @synthesize valueStr=_valueStr;
@property(retain, nonatomic) NSString *nameStr; // @synthesize nameStr=_nameStr;
- (void).cxx_destruct;

@end


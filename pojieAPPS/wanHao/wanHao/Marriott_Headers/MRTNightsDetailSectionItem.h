//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MRTObject.h"

@class NSArray, NSString;

@interface MRTNightsDetailSectionItem : MRTObject
{
    _Bool _isExpanded;
    NSString *_title;
    NSString *_value;
    NSString *_imageName;
    NSString *_identifier;
    NSArray *_detailLineItems;
}

@property(nonatomic) _Bool isExpanded; // @synthesize isExpanded=_isExpanded;
@property(copy, nonatomic) NSArray *detailLineItems; // @synthesize detailLineItems=_detailLineItems;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) NSString *imageName; // @synthesize imageName=_imageName;
@property(copy, nonatomic) NSString *value; // @synthesize value=_value;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (unsigned long long)numberOfRows;
- (id)initWithContent:(id)arg1 lineItems:(id)arg2;

@end


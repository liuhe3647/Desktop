//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MRTObject.h"

@class MRTLookupType, NSString;

@interface MRTPromotionMedia : MRTObject
{
    NSString *_alternateText;
    MRTLookupType *_imageType;
    NSString *_imageURLString;
}

@property(copy, nonatomic) NSString *imageURLString; // @synthesize imageURLString=_imageURLString;
@property(retain, nonatomic) MRTLookupType *imageType; // @synthesize imageType=_imageType;
@property(copy, nonatomic) NSString *alternateText; // @synthesize alternateText=_alternateText;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end


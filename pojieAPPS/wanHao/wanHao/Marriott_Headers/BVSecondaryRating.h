//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface BVSecondaryRating : NSObject
{
    NSNumber *_value;
    NSNumber *_valueRange;
    NSString *_valueLabel;
    NSString *_maxLabel;
    NSString *_minLabel;
    NSString *_label;
    NSString *_displayType;
    NSString *_identifier;
}

@property(retain) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain) NSString *displayType; // @synthesize displayType=_displayType;
@property(retain) NSString *label; // @synthesize label=_label;
@property(retain) NSString *minLabel; // @synthesize minLabel=_minLabel;
@property(retain) NSString *maxLabel; // @synthesize maxLabel=_maxLabel;
@property(retain) NSString *valueLabel; // @synthesize valueLabel=_valueLabel;
@property(retain) NSNumber *valueRange; // @synthesize valueRange=_valueRange;
@property(retain) NSNumber *value; // @synthesize value=_value;
- (void).cxx_destruct;
- (id)initWithApiResponse:(id)arg1;

@end


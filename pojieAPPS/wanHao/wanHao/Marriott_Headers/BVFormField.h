//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSNumber, NSString;

@interface BVFormField : NSObject
{
    NSArray *_options;
    NSString *_identifier;
    NSString *_label;
    NSString *_type;
    NSString *_value;
    NSNumber *_required;
    NSNumber *_minLength;
    NSNumber *_maxLength;
    NSNumber *_isDefault;
}

@property(retain) NSNumber *isDefault; // @synthesize isDefault=_isDefault;
@property(retain) NSNumber *maxLength; // @synthesize maxLength=_maxLength;
@property(retain) NSNumber *minLength; // @synthesize minLength=_minLength;
@property(retain) NSNumber *required; // @synthesize required=_required;
@property(retain) NSString *value; // @synthesize value=_value;
@property(retain) NSString *type; // @synthesize type=_type;
@property(retain) NSString *label; // @synthesize label=_label;
@property(retain) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain) NSArray *options; // @synthesize options=_options;
- (void).cxx_destruct;
- (id)initWithFormFieldDictionary:(id)arg1;

@end


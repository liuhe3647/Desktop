//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface BVDimensionElement : NSObject
{
    NSString *_label;
    NSString *_identifier;
    NSArray *_values;
}

@property(retain) NSArray *values; // @synthesize values=_values;
@property(retain) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain) NSString *label; // @synthesize label=_label;
- (void).cxx_destruct;
- (id)initWithApiResponse:(id)arg1;

@end


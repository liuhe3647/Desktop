//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface YSFAction : NSObject
{
    NSString *_style;
    NSString *_type;
    NSString *_url;
    NSString *_params;
    NSString *_target;
    NSString *_validOperation;
    NSString *_title;
}

+ (id)objectByDict:(id)arg1;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *validOperation; // @synthesize validOperation=_validOperation;
@property(copy, nonatomic) NSString *target; // @synthesize target=_target;
@property(copy, nonatomic) NSString *params; // @synthesize params=_params;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *style; // @synthesize style=_style;
- (void).cxx_destruct;
- (id)toJsonString;

@end

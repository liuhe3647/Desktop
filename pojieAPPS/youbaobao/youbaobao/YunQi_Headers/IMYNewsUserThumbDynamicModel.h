//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YYJSONHelperProtocol-Protocol.h"

@class NSArray, NSString;

@interface IMYNewsUserThumbDynamicModel : NSObject <YYJSONHelperProtocol>
{
    int _count;
    NSString *_content;
    NSArray *_images;
}

@property(retain, nonatomic) NSArray *images; // @synthesize images=_images;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(nonatomic) int count; // @synthesize count=_count;
- (void).cxx_destruct;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL;

@interface AlibcURLProcessResult : NSObject
{
    _Bool _filtered;
    _Bool _handled;
    NSURL *_URL;
}

@property(retain, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(nonatomic) _Bool handled; // @synthesize handled=_handled;
@property(nonatomic) _Bool filtered; // @synthesize filtered=_filtered;
- (void).cxx_destruct;

@end


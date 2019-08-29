//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface ADBTargetTVMLTag : NSObject
{
    NSString *_mbox;
    NSDictionary *_requestParameters;
    struct _NSRange _endTagRange;
    struct _NSRange _startTagRange;
}

+ (id)targetTVMLTagWithStartRange:(struct _NSRange)arg1 properties:(id)arg2;
@property(retain, nonatomic) NSDictionary *requestParameters; // @synthesize requestParameters=_requestParameters;
@property(retain, nonatomic) NSString *mbox; // @synthesize mbox=_mbox;
@property(nonatomic) struct _NSRange startTagRange; // @synthesize startTagRange=_startTagRange;
@property(nonatomic) struct _NSRange endTagRange; // @synthesize endTagRange=_endTagRange;
- (void)dealloc;
@property(readonly, nonatomic) struct _NSRange totalTagRange;
@property(readonly, nonatomic) struct _NSRange defaultContentRange;
- (id)init;

@end


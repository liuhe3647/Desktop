//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface ALBBHybridParam : NSObject
{
    NSString *_className;
    NSString *_requestId;
    NSString *_methodName;
    NSDictionary *_param;
}

@property(copy, nonatomic) NSDictionary *param; // @synthesize param=_param;
@property(copy, nonatomic) NSString *methodName; // @synthesize methodName=_methodName;
@property(copy, nonatomic) NSString *requestId; // @synthesize requestId=_requestId;
@property(copy, nonatomic) NSString *className; // @synthesize className=_className;
- (void).cxx_destruct;
- (_Bool)isDataRight;
- (id)initWithURL:(id)arg1;

@end


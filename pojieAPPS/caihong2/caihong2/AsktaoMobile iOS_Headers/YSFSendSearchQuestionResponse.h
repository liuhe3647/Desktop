//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface YSFSendSearchQuestionResponse : NSObject
{
    long long _sessionId;
    NSString *_content;
    NSArray *_questionContents;
}

+ (id)dataByJson:(id)arg1;
@property(copy, nonatomic) NSArray *questionContents; // @synthesize questionContents=_questionContents;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(nonatomic) long long sessionId; // @synthesize sessionId=_sessionId;
- (void).cxx_destruct;

@end


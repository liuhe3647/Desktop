//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface AlibcNetPacketHttpHeader : NSObject
{
    _Bool _needPost;
    _Bool _needLogin;
    _Bool _needAuth;
    _Bool _needWua;
    NSString *_cmd;
    NSString *_version;
    NSString *_bizId;
}

@property(copy, nonatomic) NSString *bizId; // @synthesize bizId=_bizId;
@property(nonatomic) _Bool needWua; // @synthesize needWua=_needWua;
@property(nonatomic) _Bool needAuth; // @synthesize needAuth=_needAuth;
@property(nonatomic) _Bool needLogin; // @synthesize needLogin=_needLogin;
@property(nonatomic) _Bool needPost; // @synthesize needPost=_needPost;
@property(copy, nonatomic) NSString *version; // @synthesize version=_version;
@property(copy, nonatomic) NSString *cmd; // @synthesize cmd=_cmd;
- (void).cxx_destruct;
- (id)initWithCmd:(id)arg1;

@end


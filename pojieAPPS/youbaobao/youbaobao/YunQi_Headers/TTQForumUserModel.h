//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YYJSONHelperProtocol-Protocol.h"

@class NSString, TTQAvatarModel;

@interface TTQForumUserModel : NSObject <YYJSONHelperProtocol>
{
    int _forumUserID;
    TTQAvatarModel *_avatar;
    NSString *_screen_name;
    long long _isvip;
}

+ (void)initialize;
@property(nonatomic) long long isvip; // @synthesize isvip=_isvip;
@property(copy, nonatomic) NSString *screen_name; // @synthesize screen_name=_screen_name;
@property(retain, nonatomic) TTQAvatarModel *avatar; // @synthesize avatar=_avatar;
@property(nonatomic) int forumUserID; // @synthesize forumUserID=_forumUserID;
- (void).cxx_destruct;

@end


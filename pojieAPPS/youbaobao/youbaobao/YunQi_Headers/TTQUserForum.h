//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface TTQUserForum : NSObject
{
    long long _forum_id;
    NSString *_userID;
}

+ (id)allUserForumsOfUserID:(id)arg1;
@property(retain, nonatomic) NSString *userID; // @synthesize userID=_userID;
@property(nonatomic) long long forum_id; // @synthesize forum_id=_forum_id;
- (void).cxx_destruct;

@end


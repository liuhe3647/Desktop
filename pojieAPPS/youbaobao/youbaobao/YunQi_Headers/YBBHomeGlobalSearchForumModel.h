//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YYJSONHelperProtocol-Protocol.h"

@class NSAttributedString, NSString;

@interface YBBHomeGlobalSearchForumModel : NSObject <YYJSONHelperProtocol>
{
    NSAttributedString *_attributeTitle;
    NSAttributedString *_attributeContent;
    _Bool _isJoined;
    _Bool _is_unable_quit;
    long long _forumID;
    NSString *_icon;
    NSString *_icon2;
    NSString *_name;
    NSString *_introduction;
    NSString *_fcount;
}

+ (void)initialize;
@property(nonatomic) _Bool is_unable_quit; // @synthesize is_unable_quit=_is_unable_quit;
@property(copy, nonatomic) NSString *fcount; // @synthesize fcount=_fcount;
@property(copy, nonatomic) NSString *introduction; // @synthesize introduction=_introduction;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *icon2; // @synthesize icon2=_icon2;
@property(copy, nonatomic) NSString *icon; // @synthesize icon=_icon;
@property(nonatomic) _Bool isJoined; // @synthesize isJoined=_isJoined;
@property(nonatomic) long long forumID; // @synthesize forumID=_forumID;
- (void).cxx_destruct;
- (id)attributeContent;
- (id)attributeTitle;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KPModel.h"

@class NSString, NSURL;

@interface KPAppInfo : KPModel
{
    _Bool _localProductHtml;
    _Bool _isNavigationBarHidden;
    NSURL *_appAuthSuccessURL;
    NSString *_appKey;
    NSString *_appSecret;
    NSString *_appRedirectURL;
    NSString *_hOAuthURL;
    NSString *_tokenURL;
    NSString *_startURL;
    NSString *_orderListURL;
    NSString *_currentTime;
}

+ (id)systemVersion;
+ (id)deviceModel;
+ (id)deviceId;
+ (id)platform;
+ (id)sharedAppInfo;
@property(copy, nonatomic) NSString *currentTime; // @synthesize currentTime=_currentTime;
@property(nonatomic) _Bool isNavigationBarHidden; // @synthesize isNavigationBarHidden=_isNavigationBarHidden;
@property(nonatomic) _Bool localProductHtml; // @synthesize localProductHtml=_localProductHtml;
@property(retain, nonatomic) NSString *orderListURL; // @synthesize orderListURL=_orderListURL;
@property(copy, nonatomic) NSString *startURL; // @synthesize startURL=_startURL;
@property(copy, nonatomic) NSString *tokenURL; // @synthesize tokenURL=_tokenURL;
@property(copy, nonatomic) NSString *hOAuthURL; // @synthesize hOAuthURL=_hOAuthURL;
@property(copy, nonatomic) NSString *appRedirectURL; // @synthesize appRedirectURL=_appRedirectURL;
@property(copy, nonatomic) NSString *appSecret; // @synthesize appSecret=_appSecret;
@property(copy, nonatomic) NSString *appKey; // @synthesize appKey=_appKey;
@property(retain, nonatomic) NSURL *appAuthSuccessURL; // @synthesize appAuthSuccessURL=_appAuthSuccessURL;
- (void).cxx_destruct;
- (void)setDataWithDic:(id)arg1;

@end


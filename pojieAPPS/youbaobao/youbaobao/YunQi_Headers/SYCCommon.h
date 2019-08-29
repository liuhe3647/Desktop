//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSTimer, UIAlertView;

@interface SYCCommon : NSObject
{
    unsigned int soundID;
    _Bool _shouldShowAuthAlert;
    _Bool _canPost;
    _Bool _mainGroupVCNeedRefresh;
    _Bool _needRefreshGroups;
    _Bool _cannotAccess;
    _Bool _hasNewVersion;
    _Bool _isSyncNow;
    _Bool _isRejectSync;
    _Bool _syncmlFailPopVC;
    NSTimer *_timer;
    NSTimer *_tipsTimer;
    NSTimer *_topicsTimer;
    NSTimer *_notificationTimer;
    NSString *_xin_version;
    NSString *_xin_version_summary;
    NSString *_xin_version_urlString;
    NSString *_pushToken;
    NSString *_getuiClientID;
    NSString *_lastUserID;
    NSString *_lastToken;
    UIAlertView *_alertView;
}

+ (void)openWXGZH;
+ (id)CreateSessionIdWithTarget:(id)arg1;
+ (id)language;
+ (_Bool)checkLoginFrom:(id)arg1 before:(CDUnknownBlockType)arg2 after:(CDUnknownBlockType)arg3;
+ (_Bool)checkLoginFrom:(id)arg1;
+ (_Bool)checkLogin;
+ (void)reqServerConfigure;
+ (void)setShowMseeageUpdateSaveLastNewVersion;
+ (_Bool)isShowMseeageUpdateVersionNew;
+ (void)handleWebViewModel:(id)arg1;
+ (id)sharedSYCCommon;
+ (void)load;
@property(nonatomic) _Bool syncmlFailPopVC; // @synthesize syncmlFailPopVC=_syncmlFailPopVC;
@property(nonatomic) __weak UIAlertView *alertView; // @synthesize alertView=_alertView;
@property(copy, nonatomic) NSString *lastToken; // @synthesize lastToken=_lastToken;
@property(copy, nonatomic) NSString *lastUserID; // @synthesize lastUserID=_lastUserID;
@property(retain, nonatomic) NSString *getuiClientID; // @synthesize getuiClientID=_getuiClientID;
@property(retain, nonatomic) NSString *pushToken; // @synthesize pushToken=_pushToken;
@property(nonatomic) _Bool isRejectSync; // @synthesize isRejectSync=_isRejectSync;
@property(nonatomic) _Bool isSyncNow; // @synthesize isSyncNow=_isSyncNow;
@property(nonatomic) _Bool hasNewVersion; // @synthesize hasNewVersion=_hasNewVersion;
@property(copy, nonatomic) NSString *xin_version_urlString; // @synthesize xin_version_urlString=_xin_version_urlString;
@property(copy, nonatomic) NSString *xin_version_summary; // @synthesize xin_version_summary=_xin_version_summary;
@property(copy, nonatomic) NSString *xin_version; // @synthesize xin_version=_xin_version;
@property(nonatomic) _Bool cannotAccess; // @synthesize cannotAccess=_cannotAccess;
@property(nonatomic) _Bool needRefreshGroups; // @synthesize needRefreshGroups=_needRefreshGroups;
@property(nonatomic) _Bool mainGroupVCNeedRefresh; // @synthesize mainGroupVCNeedRefresh=_mainGroupVCNeedRefresh;
@property(readonly) _Bool canPost; // @synthesize canPost=_canPost;
@property(retain, nonatomic) NSTimer *notificationTimer; // @synthesize notificationTimer=_notificationTimer;
@property(retain, nonatomic) NSTimer *topicsTimer; // @synthesize topicsTimer=_topicsTimer;
@property(retain, nonatomic) NSTimer *tipsTimer; // @synthesize tipsTimer=_tipsTimer;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
- (void).cxx_destruct;
- (void)saveRecommondInfoForKey:(id)arg1;
- (_Bool)needUpdateForKey:(id)arg1;
- (void)uploadToken;
- (void)uploadToken:(id)arg1;
- (void)uploadToken:(id)arg1 andGetuiClientID:(id)arg2 withUserID:(id)arg3;
- (id)cid;
- (void)uploadToken:(id)arg1 andGetuiClientID:(id)arg2 withUserID:(id)arg3 force:(_Bool)arg4;
- (void)showNewVersionAlert;
- (void)checkUpdate:(CDUnknownBlockType)arg1;
- (void)checkUpdate;
- (void)handleAuthorizationFail:(id)arg1;
- (void)authorizationFail:(id)arg1;
- (void)disablePost:(id)arg1;
- (void)disableAccess:(id)arg1;
- (void)finishLogin;
- (void)login:(id)arg1;

@end


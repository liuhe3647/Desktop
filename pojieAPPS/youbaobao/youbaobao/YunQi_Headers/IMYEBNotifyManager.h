//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable, NSMutableDictionary;

@interface IMYEBNotifyManager : NSObject
{
    _Bool _isShowIng;
    _Bool _isShowed;
    unsigned long long _disableShowType;
    NSMapTable *_nofityTable;
    NSMutableDictionary *_showedEBNotifyMap;
}

+ (id)shareNofityManager;
@property(retain, nonatomic) NSMutableDictionary *showedEBNotifyMap; // @synthesize showedEBNotifyMap=_showedEBNotifyMap;
@property(retain, nonatomic) NSMapTable *nofityTable; // @synthesize nofityTable=_nofityTable;
@property(nonatomic) unsigned long long disableShowType; // @synthesize disableShowType=_disableShowType;
@property(nonatomic) _Bool isShowed; // @synthesize isShowed=_isShowed;
@property(nonatomic) _Bool isShowIng; // @synthesize isShowIng=_isShowIng;
- (void).cxx_destruct;
- (void)dismissNotifyViewWhenJump2OtherView;
- (_Bool)isNewUserNotification:(id)arg1;
- (void)hideView:(id)arg1;
- (void)handleCloseButton:(id)arg1;
- (void)handleDidClickAD:(id)arg1;
- (long long)getNewUserNotificationShowCountForKey:(id)arg1;
- (void)increaeNewUserShowCountForKey:(id)arg1 step:(long long)arg2;
- (void)layoutNotifyView:(id)arg1;
- (void)setupTypeAndPositionWithNotifyView:(id)arg1;
- (void)beginShowImage:(id)arg1 forModel:(id)arg2;
- (void)startDownloadWithModel:(id)arg1;
- (void)showNofifyModel:(id)arg1 inViewController:(id)arg2;
- (void)setDaysCount:(long long)arg1 ID:(long long)arg2;
- (long long)daysCountWithID:(long long)arg1;
- (id)getRoleTwoCacheStringWithID:(long long)arg1;
- (id)getRoleOneDateCacheStringWithID:(long long)arg1;
- (id)getRoleOneCacheStringWithID:(long long)arg1;
- (id)getMapCacheStringWithID:(long long)arg1;
- (_Bool)isShowNotifyViewWithModel:(id)arg1 viewController:(id)arg2;
- (id)init;

@end


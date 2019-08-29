//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMYTLModel.h"

#import "IMYTLSyncProtocol-Protocol.h"

@class NSString;

@interface IMYTLSyncModel : IMYTLModel <IMYTLSyncProtocol>
{
    _Bool _persistDeleteFlag;
    double _syncTimestamp;
    unsigned long long _syncType;
    double _persistCreated_at;
    double _persistUpdated_at;
    double _persistStart_at;
    long long _persistModified;
    long long _persistID;
    CDUnknownBlockType _persistWillCreateBlock;
    CDUnknownBlockType _persistDidCreateBlock;
    CDUnknownBlockType _persistWillUpdateBlock;
    CDUnknownBlockType _persistDidUpdateBlock;
    CDUnknownBlockType _persistDidDeleteBlock;
}

+ (void)insertToDBWithArray:(id)arg1 before:(CDUnknownBlockType)arg2 filter:(CDUnknownBlockType)arg3;
+ (id)getPrimaryKey;
+ (id)getTableName;
+ (void)updateUserHandle:(id)arg1;
+ (id)getUsingLKDBHelper;
+ (id)insert:(id)arg1 fromUser:(_Bool)arg2 type:(unsigned long long)arg3 transaction:(_Bool)arg4;
+ (id)persistDelete:(id)arg1 fromUser:(_Bool)arg2 transaction:(_Bool)arg3;
+ (id)persistMarkDelete:(id)arg1 deleteFlags:(id)arg2 fromUser:(_Bool)arg3 transaction:(_Bool)arg4;
+ (id)persistUpdate:(id)arg1 fromUser:(_Bool)arg2 transaction:(_Bool)arg3;
+ (id)persistCreate:(id)arg1 fromUser:(_Bool)arg2 transaction:(_Bool)arg3;
+ (unsigned long long)persistDataCountGetFromLocalWithWhere:(id)arg1;
+ (id)persistGetFromLocalWithWhere:(id)arg1 orderBy:(id)arg2 offset:(unsigned long long)arg3 count:(unsigned long long)arg4;
+ (id)persistGetFromLocalWithWhere:(id)arg1;
+ (id)persistGetAllChangedFromLocal;
+ (id)persistGetAllFromLocal;
+ (id)persistTableName;
+ (id)persistDataChagedNotificationKey;
+ (id)persistKeepKeys;
+ (id)persistLocalPrimaryKey;
+ (id)persistPrimaryKey;
+ (id)syncHandleShouldSyncToLocalData:(id)arg1;
+ (void)syncSaveSyncTimestamp:(double)arg1;
+ (double)syncGetLatestSyncTimestamp;
+ (id)syncTimestampKey;
+ (id)syncGetShouldSyncToServerData;
@property(copy, nonatomic) CDUnknownBlockType persistDidDeleteBlock; // @synthesize persistDidDeleteBlock=_persistDidDeleteBlock;
@property(copy, nonatomic) CDUnknownBlockType persistDidUpdateBlock; // @synthesize persistDidUpdateBlock=_persistDidUpdateBlock;
@property(copy, nonatomic) CDUnknownBlockType persistWillUpdateBlock; // @synthesize persistWillUpdateBlock=_persistWillUpdateBlock;
@property(copy, nonatomic) CDUnknownBlockType persistDidCreateBlock; // @synthesize persistDidCreateBlock=_persistDidCreateBlock;
@property(copy, nonatomic) CDUnknownBlockType persistWillCreateBlock; // @synthesize persistWillCreateBlock=_persistWillCreateBlock;
@property(nonatomic) long long persistID; // @synthesize persistID=_persistID;
@property(nonatomic) long long persistModified; // @synthesize persistModified=_persistModified;
@property(nonatomic) _Bool persistDeleteFlag; // @synthesize persistDeleteFlag=_persistDeleteFlag;
@property(nonatomic) double persistStart_at; // @synthesize persistStart_at=_persistStart_at;
@property(nonatomic) double persistUpdated_at; // @synthesize persistUpdated_at=_persistUpdated_at;
@property(nonatomic) double persistCreated_at; // @synthesize persistCreated_at=_persistCreated_at;
@property(nonatomic) unsigned long long syncType; // @synthesize syncType=_syncType;
@property(nonatomic) double syncTimestamp; // @synthesize syncTimestamp=_syncTimestamp;
- (void).cxx_destruct;
- (unsigned long long)persistDeleteFromLocal:(_Bool)arg1;
- (unsigned long long)persistMarkDeleteToLocal:(_Bool)arg1 fromUser:(_Bool)arg2;
- (unsigned long long)persistUpdateToLocal:(_Bool)arg1;
- (unsigned long long)persistCreateToLocal:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


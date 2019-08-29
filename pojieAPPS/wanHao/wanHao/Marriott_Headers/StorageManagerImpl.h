//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "LegicStorageManager.h"

#import "NSCopying-Protocol.h"

@interface StorageManagerImpl : LegicStorageManager <NSCopying>
{
    struct Crypto *crypto;
    struct vector<unsigned char *, std::__1::allocator<unsigned char *>> cryptoKeys;
}

+ (id)instance;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)clearStore;
- (void)encryptTable:(basic_string_a490aa4c)arg1;
- (void)loadUnencryptedAndEncrypt;
- (void)reencryptTable:(basic_string_a490aa4c)arg1 oldVersion:(unsigned char)arg2;
- (void)reencryptData:(unsigned char)arg1;
- (void)checkExistingFields;
- (void)checkDataVersion;
- (void)handleCorruptedDataException;
- (unsigned long long)decryptAndLoadBytes:(char **)arg1 tableName:(basic_string_a490aa4c)arg2 key:(basic_string_a490aa4c)arg3 dataVersion:(unsigned char)arg4;
- (_Bool)encryptAndSaveBytes:(char *)arg1 length:(unsigned long long)arg2 tableName:(basic_string_a490aa4c)arg3 key:(basic_string_a490aa4c)arg4 dataVersion:(unsigned char)arg5;
- (unsigned long long)decryptAndLoadBytes:(char **)arg1 tableName:(basic_string_a490aa4c)arg2 key:(basic_string_a490aa4c)arg3;
- (_Bool)encryptAndSaveBytes:(char *)arg1 length:(unsigned long long)arg2 tableName:(basic_string_a490aa4c)arg3 key:(basic_string_a490aa4c)arg4;
- (id)loadStringFromTable:(basic_string_a490aa4c)arg1 key:(basic_string_a490aa4c)arg2;
- (_Bool)saveStringToTable:(basic_string_a490aa4c)arg1 key:(basic_string_a490aa4c)arg2 string:(id)arg3;
- (id)getWalletInstanceID;
- (void)saveWalletInstanceID:(id)arg1;
- (id)getConfigParamWithKey:(id)arg1;
- (void)saveConfigParam:(id)arg1 Value:(id)arg2;
- (id)getAPNToken;
- (void)saveAPNToken:(id)arg1;
- (id)getDeviceId;
- (void)saveDeviceId:(id)arg1;
- (void)removeAllActiveWalletApplications;
- (void)removeWalletApplicationActiveState:(id)arg1;
- (id)retrieveActiveWalletAppList;
- (void)saveWalletApplicationActiveState:(id)arg1;
- (_Bool)isUserRegistered;
- (void)saveUserRegistered:(_Bool)arg1;
- (_Bool)removeAllWalletApplications;
- (id)retrieveStoredWalletApplication:(id)arg1 Qualifier:(id)arg2;
- (id)loadWalletApplications;
- (void)saveWalletApplications:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (struct PersistentStore *)getPersistanceStore;
- (void)finalise;
- (id)init;

@end


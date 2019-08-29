//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSManagedObjectContext, NSManagedObjectModel, NSPersistentStoreCoordinator, NSString;

@interface MRTDataManager : NSObject
{
    NSManagedObjectContext *_managedObjectContext;
    NSString *_modelName;
    NSString *_documentPath;
    NSManagedObjectModel *_managedObjectModel;
    NSPersistentStoreCoordinator *_persistentStoreCoordinator;
}

+ (id)applicationDocumentsDirectory;
+ (id)defaultModelName;
@property(retain, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator; // @synthesize persistentStoreCoordinator=_persistentStoreCoordinator;
@property(retain, nonatomic) NSManagedObjectModel *managedObjectModel; // @synthesize managedObjectModel=_managedObjectModel;
@property(copy, nonatomic) NSString *documentPath; // @synthesize documentPath=_documentPath;
@property(copy, nonatomic) NSString *modelName; // @synthesize modelName=_modelName;
@property(retain, nonatomic) NSManagedObjectContext *managedObjectContext; // @synthesize managedObjectContext=_managedObjectContext;
- (void).cxx_destruct;
- (id)init;
- (_Bool)isNewVersion;
- (_Bool)localeHasChanged;
- (id)initWithModelName:(id)arg1;
- (id)initWithModelName:(id)arg1 documentPath:(id)arg2;

@end


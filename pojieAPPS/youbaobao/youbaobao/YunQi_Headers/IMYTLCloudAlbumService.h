//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IMYTLCloudAlbumService-Protocol.h"

@class NSArray, NSString;

@interface IMYTLCloudAlbumService : NSObject <IMYTLCloudAlbumService>
{
    NSArray *_monthsArray;
}

+ (id)getBabyPhotoWithBabyId:(id)arg1 month:(id)arg2;
+ (id)getMonthWithBabyId:(id)arg1;
+ (id)sharedService;
@property(retain, nonatomic) NSArray *monthsArray; // @synthesize monthsArray=_monthsArray;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class ALAssetRepresentation;

@protocol POSAssetReader <NSObject>
- (long long)read:(char *)arg1 fromOffset:(long long)arg2 maxLength:(unsigned long long)arg3 error:(id *)arg4;
- (_Bool)prepareForNewOffset:(long long)arg1;
- (_Bool)hasBytesAvailableFromOffset:(long long)arg1;
- (void)openAsset:(ALAssetRepresentation *)arg1 fromOffset:(long long)arg2 completionHandler:(void (^)(long long, NSError *))arg3;
@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface _IMYWebImageData : NSObject
{
    _Bool _isFillMode;
    long long _pixLenght;
    NSString *_imageName;
    struct CGSize _size;
}

@property(copy, nonatomic) NSString *imageName; // @synthesize imageName=_imageName;
@property(nonatomic) _Bool isFillMode; // @synthesize isFillMode=_isFillMode;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
@property(nonatomic) long long pixLenght; // @synthesize pixLenght=_pixLenght;
- (void).cxx_destruct;

@end

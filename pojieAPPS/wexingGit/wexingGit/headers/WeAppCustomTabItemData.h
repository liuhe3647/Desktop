//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UIImage;

@interface WeAppCustomTabItemData : NSObject
{
    UIImage *_iconImg;
    UIImage *_selectedIconImg;
    NSString *_titleText;
    NSString *_linkUrl;
}

@property(copy, nonatomic) NSString *linkUrl; // @synthesize linkUrl=_linkUrl;
@property(copy, nonatomic) NSString *titleText; // @synthesize titleText=_titleText;
@property(retain, nonatomic) UIImage *selectedIconImg; // @synthesize selectedIconImg=_selectedIconImg;
@property(retain, nonatomic) UIImage *iconImg; // @synthesize iconImg=_iconImg;
- (void).cxx_destruct;

@end

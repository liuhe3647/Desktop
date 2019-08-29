//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSDictionary, NSString;

@interface IMYTabBarItemConfig : NSObject <NSCopying>
{
    NSString *_title;
    NSString *_titleColor;
    NSString *_selectedTitleColor;
    NSString *_titleOffset;
    NSString *_image;
    NSString *_selectedImage;
    NSString *_imageInsets;
    double _fontSize;
    NSString *_fontName;
    NSString *_className;
    NSDictionary *_classParams;
    NSString *_eventName;
    unsigned long long _type;
    unsigned long long _index;
}

@property(nonatomic) unsigned long long index; // @synthesize index=_index;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *eventName; // @synthesize eventName=_eventName;
@property(copy, nonatomic) NSDictionary *classParams; // @synthesize classParams=_classParams;
@property(copy, nonatomic) NSString *className; // @synthesize className=_className;
@property(copy, nonatomic) NSString *fontName; // @synthesize fontName=_fontName;
@property(nonatomic) double fontSize; // @synthesize fontSize=_fontSize;
@property(copy, nonatomic) NSString *imageInsets; // @synthesize imageInsets=_imageInsets;
@property(copy, nonatomic) NSString *selectedImage; // @synthesize selectedImage=_selectedImage;
@property(copy, nonatomic) NSString *image; // @synthesize image=_image;
@property(copy, nonatomic) NSString *titleOffset; // @synthesize titleOffset=_titleOffset;
@property(copy, nonatomic) NSString *selectedTitleColor; // @synthesize selectedTitleColor=_selectedTitleColor;
@property(copy, nonatomic) NSString *titleColor; // @synthesize titleColor=_titleColor;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;

@end


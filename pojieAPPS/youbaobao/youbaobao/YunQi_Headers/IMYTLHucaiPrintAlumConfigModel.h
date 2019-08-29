//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, UIFont, UIImage;

@interface IMYTLHucaiPrintAlumConfigModel : NSObject
{
    _Bool _photoViewIsEnableEidt;
    _Bool _stroyIsCloseBottom;
    NSArray *_titleImgStrings;
    NSArray *_titleViewRects;
    NSArray *_photoViewRects;
    NSArray *_storyViewRects;
    UIImage *_bgImage;
    NSString *_title;
    NSString *_addBtnTitle;
    UIImage *_bottomViewImg;
    NSString *_bottomViewTitle;
    NSString *_flyleafSuffix;
    UIImage *_flyleafLeftImage;
    UIImage *_flyleafRightImage;
    UIFont *_flyleafTitleFont;
    double _flyleafImgPadding;
    unsigned long long _flyleafImageAlignment;
    unsigned long long _configType;
    long long _titleViewAlignment;
}

+ (struct CGSize)getMinPhotoSize;
+ (id)getEndPage;
+ (id)getContentWithType:(unsigned long long)arg1;
+ (id)getFlyleafWithType:(unsigned long long)arg1;
+ (id)getBackCoverWithType:(unsigned long long)arg1;
+ (id)getCoverWithType:(unsigned long long)arg1;
+ (id)getContentConfigModel:(unsigned long long)arg1;
+ (id)getHucaiPrintConfigWithType:(unsigned long long)arg1;
@property(nonatomic) _Bool stroyIsCloseBottom; // @synthesize stroyIsCloseBottom=_stroyIsCloseBottom;
@property(nonatomic) _Bool photoViewIsEnableEidt; // @synthesize photoViewIsEnableEidt=_photoViewIsEnableEidt;
@property(nonatomic) long long titleViewAlignment; // @synthesize titleViewAlignment=_titleViewAlignment;
@property(nonatomic) unsigned long long configType; // @synthesize configType=_configType;
@property(nonatomic) unsigned long long flyleafImageAlignment; // @synthesize flyleafImageAlignment=_flyleafImageAlignment;
@property(nonatomic) double flyleafImgPadding; // @synthesize flyleafImgPadding=_flyleafImgPadding;
@property(retain, nonatomic) UIFont *flyleafTitleFont; // @synthesize flyleafTitleFont=_flyleafTitleFont;
@property(retain, nonatomic) UIImage *flyleafRightImage; // @synthesize flyleafRightImage=_flyleafRightImage;
@property(retain, nonatomic) UIImage *flyleafLeftImage; // @synthesize flyleafLeftImage=_flyleafLeftImage;
@property(retain, nonatomic) NSString *flyleafSuffix; // @synthesize flyleafSuffix=_flyleafSuffix;
@property(retain, nonatomic) NSString *bottomViewTitle; // @synthesize bottomViewTitle=_bottomViewTitle;
@property(retain, nonatomic) UIImage *bottomViewImg; // @synthesize bottomViewImg=_bottomViewImg;
@property(retain, nonatomic) NSString *addBtnTitle; // @synthesize addBtnTitle=_addBtnTitle;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) UIImage *bgImage; // @synthesize bgImage=_bgImage;
@property(retain, nonatomic) NSArray *storyViewRects; // @synthesize storyViewRects=_storyViewRects;
@property(retain, nonatomic) NSArray *photoViewRects; // @synthesize photoViewRects=_photoViewRects;
@property(retain, nonatomic) NSArray *titleViewRects; // @synthesize titleViewRects=_titleViewRects;
@property(retain, nonatomic) NSArray *titleImgStrings; // @synthesize titleImgStrings=_titleImgStrings;
- (void).cxx_destruct;
- (id)description;

@end


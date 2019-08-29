//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIColor, UIFont;

@interface IMYTextTagConfig : NSObject
{
    _Bool _tagShouldUseGradientBackgrounds;
    UIFont *_tagTextFont;
    UIColor *_tagTextColor;
    UIColor *_tagSelectedTextColor;
    UIColor *_tagBackgroundColor;
    UIColor *_tagSelectedBackgroundColor;
    UIColor *_tagGradientBackgroundStartColor;
    UIColor *_tagGradientBackgroundEndColor;
    UIColor *_tagSelectedGradientBackgroundStartColor;
    UIColor *_tagSelectedGradientBackgroundEndColor;
    double _tagCornerRadius;
    double _tagSelectedCornerRadius;
    double _tagBorderWidth;
    double _tagSelectedBorderWidth;
    UIColor *_tagBorderColor;
    UIColor *_tagSelectedBorderColor;
    UIColor *_tagShadowColor;
    double _tagShadowRadius;
    double _tagShadowOpacity;
    double _tagMaxWidth;
    struct CGPoint _tagGradientStartPoint;
    struct CGPoint _tagGradientEndPoint;
    struct CGSize _tagShadowOffset;
    struct CGSize _tagExtraSpace;
}

@property(nonatomic) double tagMaxWidth; // @synthesize tagMaxWidth=_tagMaxWidth;
@property(nonatomic) struct CGSize tagExtraSpace; // @synthesize tagExtraSpace=_tagExtraSpace;
@property(nonatomic) double tagShadowOpacity; // @synthesize tagShadowOpacity=_tagShadowOpacity;
@property(nonatomic) double tagShadowRadius; // @synthesize tagShadowRadius=_tagShadowRadius;
@property(nonatomic) struct CGSize tagShadowOffset; // @synthesize tagShadowOffset=_tagShadowOffset;
@property(copy, nonatomic) UIColor *tagShadowColor; // @synthesize tagShadowColor=_tagShadowColor;
@property(retain, nonatomic) UIColor *tagSelectedBorderColor; // @synthesize tagSelectedBorderColor=_tagSelectedBorderColor;
@property(retain, nonatomic) UIColor *tagBorderColor; // @synthesize tagBorderColor=_tagBorderColor;
@property(nonatomic) double tagSelectedBorderWidth; // @synthesize tagSelectedBorderWidth=_tagSelectedBorderWidth;
@property(nonatomic) double tagBorderWidth; // @synthesize tagBorderWidth=_tagBorderWidth;
@property(nonatomic) double tagSelectedCornerRadius; // @synthesize tagSelectedCornerRadius=_tagSelectedCornerRadius;
@property(nonatomic) double tagCornerRadius; // @synthesize tagCornerRadius=_tagCornerRadius;
@property(nonatomic) struct CGPoint tagGradientEndPoint; // @synthesize tagGradientEndPoint=_tagGradientEndPoint;
@property(nonatomic) struct CGPoint tagGradientStartPoint; // @synthesize tagGradientStartPoint=_tagGradientStartPoint;
@property(retain, nonatomic) UIColor *tagSelectedGradientBackgroundEndColor; // @synthesize tagSelectedGradientBackgroundEndColor=_tagSelectedGradientBackgroundEndColor;
@property(retain, nonatomic) UIColor *tagSelectedGradientBackgroundStartColor; // @synthesize tagSelectedGradientBackgroundStartColor=_tagSelectedGradientBackgroundStartColor;
@property(retain, nonatomic) UIColor *tagGradientBackgroundEndColor; // @synthesize tagGradientBackgroundEndColor=_tagGradientBackgroundEndColor;
@property(retain, nonatomic) UIColor *tagGradientBackgroundStartColor; // @synthesize tagGradientBackgroundStartColor=_tagGradientBackgroundStartColor;
@property(nonatomic) _Bool tagShouldUseGradientBackgrounds; // @synthesize tagShouldUseGradientBackgrounds=_tagShouldUseGradientBackgrounds;
@property(retain, nonatomic) UIColor *tagSelectedBackgroundColor; // @synthesize tagSelectedBackgroundColor=_tagSelectedBackgroundColor;
@property(retain, nonatomic) UIColor *tagBackgroundColor; // @synthesize tagBackgroundColor=_tagBackgroundColor;
@property(retain, nonatomic) UIColor *tagSelectedTextColor; // @synthesize tagSelectedTextColor=_tagSelectedTextColor;
@property(retain, nonatomic) UIColor *tagTextColor; // @synthesize tagTextColor=_tagTextColor;
@property(retain, nonatomic) UIFont *tagTextFont; // @synthesize tagTextFont=_tagTextFont;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIColor.h>

@interface UIColor (SAMAdditions)
+ (id)sam_colorWithHex:(id)arg1;
+ (id)sam_colorWithHSL:(id)arg1;
+ (id)sam_colorWithRGB:(id)arg1;
+ (id)sam_colorWithCSSName:(id)arg1;
+ (id)sam_colorWithCSS:(id)arg1;
+ (id)sam_colorWithHue:(double)arg1 saturation:(double)arg2 lightness:(double)arg3 alpha:(double)arg4;
- (id)sam_colorByInterpolatingToColor:(id)arg1 progress:(double)arg2;
- (double)sam_alpha;
- (double)sam_blue;
- (double)sam_green;
- (double)sam_red;
- (id)sam_hexValueWithAlpha:(_Bool)arg1;
- (id)sam_hexValue;
@end


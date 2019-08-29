//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, UIColor, UIFont;

@interface IMYLineChartConfig : NSObject
{
    _Bool _xAxisEquallyDivide;
    _Bool _enableLineAnimation;
    _Bool _enablePointAnimation;
    _Bool _enableAreaAnimation;
    _Bool _enableAreaCurved;
    _Bool _enableLineCurved;
    _Bool _showPointText;
    _Bool _enablePaging;
    _Bool _enableNeedle;
    double _xUnitLength;
    double _yUnitLength;
    NSArray *_xAxisNames;
    NSArray *_yAxisNames;
    double _xTitleWidth;
    double _xTitleHeight;
    double _yTitleWidth;
    double _yTitleHeight;
    NSString *_xAxisUnit;
    NSString *_yAxisUnit;
    double _yUnitLabelWidth;
    double _yUnitLabelMargin;
    long long _chartType;
    double _xMinValue;
    double _xMaxValue;
    double _xAxisLength;
    NSArray *_customX;
    NSArray *_customPX;
    double _yMinValue;
    double _yMaxValue;
    double _yAxisLength;
    double _pointRadius;
    UIColor *_lineColor;
    UIColor *_dashLineColor;
    UIColor *_pointBorderColor;
    UIColor *_pointContentColor;
    NSArray *_pointContentColorArray;
    NSArray *_pointBorderColorArray;
    NSArray *_pointTexts;
    double _textWidth;
    double _textHeight;
    UIFont *_textFont;
    UIColor *_textColor;
    long long _unitCountOfAPage;
    NSArray *_topTexts;
    NSArray *_bottomTexts;
}

@property(retain, nonatomic) NSArray *bottomTexts; // @synthesize bottomTexts=_bottomTexts;
@property(retain, nonatomic) NSArray *topTexts; // @synthesize topTexts=_topTexts;
@property(nonatomic) _Bool enableNeedle; // @synthesize enableNeedle=_enableNeedle;
@property(nonatomic) long long unitCountOfAPage; // @synthesize unitCountOfAPage=_unitCountOfAPage;
@property(nonatomic) _Bool enablePaging; // @synthesize enablePaging=_enablePaging;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(retain, nonatomic) UIFont *textFont; // @synthesize textFont=_textFont;
@property(nonatomic) double textHeight; // @synthesize textHeight=_textHeight;
@property(nonatomic) double textWidth; // @synthesize textWidth=_textWidth;
@property(nonatomic) _Bool showPointText; // @synthesize showPointText=_showPointText;
@property(retain, nonatomic) NSArray *pointTexts; // @synthesize pointTexts=_pointTexts;
@property(retain, nonatomic) NSArray *pointBorderColorArray; // @synthesize pointBorderColorArray=_pointBorderColorArray;
@property(retain, nonatomic) NSArray *pointContentColorArray; // @synthesize pointContentColorArray=_pointContentColorArray;
@property(retain, nonatomic) UIColor *pointContentColor; // @synthesize pointContentColor=_pointContentColor;
@property(retain, nonatomic) UIColor *pointBorderColor; // @synthesize pointBorderColor=_pointBorderColor;
@property(retain, nonatomic) UIColor *dashLineColor; // @synthesize dashLineColor=_dashLineColor;
@property(retain, nonatomic) UIColor *lineColor; // @synthesize lineColor=_lineColor;
@property(nonatomic) _Bool enableLineCurved; // @synthesize enableLineCurved=_enableLineCurved;
@property(nonatomic) _Bool enableAreaCurved; // @synthesize enableAreaCurved=_enableAreaCurved;
@property(nonatomic) _Bool enableAreaAnimation; // @synthesize enableAreaAnimation=_enableAreaAnimation;
@property(nonatomic) _Bool enablePointAnimation; // @synthesize enablePointAnimation=_enablePointAnimation;
@property(nonatomic) _Bool enableLineAnimation; // @synthesize enableLineAnimation=_enableLineAnimation;
@property(nonatomic) double pointRadius; // @synthesize pointRadius=_pointRadius;
@property(nonatomic) double yAxisLength; // @synthesize yAxisLength=_yAxisLength;
@property(nonatomic) double yMaxValue; // @synthesize yMaxValue=_yMaxValue;
@property(nonatomic) double yMinValue; // @synthesize yMinValue=_yMinValue;
@property(retain, nonatomic) NSArray *customPX; // @synthesize customPX=_customPX;
@property(retain, nonatomic) NSArray *customX; // @synthesize customX=_customX;
@property(nonatomic) double xAxisLength; // @synthesize xAxisLength=_xAxisLength;
@property(nonatomic) double xMaxValue; // @synthesize xMaxValue=_xMaxValue;
@property(nonatomic) double xMinValue; // @synthesize xMinValue=_xMinValue;
@property(nonatomic) long long chartType; // @synthesize chartType=_chartType;
@property(nonatomic) double yUnitLabelMargin; // @synthesize yUnitLabelMargin=_yUnitLabelMargin;
@property(nonatomic) double yUnitLabelWidth; // @synthesize yUnitLabelWidth=_yUnitLabelWidth;
@property(retain, nonatomic) NSString *yAxisUnit; // @synthesize yAxisUnit=_yAxisUnit;
@property(retain, nonatomic) NSString *xAxisUnit; // @synthesize xAxisUnit=_xAxisUnit;
@property(nonatomic) double yTitleHeight; // @synthesize yTitleHeight=_yTitleHeight;
@property(nonatomic) double yTitleWidth; // @synthesize yTitleWidth=_yTitleWidth;
@property(nonatomic) double xTitleHeight; // @synthesize xTitleHeight=_xTitleHeight;
@property(nonatomic) double xTitleWidth; // @synthesize xTitleWidth=_xTitleWidth;
@property(retain, nonatomic) NSArray *yAxisNames; // @synthesize yAxisNames=_yAxisNames;
@property(retain, nonatomic) NSArray *xAxisNames; // @synthesize xAxisNames=_xAxisNames;
@property(nonatomic) double yUnitLength; // @synthesize yUnitLength=_yUnitLength;
@property(nonatomic) double xUnitLength; // @synthesize xUnitLength=_xUnitLength;
@property(nonatomic) _Bool xAxisEquallyDivide; // @synthesize xAxisEquallyDivide=_xAxisEquallyDivide;
- (void).cxx_destruct;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, UIColor;

@interface IMYRM80AttributedLabelURL : NSObject
{
    _Bool _hideHighlightColor;
    id _linkData;
    UIColor *_color;
    NSMutableArray *_showFrames;
    long long _displayLineCount;
    NSMutableArray *_displayFrames;
    struct _NSRange _range;
    struct CGRect _frame;
}

+ (void)setCustomDetectMethod:(CDUnknownBlockType)arg1;
+ (id)detectLinks:(id)arg1;
+ (id)urlWithLinkData:(id)arg1 range:(struct _NSRange)arg2 color:(id)arg3;
@property(retain, nonatomic) NSMutableArray *displayFrames; // @synthesize displayFrames=_displayFrames;
@property(nonatomic) long long displayLineCount; // @synthesize displayLineCount=_displayLineCount;
@property(retain, nonatomic) NSMutableArray *showFrames; // @synthesize showFrames=_showFrames;
@property struct CGRect frame; // @synthesize frame=_frame;
@property(nonatomic) _Bool hideHighlightColor; // @synthesize hideHighlightColor=_hideHighlightColor;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
@property(nonatomic) struct _NSRange range; // @synthesize range=_range;
@property(retain, nonatomic) id linkData; // @synthesize linkData=_linkData;
- (void).cxx_destruct;

@end


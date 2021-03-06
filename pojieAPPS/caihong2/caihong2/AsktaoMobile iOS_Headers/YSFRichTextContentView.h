//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YSFSessionMessageContentView.h"

#import "YSFAttributedTextContentViewDelegate-Protocol.h"

@class NSMutableArray, NSString, UIButton, UIView, YSFAttributedTextView;

@interface YSFRichTextContentView : YSFSessionMessageContentView <YSFAttributedTextContentViewDelegate>
{
    NSMutableArray *_imageViewsArray;
    YSFAttributedTextView *_textView;
    UIView *_splitLine;
    UIButton *_action;
}

@property(retain, nonatomic) UIButton *action; // @synthesize action=_action;
@property(retain, nonatomic) UIView *splitLine; // @synthesize splitLine=_splitLine;
@property(retain, nonatomic) YSFAttributedTextView *textView; // @synthesize textView=_textView;
@property(retain, nonatomic) NSMutableArray *imageViewsArray; // @synthesize imageViewsArray=_imageViewsArray;
- (void).cxx_destruct;
- (void)actionClick:(id)arg1;
- (void)linkPushed:(id)arg1;
- (void)tapImage:(id)arg1;
- (id)attributedTextContentView:(id)arg1 viewForAttachment:(id)arg2 frame:(struct CGRect)arg3;
- (id)attributedTextContentView:(id)arg1 viewForLink:(id)arg2 identifier:(id)arg3 frame:(struct CGRect)arg4;
- (id)_attributedString:(id)arg1;
- (void)refresh:(id)arg1;
- (id)initSessionMessageContentView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "IMYSelectableAttributedLabelDelegate-Protocol.h"

@class NSArray, NSMutableArray, NSString, UITapGestureRecognizer;
@protocol TTQTopicRichWithParserViewDelegate;

@interface TTQTopicRichWithParserView : UIView <IMYSelectableAttributedLabelDelegate>
{
    id <TTQTopicRichWithParserViewDelegate> _delegate;
    NSArray *_parserModels;
    NSMutableArray *_attributedLabels;
    NSString *_lastRenderedText;
    UITapGestureRecognizer *_tapRecognizer;
}

+ (void)load;
+ (void)ttq_clearTopicRichWithParserCache;
@property(retain, nonatomic) UITapGestureRecognizer *tapRecognizer; // @synthesize tapRecognizer=_tapRecognizer;
@property(copy, nonatomic) NSString *lastRenderedText; // @synthesize lastRenderedText=_lastRenderedText;
@property(retain, nonatomic) NSMutableArray *attributedLabels; // @synthesize attributedLabels=_attributedLabels;
@property(retain, nonatomic) NSArray *parserModels; // @synthesize parserModels=_parserModels;
@property(nonatomic) __weak id <TTQTopicRichWithParserViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)attributedLabel:(id)arg1 selectMenuIsShow:(_Bool)arg2;
- (struct CGRect)attributedLabel:(id)arg1 selectedAreaChangedWithSelectedRects:(id)arg2;
- (void)attributedLabel:(id)arg1 selectorPanGestureDidChangedAtPoint:(struct CGPoint)arg2;
- (void)shutOffGesture:(_Bool)arg1;
- (void)ttq_saveCacheToKey:(id)arg1;
- (_Bool)ttq_readCacheWithKey:(id)arg1;
- (id)videoPlayViewWithVideoModel:(id)arg1;
- (id)normalLabelWith:(id)arg1;
- (id)m80LabelWith:(id)arg1;
- (void)ttq_richAutoAdjustHeight:(id)arg1 prefixLinkData:(id)arg2;
- (void)ttq_setText:(id)arg1 parseType:(long long)arg2 otherKey:(id)arg3 prefixText:(id)arg4 prefixLinkData:(id)arg5;
- (void)ttq_setText:(id)arg1 parseType:(long long)arg2 prefixText:(id)arg3 prefixLinkData:(id)arg4;
- (void)ttq_setText:(id)arg1 parseType:(long long)arg2 otherKey:(id)arg3;
- (void)ttq_setText:(id)arg1 parseType:(long long)arg2;
- (void)ttq_setText:(id)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)setCancleContinueTriggereClick;
- (void)cleanTextSelector;
- (void)tapAction:(id)arg1;
- (void)setup;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


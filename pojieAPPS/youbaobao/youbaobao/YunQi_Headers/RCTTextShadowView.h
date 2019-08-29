//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RCTBaseTextShadowView.h"

@class NSMapTable, RCTBridge;

@interface RCTTextShadowView : RCTBaseTextShadowView
{
    RCTBridge *_bridge;
    _Bool _needsUpdateView;
    NSMapTable *_cachedTextStorages;
    _Bool _adjustsFontSizeToFit;
    long long _maximumNumberOfLines;
    long long _lineBreakMode;
    double _minimumFontScale;
}

@property(nonatomic) double minimumFontScale; // @synthesize minimumFontScale=_minimumFontScale;
@property(nonatomic) _Bool adjustsFontSizeToFit; // @synthesize adjustsFontSizeToFit=_adjustsFontSizeToFit;
@property(nonatomic) long long lineBreakMode; // @synthesize lineBreakMode=_lineBreakMode;
@property(nonatomic) long long maximumNumberOfLines; // @synthesize maximumNumberOfLines=_maximumNumberOfLines;
- (void).cxx_destruct;
- (double)lastBaselineForSize:(struct CGSize)arg1;
- (void)layoutSubviewsWithContext:(struct RCTLayoutContext)arg1;
- (void)layoutWithMetrics:(struct RCTLayoutMetrics)arg1 layoutContext:(struct RCTLayoutContext)arg2;
- (id)textStorageAndLayoutManagerThatFitsSize:(struct CGSize)arg1 exclusiveOwnership:(_Bool)arg2;
- (id)attributedTextWithMeasuredAttachmentsThatFitSize:(struct CGSize)arg1;
- (void)postprocessAttributedText:(id)arg1;
- (void)uiManagerWillPerformMounting;
- (void)invalidateCache;
- (void)dirtyLayout;
- (_Bool)isYogaLeafNode;
- (id)initWithBridge:(id)arg1;

@end


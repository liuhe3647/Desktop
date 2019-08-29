//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "RCTComponent-Protocol.h"

@class NSDictionary, NSMutableArray, NSNumber, NSString, RCTRootShadowView;

@interface RCTShadowView : NSObject <RCTComponent>
{
    NSDictionary *_lastParentProperties;
    NSMutableArray *_reactSubviews;
    _Bool _recomputePadding;
    _Bool _recomputeMargin;
    _Bool _recomputeBorder;
    struct YGValue _paddingMetaProps[9];
    struct YGValue _marginMetaProps[9];
    struct YGValue _borderMetaProps[9];
    _Bool _newView;
    NSNumber *_reactTag;
    RCTRootShadowView *_rootView;
    RCTShadowView *_superview;
    struct YGNode *_yogaNode;
    NSString *_viewName;
    CDUnknownBlockType _onLayout;
    struct CGSize _intrinsicContentSize;
    struct RCTLayoutMetrics _layoutMetrics;
}

+ (struct YGConfig *)yogaConfig;
@property(nonatomic) struct CGSize intrinsicContentSize; // @synthesize intrinsicContentSize=_intrinsicContentSize;
@property(nonatomic, getter=isNewView) _Bool newView; // @synthesize newView=_newView;
@property(nonatomic) struct RCTLayoutMetrics layoutMetrics; // @synthesize layoutMetrics=_layoutMetrics;
@property(copy, nonatomic) CDUnknownBlockType onLayout; // @synthesize onLayout=_onLayout;
@property(copy, nonatomic) NSString *viewName; // @synthesize viewName=_viewName;
@property(readonly, nonatomic) struct YGNode *yogaNode; // @synthesize yogaNode=_yogaNode;
@property(readonly, nonatomic) __weak RCTShadowView *superview; // @synthesize superview=_superview;
@property(readonly, nonatomic) __weak RCTRootShadowView *rootView; // @synthesize rootView=_rootView;
@property(copy, nonatomic) NSNumber *reactTag; // @synthesize reactTag=_reactTag;
- (void).cxx_destruct;
- (void)didSetProps:(id)arg1;
- (void)didUpdateReactSubviews;
@property(nonatomic) float aspectRatio;
@property(nonatomic) int direction;
@property(nonatomic) int display;
@property(nonatomic) int overflow;
@property(nonatomic) int flexWrap;
@property(nonatomic) int position;
@property(nonatomic) int alignContent;
@property(nonatomic) int alignItems;
@property(nonatomic) int alignSelf;
@property(nonatomic) int justifyContent;
@property(nonatomic) int flexDirection;
@property(nonatomic) float flexShrink;
@property(nonatomic) float flexGrow;
@property(nonatomic) float flex;
@property(nonatomic) struct YGValue flexBasis;
- (void)setLocalData:(id)arg1;
@property(nonatomic) struct CGSize size;
@property(nonatomic) struct YGValue right;
@property(nonatomic) struct YGValue left;
@property(nonatomic) struct YGValue end;
@property(nonatomic) struct YGValue start;
@property(nonatomic) struct YGValue bottom;
@property(nonatomic) struct YGValue top;
@property(nonatomic) struct YGValue maxHeight;
@property(nonatomic) struct YGValue maxWidth;
@property(nonatomic) struct YGValue minHeight;
@property(nonatomic) struct YGValue minWidth;
@property(nonatomic) struct YGValue height;
@property(nonatomic) struct YGValue width;
@property(nonatomic) float borderEndWidth;
@property(nonatomic) float borderStartWidth;
@property(nonatomic) float borderRightWidth;
@property(nonatomic) float borderBottomWidth;
@property(nonatomic) float borderLeftWidth;
@property(nonatomic) float borderTopWidth;
@property(nonatomic) float borderWidth;
@property(nonatomic) struct YGValue paddingEnd;
@property(nonatomic) struct YGValue paddingStart;
@property(nonatomic) struct YGValue paddingRight;
@property(nonatomic) struct YGValue paddingBottom;
@property(nonatomic) struct YGValue paddingLeft;
@property(nonatomic) struct YGValue paddingTop;
@property(nonatomic) struct YGValue paddingHorizontal;
@property(nonatomic) struct YGValue paddingVertical;
@property(nonatomic) struct YGValue padding;
@property(nonatomic) struct YGValue marginEnd;
@property(nonatomic) struct YGValue marginStart;
@property(nonatomic) struct YGValue marginRight;
@property(nonatomic) struct YGValue marginBottom;
@property(nonatomic) struct YGValue marginLeft;
@property(nonatomic) struct YGValue marginTop;
@property(nonatomic) struct YGValue marginHorizontal;
@property(nonatomic) struct YGValue marginVertical;
@property(nonatomic) struct YGValue margin;
- (id)recursiveDescription;
- (void)addRecursiveDescriptionToString:(id)arg1 atLevel:(unsigned long long)arg2;
@property(readonly, copy) NSString *description;
- (id)reactTagAtPoint:(struct CGPoint)arg1;
- (struct CGSize)sizeThatFitsMinimumSize:(struct CGSize)arg1 maximumSize:(struct CGSize)arg2;
- (void)layoutSubviewsWithContext:(struct RCTLayoutContext)arg1;
- (void)layoutWithMetrics:(struct RCTLayoutMetrics)arg1 layoutContext:(struct RCTLayoutContext)arg2;
- (void)layoutWithMinimumSize:(struct CGSize)arg1 maximumSize:(struct CGSize)arg2 layoutDirection:(long long)arg3 layoutContext:(struct RCTLayoutContext)arg4;
- (id)reactSuperview;
- (id)reactSubviews;
- (void)removeReactSubview:(id)arg1;
- (void)insertReactSubview:(id)arg1 atIndex:(long long)arg2;
- (_Bool)isYogaLeafNode;
- (_Bool)canHaveSubviews;
- (void)dealloc;
- (_Bool)isReactRootView;
- (id)init;
- (_Bool)viewIsDescendantOf:(id)arg1;
- (struct CGRect)measureLayoutRelativeToAncestor:(id)arg1;
- (void)setRootView:(id)arg1;
- (void)clearLayout;
- (void)dirtyLayout;
@property(readonly, nonatomic) struct CGRect contentFrame;
@property(readonly, nonatomic) struct CGSize availableSize;
@property(readonly, nonatomic) struct UIEdgeInsets compoundInsets;
@property(readonly, nonatomic) struct UIEdgeInsets borderAsInsets;
@property(readonly, nonatomic) struct UIEdgeInsets paddingAsInsets;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


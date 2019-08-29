//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "RNSVGContainer-Protocol.h"

@class NSMutableDictionary, NSString, RNSVGLength;

@interface RNSVGSvgView : UIView <RNSVGContainer>
{
    NSMutableDictionary *_clipPaths;
    NSMutableDictionary *_templates;
    NSMutableDictionary *_painters;
    NSMutableDictionary *_masks;
    struct CGAffineTransform _viewBoxTransform;
    struct CGAffineTransform _invviewBoxTransform;
    _Bool rendered;
    _Bool _responsible;
    _Bool _active;
    int _meetOrSlice;
    RNSVGLength *_bbWidth;
    RNSVGLength *_bbHeight;
    double _minX;
    double _minY;
    double _vbWidth;
    double _vbHeight;
    NSString *_align;
    struct CGRect _boundingBox;
    struct CGAffineTransform _initialCTM;
    struct CGAffineTransform _invInitialCTM;
}

@property(nonatomic) struct CGAffineTransform invInitialCTM; // @synthesize invInitialCTM=_invInitialCTM;
@property(nonatomic) struct CGAffineTransform initialCTM; // @synthesize initialCTM=_initialCTM;
@property(nonatomic) struct CGRect boundingBox; // @synthesize boundingBox=_boundingBox;
@property(nonatomic) _Bool active; // @synthesize active=_active;
@property(nonatomic) _Bool responsible; // @synthesize responsible=_responsible;
@property(nonatomic) int meetOrSlice; // @synthesize meetOrSlice=_meetOrSlice;
@property(retain, nonatomic) NSString *align; // @synthesize align=_align;
@property(nonatomic) double vbHeight; // @synthesize vbHeight=_vbHeight;
@property(nonatomic) double vbWidth; // @synthesize vbWidth=_vbWidth;
@property(nonatomic) double minY; // @synthesize minY=_minY;
@property(nonatomic) double minX; // @synthesize minX=_minX;
@property(retain, nonatomic) RNSVGLength *bbHeight; // @synthesize bbHeight=_bbHeight;
@property(retain, nonatomic) RNSVGLength *bbWidth; // @synthesize bbWidth=_bbWidth;
- (void).cxx_destruct;
- (struct CGAffineTransform)getViewBoxTransform;
- (struct CGRect)getContextBounds;
- (id)getDefinedMask:(id)arg1;
- (void)defineMask:(id)arg1 maskName:(id)arg2;
- (id)getDefinedPainter:(id)arg1;
- (void)definePainter:(id)arg1 painterName:(id)arg2;
- (id)getDefinedTemplate:(id)arg1;
- (void)defineTemplate:(id)arg1 templateName:(id)arg2;
- (id)getDefinedClipPath:(id)arg1;
- (void)defineClipPath:(id)arg1 clipPathName:(id)arg2;
- (void)reactSetInheritedBackgroundColor:(id)arg1;
- (id)getDataURLwithBounds:(struct CGRect)arg1;
- (id)getDataURL;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)drawRect:(struct CGRect)arg1;
- (void)drawToContext:(struct CGContext *)arg1 withRect:(struct CGRect)arg2;
- (void)invalidate;
- (void)clearChildCache;
- (void)didUpdateReactSubviews;
- (void)removeReactSubview:(id)arg1;
- (void)insertReactSubview:(id)arg1 atIndex:(long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@interface YBBOldHomeMaskingView : UIView
{
    CDUnknownBlockType _maskingTouchAction;
    unsigned long long _type;
}

+ (id)maskingWithType:(unsigned long long)arg1 frame:(struct CGRect)arg2;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(copy, nonatomic) CDUnknownBlockType maskingTouchAction; // @synthesize maskingTouchAction=_maskingTouchAction;
- (void).cxx_destruct;
- (void)setupBabyHeightViewWithIsHeadFoot:(_Bool)arg1;
- (void)setupAction;
- (void)setupSubView;
- (id)initWithType:(unsigned long long)arg1 frame:(struct CGRect)arg2;

@end


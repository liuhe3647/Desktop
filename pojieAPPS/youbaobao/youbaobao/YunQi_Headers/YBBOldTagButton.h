//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMYRoundButton.h"

@class YBBOldTagInfo;

@interface YBBOldTagButton : IMYRoundButton
{
    YBBOldTagInfo *_tagInfo;
}

+ (id)buttonWithTag:(id)arg1;
@property(retain, nonatomic) YBBOldTagInfo *tagInfo; // @synthesize tagInfo=_tagInfo;
- (void).cxx_destruct;
- (struct CGSize)intrinsicContentSize;
- (void)imy_layoutStyle;
- (void)setupUI;
- (id)initWithTag:(id)arg1;

@end


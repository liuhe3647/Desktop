//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UIButton, WSVideoModel, WSVideoTagInfo;

@protocol WSVideoFlowBaseDelegate <NSObject>

@optional
- (void)onClickGoodLookButton:(UIButton *)arg1 inView:(id)arg2 withVideoModel:(WSVideoModel *)arg3;
- (void)onClickTitle:(id)arg1;
- (void)onClickFeedBackButton:(UIButton *)arg1 sender:(id)arg2;
- (void)onClickLike:(_Bool)arg1 sender:(id)arg2;
- (void)onClickSource:(id)arg1;
- (void)onClickShare:(id)arg1;
- (void)onClickTag:(WSVideoTagInfo *)arg1 sender:(id)arg2;
@end

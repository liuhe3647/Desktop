//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, RACSubject;

@interface IMYThirdLoginView : UIView
{
    NSArray *_snsArray;
    RACSubject *_subject;
}

@property(retain, nonatomic) RACSubject *subject; // @synthesize subject=_subject;
@property(retain, nonatomic) NSArray *snsArray; // @synthesize snsArray=_snsArray;
- (void).cxx_destruct;
- (void)createSnsButtons;
- (void)createTitleLabel;
- (id)tapSignal;
- (void)initUI;
- (id)initWithSNSArray:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class UILabel;

@interface IMYEBPhraseCollectionViewCell : UICollectionViewCell
{
    UILabel *_textLabel;
}

+ (struct CGSize)cellSizeWithText:(id)arg1 direction:(unsigned long long)arg2 defaultHeight:(double)arg3;
+ (id)cellIdentifier;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
- (void).cxx_destruct;
- (void)createUI;
- (id)initWithFrame:(struct CGRect)arg1;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UILabel.h>

@interface TTQInsetsLabel : UILabel
{
    struct UIEdgeInsets _insets;
}

@property(nonatomic) struct UIEdgeInsets insets; // @synthesize insets=_insets;
- (void)sizeToFit;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithInsets:(struct UIEdgeInsets)arg1;
- (id)initWithFrame:(struct CGRect)arg1 andInsets:(struct UIEdgeInsets)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface MRTDisplayConsumerModelCreditCardElementView : UIView
{
    UIImageView *_cardImageView;
    UILabel *_statusLabel;
    UILabel *_nameLabel;
    UILabel *_numberLabel;
    UILabel *_expirationDateLabel;
    UILabel *_purposeLabel;
}

@property(retain, nonatomic) UILabel *purposeLabel; // @synthesize purposeLabel=_purposeLabel;
@property(retain, nonatomic) UILabel *expirationDateLabel; // @synthesize expirationDateLabel=_expirationDateLabel;
@property(retain, nonatomic) UILabel *numberLabel; // @synthesize numberLabel=_numberLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UILabel *statusLabel; // @synthesize statusLabel=_statusLabel;
@property(retain, nonatomic) UIImageView *cardImageView; // @synthesize cardImageView=_cardImageView;
- (void).cxx_destruct;
- (unsigned long long)accessibilityTraits;
- (_Bool)isAccessibilityElement;
- (id)accessibilityLabel;
- (void)injectCreditCard:(id)arg1;

@end


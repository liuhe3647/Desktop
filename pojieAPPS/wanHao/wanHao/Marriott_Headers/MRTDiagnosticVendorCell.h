//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UILabel;

@interface MRTDiagnosticVendorCell : UITableViewCell
{
    UILabel *_vendorName;
    UILabel *_registeredLabel;
    long long _vendorType;
}

@property(nonatomic) long long vendorType; // @synthesize vendorType=_vendorType;
@property(retain, nonatomic) UILabel *registeredLabel; // @synthesize registeredLabel=_registeredLabel;
@property(retain, nonatomic) UILabel *vendorName; // @synthesize vendorName=_vendorName;
- (void).cxx_destruct;

@end


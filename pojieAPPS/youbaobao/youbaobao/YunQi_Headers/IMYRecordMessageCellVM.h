//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMYRecordCellVM.h"

@class NSString, UIImage;

@interface IMYRecordMessageCellVM : IMYRecordCellVM
{
    _Bool _detailImageHidden;
    NSString *_messageString;
    UIImage *_messageImage;
}

@property(nonatomic) _Bool detailImageHidden; // @synthesize detailImageHidden=_detailImageHidden;
@property(retain, nonatomic) UIImage *messageImage; // @synthesize messageImage=_messageImage;
@property(retain, nonatomic) NSString *messageString; // @synthesize messageString=_messageString;
- (void).cxx_destruct;
@property(nonatomic) long long vmType; // @dynamic vmType;
- (id)init;

@end


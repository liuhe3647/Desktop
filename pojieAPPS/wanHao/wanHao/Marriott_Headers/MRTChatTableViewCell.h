//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class MRTStyledLabel, NSDate, NSString, UIImageView, UILabel;

@interface MRTChatTableViewCell : UITableViewCell
{
    NSDate *_timestamp;
    MRTStyledLabel *_chatLabel;
    UIImageView *_bubbleImageView;
    UIImageView *_bubbleImageArrowView;
    UILabel *_timestampLabel;
}

+ (id)leftAlignedCell;
+ (id)errorCell;
+ (id)cannedCell;
+ (id)rightAlignedCell;
+ (id)cellForMessageType:(unsigned long long)arg1;
+ (id)cellIdentifierForMessageType:(unsigned long long)arg1;
+ (id)leftNib;
+ (id)rightNib;
+ (id)errorNib;
+ (id)cannedNib;
@property(retain, nonatomic) UILabel *timestampLabel; // @synthesize timestampLabel=_timestampLabel;
@property(retain, nonatomic) UIImageView *bubbleImageArrowView; // @synthesize bubbleImageArrowView=_bubbleImageArrowView;
@property(retain, nonatomic) UIImageView *bubbleImageView; // @synthesize bubbleImageView=_bubbleImageView;
@property(retain, nonatomic) MRTStyledLabel *chatLabel; // @synthesize chatLabel=_chatLabel;
@property(retain, nonatomic) NSDate *timestamp; // @synthesize timestamp=_timestamp;
- (void).cxx_destruct;
- (void)setTintColor:(id)arg1;
@property(copy, nonatomic) NSString *chatText;
- (void)setPreferredMaxLayoutWidth:(double)arg1;
- (void)awakeFromNib;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface IMYCCShowMessageLog_v2 : NSObject
{
    long long _tag;
    long long _showCount;
    long long _clickCount;
    NSString *_messageText;
    NSDate *_lastShowDate;
    NSDate *_lastClickDate;
    NSDate *_showTongjingDate;
    NSDate *_showTJMensesStartDate;
}

+ (_Bool)hasClickedWithTag:(long long)arg1 orShowCount:(long long)arg2;
+ (_Bool)hasClickedWithTag:(long long)arg1;
+ (void)addClickCountWithTag:(long long)arg1;
+ (void)addShowCountWithMessage:(id)arg1;
+ (id)getShowMessageLogWithTag:(long long)arg1;
+ (id)getPrimaryKey;
+ (id)getTableName;
@property(retain, nonatomic) NSDate *showTJMensesStartDate; // @synthesize showTJMensesStartDate=_showTJMensesStartDate;
@property(retain, nonatomic) NSDate *showTongjingDate; // @synthesize showTongjingDate=_showTongjingDate;
@property(retain, nonatomic) NSDate *lastClickDate; // @synthesize lastClickDate=_lastClickDate;
@property(retain, nonatomic) NSDate *lastShowDate; // @synthesize lastShowDate=_lastShowDate;
@property(retain, nonatomic) NSString *messageText; // @synthesize messageText=_messageText;
@property long long clickCount; // @synthesize clickCount=_clickCount;
@property long long showCount; // @synthesize showCount=_showCount;
@property long long tag; // @synthesize tag=_tag;
- (void).cxx_destruct;

@end


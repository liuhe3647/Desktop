//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, RACCommand;

@interface AliBindingVM : NSObject
{
    NSDictionary *lastTimeInfo;
    double _money;
    RACCommand *_bankAccountCommand;
    RACCommand *_useCommand;
    NSString *_nameString;
    NSString *_accountString;
    NSString *_moneyString;
    NSString *_qqString;
    NSString *_wechatString;
    RACCommand *_withDrawaCommand;
}

@property(copy, nonatomic) RACCommand *withDrawaCommand; // @synthesize withDrawaCommand=_withDrawaCommand;
@property(copy, nonatomic) NSString *wechatString; // @synthesize wechatString=_wechatString;
@property(copy, nonatomic) NSString *qqString; // @synthesize qqString=_qqString;
@property(copy, nonatomic) NSString *moneyString; // @synthesize moneyString=_moneyString;
@property(copy, nonatomic) NSString *accountString; // @synthesize accountString=_accountString;
@property(copy, nonatomic) NSString *nameString; // @synthesize nameString=_nameString;
@property(copy, nonatomic) RACCommand *useCommand; // @synthesize useCommand=_useCommand;
@property(copy, nonatomic) RACCommand *bankAccountCommand; // @synthesize bankAccountCommand=_bankAccountCommand;
@property(nonatomic) double money; // @synthesize money=_money;
- (void).cxx_destruct;
- (_Bool)validInfo;

@end

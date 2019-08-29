//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AlibcChannelBiz, AlibcTradeAddCardBiz, AlibcTradeDetailBiz, AlibcTradeShopBiz;

@interface AlibcBizManager : NSObject
{
    AlibcTradeDetailBiz *_tradeDetailBiz;
    AlibcTradeShopBiz *_tradeShopBiz;
    AlibcChannelBiz *_channelBiz;
    AlibcTradeAddCardBiz *_addCardBiz;
}

+ (id)sharedManager;
@property(retain, nonatomic) AlibcTradeAddCardBiz *addCardBiz; // @synthesize addCardBiz=_addCardBiz;
@property(retain, nonatomic) AlibcChannelBiz *channelBiz; // @synthesize channelBiz=_channelBiz;
@property(retain, nonatomic) AlibcTradeShopBiz *tradeShopBiz; // @synthesize tradeShopBiz=_tradeShopBiz;
@property(retain, nonatomic) AlibcTradeDetailBiz *tradeDetailBiz; // @synthesize tradeDetailBiz=_tradeDetailBiz;
- (void).cxx_destruct;
- (id)init;

@end


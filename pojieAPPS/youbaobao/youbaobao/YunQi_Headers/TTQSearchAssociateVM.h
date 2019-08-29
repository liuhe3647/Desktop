//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTQViewModel.h"

@class NSArray, NSMutableArray, NSString, RACCommand;

@interface TTQSearchAssociateVM : TTQViewModel
{
    _Bool _bFromQuanzi;
    NSString *_associateWord;
    NSMutableArray *_associateWordMetraster;
    RACCommand *_reqAssociateWordsCmd;
    RACCommand *_keywordBICmd;
    NSString *_keyword;
    NSArray *_keywords;
}

@property(copy, nonatomic) NSArray *keywords; // @synthesize keywords=_keywords;
@property(copy, nonatomic) NSString *keyword; // @synthesize keyword=_keyword;
@property(retain, nonatomic) RACCommand *keywordBICmd; // @synthesize keywordBICmd=_keywordBICmd;
@property(retain, nonatomic) RACCommand *reqAssociateWordsCmd; // @synthesize reqAssociateWordsCmd=_reqAssociateWordsCmd;
@property(retain, nonatomic) NSMutableArray *associateWordMetraster; // @synthesize associateWordMetraster=_associateWordMetraster;
@property(copy, nonatomic) NSString *associateWord; // @synthesize associateWord=_associateWord;
@property(nonatomic) _Bool bFromQuanzi; // @synthesize bFromQuanzi=_bFromQuanzi;
- (void).cxx_destruct;
- (id)identifierRowAtIndexPath:(id)arg1;
- (id)requestRemoteDataForType:(long long)arg1 params:(id)arg2;

@end


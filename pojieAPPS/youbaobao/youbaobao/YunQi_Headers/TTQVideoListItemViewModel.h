//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSAttributedString, TTQVideoListItemModel, UILabel;

@interface TTQVideoListItemViewModel : NSObject
{
    _Bool _showTitle;
    TTQVideoListItemModel *_data;
    unsigned long long _sourceType;
    NSAttributedString *_playCountAttributeAtring;
    NSAttributedString *_praiseCountAttributeAtring;
    UILabel *_testTitleLabel;
    struct CGSize _titleBgSize;
}

@property(retain, nonatomic) UILabel *testTitleLabel; // @synthesize testTitleLabel=_testTitleLabel;
@property(nonatomic) _Bool showTitle; // @synthesize showTitle=_showTitle;
@property(nonatomic) struct CGSize titleBgSize; // @synthesize titleBgSize=_titleBgSize;
@property(retain, nonatomic) NSAttributedString *praiseCountAttributeAtring; // @synthesize praiseCountAttributeAtring=_praiseCountAttributeAtring;
@property(retain, nonatomic) NSAttributedString *playCountAttributeAtring; // @synthesize playCountAttributeAtring=_playCountAttributeAtring;
@property(nonatomic) unsigned long long sourceType; // @synthesize sourceType=_sourceType;
@property(retain, nonatomic) TTQVideoListItemModel *data; // @synthesize data=_data;
- (void).cxx_destruct;
- (id)genPraiseCountAttributeAtring;
- (id)genPlayCountAttributeAtring;

@end


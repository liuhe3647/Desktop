//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSArray, NSMutableArray;

@interface IMYEBCategoryCell : UITableViewCell
{
    NSArray *_list;
    CDUnknownBlockType _onDidClickEvent;
    long long _offsetIndex;
    NSMutableArray *_items;
}

+ (double)cellHeight;
@property(retain, nonatomic) NSMutableArray *items; // @synthesize items=_items;
@property long long offsetIndex; // @synthesize offsetIndex=_offsetIndex;
@property(copy, nonatomic) CDUnknownBlockType onDidClickEvent; // @synthesize onDidClickEvent=_onDidClickEvent;
@property(retain, nonatomic) NSArray *list; // @synthesize list=_list;
- (void).cxx_destruct;
- (void)initItems;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end


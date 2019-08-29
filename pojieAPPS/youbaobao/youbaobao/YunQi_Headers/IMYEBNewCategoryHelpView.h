//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMYEBNewHelpView.h"

#import "IMY_ThemeChangeProtocol-Protocol.h"

@class NSString, UIImageView;

@interface IMYEBNewCategoryHelpView : IMYEBNewHelpView <IMY_ThemeChangeProtocol>
{
    long long _index;
    UIImageView *_bgImageView;
    UIImageView *_typeImageView;
}

+ (id)shareCategoryHelp;
@property(retain, nonatomic) UIImageView *typeImageView; // @synthesize typeImageView=_typeImageView;
@property(retain, nonatomic) UIImageView *bgImageView; // @synthesize bgImageView=_bgImageView;
@property(nonatomic) long long index; // @synthesize index=_index;
- (void).cxx_destruct;
- (void)imy_themeChanged;
- (void)_initMyself;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


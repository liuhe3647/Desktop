//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMYTLView.h"

@class IMYAvatarImageView;

@interface IMYTLInviteFamilyView : IMYTLView
{
    CDUnknownBlockType _tapBlock;
    IMYAvatarImageView *_motherImageView;
}

@property(retain, nonatomic) IMYAvatarImageView *motherImageView; // @synthesize motherImageView=_motherImageView;
@property(copy, nonatomic) CDUnknownBlockType tapBlock; // @synthesize tapBlock=_tapBlock;
- (void).cxx_destruct;
- (void)layoutWithFamilyList:(id)arg1;
- (id)init;

@end


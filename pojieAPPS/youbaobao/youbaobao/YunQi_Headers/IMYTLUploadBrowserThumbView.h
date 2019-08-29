//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class IMYTLUploadBrowserThumbModel, NSString, UICollectionView;
@protocol IMYTLUploadBrowserThumbViewDelegate;

@interface IMYTLUploadBrowserThumbView : UIView <UICollectionViewDelegate, UICollectionViewDataSource>
{
    id <IMYTLUploadBrowserThumbViewDelegate> _delegate;
    UICollectionView *_collection;
    IMYTLUploadBrowserThumbModel *_selectModel;
}

@property(retain, nonatomic) IMYTLUploadBrowserThumbModel *selectModel; // @synthesize selectModel=_selectModel;
@property(retain, nonatomic) UICollectionView *collection; // @synthesize collection=_collection;
@property(nonatomic) __weak id <IMYTLUploadBrowserThumbViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)selectIndex:(unsigned long long)arg1;
- (void)reload;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)setupSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UISearchBarDelegate-Protocol.h"
#import "UISearchControllerDelegate-Protocol.h"

@class MMTableView, MMTagSearchBar, MMUIViewController, NSString, UIView, WCSearchController;
@protocol WCSearchDelegate, WCSearchSafeProtocol;

@interface WCSearcher : NSObject <UISearchControllerDelegate, UISearchBarDelegate>
{
    _Bool _nonAnimatedStart;
    _Bool _bForbidAutoLayoutDuringSearchAnimation;
    _Bool _isUseGuideView;
    _Bool _becomeFRWithoutSetActive;
    _Bool _shouldRestoreNavBarWhenDismiss;
    _Bool _originDefinesPresentationContext;
    WCSearchController *_searchController;
    id <WCSearchDelegate> _delegate;
    MMUIViewController<WCSearchSafeProtocol> *_viewController;
    UIView *_searchContainerView;
    MMTableView *_resultTableView;
    UIView *_guideContentView;
    Class _searchControllerClass;
}

@property(nonatomic) _Bool originDefinesPresentationContext; // @synthesize originDefinesPresentationContext=_originDefinesPresentationContext;
@property(nonatomic) _Bool shouldRestoreNavBarWhenDismiss; // @synthesize shouldRestoreNavBarWhenDismiss=_shouldRestoreNavBarWhenDismiss;
@property(nonatomic) Class searchControllerClass; // @synthesize searchControllerClass=_searchControllerClass;
@property(nonatomic) _Bool becomeFRWithoutSetActive; // @synthesize becomeFRWithoutSetActive=_becomeFRWithoutSetActive;
@property(retain, nonatomic) UIView *guideContentView; // @synthesize guideContentView=_guideContentView;
@property(retain, nonatomic) MMTableView *resultTableView; // @synthesize resultTableView=_resultTableView;
@property(nonatomic) __weak UIView *searchContainerView; // @synthesize searchContainerView=_searchContainerView;
@property(nonatomic) __weak MMUIViewController<WCSearchSafeProtocol> *viewController; // @synthesize viewController=_viewController;
@property(nonatomic) __weak id <WCSearchDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool isUseGuideView; // @synthesize isUseGuideView=_isUseGuideView;
@property(nonatomic) _Bool bForbidAutoLayoutDuringSearchAnimation; // @synthesize bForbidAutoLayoutDuringSearchAnimation=_bForbidAutoLayoutDuringSearchAnimation;
@property(nonatomic) _Bool nonAnimatedStart; // @synthesize nonAnimatedStart=_nonAnimatedStart;
@property(retain, nonatomic) WCSearchController *searchController; // @synthesize searchController=_searchController;
- (void).cxx_destruct;
- (void)searchBar:(id)arg1 selectedScopeButtonIndexDidChange:(long long)arg2;
- (void)searchBarResultsListButtonClicked:(id)arg1;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (void)searchBarBookmarkButtonClicked:(id)arg1;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (_Bool)searchBar:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarTextDidEndEditing:(id)arg1;
- (_Bool)searchBarShouldEndEditing:(id)arg1;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (_Bool)searchBarShouldBeginEditing:(id)arg1;
- (void)presentSearchController:(id)arg1;
- (void)didDismissSearchController:(id)arg1;
- (void)willDismissSearchController:(id)arg1;
- (void)didPresentSearchController:(id)arg1;
- (void)willPresentSearchController:(id)arg1;
- (void)onSearchBarMoveToContainerView:(id)arg1;
- (void)prepareSearchBarInNavMode;
- (void)noAnimatedSetActive:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dismissSearch;
- (void)internalAddViews;
- (void)enableCancelButton;
- (void)internalAddGuideView;
- (void)internalAddResultTableView;
@property(readonly, nonatomic) MMTagSearchBar *searchBar; // @dynamic searchBar;
- (void)commonInit;
- (void)dealloc;
- (id)initWithContentViewController:(id)arg1 searchControllerClass:(Class)arg2;
- (id)initWithContentViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

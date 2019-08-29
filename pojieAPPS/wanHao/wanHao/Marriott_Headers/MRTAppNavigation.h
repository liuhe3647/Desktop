//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MRTAppNavigationPath, NSString;

@interface MRTAppNavigation : NSObject
{
    NSString *_currentPageIdentifier;
    MRTAppNavigationPath *_unopenedNavigationPath;
}

+ (id)_signedOutDestinationIdentifiers;
+ (_Bool)_destinationNavIdRequiresSignIn:(id)arg1;
+ (_Bool)_navigationPathRequiresSignIn:(id)arg1;
+ (_Bool)_deepLinkRequiresLogIn:(id)arg1;
+ (id)_destinationNavIdFromNavigationPath:(id)arg1;
+ (void)_addParameterKey:(id)arg1 value:(id)arg2 toPathString:(id)arg3;
+ (id)_searchCalendarPathStringWithParameters:(id)arg1;
+ (id)_searchLocationPathStringWithParameters:(id)arg1;
+ (id)_searchResultsPathStringWithIdentifier:(id)arg1 parameters:(id)arg2;
+ (id)_stayPathStringWithIdentifier:(id)arg1 parameters:(id)arg2 separator:(id)arg3;
+ (id)pathStringForDestinationWithIdentifier:(id)arg1 parameters:(id)arg2 actions:(id)arg3 fragments:(id)arg4;
+ (id)pathStringForDestinationWithIdentifier:(id)arg1 parameters:(id)arg2;
+ (id)_navIdAndParametersForDestinationString:(id)arg1;
+ (id)_pathStringForDestinationString:(id)arg1;
+ (id)monthDayYearDateFormatter;
+ (id)yearMonthDayDateFormatter;
@property(retain, nonatomic) MRTAppNavigationPath *unopenedNavigationPath; // @synthesize unopenedNavigationPath=_unopenedNavigationPath;
@property(copy, nonatomic) NSString *currentPageIdentifier; // @synthesize currentPageIdentifier=_currentPageIdentifier;
- (void).cxx_destruct;
- (id)_rootViewController;
- (id)_pathFromPathString:(id)arg1;
- (void)userDidSignIn:(id)arg1;
- (void)navigateWithDeepLink:(id)arg1;
- (void)navigateToDestinationString:(id)arg1;
- (void)navigateToDestinationWithIdentifier:(id)arg1 parameters:(id)arg2 actions:(id)arg3 fragments:(id)arg4;
- (void)navigateToDestinationWithIdentifier:(id)arg1 parameters:(id)arg2;
- (void)navigateToNavigationPath:(id)arg1;
- (void)navigateToPathString:(id)arg1;
- (void)dealloc;
- (id)init;

@end


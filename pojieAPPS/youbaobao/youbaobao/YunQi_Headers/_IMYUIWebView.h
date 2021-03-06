//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIWebView.h>

@class NSMutableArray;

@interface _IMYUIWebView : UIWebView
{
    _Bool _hasLoadFinished;
    NSMutableArray *_pendingEvaluatingScripts;
}

@property(retain, nonatomic) NSMutableArray *pendingEvaluatingScripts; // @synthesize pendingEvaluatingScripts=_pendingEvaluatingScripts;
@property(nonatomic) _Bool hasLoadFinished; // @synthesize hasLoadFinished=_hasLoadFinished;
- (void).cxx_destruct;
- (id)stringByEvaluatingJavaScriptFromString:(id)arg1;
- (void)runPendingEvaluatingScripts;
- (void)runLoadFinishedScriptsAction;
- (void)pendingRunLoadFinishedAction;
- (void)loadHTMLString:(id)arg1 baseURL:(id)arg2;
- (void)loadData:(id)arg1 MIMEType:(id)arg2 textEncodingName:(id)arg3 baseURL:(id)arg4;
- (void)loadRequest:(id)arg1;

@end


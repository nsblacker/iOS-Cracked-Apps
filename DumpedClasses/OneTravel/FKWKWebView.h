//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WKWebView.h"

#import "FKWebView.h"
#import "WKNavigationDelegate.h"
#import "WKUIDelegate.h"

@class FKBridge, FKWebViewHelper, NSString, NSURLRequest, UIScrollView, WKWebViewConfiguration;

@interface FKWKWebView : WKWebView <WKUIDelegate, WKNavigationDelegate, FKWebView>
{
    FKBridge *bridge;
    CDUnknownBlockType allowNavigationURL;
    FKWebViewHelper *helper;
    id <FKWrapperViewDelegate> _webDelegate;
    NSURLRequest *_pageRequest;
    CDUnknownBlockType _doneHandler;
    WKWebViewConfiguration *_customConfiguration;
}

@property(retain, nonatomic) WKWebViewConfiguration *customConfiguration; // @synthesize customConfiguration=_customConfiguration;
@property(copy, nonatomic) CDUnknownBlockType doneHandler; // @synthesize doneHandler=_doneHandler;
@property(retain, nonatomic) NSURLRequest *pageRequest; // @synthesize pageRequest=_pageRequest;
@property(nonatomic) __weak id <FKWrapperViewDelegate> webDelegate; // @synthesize webDelegate=_webDelegate;
@property(retain, nonatomic) FKWebViewHelper *helper; // @synthesize helper;
@property(copy, nonatomic) CDUnknownBlockType allowNavigationURL; // @synthesize allowNavigationURL;
@property(retain, nonatomic) FKBridge *bridge; // @synthesize bridge;
- (void).cxx_destruct;
- (void)webView:(id)arg1 didReceiveServerRedirectForProvisionalNavigation:(id)arg2;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (void)webView:(id)arg1 decidePolicyForNavigationResponse:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (void)webView:(id)arg1 didCommitNavigation:(id)arg2;
- (void)webView:(id)arg1 didStartProvisionalNavigation:(id)arg2;
- (void)webView:(id)arg1 runJavaScriptTextInputPanelWithPrompt:(id)arg2 defaultText:(id)arg3 initiatedByFrame:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)webView:(id)arg1 runJavaScriptConfirmPanelWithMessage:(id)arg2 initiatedByFrame:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)webView:(id)arg1 runJavaScriptAlertPanelWithMessage:(id)arg2 initiatedByFrame:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)webView:(id)arg1 createWebViewWithConfiguration:(id)arg2 forNavigationAction:(id)arg3 windowFeatures:(id)arg4;
- (id)wrapperView;
- (void)reloadPageWithDoneHandler:(CDUnknownBlockType)arg1;
- (void)loadRequest:(id)arg1 doneHandler:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (void)addUserScript:(id)arg1;
- (id)loadJSModulesScript;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)evaluateScript:(id)arg1 handler:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) UIScrollView *scrollView;
@property(readonly) Class superclass;

@end

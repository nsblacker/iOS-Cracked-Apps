//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "aluWebViewController.h"

#import "UIAlertViewDelegate.h"
#import "aluWebViewDelegate.h"

@class NSString, aluMTopService;

@interface aluRegH5ViewController : aluWebViewController <aluWebViewDelegate, UIAlertViewDelegate>
{
    _Bool _emailRegMonitorAdded;
    NSString *_emailVerifyUrlPrefix;
    CDUnknownBlockType _extreaCallback;
    aluMTopService *_verityEmailInvoker;
}

@property(nonatomic) _Bool emailRegMonitorAdded; // @synthesize emailRegMonitorAdded=_emailRegMonitorAdded;
@property(retain, nonatomic) aluMTopService *verityEmailInvoker; // @synthesize verityEmailInvoker=_verityEmailInvoker;
@property(copy, nonatomic) CDUnknownBlockType extreaCallback; // @synthesize extreaCallback=_extreaCallback;
@property(retain, nonatomic) NSString *emailVerifyUrlPrefix; // @synthesize emailVerifyUrlPrefix=_emailVerifyUrlPrefix;
- (void).cxx_destruct;
- (void)gotoLoginController:(id)arg1;
- (void)willWebViewCloseCallback:(id)arg1 request:(id)arg2 params:(id)arg3;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (id)loginControllerInNavStack;
- (id)registerControllerInNavStack;
- (void)onBack:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

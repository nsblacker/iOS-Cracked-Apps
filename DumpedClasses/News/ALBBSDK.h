//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ALBBCartService.h"
#import "ALBBItemService.h"
#import "ALBBLogSource.h"
#import "ALBBLoginService.h"
#import "ALBBOrderService.h"
#import "ALBBPromotionService.h"

@class ALBBEventBusWrapper, NSString;

@interface ALBBSDK : NSObject <ALBBLoginService, ALBBCartService, ALBBItemService, ALBBOrderService, ALBBPromotionService, ALBBLogSource>
{
    _Bool _isAlreayShowStartTip;
    ALBBEventBusWrapper *_eventWrapper;
}

+ (id)sharedInstance;
+ (void)reset;
@property(retain, nonatomic) ALBBEventBusWrapper *eventWrapper; // @synthesize eventWrapper=_eventWrapper;
@property(nonatomic) _Bool isAlreayShowStartTip; // @synthesize isAlreayShowStartTip=_isAlreayShowStartTip;
- (void).cxx_destruct;
- (id)messageWithCode:(long long)arg1 level:(unsigned long long)arg2;
- (void)warnDebugOptionIfNeeded;
- (void)configChanged;
- (void)registerEvent;
- (_Bool)handleOpenURL:(id)arg1;
- (id)getService:(id)arg1;
- (void)asyncInit:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (void)asyncInit;
- (void)dealloc;
- (id)init;
- (void)closeUserTracker;
- (void)closeCrashHandler;
- (void)setDebugLogOpen:(_Bool)arg1;
- (id)getWebViewUISettings;
- (void)setWebViewUISettings:(id)arg1;
- (void)setSecGuardImagePostfix:(id)arg1;
- (void)setChannel:(id)arg1 name:(id)arg2;
- (void)setAppVersion:(id)arg1;
- (unsigned long long)getTaeSDKCurrentEnvironment;
- (void)setTaeSDKEnvironment:(unsigned long long)arg1;
- (void)asyncInit:(CDUnknownBlockType)arg1 failedCallback:(CDUnknownBlockType)arg2;
- (void)setViewType:(id)arg1;
- (void)setUseTaobaoNativeDetail:(_Bool)arg1;
- (void)setISVCode:(id)arg1;
- (void)setAppTag:(id)arg1;
- (void)logout;
- (void)setSessionStateChangedHandler:(CDUnknownBlockType)arg1;
- (void)showQRLogin:(id)arg1 params:(id)arg2 successCallback:(CDUnknownBlockType)arg3 failedCallback:(CDUnknownBlockType)arg4;
- (void)showLogin:(id)arg1 successCallback:(CDUnknownBlockType)arg2 failedCallback:(CDUnknownBlockType)arg3 notUseTaobaoAppLogin:(_Bool)arg4 isBackButtonHidden:(_Bool)arg5;
- (void)showLogin:(id)arg1 successCallback:(CDUnknownBlockType)arg2 failedCallback:(CDUnknownBlockType)arg3 notUseTaobaoAppLogin:(_Bool)arg4;
- (void)showLogin:(id)arg1 successCallback:(CDUnknownBlockType)arg2 failedCallback:(CDUnknownBlockType)arg3;
- (void)showLoginOnRootView:(id)arg1 successCallback:(CDUnknownBlockType)arg2 failedCallback:(CDUnknownBlockType)arg3 notUseTaobaoAppLogin:(_Bool)arg4 isBackButtonHidden:(_Bool)arg5;
- (_Bool)checkJumpTBDetail:(id)arg1 params:(id)arg2 taoKeParams:(id)arg3;
- (void)showTaoKeItemDetail:(id)arg1 isNeedPush:(_Bool)arg2 webViewUISettings:(id)arg3 itemId:(id)arg4 itemType:(long long)arg5 params:(id)arg6 taoKeParams:(id)arg7 tradeProcessSuccessCallback:(CDUnknownBlockType)arg8 tradeProcessFailedCallback:(CDUnknownBlockType)arg9;
- (void)showItemDetail:(id)arg1 isNeedPush:(_Bool)arg2 webViewUISettings:(id)arg3 itemId:(id)arg4 itemType:(long long)arg5 params:(id)arg6 tradeProcessSuccessCallback:(CDUnknownBlockType)arg7 tradeProcessFailedCallback:(CDUnknownBlockType)arg8;
- (void)show:(id)arg1 isNeedPush:(_Bool)arg2 webViewUISettings:(id)arg3 page:(id)arg4 taoKeParams:(id)arg5 tradeProcessSuccessCallback:(CDUnknownBlockType)arg6 tradeProcessFailedCallback:(CDUnknownBlockType)arg7;
- (void)showETicketDetail:(id)arg1 isNeedPush:(_Bool)arg2 webViewUISettings:(id)arg3 orderId:(id)arg4 tradeProcessSuccessCallback:(CDUnknownBlockType)arg5 tradeProcessFailedCallback:(CDUnknownBlockType)arg6;
- (void)showPromotions:(id)arg1 isNeedPush:(_Bool)arg2 webViewUISettings:(id)arg3 param:(id)arg4 type:(id)arg5 tradeProcessSuccessCallback:(CDUnknownBlockType)arg6 tradeProcessFailedCallback:(CDUnknownBlockType)arg7;
- (void)showTaoKeOrderWithSku:(id)arg1 isNeedPush:(_Bool)arg2 webViewUISettings:(id)arg3 itemId:(id)arg4 params:(id)arg5 taoKeParams:(id)arg6 tradeProcessSuccessCallback:(CDUnknownBlockType)arg7 tradeProcessFailedCallback:(CDUnknownBlockType)arg8;
- (void)showOrderWithSku:(id)arg1 isNeedPush:(_Bool)arg2 webViewUISettings:(id)arg3 itemId:(id)arg4 params:(id)arg5 tradeProcessSuccessCallback:(CDUnknownBlockType)arg6 tradeProcessFailedCallback:(CDUnknownBlockType)arg7;
- (void)showTaoKeOrder:(id)arg1 isNeedPush:(_Bool)arg2 webViewUISettings:(id)arg3 orderItem:(id)arg4 taoKeParams:(id)arg5 tradeProcessSuccessCallback:(CDUnknownBlockType)arg6 tradeProcessFailedCallback:(CDUnknownBlockType)arg7;
- (void)showOrder:(id)arg1 isNeedPush:(_Bool)arg2 webViewUISettings:(id)arg3 orderItems:(id)arg4 tradeProcessSuccessCallback:(CDUnknownBlockType)arg5 tradeProcessFailedCallback:(CDUnknownBlockType)arg6;
- (void)showTaoKeItemDetailByOpenId:(id)arg1 isNeedPush:(_Bool)arg2 webViewUISettings:(id)arg3 itemId:(id)arg4 itemType:(long long)arg5 params:(id)arg6 taoKeParams:(id)arg7 tradeProcessSuccessCallback:(CDUnknownBlockType)arg8 tradeProcessFailedCallback:(CDUnknownBlockType)arg9;
- (void)showTaoKeItemDetailByItemId:(id)arg1 isNeedPush:(_Bool)arg2 webViewUISettings:(id)arg3 itemId:(id)arg4 itemType:(long long)arg5 params:(id)arg6 taoKeParams:(id)arg7 tradeProcessSuccessCallback:(CDUnknownBlockType)arg8 tradeProcessFailedCallback:(CDUnknownBlockType)arg9;
- (void)showItemDetailByOpenId:(id)arg1 isNeedPush:(_Bool)arg2 webViewUISettings:(id)arg3 itemId:(id)arg4 itemType:(long long)arg5 params:(id)arg6 tradeProcessSuccessCallback:(CDUnknownBlockType)arg7 tradeProcessFailedCallback:(CDUnknownBlockType)arg8;
- (void)showItemDetailByItemId:(id)arg1 isNeedPush:(_Bool)arg2 webViewUISettings:(id)arg3 itemId:(id)arg4 itemType:(long long)arg5 params:(id)arg6 tradeProcessSuccessCallback:(CDUnknownBlockType)arg7 tradeProcessFailedCallback:(CDUnknownBlockType)arg8;
- (void)showPage:(id)arg1 isNeedPush:(_Bool)arg2 pageUrl:(id)arg3 webViewUISettings:(id)arg4 tradeProcessSuccessCallback:(CDUnknownBlockType)arg5 tradeProcessFailedCallback:(CDUnknownBlockType)arg6;
- (void)showPage:(id)arg1 isNeedPush:(_Bool)arg2 openUrl:(id)arg3;
- (void)addTaoKeItem2Cart:(id)arg1 isNeedPush:(_Bool)arg2 webViewUISettings:(id)arg3 itemId:(id)arg4 taoKeParams:(id)arg5 addCartSuccessCallback:(CDUnknownBlockType)arg6 addCartCacelledCallback:(CDUnknownBlockType)arg7;
- (void)addItem2Cart:(id)arg1 isNeedPush:(_Bool)arg2 webViewUISettings:(id)arg3 itemId:(id)arg4 addCartSuccessCallback:(CDUnknownBlockType)arg5 addCartCacelledCallback:(CDUnknownBlockType)arg6;
- (void)showCart:(id)arg1 isNeedPush:(_Bool)arg2 webViewUISettings:(id)arg3 tradeProcessSuccessCallback:(CDUnknownBlockType)arg4 tradeProcessFailedCallback:(CDUnknownBlockType)arg5;
- (void)setTaoKeParams:(id)arg1;
@property(nonatomic) _Bool detectWebViewPayment;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

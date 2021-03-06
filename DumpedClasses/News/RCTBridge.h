//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "RCTInvalidating.h"

@class NSArray, NSDictionary, NSLock, NSString, NSURL, RCTAccessibilityManager, RCTDevMenu, RCTImageLoader, RCTImageStoreManager, RCTNetworking, RCTPerformanceLogger, RCTRedBox, RCTUIManager;

@interface RCTBridge : NSObject <RCTInvalidating>
{
    NSURL *_delegateBundleURL;
    NSURL *_bundleURL;
    Class _executorClass;
    id <RCTBridgeDelegate> _delegate;
    NSDictionary *_launchOptions;
    RCTPerformanceLogger *_performanceLogger;
    long long _flowID;
    struct __CFDictionary *_flowIDMap;
    NSLock *_flowIDMapLock;
    RCTBridge *_batchedBridge;
    CDUnknownBlockType _moduleProvider;
}

+ (void)setCurrentBridge:(id)arg1;
+ (id)currentBridge;
+ (void)initialize;
@property(readonly, copy, nonatomic) CDUnknownBlockType moduleProvider; // @synthesize moduleProvider=_moduleProvider;
@property(retain) RCTBridge *batchedBridge; // @synthesize batchedBridge=_batchedBridge;
@property(retain, nonatomic) NSLock *flowIDMapLock; // @synthesize flowIDMapLock=_flowIDMapLock;
@property(nonatomic) struct __CFDictionary *flowIDMap; // @synthesize flowIDMap=_flowIDMap;
@property(nonatomic) long long flowID; // @synthesize flowID=_flowID;
@property(readonly, nonatomic) RCTPerformanceLogger *performanceLogger; // @synthesize performanceLogger=_performanceLogger;
@property(readonly, copy, nonatomic) NSDictionary *launchOptions; // @synthesize launchOptions=_launchOptions;
@property(readonly, nonatomic) __weak id <RCTBridgeDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) Class executorClass; // @synthesize executorClass=_executorClass;
@property(retain, nonatomic) NSURL *bundleURL; // @synthesize bundleURL=_bundleURL;
- (void).cxx_destruct;
- (id)callFunctionOnModule:(id)arg1 method:(id)arg2 arguments:(id)arg3 error:(id *)arg4;
- (void)enqueueCallback:(id)arg1 args:(id)arg2;
- (void)enqueueJSCall:(id)arg1 method:(id)arg2 args:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)enqueueJSCall:(id)arg1 args:(id)arg2;
- (void)invalidate;
- (_Bool)isBatchActive;
@property(readonly, nonatomic, getter=isValid) _Bool valid;
@property(readonly, nonatomic, getter=isLoading) _Bool loading;
- (void)createBatchedBridge;
- (void)setUp;
- (void)requestReload;
- (void)reload;
- (void)whitelistedModulesDidChange;
- (_Bool)moduleIsInitialized:(Class)arg1;
- (id)modulesConformingToProtocol:(id)arg1;
- (id)moduleForClass:(Class)arg1;
- (id)moduleForName:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *moduleClasses;
- (void)bindKeys;
- (void)dealloc;
- (id)init;
- (id)initWithDelegate:(id)arg1 bundleURL:(id)arg2 moduleProvider:(CDUnknownBlockType)arg3 launchOptions:(id)arg4;
- (id)initWithBundleURL:(id)arg1 moduleProvider:(CDUnknownBlockType)arg2 launchOptions:(id)arg3;
- (id)initWithDelegate:(id)arg1 launchOptions:(id)arg2;
@property(readonly, nonatomic) RCTAccessibilityManager *accessibilityManager;
- (id)eventDispatcher;
@property(readonly, nonatomic) RCTImageLoader *imageLoader;
@property(readonly, nonatomic) RCTNetworking *networking;
@property(readonly, nonatomic) RCTDevMenu *devMenu;
@property(readonly, nonatomic) RCTRedBox *redBox;
@property(readonly, nonatomic) RCTUIManager *uiManager;
@property(readonly, nonatomic) RCTImageStoreManager *imageStoreManager;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


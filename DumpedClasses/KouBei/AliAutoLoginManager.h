//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface AliAutoLoginManager : NSObject
{
}

+ (id)sharedManager;
- (id)currentNaviController;
- (id)autoLoginTaobaoData:(id)arg1;
- (double)autoLoginSyncExpireTime:(id)arg1;
- (void)sysErrorHandle:(id)arg1 callback:(CDUnknownBlockType)arg2 response:(id)arg3;
- (void)exceedPhoneHandle:(id)arg1 callback:(CDUnknownBlockType)arg2 response:(id)arg3;
- (void)activeTaobaoNickHandle:(id)arg1 callback:(CDUnknownBlockType)arg2 response:(id)arg3;
- (void)bindPhoneHandle:(id)arg1 callback:(CDUnknownBlockType)arg2 response:(id)arg3;
- (id)executeAutologin:(id)arg1;
- (id)requestDomains:(id)arg1;
- (void)showToast:(id)arg1 response:(id)arg2;
- (id)executeAutologin1:(id)arg1;
- (void)abnormalAccountHandle:(id)arg1 done:(CDUnknownBlockType)arg2 response:(id)arg3;
- (void)exceptionHandle:(id)arg1 done:(CDUnknownBlockType)arg2 response:(id)arg3;
- (_Bool)canUseCache:(id)arg1;
- (void)doAutoLogin:(id)arg1 done:(CDUnknownBlockType)arg2;
- (_Bool)canAutologin:(id)arg1;
- (id)autoLoginTaobaoSync:(id)arg1;
- (void)autoLoginTaobaoAsync:(id)arg1 done:(CDUnknownBlockType)arg2;
- (id)autoLoginSync:(id)arg1;
- (void)autoLoginAsync:(id)arg1 done:(CDUnknownBlockType)arg2;

@end


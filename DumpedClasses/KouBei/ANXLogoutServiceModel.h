//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ANXLogManager, ANXRuntimeConfig, NSString;

@interface ANXLogoutServiceModel : NSObject
{
    ANXLogManager *_logManager;
    ANXRuntimeConfig *_runtimeConfig;
    NSString *_logoutBizData;
    NSString *_isTrojan;
    NSString *_isPrisonBreak;
    NSString *_currentOperateMobile;
}

@property(copy, nonatomic) NSString *currentOperateMobile; // @synthesize currentOperateMobile=_currentOperateMobile;
@property(copy, nonatomic) NSString *isPrisonBreak; // @synthesize isPrisonBreak=_isPrisonBreak;
@property(copy, nonatomic) NSString *isTrojan; // @synthesize isTrojan=_isTrojan;
@property(copy, nonatomic) NSString *logoutBizData; // @synthesize logoutBizData=_logoutBizData;
@property(retain, nonatomic) ANXRuntimeConfig *runtimeConfig; // @synthesize runtimeConfig=_runtimeConfig;
@property(retain, nonatomic) ANXLogManager *logManager; // @synthesize logManager=_logManager;
- (void).cxx_destruct;
- (void)buildRuntimeConfig;
- (_Bool)validateParams;
- (id)extParams;
- (id)initWithParams:(id)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SecurityCheckItemBase.h"

@class NSMutableArray, NSString;

@interface SecurityCheckWebMd5 : SecurityCheckItemBase
{
    _Bool _isFinished;
    _Bool _isScanning;
    NSMutableArray *_results;
    NSString *_checkUrl;
}

+ (void)saveCheckURL:(id)arg1;
+ (_Bool)checkURL:(id)arg1 md5:(id)arg2;
@property(retain, nonatomic) NSString *checkUrl; // @synthesize checkUrl=_checkUrl;
@property(retain, nonatomic) NSMutableArray *results; // @synthesize results=_results;
@property(nonatomic) _Bool isScanning; // @synthesize isScanning=_isScanning;
@property(nonatomic) _Bool isFinished; // @synthesize isFinished=_isFinished;
- (void).cxx_destruct;
- (id)getCheckResult;
- (void)stopCheck;
- (void)finish;
- (void)doneResult:(id)arg1 url:(id)arg2;
- (void)startCheck;
- (void)dealloc;

@end


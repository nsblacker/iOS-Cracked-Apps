//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSTimer, SSHttpOperation;

@interface SSTracker : NSObject
{
    int _policy;
    _Bool _started;
    int _batchInterval;
    SSHttpOperation *_operation;
    NSTimer *_trackerTimer;
}

+ (void)eventV3:(id)arg1 params:(id)arg2;
+ (void)ssTrackEventWithCustomKeys:(id)arg1 label:(id)arg2 value:(id)arg3 source:(id)arg4 extraDic:(id)arg5;
+ (void)category:(id)arg1 event:(id)arg2 label:(id)arg3 dict:(id)arg4 json:(id)arg5;
+ (void)category:(id)arg1 event:(id)arg2 label:(id)arg3 dict:(id)arg4;
+ (void)event:(id)arg1 label:(id)arg2 json:(id)arg3;
+ (void)setBatchEventInterval:(id)arg1;
+ (void)eventData:(id)arg1 policy:(int)arg2 isV3Format:(_Bool)arg3;
+ (void)eventData:(id)arg1 policy:(int)arg2;
+ (void)eventData:(id)arg1 isV3Format:(_Bool)arg2;
+ (void)eventData:(id)arg1;
+ (void)event:(id)arg1 label:(id)arg2;
+ (void)event:(id)arg1 label:(id)arg2 value:(id)arg3 extValue:(id)arg4 extValue2:(id)arg5 dict:(id)arg6;
+ (void)event:(id)arg1 label:(id)arg2 value:(id)arg3 extValue:(id)arg4 extValue2:(id)arg5;
+ (void)setPolicy:(int)arg1;
+ (id)appKey;
+ (void)setAppKey:(id)arg1;
+ (id)sharedTracker;
+ (void)startWithAppKey:(id)arg1 disturbanceAppLogConfig:(_Bool)arg2;
@property(nonatomic) int batchInterval; // @synthesize batchInterval=_batchInterval;
@property(retain, nonatomic) NSTimer *trackerTimer; // @synthesize trackerTimer=_trackerTimer;
@property(retain, nonatomic) SSHttpOperation *_operation; // @synthesize _operation;
- (void).cxx_destruct;
- (void)_event:(id)arg1 category:(id)arg2 label:(id)arg3 value:(id)arg4 extValue:(id)arg5 eventType:(int)arg6;
- (void)_event:(id)arg1 category:(id)arg2 label:(id)arg3 value:(id)arg4 extValue:(id)arg5;
- (void)_event:(id)arg1 label:(id)arg2;
- (void)_eventWithData:(id)arg1;
- (void)setPolicy:(int)arg1;
- (int)policy;
- (void)didEnterBackground:(id)arg1;
- (void)willEnterForeground:(id)arg1;
- (void)startTrackerCleaner;
- (void)stopTrackerCleanerTimer;
- (void)startTrackerCleanerTimer;
- (void)_startWithAppKey:(id)arg1 disturbanceAppLogConfig:(_Bool)arg2;
- (id)init;
- (void)dealloc;
- (double)_dbsize;
- (void)monitorApplogDBSize;
- (void)monitorApplogCount:(long long)arg1 lastActiveTimeInterval:(double)arg2;

@end


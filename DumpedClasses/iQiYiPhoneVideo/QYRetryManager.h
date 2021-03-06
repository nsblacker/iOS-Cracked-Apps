//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSTimer;
@protocol QYRetryManagerDelegate;

@interface QYRetryManager : NSObject
{
    NSTimer *_timer;
    double _fixInterval;
    _Bool _hasScheduled;
    int _retryTimes;
    int _retriedTimes;
    id <QYRetryManagerDelegate> _delegate;
    double _retryInterval;
}

@property(readonly, nonatomic) int retriedTimes; // @synthesize retriedTimes=_retriedTimes;
@property(nonatomic) double retryInterval; // @synthesize retryInterval=_retryInterval;
@property(nonatomic) int retryTimes; // @synthesize retryTimes=_retryTimes;
@property(nonatomic) __weak id <QYRetryManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)doRetryByTimer:(id)arg1;
- (void)fixInterval;
- (void)scheduleTimer;
- (void)schedule;
- (void)reset;
@property(readonly, nonatomic) _Bool shouldSchedule;
- (id)init;
- (void)dealloc;

@end


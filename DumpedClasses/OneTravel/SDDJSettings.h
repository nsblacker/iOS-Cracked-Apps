//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNumber, NSString;

@interface SDDJSettings : NSObject
{
    unsigned long long _cityID;
    unsigned long long _orderWaitTimeout;
    unsigned long long _queryInterval;
    double _cityInsideCountDownTime;
    NSString *_cityInsideTips;
    NSNumber *_standardTime;
}

@property(retain, nonatomic) NSNumber *standardTime; // @synthesize standardTime=_standardTime;
@property(retain, nonatomic) NSString *cityInsideTips; // @synthesize cityInsideTips=_cityInsideTips;
@property(nonatomic) double cityInsideCountDownTime; // @synthesize cityInsideCountDownTime=_cityInsideCountDownTime;
@property(nonatomic) unsigned long long queryInterval; // @synthesize queryInterval=_queryInterval;
@property(nonatomic) unsigned long long orderWaitTimeout; // @synthesize orderWaitTimeout=_orderWaitTimeout;
@property(nonatomic) unsigned long long cityID; // @synthesize cityID=_cityID;
- (void).cxx_destruct;
- (id)init;

@end

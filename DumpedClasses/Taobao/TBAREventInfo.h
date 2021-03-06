//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, TBAREventConfig, TBAREventResource;

@interface TBAREventInfo : NSObject
{
    NSString *_eventId;
    NSString *_shopId;
    long long _eventType;
    TBAREventConfig *_eventConfig;
    TBAREventResource *_eventResources;
}

@property(retain, nonatomic) TBAREventResource *eventResources; // @synthesize eventResources=_eventResources;
@property(retain, nonatomic) TBAREventConfig *eventConfig; // @synthesize eventConfig=_eventConfig;
@property(nonatomic) long long eventType; // @synthesize eventType=_eventType;
@property(copy, nonatomic) NSString *shopId; // @synthesize shopId=_shopId;
@property(copy, nonatomic) NSString *eventId; // @synthesize eventId=_eventId;
- (void).cxx_destruct;

@end


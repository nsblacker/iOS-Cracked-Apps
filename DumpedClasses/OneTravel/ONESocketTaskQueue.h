//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSObject<OS_dispatch_source>;

@interface ONESocketTaskQueue : NSObject
{
    unsigned int _capacity;
    NSMutableDictionary *_queue;
    NSObject<OS_dispatch_source> *_gcdQueue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_source> *gcdQueue; // @synthesize gcdQueue=_gcdQueue;
@property(nonatomic) unsigned int capacity; // @synthesize capacity=_capacity;
@property(retain, nonatomic) NSMutableDictionary *queue; // @synthesize queue=_queue;
- (void).cxx_destruct;
- (id)getTaskWithSeqId:(unsigned long long)arg1;
- (int)delTaskWithSeqId:(unsigned long long)arg1;
- (void)taskTimeoutHandler:(id)arg1;
- (int)addTask:(id)arg1;
- (_Bool)isFull;
- (void)destory;
- (id)initWithGCDQueue:(id)arg1;

@end

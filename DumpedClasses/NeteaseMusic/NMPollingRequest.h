//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NMBaseRequest.h"

@class NSDictionary;

@interface NMPollingRequest : NMBaseRequest
{
    _Bool _backend;
    NSDictionary *_extendParam;
}

@property(nonatomic) _Bool backend; // @synthesize backend=_backend;
@property(retain, nonatomic) NSDictionary *extendParam; // @synthesize extendParam=_extendParam;
- (void)dealloc;
- (id)init;

@end

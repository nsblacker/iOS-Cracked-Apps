//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface UTMCTnetRequestHelper : NSObject
{
    long long _adashProtocolType;
}

+ (id)uploadDataToBufferWithStream:(id)arg1 host:(id)arg2 port:(unsigned int)arg3 tnetObject:(id *)arg4;
+ (void)setAdashProtocolType:(long long)arg1;
+ (id)sharedInstance;
@property(nonatomic) long long adashProtocolType; // @synthesize adashProtocolType=_adashProtocolType;
- (long long)currentAdashProtocolType;
- (id)_headerToBuffer:(unsigned long long)arg1;
- (id)_payLoadHeaderToBufferWithSession:(id)arg1;
- (id)_v2_uploadLogsToBufferWithLogsDict:(id)arg1 session:(id)arg2;
- (id)_v1_uploadLogsToBuffer:(id)arg1;
- (id)_uploadDataToBufferWithStream:(id)arg1 host:(id)arg2 port:(unsigned int)arg3 tnetObject:(id *)arg4;

@end


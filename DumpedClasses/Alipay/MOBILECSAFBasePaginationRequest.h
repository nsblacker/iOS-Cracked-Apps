//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MOBILECSAFBaseRpcRequest.h"

@class NSString;

@interface MOBILECSAFBasePaginationRequest : MOBILECSAFBaseRpcRequest
{
    int _pageSize;
    NSString *_lastId;
}

@property(nonatomic) int pageSize; // @synthesize pageSize=_pageSize;
@property(retain, nonatomic) NSString *lastId; // @synthesize lastId=_lastId;
- (void).cxx_destruct;

@end


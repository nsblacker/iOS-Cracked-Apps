//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UMSocialStatisticsTaskV2.h"

@interface UMSocialPostLocalStatistics : UMSocialStatisticsTaskV2
{
}

- (void)handleTaskOperationWithData:(id)arg1 withData:(id)arg2 withError:(id)arg3;
- (id)makeURLRequest;
- (id)makeRequestWithMethodPostLocalStatisticsWithPath:(id)arg1 pathParameters:(id)arg2 jsonbody:(id)arg3 headers:(id)arg4;
- (id)requestWithPath:(id)arg1 parameters:(id)arg2 headers:(id)arg3;
- (void)appendToSourceFromDicItem:(id)arg1 key:(id)arg2 parameters:(id)arg3;
- (id)getStringFromDictionary:(id)arg1 key:(id)arg2;

@end

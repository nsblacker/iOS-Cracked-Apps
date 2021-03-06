//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSURLSessionDataDelegate-Protocol.h"
#import "NSURLSessionDelegate-Protocol.h"
#import "NSURLSessionDownloadDelegate-Protocol.h"
#import "NSURLSessionTaskDelegate-Protocol.h"

@class NSLock, NSMutableArray, NSString, NSURLSession, NSURLSessionConfiguration;

@interface MQQURLSession : NSObject <NSURLSessionDelegate, NSURLSessionTaskDelegate, NSURLSessionDataDelegate, NSURLSessionDownloadDelegate>
{
    _Bool _unavailable;
    NSLock *_requestLock;
    NSMutableArray *_requestArray;
    NSURLSession *_session;
    CDUnknownBlockType _backgroundURLSessionCompletionHandler;
}

+ (id)unavailableSession;
+ (id)sessionWithConfiguration:(id)arg1;
+ (id)sharedSession;
+ (_Bool)supportsNSURLSession;
@property(copy, nonatomic) CDUnknownBlockType backgroundURLSessionCompletionHandler; // @synthesize backgroundURLSessionCompletionHandler=_backgroundURLSessionCompletionHandler;
@property(readonly, copy, nonatomic) NSURLSession *session; // @synthesize session=_session;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didResumeAtOffset:(long long)arg3 expectedTotalBytes:(long long)arg4;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didWriteData:(long long)arg3 totalBytesWritten:(long long)arg4 totalBytesExpectedToWrite:(long long)arg5;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSessionDidFinishEventsForBackgroundURLSession:(id)arg1;
- (void)invalidateAndCancel;
- (id)requestFromSessionTask:(id)arg1;
- (void)requestDidStop:(id)arg1;
- (id)requestWithURL:(id)arg1;
@property(readonly, copy, nonatomic) NSURLSessionConfiguration *configuration;
- (void)dealloc;
- (id)initUnavailableSession;
- (id)initWithConfiguration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


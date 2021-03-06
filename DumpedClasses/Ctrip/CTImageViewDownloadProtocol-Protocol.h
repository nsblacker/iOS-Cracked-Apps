//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, NSURL, UIImage;

@protocol CTImageViewDownloadProtocol <NSObject>

@optional
- (void)downloadDidFailWithURL:(NSURL *)arg1 error:(NSError *)arg2;
- (void)downloadDidCompleteWithURL:(NSURL *)arg1 image:(UIImage *)arg2;
- (void)downloadDidProgressWithURL:(NSURL *)arg1 receivedBytes:(unsigned long long)arg2 totalBytes:(long long)arg3;
@end


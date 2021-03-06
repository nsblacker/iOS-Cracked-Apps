//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IOpenSecurityGuardPluginInterface.h"
#import "NSObject.h"

@class NSData, NSString;

@protocol ISecurityGuardOpenAVMPSoftCert <NSObject, IOpenSecurityGuardPluginInterface>
- (NSString *)getCert:(NSString *)arg1;
- (_Bool)installCert:(NSString *)arg1 certInfo:(NSString *)arg2;
- (_Bool)verifyWithCert:(NSString *)arg1 signature:(NSData *)arg2 plainData:(NSData *)arg3 type:(int)arg4;
- (NSData *)signWithCert:(NSString *)arg1 data:(NSData *)arg2 type:(int)arg3;
- (NSData *)generateCSR:(NSString *)arg1 info:(NSString *)arg2 type:(int)arg3;
- (_Bool)initAVMPSoftCert:(NSString *)arg1;
@end


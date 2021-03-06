//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSError, NSString;

@interface NVMDNSResolver : NSObject
{
    _Bool _shouldCancel;
    _Bool _done;
    NSString *_hostname;
    NSArray *_addresses;
    NSError *_error;
}

+ (id)stringForAddress:(id)arg1 error:(id *)arg2;
@property(nonatomic) _Bool done; // @synthesize done=_done;
@property(nonatomic) _Bool shouldCancel; // @synthesize shouldCancel=_shouldCancel;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(copy, nonatomic) NSArray *addresses; // @synthesize addresses=_addresses;
@property(copy, nonatomic) NSString *hostname; // @synthesize hostname=_hostname;
- (void).cxx_destruct;
- (_Bool)lookup;

@end


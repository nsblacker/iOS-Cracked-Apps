//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface VoiceToTextReSendModel : NSObject
{
    unsigned int _resendCount;
    unsigned long long _sessionid;
}

@property(nonatomic) unsigned int resendCount; // @synthesize resendCount=_resendCount;
@property(nonatomic) unsigned long long sessionid; // @synthesize sessionid=_sessionid;
- (id)initWithSessionID:(unsigned long long)arg1 ResendCount:(int)arg2;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQModel.h"

@class NSString;

@interface QQTroopMsgSeq : QQModel
{
    NSString *_groupcode;
    long long _localMsgSeq;
    long long _serverMsgSeq;
}

@property(nonatomic) long long serverMsgSeq; // @synthesize serverMsgSeq=_serverMsgSeq;
@property(nonatomic) long long localMsgSeq; // @synthesize localMsgSeq=_localMsgSeq;
@property(retain, nonatomic) NSString *groupcode; // @synthesize groupcode=_groupcode;
- (void)dealloc;

@end

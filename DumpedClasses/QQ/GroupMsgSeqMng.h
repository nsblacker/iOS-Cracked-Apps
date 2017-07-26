//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSMutableDictionary;

@interface GroupMsgSeqMng : NSObject
{
    NSMutableDictionary *_seqDic;
    _Bool _Loading;
    int _LoadType;
    long long _reqSeq;
    long long _toSeq;
    long long _flashSeq;
    long long _startLoadTime;
    double _toTableOffset;
    long long _replySeq;
    int _xo;
    NSMutableArray *_reqSeqArray;
    long long _oriSeq;
}

+ (id)getInstance;
@property(nonatomic) long long replySeq; // @synthesize replySeq=_replySeq;
@property(nonatomic) long long oriSeq; // @synthesize oriSeq=_oriSeq;
@property(nonatomic) long long flashSeq; // @synthesize flashSeq=_flashSeq;
@property(retain, nonatomic) NSMutableArray *reqSeqArray; // @synthesize reqSeqArray=_reqSeqArray;
- (void).cxx_destruct;
- (void)setGroupSeq:(long long)arg1 atGroup:(unsigned int)arg2;
- (void)setMemberSeq:(long long)arg1 atGroup:(unsigned int)arg2;
- (int)getLoadTime;
- (void)cleanStatus;
- (int)getLoadType;
- (_Bool)isLoading;
- (void)setLoadStatus:(_Bool)arg1 loadType:(int)arg2;
- (void)resetSeq:(id)arg1 forGroup:(unsigned int)arg2;
- (void)setUnreadCount:(int)arg1 atGroup:(unsigned int)arg2;
- (id)getGroupSeq:(unsigned int)arg1;
- (void)addGroupSeq:(long long)arg1 andMemberSeq:(long long)arg2 andUnreadCount:(int)arg3 atGroup:(unsigned int)arg4;
- (long long)getSpecialReqSeqWithoutRemove;
- (long long)getSpecialReqSeq;
- (_Bool)hasNextSpecialReqSeq;
- (void)removeMsgSeq:(long long)arg1;
- (_Bool)containMsgSeq:(long long)arg1;
- (id)init;

// Remaining properties
@property(nonatomic) long long reqSeq; // @dynamic reqSeq;
@property(nonatomic) long long toSeq; // @dynamic toSeq;
@property(nonatomic) double toTableOffset; // @dynamic toTableOffset;

@end

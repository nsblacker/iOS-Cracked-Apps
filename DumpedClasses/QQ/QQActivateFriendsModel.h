//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQModel.h"

#import "NSCopying.h"

@class NSMutableArray, NSMutableDictionary;

@interface QQActivateFriendsModel : QQModel <NSCopying>
{
    long long _uin;
    double _lastPokeServerTime;
    unsigned long long _nextPokeServerTimeGap;
    NSMutableArray *_helloContentList;
    NSMutableDictionary *_notifyDictionary;
    NSMutableArray *_notifyTypeList;
    int _xo;
}

- (void).cxx_destruct;
- (long long)lastestNotifyType;
- (void)markMessage:(long long)arg1 hasBeenSendedToFriend:(id)arg2;
- (void)markAllNotifyReaded;
- (void)markNotifyReaded:(long long)arg1;
- (void)refreshNotifyTypeList:(long long)arg1;
- (void)reset;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)description;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *helloContentList; // @dynamic helloContentList;
@property(nonatomic) double lastPokeServerTime; // @dynamic lastPokeServerTime;
@property(nonatomic) unsigned long long nextPokeServerTimeGap; // @dynamic nextPokeServerTimeGap;
@property(retain, nonatomic) NSMutableDictionary *notifyDictionary; // @dynamic notifyDictionary;
@property(retain, nonatomic) NSMutableArray *notifyTypeList; // @dynamic notifyTypeList;
@property(nonatomic) long long uin; // @dynamic uin;

@end

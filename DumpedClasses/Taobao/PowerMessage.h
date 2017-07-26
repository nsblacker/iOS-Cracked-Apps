//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class GPBStringInt64Dictionary, NSData, NSString;

@interface PowerMessage : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int bizCode; // @dynamic bizCode;
@property(copy, nonatomic) NSData *data_p; // @dynamic data_p;
@property(copy, nonatomic) NSString *from; // @dynamic from;
@property(copy, nonatomic) NSString *messageId; // @dynamic messageId;
@property(nonatomic) _Bool needAck; // @dynamic needAck;
@property(nonatomic) int priority; // @dynamic priority;
@property(nonatomic) int qosLevel; // @dynamic qosLevel;
@property(copy, nonatomic) NSString *text; // @dynamic text;
@property(nonatomic) long long timestamp; // @dynamic timestamp;
@property(copy, nonatomic) NSString *to; // @dynamic to;
@property(copy, nonatomic) NSString *topic; // @dynamic topic;
@property(nonatomic) int type; // @dynamic type;
@property(copy, nonatomic) NSString *userId; // @dynamic userId;
@property(retain, nonatomic) GPBStringInt64Dictionary *value; // @dynamic value;
@property(readonly, nonatomic) unsigned long long value_Count; // @dynamic value_Count;

@end

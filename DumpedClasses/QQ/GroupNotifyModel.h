//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TipsMessageModel.h"

@class NSNumber, NSString;

@interface GroupNotifyModel : TipsMessageModel
{
    unsigned long long _groupCode;
    NSString *_feedID;
    NSNumber *_flag;
}

- (void)dealloc;

// Remaining properties
@property(retain, nonatomic) NSString *feedID; // @dynamic feedID;
@property(retain, nonatomic) NSNumber *flag; // @dynamic flag;
@property(nonatomic) unsigned long long groupCode; // @dynamic groupCode;

@end


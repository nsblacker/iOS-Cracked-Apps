//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FXBaseJSONModel.h"

@class NSString;

@interface FXSGetSongName_ISong : FXBaseJSONModel
{
    _Bool _isSing;
    int _userId;
    NSString *_songName;
    long long _roomId;
}

@property(nonatomic) _Bool isSing; // @synthesize isSing=_isSing;
@property(nonatomic) long long roomId; // @synthesize roomId=_roomId;
@property(retain, nonatomic) NSString *songName; // @synthesize songName=_songName;
@property(nonatomic) int userId; // @synthesize userId=_userId;
- (void).cxx_destruct;

@end

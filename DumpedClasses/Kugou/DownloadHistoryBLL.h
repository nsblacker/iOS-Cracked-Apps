//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface DownloadHistoryBLL : NSObject
{
}

+ (id)shareInstance;
- (void)reuploadDownloadHistory;
- (void)deleteHistoryWithSongInfo:(id)arg1 Success:(CDUnknownBlockType)arg2 AndFail:(CDUnknownBlockType)arg3;
- (void)uploadHistoryWihtSongInfo:(id)arg1 QualityType:(int)arg2 Success:(CDUnknownBlockType)arg3 AndFail:(CDUnknownBlockType)arg4;
- (void)getAllSongInfoResult:(CDUnknownBlockType)arg1 AndError:(CDUnknownBlockType)arg2;
- (id)init;

@end


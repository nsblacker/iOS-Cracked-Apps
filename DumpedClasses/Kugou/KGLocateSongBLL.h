//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface KGLocateSongBLL : NSObject
{
}

+ (_Bool)isTheSameQualityWithInSong:(id)arg1 AndPlayingSong:(id)arg2 AndPlayingQuality:(int)arg3;
+ (_Bool)isEqulWithInSong:(id)arg1 AndPlayingSong:(id)arg2 AndPlayingQuality:(int)arg3;
+ (id)musicTableViewFindTapedCellWithData:(id)arg1 andCurrentSong:(id)arg2;
+ (void)musicTableViewCheckIsNeedLocateSongWithData:(id)arg1 andPagePath:(id)arg2 andIsPlayNext:(_Bool)arg3 callBack:(CDUnknownBlockType)arg4;
+ (id)adapterFindTapedCellWithData:(id)arg1 andCurrentSong:(id)arg2;
+ (_Bool)needLocatedWithSongInfoArr:(id)arg1;
+ (_Bool)needLocatedWithData:(id)arg1;
+ (_Bool)isEqualWithCurrentSongPlayPath:(id)arg1 andCurrentPagePath:(id)arg2;
+ (_Bool)needLocatedWithIsPlayNext:(_Bool)arg1 andPageth:(id)arg2 andCurrentSongPlayPath:(id)arg3 andCurrentPagePath:(id)arg4;
+ (void)adapterCheckIsNeedLocateSongWithData:(id)arg1 andPagePath:(id)arg2 andIsPlayNext:(_Bool)arg3 callBack:(CDUnknownBlockType)arg4;

@end

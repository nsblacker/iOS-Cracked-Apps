//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QZBaseEngine.h"

#import "IAccountChangedObsever.h"

@class NSString;

@interface QZMoodEngineV2 : QZBaseEngine <IAccountChangedObsever>
{
}

+ (id)instance;
- (void)openMoodRight:(id)arg1 success:(CDUnknownBlockType)arg2 fail:(CDUnknownBlockType)arg3;
- (void)postPictureMood:(id)arg1 content:(id)arg2;
- (void)postVideoMood:(id)arg1 content:(id)arg2;
- (void)postMood:(id)arg1 content:(id)arg2;
- (void)fetchMoodUploadFinishedMessageWithDelayTime:(long long)arg1 clientKey:(id)arg2 retryCount:(long long)arg3 clientRetryCount:(long long)arg4 success:(CDUnknownBlockType)arg5 failure:(CDUnknownBlockType)arg6;
- (void)fetchMoodUploadFinishedMessageWithDelayTime:(long long)arg1 clientKey:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (id)packAsyncMoodReqData:(id)arg1;
- (long long)fetchEasterEggPicturesWithUin:(long long)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (long long)getPhotoChain:(id)arg1;
- (void)getURLInfo:(id)arg1;
- (void)onAccountLogout;
- (void)onAccountLogin;
- (void)postSuccessWriteMoodNotificationWithRequestID:(long long)arg1 content:(id)arg2 fakeFeed:(id)arg3 pictureList:(id)arg4 action:(long long)arg5 clientKey:(id)arg6;
- (void)postSuccessModifyMoodNotificationWithRequestID:(long long)arg1 ugcId:(id)arg2 content:(id)arg3 fakeFeed:(id)arg4 ugcKey:(id)arg5;
- (void)postFaildWriteMoodNotificationWithRequestID:(long long)arg1 action:(long long)arg2 Error:(long long)arg3 andDescription:(id)arg4 clientKey:(id)arg5;
- (long long)sendWithContent:(id)arg1 verified:(_Bool)arg2 syncToWeibo:(_Bool)arg3 syncToSign:(_Bool)arg4 mediaType:(unsigned long long)arg5 lbsInfo:(id)arg6 shootInfo:(id)arg7 currentLbsInfo:(id)arg8 pictureList:(id)arg9 videoInfo:(id)arg10 clientKey:(id)arg11 timer:(id)arg12 ugcRight:(int)arg13 ugcKey:(id)arg14 srcId:(id)arg15 publishSource:(long long)arg16 allowUins:(id)arg17 extendInfo:(id)arg18 reportString:(id)arg19 uploadEntrance:(long long)arg20 otherInfo:(id)arg21;
- (id)publishMoodRequestContent:(id)arg1 verified:(_Bool)arg2 syncToWeibo:(_Bool)arg3 syncToSign:(_Bool)arg4 mediaType:(unsigned long long)arg5 lbsInfo:(id)arg6 shootInfo:(id)arg7 currentLbsInfo:(id)arg8 pictureList:(id)arg9 videoInfo:(id)arg10 clientKey:(id)arg11 timer:(id)arg12 ugcRight:(int)arg13 ugcKey:(id)arg14 srcId:(id)arg15 publishSource:(long long)arg16 allowUins:(id)arg17 extendInfo:(id)arg18 async:(_Bool)arg19 reportString:(id)arg20 uploadEntrance:(long long)arg21 otherInfo:(id)arg22;
- (long long)sendMoodModifyWithContent:(id)arg1 ugcKey:(id)arg2 srcId:(id)arg3 publishSource:(long long)arg4;
- (long long)sendMoodWithContent:(id)arg1 verified:(_Bool)arg2 syncToWeibo:(_Bool)arg3 syncToSign:(_Bool)arg4 mediaType:(unsigned long long)arg5 lbsInfo:(id)arg6 shootInfo:(id)arg7 currentLbsInfo:(id)arg8 pictureList:(id)arg9 videoInfo:(id)arg10 clientKey:(id)arg11 timer:(id)arg12 ugcRight:(int)arg13 allowUins:(id)arg14 extendInfo:(id)arg15 reportString:(id)arg16 uploadEntrance:(long long)arg17 otherInfo:(id)arg18;
- (id)createMoodUploadJobWithContent:(id)arg1 verified:(_Bool)arg2 syncToWeibo:(_Bool)arg3 syncToQQ:(_Bool)arg4 syncToWeixin:(_Bool)arg5 mediaType:(unsigned long long)arg6 LBSModel:(id)arg7 shootModel:(id)arg8 currenLBSModel:(id)arg9 LBSAddress:(id)arg10 pictureList:(id)arg11 pictureEXIFList:(id)arg12 compressModels:(id)arg13 videoInfo:(id)arg14 compressBatchID:(long long)arg15 quality:(long long)arg16 timer:(id)arg17 ugcRight:(long long)arg18 allowUins:(id)arg19 extendInfo:(id)arg20 async:(_Bool)arg21 reportString:(id)arg22 uploadEntrance:(long long)arg23 otherInfo:(id)arg24;
- (unsigned long long)permissionType:(long long)arg1;
- (long long)postVideoWithContent:(id)arg1 mentionInfo:(id)arg2 verified:(_Bool)arg3 syncToQQ:(_Bool)arg4 LBSModel:(id)arg5 shootModel:(id)arg6 LBSAddress:(id)arg7 video:(id)arg8 coverImage:(id)arg9 compressModels:(id)arg10 compressBatchID:(long long)arg11 timer:(id)arg12 ugcRight:(long long)arg13 allowUins:(id)arg14 extendInfo:(id)arg15 compressParam:(id)arg16 uploadEntrance:(long long)arg17 otherInfo:(id)arg18;
- (id)saveThumbImage:(id)arg1;
- (long long)writeMoodWithContent:(id)arg1 mentionInfo:(id)arg2 verified:(_Bool)arg3 syncToWeibo:(_Bool)arg4 syncToQQ:(_Bool)arg5 syncToWeixin:(_Bool)arg6 LBSModel:(id)arg7 shootModel:(id)arg8 currenLBSModel:(id)arg9 LBSAddress:(id)arg10 pictureList:(id)arg11 pictureExifList:(id)arg12 compressModels:(id)arg13 videoInfo:(id)arg14 compressBatchID:(long long)arg15 quality:(long long)arg16 timer:(id)arg17 ugcRight:(long long)arg18 allowUins:(id)arg19 extendInfo:(id)arg20 reportString:(id)arg21 uploadEntrance:(long long)arg22 otherInfo:(id)arg23;
- (id)moodReferOfUploadEntrance:(long long)arg1;
- (id)init;
- (void)fakeFeedWith:(id)arg1 moodJob:(id)arg2 hasMore:(_Bool)arg3 fakeContent:(id)arg4;
- (id)contentParam:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

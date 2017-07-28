//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface ArticleShareManager : NSObject
{
}

+ (id)shareActivityManager:(id)arg1 setWapConditionWithTitle:(id)arg2 desc:(id)arg3 url:(id)arg4 imageUrl:(id)arg5;
+ (id)shareActivityManager:(id)arg1 shareInfo:(id)arg2 showReport:(_Bool)arg3;
+ (id)shareActivityManager:(id)arg1 mediaID:(id)arg2 avatarString:(id)arg3 shareURL:(id)arg4 isLoginUser:(_Bool)arg5 screenName:(id)arg6 desc:(id)arg7;
+ (id)shareActivityManager:(id)arg1 pgcAccount:(id)arg2;
+ (id)shareActivityManager:(id)arg1 profileShareObject:(id)arg2 isAccountUser:(_Bool)arg3;
+ (id)shareActivityManager:(id)arg1 exploreEntry:(id)arg2;
+ (id)essayActivitysForManager:(id)arg1 essayData:(id)arg2;
+ (id)sharedImageForEssay:(id)arg1;
+ (id)conversionMailContentToPureHTML:(id)arg1 shareURL:(id)arg2 commentCount:(long long)arg3;
+ (id)weixinSharedImageForImageUrl:(id)arg1;
+ (id)weixinSharedImageForMoment:(id)arg1 shouldShowForumIcon:(_Bool)arg2;
+ (id)defaultWeixinImage;
+ (id)shareActivityManager:(id)arg1 commentDetail:(id)arg2 sourceType:(unsigned long long)arg3;
+ (id)shareActivityManager:(id)arg1 moment:(id)arg2 sourceType:(unsigned long long)arg3 threadInfoLoaded:(_Bool)arg4;
+ (id)shareActivityManager:(id)arg1 moment:(id)arg2 sourceType:(unsigned long long)arg3;
+ (id)shareActivityManager:(id)arg1 setNativeGalleryImage:(id)arg2 webGalleryURL:(id)arg3;
+ (id)shareActivityManager:(id)arg1 setArticleCondition:(id)arg2 adID:(id)arg3 showReport:(_Bool)arg4;
+ (id)shareActivityManager:(id)arg1 setArticleCondition:(id)arg2 adID:(id)arg3;
+ (id)shareActivityManager:(id)arg1 setLiveModel:(id)arg2;
+ (id)shareActivityManager:(id)arg1 setHuoshanCondition:(id)arg2;
+ (void)load;
+ (id)shareManager;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface FCUserFeedObject : NSObject
{
    _Bool _isLike;
    NSString *_objectId;
    NSString *_userId;
    NSString *_createTime;
    NSString *_tagUrl;
    NSString *_title;
    NSString *_content;
    NSString *_actionUrl;
    NSArray *_picList;
    NSArray *_itemList;
    NSArray *_linkList;
    long long _commentNum;
    long long _likeNum;
    long long _useNum;
    NSString *_type;
    NSString *_from;
    NSString *_fromUrl;
}

@property(readonly, copy, nonatomic) NSString *fromUrl; // @synthesize fromUrl=_fromUrl;
@property(readonly, copy, nonatomic) NSString *from; // @synthesize from=_from;
@property(readonly, copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(readonly, nonatomic) _Bool isLike; // @synthesize isLike=_isLike;
@property(readonly, nonatomic) long long useNum; // @synthesize useNum=_useNum;
@property(readonly, nonatomic) long long likeNum; // @synthesize likeNum=_likeNum;
@property(readonly, nonatomic) long long commentNum; // @synthesize commentNum=_commentNum;
@property(readonly, nonatomic) NSArray *linkList; // @synthesize linkList=_linkList;
@property(readonly, nonatomic) NSArray *itemList; // @synthesize itemList=_itemList;
@property(readonly, nonatomic) NSArray *picList; // @synthesize picList=_picList;
@property(readonly, copy, nonatomic) NSString *actionUrl; // @synthesize actionUrl=_actionUrl;
@property(readonly, copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, copy, nonatomic) NSString *tagUrl; // @synthesize tagUrl=_tagUrl;
@property(readonly, copy, nonatomic) NSString *createTime; // @synthesize createTime=_createTime;
@property(readonly, copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(readonly, copy, nonatomic) NSString *objectId; // @synthesize objectId=_objectId;
- (void).cxx_destruct;
- (void)updateWithDictionary:(id)arg1;
- (id)init;

@end

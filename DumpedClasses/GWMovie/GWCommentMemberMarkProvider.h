//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GWBaseInfoProvider.h"

@class NSString;

@interface GWCommentMemberMarkProvider : GWBaseInfoProvider
{
    NSString *_relatedid;
    NSString *_tag;
}

@property(copy, nonatomic) NSString *tag; // @synthesize tag=_tag;
@property(copy, nonatomic) NSString *relatedid; // @synthesize relatedid=_relatedid;
- (void).cxx_destruct;
- (void)requestWithMemberMarkHandler:(CDUnknownBlockType)arg1;
- (id)init;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface QL15PeopleVoteStarInfo : NSObject
{
    _Bool _isVoteServer;
    _Bool _isVote;
    int _starVoteCount;
    int _popularity;
    NSString *_starID;
    NSString *_starName;
    NSString *_starImageUrl;
    NSString *_voteKey;
}

@property(nonatomic) _Bool isVote; // @synthesize isVote=_isVote;
@property(nonatomic) _Bool isVoteServer; // @synthesize isVoteServer=_isVoteServer;
@property(copy, nonatomic) NSString *voteKey; // @synthesize voteKey=_voteKey;
@property(nonatomic) int popularity; // @synthesize popularity=_popularity;
@property(nonatomic) int starVoteCount; // @synthesize starVoteCount=_starVoteCount;
@property(copy, nonatomic) NSString *starImageUrl; // @synthesize starImageUrl=_starImageUrl;
@property(copy, nonatomic) NSString *starName; // @synthesize starName=_starName;
@property(copy, nonatomic) NSString *starID; // @synthesize starID=_starID;
- (void).cxx_destruct;
- (void)dealloc;
- (id)init;

@end


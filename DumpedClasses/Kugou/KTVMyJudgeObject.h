//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KTVObjectModel.h"

@class NSMutableArray<KTVMyJudgeDaySummary>, NSMutableArray<KTVMyJudgeVoteDetail>, NSString;

@interface KTVMyJudgeObject : KTVObjectModel
{
    NSMutableArray<KTVMyJudgeDaySummary> *_judgeDaySummaryList;
    long long _currentTime;
    NSString *_judgeVoteDetailDate;
    NSMutableArray<KTVMyJudgeVoteDetail> *_judgeVoteDetailList;
}

@property(retain, nonatomic) NSMutableArray<KTVMyJudgeVoteDetail> *judgeVoteDetailList; // @synthesize judgeVoteDetailList=_judgeVoteDetailList;
@property(retain, nonatomic) NSString *judgeVoteDetailDate; // @synthesize judgeVoteDetailDate=_judgeVoteDetailDate;
@property(nonatomic) long long currentTime; // @synthesize currentTime=_currentTime;
@property(retain, nonatomic) NSMutableArray<KTVMyJudgeDaySummary> *judgeDaySummaryList; // @synthesize judgeDaySummaryList=_judgeDaySummaryList;
- (void).cxx_destruct;

@end


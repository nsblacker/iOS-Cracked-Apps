//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ArkAppCGIQueryTask.h"

@class NSMutableArray;

@interface ArkAppCGIQueryTask_GetContextActionUpdateList : ArkAppCGIQueryTask
{
    NSMutableArray *_pendingTask;
    NSMutableArray *_actionResultList;
}

@property(readonly, nonatomic) NSMutableArray *actionResultList; // @synthesize actionResultList=_actionResultList;
@property(readonly, nonatomic) NSMutableArray *pendingTask; // @synthesize pendingTask=_pendingTask;
- (void).cxx_destruct;
- (void)doCallback;
- (id)init;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

@interface MAFIAOperation : NSOperation
{
    _Bool _executing;
    _Bool _finished;
}

@property(nonatomic, getter=isFinished) _Bool finished; // @synthesize finished=_finished;
@property(nonatomic, getter=isExecuting) _Bool executing; // @synthesize executing=_executing;
- (void)cancel;
- (void)finish;
- (void)startHandler:(CDUnknownBlockType)arg1;
- (void)startSelector:(SEL)arg1;
- (void)run;
- (void)start;
- (void)dealloc;

@end


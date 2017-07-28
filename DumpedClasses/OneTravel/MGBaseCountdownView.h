//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSTimer;

@interface MGBaseCountdownView : UIView
{
    double _maxTime;
    NSTimer *_timer;
    long long _tempCount;
}

@property(nonatomic) long long tempCount; // @synthesize tempCount=_tempCount;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(readonly, nonatomic) double maxTime; // @synthesize maxTime=_maxTime;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (void)timerChangeAndViewAnimation:(double)arg1;
- (void)stopAnimation;
- (void)startAnimation;
- (void)timeChange:(id)arg1;
- (void)restTimer;
- (void)setMaxTime:(double)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface ONESBaseOverlayRender : NSObject
{
    id <ONESBaseOverlay> _overlay;
}

@property(readonly, nonatomic) id <ONESBaseOverlay> overlay; // @synthesize overlay=_overlay;
- (void).cxx_destruct;
- (CDStruct_02837cd9)mapRectForRect:(struct CGRect)arg1;
- (struct CGRect)rectForMapRect:(CDStruct_02837cd9)arg1;
- (CDStruct_c3b9c2ee)mapPointForPoint:(struct CGPoint)arg1;
- (struct CGPoint)pointForMapPoint:(CDStruct_c3b9c2ee)arg1;
- (id)initWithOverlay:(id)arg1;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/CKCompositeComponent.h>

@class CKComponent;

@interface FBDBLAccountTileComponent : CKCompositeComponent
{
    CKComponent *_imageComponent;
    double _imageScale;
}

+ (id)newWithName:(id)arg1 fontSize:(double)arg2 textMargin:(double)arg3 textColor:(id)arg4 imageOptions:(const struct FBDBLAccountTileImageOptions *)arg5 imageDownloader:(id)arg6;
- (void).cxx_destruct;
- (vector_035bbd4a)animationsFromPreviousComponent:(id)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NVMModel.h"

@class NSString;

@interface ESPQualityBackgroundModel : NVMModel
{
    NSString *_imageHash;
    NSString *_storyTitle;
    NSString *_storyInfo;
}

+ (id)JSONKeyPathsByPropertyKey;
@property(copy, nonatomic) NSString *storyInfo; // @synthesize storyInfo=_storyInfo;
@property(copy, nonatomic) NSString *storyTitle; // @synthesize storyTitle=_storyTitle;
@property(copy, nonatomic) NSString *imageHash; // @synthesize imageHash=_imageHash;
- (void).cxx_destruct;

@end

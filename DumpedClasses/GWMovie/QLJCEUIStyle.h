//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSString;

@interface QLJCEUIStyle : JceObjectV2
{
    int jcev2_p_5_o_contentGravity;
    NSString *jcev2_p_0_o_themeColor;
    NSString *jcev2_p_1_o_subThemeColor;
    NSString *jcev2_p_2_o_floatThemeColor;
    NSString *jcev2_p_3_o_fontColor;
    NSString *jcev2_p_4_o_fontSize;
    NSString *jcev2_p_6_o_backgroundRes;
}

+ (id)jceType;
+ (void)initialize;
@property(retain, nonatomic, getter=jce_backgroundRes, setter=setJce_backgroundRes:) NSString *jcev2_p_6_o_backgroundRes; // @synthesize jcev2_p_6_o_backgroundRes;
@property(nonatomic, getter=jce_contentGravity, setter=setJce_contentGravity:) int jcev2_p_5_o_contentGravity; // @synthesize jcev2_p_5_o_contentGravity;
@property(retain, nonatomic, getter=jce_fontSize, setter=setJce_fontSize:) NSString *jcev2_p_4_o_fontSize; // @synthesize jcev2_p_4_o_fontSize;
@property(retain, nonatomic, getter=jce_fontColor, setter=setJce_fontColor:) NSString *jcev2_p_3_o_fontColor; // @synthesize jcev2_p_3_o_fontColor;
@property(retain, nonatomic, getter=jce_floatThemeColor, setter=setJce_floatThemeColor:) NSString *jcev2_p_2_o_floatThemeColor; // @synthesize jcev2_p_2_o_floatThemeColor;
@property(retain, nonatomic, getter=jce_subThemeColor, setter=setJce_subThemeColor:) NSString *jcev2_p_1_o_subThemeColor; // @synthesize jcev2_p_1_o_subThemeColor;
@property(retain, nonatomic, getter=jce_themeColor, setter=setJce_themeColor:) NSString *jcev2_p_0_o_themeColor; // @synthesize jcev2_p_0_o_themeColor;
- (void)dealloc;
- (id)init;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBJSONModel.h"

@class MocRichTextUTModel, NSString;

@interface MocRichTextNodeModel : TBJSONModel
{
    _Bool _bold;
    NSString *_type;
    NSString *_targetUrl;
    NSString *_path;
    long long _width;
    long long _height;
    NSString *_text;
    NSString *_color;
    long long _fontSize;
    MocRichTextUTModel *_utClick;
}

+ (id)modelKeyMapperDictionary;
@property(copy, nonatomic) MocRichTextUTModel *utClick; // @synthesize utClick=_utClick;
@property(nonatomic) long long fontSize; // @synthesize fontSize=_fontSize;
@property(copy, nonatomic) NSString *color; // @synthesize color=_color;
@property(nonatomic) _Bool bold; // @synthesize bold=_bold;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(nonatomic) long long height; // @synthesize height=_height;
@property(nonatomic) long long width; // @synthesize width=_width;
@property(copy, nonatomic) NSString *path; // @synthesize path=_path;
@property(copy, nonatomic) NSString *targetUrl; // @synthesize targetUrl=_targetUrl;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
- (void).cxx_destruct;

@end

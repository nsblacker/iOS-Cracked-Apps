//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class KGSkinButton, NSString;

@interface GroupTitleCell : UITableViewCell
{
    _Bool _isNeedCheck;
    KGSkinButton *_textButton;
    NSString *_text;
}

@property(nonatomic) _Bool isNeedCheck; // @synthesize isNeedCheck=_isNeedCheck;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
@property(retain, nonatomic) KGSkinButton *textButton; // @synthesize textButton=_textButton;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

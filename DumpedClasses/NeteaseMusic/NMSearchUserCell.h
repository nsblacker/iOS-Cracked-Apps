//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NMUserCell.h"

@class AttributedLabel;

@interface NMSearchUserCell : NMUserCell
{
    AttributedLabel *_nameSearchLabel;
    AttributedLabel *_otherSearchLabel;
}

- (void).cxx_destruct;
- (void)setUser:(id)arg1 keywords:(id)arg2;
- (void)setUser:(id)arg1 keyword:(id)arg2;
- (void)setUser:(id)arg1;
- (void)layoutAttributedLabel;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

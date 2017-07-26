//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MUKSingleLineCell.h"

@class NSLayoutConstraint, NSString, UILabel, UIView;

@interface MUKIdentityCell : MUKSingleLineCell
{
    NSString *_identityName;
    long long _identityViewTextColor;
    UILabel *_identityLabel;
    UIView *_identityBcView;
    NSLayoutConstraint *_identityLabelLayoutAttributeWidth;
}

@property(retain, nonatomic) NSLayoutConstraint *identityLabelLayoutAttributeWidth; // @synthesize identityLabelLayoutAttributeWidth=_identityLabelLayoutAttributeWidth;
@property(retain, nonatomic) UIView *identityBcView; // @synthesize identityBcView=_identityBcView;
@property(retain, nonatomic) UILabel *identityLabel; // @synthesize identityLabel=_identityLabel;
@property(nonatomic) long long identityViewTextColor; // @synthesize identityViewTextColor=_identityViewTextColor;
@property(copy, nonatomic) NSString *identityName; // @synthesize identityName=_identityName;
- (void).cxx_destruct;
- (void)setIdentityViewBgLeftColor:(long long)arg1 rightColor:(long long)arg2;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

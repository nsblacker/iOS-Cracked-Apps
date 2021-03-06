//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITextView.h"

#import "UITextViewDelegate.h"

@class NSMutableDictionary, NSString, UIColor, UIFont;

@interface JSTextarea : UITextView <UITextViewDelegate>
{
    NSString *_placeholder;
    UIColor *_placeholderColor;
    UIFont *_placeholderFont;
    unsigned long long _maxLength;
    NSMutableDictionary *_attrs;
    long long _lines;
}

+ (void)attrsTNodeMapper:(id)arg1;
@property(nonatomic) long long lines; // @synthesize lines=_lines;
@property(retain, nonatomic) NSMutableDictionary *attrs; // @synthesize attrs=_attrs;
@property(nonatomic) unsigned long long maxLength; // @synthesize maxLength=_maxLength;
@property(retain, nonatomic) UIFont *placeholderFont; // @synthesize placeholderFont=_placeholderFont;
@property(retain, nonatomic) UIColor *placeholderColor; // @synthesize placeholderColor=_placeholderColor;
@property(copy, nonatomic) NSString *placeholder; // @synthesize placeholder=_placeholder;
- (void).cxx_destruct;
- (void)dealloc;
- (id)superViewWithClass:(Class)arg1;
- (void)textViewDidEndEditing:(id)arg1;
- (void)textViewBeginEditing:(id)arg1;
- (void)keyboardHidenNotify:(id)arg1;
- (void)keyboardShowNotify:(id)arg1;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)textViewDidChange:(id)arg1;
- (void)setAttributedText:(id)arg1;
- (void)setText:(id)arg1;
- (void)setFont:(id)arg1;
- (void)setTextAlignment:(long long)arg1;
- (void)setContentInset:(struct UIEdgeInsets)arg1;
- (void)layoutSubviews;
- (void)drawRect:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (struct CGRect)placeholderRectForBounds:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


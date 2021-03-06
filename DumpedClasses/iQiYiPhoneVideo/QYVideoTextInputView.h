//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITextViewDelegate-Protocol.h"

@class NSString, UIButton, UIColor, UIImageView, UILabel, UITextView;
@protocol QYVideoTextInputViewDelegate;

@interface QYVideoTextInputView : UIView <UITextViewDelegate>
{
    UIImageView *_backgroundView;
    UITextView *_inputView;
    UILabel *_placeHolderLabel;
    UIButton *_okButton;
    UIButton *_showFontButton;
    double _keyboardTop;
    double _animationDuration;
    double _textMaxWidth;
    double _textMaxHeight;
    struct CGSize _originSize;
    id <QYVideoTextInputViewDelegate> _delegate;
    double _fontSize;
    UIColor *_textColor;
    UIColor *_cursorColor;
    NSString *_placeholder;
    UIColor *_placeholderTextColor;
    NSString *_text;
}

+ (int)countWord:(id)arg1;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
@property(retain, nonatomic) UIColor *placeholderTextColor; // @synthesize placeholderTextColor=_placeholderTextColor;
@property(copy, nonatomic) NSString *placeholder; // @synthesize placeholder=_placeholder;
@property(retain, nonatomic) UIColor *cursorColor; // @synthesize cursorColor=_cursorColor;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(nonatomic) double fontSize; // @synthesize fontSize=_fontSize;
@property(nonatomic) id <QYVideoTextInputViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UITextView *inputView; // @synthesize inputView=_inputView;
@property(readonly, nonatomic) unsigned long long userInputTextCount;
- (void)setDefaultText:(id)arg1;
- (void)showPlaceholder:(_Bool)arg1;
- (void)insertText:(id)arg1 atIndex:(long long)arg2;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)textViewDidChange:(id)arg1;
- (_Bool)textViewShouldEndEditing:(id)arg1;
- (_Bool)textViewShouldBeginEditing:(id)arg1;
- (id)trueContent;
- (_Bool)resignFirstResponder;
- (void)cancelClick:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


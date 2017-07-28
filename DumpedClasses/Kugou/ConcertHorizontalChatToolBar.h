//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "EmojiBoardViewDelegate.h"
#import "HPGrowingTextViewDelegate.h"

@class EmojiBoardView, HPGrowingTextView, NSMutableArray, NSString, UIButton, UILabel;

@interface ConcertHorizontalChatToolBar : UIView <HPGrowingTextViewDelegate, EmojiBoardViewDelegate>
{
    double _barHeight;
    double _textInitHeight;
    double gkeyBoardHeight;
    NSMutableArray *_starViewList;
    int _curShowType;
    id <ConcertHorizontalChatToolBarDelegate> _delegate;
    UIView *_redDot;
    UIButton *_loveBtn;
    UIView *_mainView;
    UIButton *_giftBtn;
    UIView *_textBgView;
    HPGrowingTextView *_textView;
    UIButton *_keyBoardBtn;
    UIButton *_spaceBtn;
    EmojiBoardView *_m_emojiView;
    UILabel *_textHolder;
    UIButton *_sendBtn;
}

@property(retain, nonatomic) UIButton *sendBtn; // @synthesize sendBtn=_sendBtn;
@property(retain, nonatomic) UILabel *textHolder; // @synthesize textHolder=_textHolder;
@property(retain, nonatomic) EmojiBoardView *m_emojiView; // @synthesize m_emojiView=_m_emojiView;
@property(retain, nonatomic) UIButton *spaceBtn; // @synthesize spaceBtn=_spaceBtn;
@property(retain, nonatomic) UIButton *keyBoardBtn; // @synthesize keyBoardBtn=_keyBoardBtn;
@property(retain, nonatomic) HPGrowingTextView *textView; // @synthesize textView=_textView;
@property(retain, nonatomic) UIView *textBgView; // @synthesize textBgView=_textBgView;
@property(nonatomic) int curShowType; // @synthesize curShowType=_curShowType;
@property(retain, nonatomic) UIButton *giftBtn; // @synthesize giftBtn=_giftBtn;
@property(retain, nonatomic) UIView *mainView; // @synthesize mainView=_mainView;
@property(retain, nonatomic) UIButton *loveBtn; // @synthesize loveBtn=_loveBtn;
@property(retain, nonatomic) UIView *redDot; // @synthesize redDot=_redDot;
@property(nonatomic) __weak id <ConcertHorizontalChatToolBarDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setFlyScreenMode:(_Bool)arg1;
- (id)textBtnImagePress;
- (id)textBtnImage;
- (id)emojiBtnImagePress;
- (id)emojiBtnImage;
- (void)loadActionBtnImage:(id)arg1;
- (void)clearHolder;
- (void)clearText;
- (void)updatePrivaterName:(id)arg1;
- (void)updateGetStarNumber:(int)arg1;
- (void)setTextHolderState:(id)arg1;
- (void)setAtText:(id)arg1;
- (id)backEmojiStringWithOriginString:(id)arg1;
- (void)emojiBoardViewDeleteEmoji;
- (void)emojiBoardView:(id)arg1 ActionSend:(id)arg2;
- (void)emojiBoardView:(id)arg1 didSelectedAtIndex:(unsigned long long)arg2 withEmojicoder:(id)arg3;
- (void)dismissEmojiBoard;
- (void)showEmojiBoard;
- (void)emojiAction:(id)arg1;
- (void)giftBtnAction;
- (void)showActive;
- (void)growingTextViewDidChange:(id)arg1;
- (void)growingTextViewDidEndEditing:(id)arg1;
- (void)growingTextView:(id)arg1 willChangeHeight:(float)arg2;
- (_Bool)growingTextView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (_Bool)growingTextViewShouldReturn:(id)arg1;
- (void)growingTextViewDidBeginEditing:(id)arg1;
- (void)openIDLE;
- (void)openIDLETimer;
- (_Bool)isInputModel;
- (void)showNoneBoard;
- (void)dismissKeyBoard;
- (void)redDotHide:(_Bool)arg1;
- (void)sendTextAction;
- (void)clearTextViewData;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)showSpaceBtnToView;
- (void)unregestNotification;
- (void)setupKeyboardNotification;
- (void)updatePublicChatFrame;
- (void)updateLiveRoomFrame;
- (void)updateLayoutFrameState;
- (void)initView;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

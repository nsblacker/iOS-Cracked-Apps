//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "LVProtocal.h"

@class LVBundle, LuaViewCore, NSString, UIViewController;

@interface LuaView : UIView <LVProtocal>
{
    _Bool _isOnShowed;
    id <LVCallback> _callback;
    LuaViewCore *_luaviewCore;
    LuaViewCore *_lv_luaviewCore;
    struct _LVUserDataInfo *_lv_userData;
}

@property(nonatomic) _Bool isOnShowed; // @synthesize isOnShowed=_isOnShowed;
@property(nonatomic) struct _LVUserDataInfo *lv_userData; // @synthesize lv_userData=_lv_userData;
@property(nonatomic) __weak LuaViewCore *lv_luaviewCore; // @synthesize lv_luaviewCore=_lv_luaviewCore;
@property(retain, nonatomic) LuaViewCore *luaviewCore; // @synthesize luaviewCore=_luaviewCore;
@property(nonatomic) __weak id <LVCallback> callback; // @synthesize callback=_callback;
- (void).cxx_destruct;
- (struct lua_State *)l;
- (void)motionEnded:(long long)arg1 withEvent:(id)arg2;
- (void)motionCancelled:(long long)arg1 withEvent:(id)arg2;
- (void)motionBegan:(long long)arg1 withEvent:(id)arg2;
- (void)keyboardDidHide:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardDidShow:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (void)didMoveToSuperview;
- (void)onBackground;
- (void)onForeground;
- (void)viewDidDisAppear;
- (void)viewWillDisAppear;
- (void)viewDidAppear;
- (void)viewWillAppear;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (void)setFrame:(struct CGRect)arg1;
- (id)loadFile:(id)arg1;
- (id)loadSignFile:(id)arg1;
- (id)runData:(id)arg1 fileName:(id)arg2;
- (id)runSignFile:(id)arg1;
- (id)runPackage:(id)arg1 args:(id)arg2;
- (id)runPackage:(id)arg1;
- (id)runFile:(id)arg1;
- (void)releaseLuaView;
@property(retain, nonatomic) LVBundle *bundle;
@property(nonatomic) __weak UIViewController *viewController;
- (void)dealloc;
- (void)createLuaViewCore;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

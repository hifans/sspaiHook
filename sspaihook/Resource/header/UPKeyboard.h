//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSMutableArray, UIColor;

@interface UPKeyboard : UIView
{
    _Bool mSecurity;
    struct UPPasswordTool *_pinBlockTool;
    NSMutableArray *_rowLines;
    double _keyWidth;
    double _keyHeight;
    UIView *_titleView;
    UIView *_keyboardView;
    UIColor *_bgColor;
    id <UPKeyboardDelegate> mDelegate;
    NSMutableArray *mKeyArray;
    NSMutableArray *rowLines;
}

- (void).cxx_destruct;
- (void)addDeleteBtn:(struct CGRect)arg1;
- (void)addDoneBtn:(struct CGRect)arg1;
- (void)addKeyBtn:(struct CGRect)arg1 title:(id)arg2;
- (void)addKeys;
- (void)cleanSecurity;
- (id)configureBackgroundColor;
- (void)dealloc;
- (void)deleteClick;
- (void)deleteEncrypted;
- (void)doneClick:(id)arg1;
- (void)encryptText:(id)arg1;
- (id)getMessage:(id)arg1;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)keyBoardMode:(long long)arg1;
- (id)keyboardKeyColor;
@property(nonatomic) __weak id <UPKeyboardDelegate> mDelegate; // @synthesize mDelegate;
@property(retain, nonatomic) NSMutableArray *mKeyArray; // @synthesize mKeyArray;
- (void)makeKeyboardView;
- (void)makeSeperators;
- (void)makeTitleView;
- (void)prepareKeyArray;
- (void)prepareLocalData;
- (void)refreshKeyBoard;
@property(retain, nonatomic) NSMutableArray *rowLines; // @synthesize rowLines;
- (void)setSecurity:(_Bool)arg1;
- (void)textChanged:(id)arg1;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;

@end


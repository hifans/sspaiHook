//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GrowingWindowView.h"

#import "UIGestureRecognizerDelegate.h"

@class NSMutableArray, NSString, UIView;

@interface GrowingMenu : GrowingWindowView <UIGestureRecognizerDelegate>
{
    NSMutableArray *_allViews;
    NSMutableArray *_allViewsType;
    UIView *_shadowMaskView;
}

+ (void)hideMenuView:(id)arg1;
+ (void)hideMenuView:(id)arg1 showType:(unsigned long long)arg2;
+ (void)hideMenuView:(id)arg1 showType:(unsigned long long)arg2 complate:(CDUnknownBlockType)arg3;
+ (struct CGSize)maxSizeForType:(unsigned long long)arg1;
+ (unsigned long long)showMenuCount;
+ (void)showMenuView:(id)arg1;
+ (void)showMenuView:(id)arg1 showType:(unsigned long long)arg2;
+ (void)showMenuView:(id)arg1 showType:(unsigned long long)arg2 complate:(CDUnknownBlockType)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *allViews; // @synthesize allViews=_allViews;
@property(retain, nonatomic) NSMutableArray *allViewsType; // @synthesize allViewsType=_allViewsType;
- (unsigned long long)getShowTypeByIndex:(unsigned long long)arg1;
- (_Bool)growingNodeDonotCircle;
- (void)hideMenuView:(id)arg1 type:(unsigned long long)arg2 complate:(CDUnknownBlockType)arg3;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)setActive:(_Bool)arg1 WithoutView:(id)arg2;
@property(retain, nonatomic) UIView *shadowMaskView; // @synthesize shadowMaskView=_shadowMaskView;
- (void)showMenuView:(id)arg1 type:(unsigned long long)arg2 complate:(CDUnknownBlockType)arg3;
- (void)tap:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


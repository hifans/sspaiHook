//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UILabel;

@interface UPToast : UIView
{
    UIView *_contentView;
    UIView *_bacgroundView;
    UIView *_toastView;
    UILabel *_titleLabel;
    struct CGPoint _center;
    _Bool _loading;
    _Bool _isShowwingToastMessage;
    UIView *realSuperView;
    struct CGPoint realCenter;
}

- (void).cxx_destruct;
- (void)animationWithDuration:(double)arg1 endAction:(SEL)arg2 target:(id)arg3 block:(CDUnknownBlockType)arg4;
- (struct CGSize)calcuateMessageSize:(id)arg1;
- (void)dealloc;
- (void)didDidmissToast;
- (void)didShowToastOnCenter;
- (void)didShowToastOnTop;
- (void)dismiss;
- (void)handleTap:(id)arg1;
- (void)hide;
- (id)initWithLoadingMessage:(id)arg1 onView:(id)arg2;
- (id)initWithMessage:(id)arg1 onView:(id)arg2;
- (id)initWithStayMessage:(id)arg1 onView:(id)arg2;
@property(nonatomic) struct CGPoint realCenter; // @synthesize realCenter;
@property(nonatomic) UIView *realSuperView; // @synthesize realSuperView;
- (void)show;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSMutableArray, UIButton;

@interface GrowingEventListMenuPopView : UIView
{
    _Bool _showClickHere;
    CDUnknownBlockType _onClick;
    NSMutableArray *_tipButtons;
    long long _showButtonCountWithoutAnimated;
    UIButton *_clickHere;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *clickHere; // @synthesize clickHere=_clickHere;
- (void)hiddenTipView:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
@property(copy, nonatomic) CDUnknownBlockType onClick; // @synthesize onClick=_onClick;
- (void)popButtonDidClick;
- (void)popTitle:(id)arg1 withColor:(id)arg2;
@property(nonatomic) long long showButtonCountWithoutAnimated; // @synthesize showButtonCountWithoutAnimated=_showButtonCountWithoutAnimated;
@property(nonatomic) _Bool showClickHere; // @synthesize showClickHere=_showClickHere;
@property(retain, nonatomic) NSMutableArray *tipButtons; // @synthesize tipButtons=_tipButtons;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, UIButton, UILabel, UIScrollView;

@interface UPADBar : UIView
{
    UIScrollView *contentScrollView;
    NSString *adContent;
    UILabel *contentLabel;
    UIButton *dismissButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *adContent; // @synthesize adContent;
- (void)addAdContentLabelWithFrame:(struct CGRect)arg1 content:(id)arg2;
- (void)addBacgroundView;
- (void)addContentScrollViewWithContentSize:(struct CGSize)arg1;
- (id)backgroundColor;
- (double)calculateHeightByContent:(id)arg1;
@property(retain, nonatomic) UILabel *contentLabel; // @synthesize contentLabel;
@property(retain, nonatomic) UIScrollView *contentScrollView; // @synthesize contentScrollView;
- (void)dealloc;
- (void)dismissAction;
@property(retain, nonatomic) UIButton *dismissButton; // @synthesize dismissButton;
- (double)getChangedHeightByOffset:(double)arg1;
- (id)initWithFrame:(struct CGRect)arg1 content:(id)arg2;
- (void)showADContent:(id)arg1;
- (void)willRotateToChangeOffset:(double)arg1 duration:(double)arg2;

@end


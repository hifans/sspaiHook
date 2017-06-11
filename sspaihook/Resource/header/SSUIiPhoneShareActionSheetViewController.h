//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class NSArray, SSUIPageView, UIButton;

@interface SSUIiPhoneShareActionSheetViewController : UIViewController
{
    long long _interfaceOrientation;
    CDUnknownBlockType _clickHandle;
    CDUnknownBlockType _cancelHandle;
    UIButton *_cancelButton;
    SSUIPageView *_pageView;
    double _pageViewH;
    double _pageViewW;
    double _screenW;
    double _screenH;
    long long _totalColumns;
    long long _totalRows;
    NSArray *_items;
    double _intervalH;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
- (void)cancelButtonClick:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType cancelHandle; // @synthesize cancelHandle=_cancelHandle;
@property(copy, nonatomic) CDUnknownBlockType clickHandle; // @synthesize clickHandle=_clickHandle;
- (void)dismiss;
- (void)dismissAnimation:(CDUnknownBlockType)arg1;
- (id)initWithItems:(id)arg1;
@property(nonatomic) double intervalH; // @synthesize intervalH=_intervalH;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
- (void)layoutLandscape;
- (void)layoutPortrait;
@property(retain, nonatomic) SSUIPageView *pageView; // @synthesize pageView=_pageView;
@property(nonatomic) double pageViewH; // @synthesize pageViewH=_pageViewH;
@property(nonatomic) double pageViewW; // @synthesize pageViewW=_pageViewW;
- (long long)preferredStatusBarStyle;
@property(nonatomic) double screenH; // @synthesize screenH=_screenH;
@property(nonatomic) double screenW; // @synthesize screenW=_screenW;
@property(nonatomic) long long totalColumns; // @synthesize totalColumns=_totalColumns;
@property(nonatomic) long long totalRows; // @synthesize totalRows=_totalRows;
- (_Bool)shouldAutorotate;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)showInView:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)updateLayout;
- (void)viewTapped:(id)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIScrollViewDelegate.h"

@class NSArray, NSMutableArray, NSString, SSUIPlatformsView, UIPageControl, UIScrollView;

@interface SSUIPageView : UIView <UIScrollViewDelegate>
{
    long long _pageSize;
    long long _pageNum;
    long long _totalRow;
    long long _totalColums;
    NSMutableArray *_platformArr;
    CDUnknownBlockType _clickHandle;
    CDUnknownBlockType _cancelHandle;
    NSArray *_items;
    UIPageControl *_pageCtr;
    UIScrollView *_scrollView;
    SSUIPlatformsView *_platformView;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType cancelHandle; // @synthesize cancelHandle=_cancelHandle;
@property(copy, nonatomic) CDUnknownBlockType clickHandle; // @synthesize clickHandle=_clickHandle;
- (id)initWithItems:(id)arg1;
- (id)initWithItems:(id)arg1 totalColumn:(long long)arg2 totalRow:(long long)arg3;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
- (void)layoutSubviews;
@property(retain, nonatomic) UIPageControl *pageCtr; // @synthesize pageCtr=_pageCtr;
@property(nonatomic) long long pageNum; // @synthesize pageNum=_pageNum;
@property(nonatomic) long long pageSize; // @synthesize pageSize=_pageSize;
@property(retain, nonatomic) NSMutableArray *platformArr; // @synthesize platformArr=_platformArr;
@property(retain, nonatomic) SSUIPlatformsView *platformView; // @synthesize platformView=_platformView;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
- (void)scrollViewDidScroll:(id)arg1;
@property(nonatomic) long long totalColums; // @synthesize totalColums=_totalColums;
@property(nonatomic) long long totalRow; // @synthesize totalRow=_totalRow;
- (void)setupPageControlWithItems:(id)arg1;
- (void)setupScrollViewWithItems:(id)arg1;
- (void)updataPageData;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


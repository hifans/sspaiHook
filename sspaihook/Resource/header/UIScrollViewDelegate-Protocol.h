//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIScrollView, UIView;

@protocol UIScrollViewDelegate <NSObject>

@optional
- (void)scrollViewDidEndDecelerating:(UIScrollView *)arg1;
- (void)scrollViewDidEndDragging:(UIScrollView *)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndScrollingAnimation:(UIScrollView *)arg1;
- (void)scrollViewDidEndZooming:(UIScrollView *)arg1 withView:(UIView *)arg2 atScale:(double)arg3;
- (void)scrollViewDidScroll:(UIScrollView *)arg1;
- (void)scrollViewDidScrollToTop:(UIScrollView *)arg1;
- (void)scrollViewDidZoom:(UIScrollView *)arg1;
- (_Bool)scrollViewShouldScrollToTop:(UIScrollView *)arg1;
- (void)scrollViewWillBeginDecelerating:(UIScrollView *)arg1;
- (void)scrollViewWillBeginDragging:(UIScrollView *)arg1;
- (void)scrollViewWillBeginZooming:(UIScrollView *)arg1 withView:(UIView *)arg2;
- (void)scrollViewWillEndDragging:(UIScrollView *)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (UIView *)viewForZoomingInScrollView:(UIScrollView *)arg1;
@end


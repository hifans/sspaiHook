//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIScrollView.h"

@class MJRefreshFooter, MJRefreshHeader;

@interface UIScrollView (MJRefresh)
- (void)executeReloadDataBlock;
@property(retain, nonatomic) MJRefreshFooter *footer;
@property(retain, nonatomic) MJRefreshHeader *header;
@property(retain, nonatomic) MJRefreshFooter *mj_footer;
@property(retain, nonatomic) MJRefreshHeader *mj_header;
@property(copy, nonatomic) CDUnknownBlockType mj_reloadDataBlock;
- (long long)mj_totalDataCount;
@end


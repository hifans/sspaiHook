//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseTableViewController.h"

#import "TopTitleViewDelegate.h"

@class NSMutableArray, NSString, TopTitleView, UIActivityIndicatorView, UIView;

@interface TopicListViewController : BaseTableViewController <TopTitleViewDelegate>
{
    NSMutableArray *_dataArray;
    TopTitleView *_topTitleView;
    UIView *_contview;
    UIActivityIndicatorView *_actiView;
    long long _offset;
}

- (void).cxx_destruct;
@property(nonatomic) __weak UIActivityIndicatorView *actiView; // @synthesize actiView=_actiView;
@property(nonatomic) __weak UIView *contview; // @synthesize contview=_contview;
@property(retain, nonatomic) NSMutableArray *dataArray; // @synthesize dataArray=_dataArray;
- (void)dealloc;
- (void)didClickButtonAction:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)downloadData;
- (void)loadMoreData;
- (long long)numberOfSectionsInTableView:(id)arg1;
@property(nonatomic) long long offset; // @synthesize offset=_offset;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
@property(nonatomic) __weak TopTitleView *topTitleView; // @synthesize topTitleView=_topTitleView;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


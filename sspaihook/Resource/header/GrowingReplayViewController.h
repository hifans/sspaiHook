//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GrowingCircleListBaseViewController.h"

#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"

@class NSArray, NSString, NSTimer, UICollectionView, UIImage, UIImageView;

@interface GrowingReplayViewController : GrowingCircleListBaseViewController <UICollectionViewDelegate, UICollectionViewDataSource>
{
    CDUnknownBlockType _onCloseClick;
    NSArray *_items;
    UIImageView *_mainImageView;
    UIImage *_mainImage;
    long long _curImageIndex;
    UICollectionView *_thumbCollection;
    NSTimer *_timer;
}

- (void).cxx_destruct;
- (void)closeClick;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
@property(nonatomic) long long curImageIndex; // @synthesize curImageIndex=_curImageIndex;
- (id)initWithItems:(id)arg1;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
@property(retain, nonatomic) UIImage *mainImage; // @synthesize mainImage=_mainImage;
@property(retain, nonatomic) UIImageView *mainImageView; // @synthesize mainImageView=_mainImageView;
@property(copy, nonatomic) CDUnknownBlockType onCloseClick; // @synthesize onCloseClick=_onCloseClick;
- (void)playNext;
- (void)scrollViewDidScroll:(id)arg1;
@property(retain, nonatomic) UICollectionView *thumbCollection; // @synthesize thumbCollection=_thumbCollection;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

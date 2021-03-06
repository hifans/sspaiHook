//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GrowingCircleListBaseViewController.h"

@class GrowingEventListItem, NSArray, NSMutableDictionary, UIView;

@interface GrowingCircleListAddTagViewController : GrowingCircleListBaseViewController
{
    GrowingEventListItem *_item;
    NSMutableDictionary *_tableDict;
    UIView *_curTableView;
    NSArray *_typeArray;
}

- (void).cxx_destruct;
- (void)alertTextBoxWithTitle:(id)arg1 text:(id)arg2 placeHolder:(id)arg3 onFinish:(CDUnknownBlockType)arg4;
- (void)buildTitleView;
- (id)createTableView:(long long)arg1;
@property(retain, nonatomic) UIView *curTableView; // @synthesize curTableView=_curTableView;
- (id)initWithItem:(id)arg1;
@property(retain, nonatomic) GrowingEventListItem *item; // @synthesize item=_item;
- (void)savePane:(id)arg1 name:(id)arg2 origElement:(id)arg3 filterElement:(id)arg4;
- (void)selectDidChange:(id)arg1;
- (void)selectIndex:(long long)arg1;
@property(retain, nonatomic) NSMutableDictionary *tableDict; // @synthesize tableDict=_tableDict;
@property(retain, nonatomic) NSArray *typeArray; // @synthesize typeArray=_typeArray;
- (long long)styleForStyle:(long long)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end


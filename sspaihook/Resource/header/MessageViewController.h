//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "MFMailComposeViewControllerDelegate.h"
#import "NotificationTableViewDelegate.h"
#import "SFSafariViewControllerDelegate.h"
#import "UIScrollViewDelegate.h"
#import "UITableViewDelegate.h"

@class ContentScrollView, NSString, NotificationTableView, PrivateLetterTableView, TitleBar, UILabel, UIView;

@interface MessageViewController : UIViewController <UIScrollViewDelegate, UITableViewDelegate, NotificationTableViewDelegate, MFMailComposeViewControllerDelegate, SFSafariViewControllerDelegate>
{
    _Bool _turnToSafari;
    ContentScrollView *_scrollView;
    NotificationTableView *_table1;
    PrivateLetterTableView *_table2;
    UIView *_tableViewHeadView;
    UIView *_headBackView;
    TitleBar *_titleBarView;
    double _headViewHeight;
    UILabel *_titleLabel;
    long long _index;
    UIView *_bitView;
}

- (void).cxx_destruct;
@property(nonatomic) __weak UIView *bitView; // @synthesize bitView=_bitView;
- (void)didReceiveMemoryWarning;
@property(nonatomic) __weak UIView *headBackView; // @synthesize headBackView=_headBackView;
@property(nonatomic) double headViewHeight; // @synthesize headViewHeight=_headViewHeight;
@property(nonatomic) long long index; // @synthesize index=_index;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3;
- (void)makeAllNotificationIsRead;
- (void)openURLInSafari:(id)arg1;
- (void)pushViewControllerWith:(id)arg1 user:(id)arg2 commentID:(id)arg3;
@property(nonatomic) __weak ContentScrollView *scrollView; // @synthesize scrollView=_scrollView;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)sendEmail;
@property(nonatomic) __weak NotificationTableView *table1; // @synthesize table1=_table1;
@property(nonatomic) __weak PrivateLetterTableView *table2; // @synthesize table2=_table2;
@property(retain, nonatomic) UIView *tableViewHeadView; // @synthesize tableViewHeadView=_tableViewHeadView;
@property(nonatomic) __weak TitleBar *titleBarView; // @synthesize titleBarView=_titleBarView;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) _Bool turnToSafari; // @synthesize turnToSafari=_turnToSafari;
- (void)setupContentView;
- (void)setupHeadView;
- (void)showSendMailErrorAlert;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)updateBitStatus:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


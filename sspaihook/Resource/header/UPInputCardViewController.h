//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UPBaseViewController.h"

#import "UPPullListViewDelegate.h"

@class NSString, UPNewBankCardCell, UPUnderLineButton;

@interface UPInputCardViewController : UPBaseViewController <UPPullListViewDelegate>
{
    UPNewBankCardCell *mBankCell;
    UPUnderLineButton *_supportBanks;
    _Bool _isForAccount;
}

- (void).cxx_destruct;
- (void)addNavigationBar;
- (void)addSubViews;
- (void)comunicateToUPMPDidFailWithErrorType:(long long)arg1 error:(id)arg2;
- (void)comunicateToUPMPDidSucceedWithEvent:(long long)arg1;
- (void)didReceiveMemoryWarning;
- (id)initForAccount:(_Bool)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)nextAction:(id)arg1;
- (void)pullListAnimationDidStart:(double)arg1;
- (void)pushViewControllerToEntrustViewController;
- (void)pushViewControllerToPayingViewController;
- (void)showSupportedBank;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


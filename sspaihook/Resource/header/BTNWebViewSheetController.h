//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "BTNNotificationObserver.h"
#import "BTNResourceConsumer.h"

@class BTNResourceProvider, BTNWebViewSheetViewModel, NSArray, NSLayoutConstraint, NSString, UIButton, UIImageView, UILabel, UIProgressView, UISwitch, UIView, UIVisualEffectView;

@interface BTNWebViewSheetController : UIViewController <BTNNotificationObserver, BTNResourceConsumer>
{
    BTNResourceProvider *_resources;
    UIProgressView *_progressBar;
    NSLayoutConstraint *_bottomConstraint;
    UIVisualEffectView *_backgroundView;
    UIView *_dismissWebViewContainer;
    UIView *_tapToDismissBiggerCircleView;
    UIView *_tapToDismissBiggerBorderView;
    UIView *_tapToDismissSmallerCircleView;
    UIView *_tapToDismissSmallerBorderView;
    UILabel *_dismissWebViewLabel;
    UIImageView *_imageView;
    UILabel *_titleLabel;
    UIButton *_goToAppButton;
    UIView *_goToAppButtonContainer;
    UILabel *_appName;
    UILabel *_companyName;
    UIView *_bottomDrawerView;
    UILabel *_preferenceLabel;
    NSLayoutConstraint *_preferenceLabelBottomConstraint;
    NSLayoutConstraint *_preferenceLabelZeroHeightConstraint;
    UISwitch *_preferenceSwitch;
    NSArray *_scalableConstraints;
    BTNWebViewSheetViewModel *_viewModel;
    UIButton *_webActionButton;
}

+ (id)controllerWithViewModel:(id)arg1 resources:(id)arg2;
- (void).cxx_destruct;
@property(nonatomic) __weak UILabel *appName; // @synthesize appName=_appName;
@property(nonatomic) __weak UIVisualEffectView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic) __weak NSLayoutConstraint *bottomConstraint; // @synthesize bottomConstraint=_bottomConstraint;
@property(nonatomic) __weak UIView *bottomDrawerView; // @synthesize bottomDrawerView=_bottomDrawerView;
@property(nonatomic) __weak UILabel *companyName; // @synthesize companyName=_companyName;
- (void)dealloc;
@property(nonatomic) __weak UIView *dismissWebViewContainer; // @synthesize dismissWebViewContainer=_dismissWebViewContainer;
@property(nonatomic) __weak UILabel *dismissWebViewLabel; // @synthesize dismissWebViewLabel=_dismissWebViewLabel;
- (void)dismissWithCompletion:(CDUnknownBlockType)arg1;
@property(nonatomic) __weak UIButton *goToAppButton; // @synthesize goToAppButton=_goToAppButton;
@property(nonatomic) __weak UIView *goToAppButtonContainer; // @synthesize goToAppButtonContainer=_goToAppButtonContainer;
- (void)handleDeviceOrientationChange:(id)arg1;
- (void)handleInstallApplicationAction:(id)arg1;
- (void)handlePanGestureAction:(id)arg1;
- (void)handlePreferenceSwitchAction:(id)arg1;
- (void)handleProceedToWebViewAction:(id)arg1;
- (void)handleTapBackgroundAction:(id)arg1;
@property(nonatomic) __weak UIImageView *imageView; // @synthesize imageView=_imageView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2 viewModel:(id)arg3 resources:(id)arg4;
@property(nonatomic) __weak UILabel *preferenceLabel; // @synthesize preferenceLabel=_preferenceLabel;
@property(nonatomic) __weak NSLayoutConstraint *preferenceLabelBottomConstraint; // @synthesize preferenceLabelBottomConstraint=_preferenceLabelBottomConstraint;
@property(nonatomic) __weak NSLayoutConstraint *preferenceLabelZeroHeightConstraint; // @synthesize preferenceLabelZeroHeightConstraint=_preferenceLabelZeroHeightConstraint;
@property(nonatomic) __weak UISwitch *preferenceSwitch; // @synthesize preferenceSwitch=_preferenceSwitch;
- (void)present;
@property(nonatomic) __weak UIProgressView *progressBar; // @synthesize progressBar=_progressBar;
@property(readonly, nonatomic) __weak BTNResourceProvider *resources; // @synthesize resources=_resources;
@property(retain, nonatomic) NSArray *scalableConstraints; // @synthesize scalableConstraints=_scalableConstraints;
@property(nonatomic) __weak UIView *tapToDismissBiggerBorderView; // @synthesize tapToDismissBiggerBorderView=_tapToDismissBiggerBorderView;
@property(nonatomic) __weak UIView *tapToDismissBiggerCircleView; // @synthesize tapToDismissBiggerCircleView=_tapToDismissBiggerCircleView;
@property(nonatomic) __weak UIView *tapToDismissSmallerBorderView; // @synthesize tapToDismissSmallerBorderView=_tapToDismissSmallerBorderView;
@property(nonatomic) __weak UIView *tapToDismissSmallerCircleView; // @synthesize tapToDismissSmallerCircleView=_tapToDismissSmallerCircleView;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak UIButton *webActionButton; // @synthesize webActionButton=_webActionButton;
- (void)setWebActionButtonEnabled:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setupDismissViews;
- (void)setupGoToAppButtonContainer;
- (void)setupIconImage;
- (void)setupPreferenceSwitch;
- (void)setupPreferenceTitle;
- (void)setupProgressBar;
- (void)startObservingNotifications;
- (void)stopObservingNotifications;
- (void)updateConstraintsForCurrentDevice;
- (void)updateInterfaceElements;
- (void)viewDidLoad;
@property(readonly, nonatomic) BTNWebViewSheetViewModel *viewModel; // @synthesize viewModel=_viewModel;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


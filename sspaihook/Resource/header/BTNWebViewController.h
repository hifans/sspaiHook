//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "BTNNotificationObserver.h"
#import "BTNResourceConsumer.h"
#import "UIScrollViewDelegate.h"
#import "WKNavigationDelegate.h"
#import "WKUIDelegate.h"

@class BTNAppAction, BTNLink, BTNNavigationHeaderView, BTNResourceProvider, BTNWebViewSheet, BTNWebViewSheetController, NSString, UIActivityIndicatorView, UIBarButtonItem, UIWindow, WKWebView;

@interface BTNWebViewController : UIViewController <UIScrollViewDelegate, BTNNotificationObserver, WKNavigationDelegate, WKUIDelegate, BTNResourceConsumer>
{
    BTNResourceProvider *_resources;
    BTNWebViewSheetController *_sheetController;
    UIBarButtonItem *_backItem;
    UIBarButtonItem *_forwardItem;
    CDUnknownBlockType _didRequestAppInstallHandler;
    BTNLink *_link;
    WKWebView *_webView;
    BTNAppAction *_appAction;
    UIViewController *_rootViewController;
    UIWindow *_originalKeyWindow;
    BTNNavigationHeaderView *_headerView;
    UIActivityIndicatorView *_activityIndicator;
    double _previousYOffset;
    UIViewController *_container;
    BTNWebViewSheet *_dismissSheet;
    NSString *_dismissSheetUpdateName;
}

+ (void)setAutomationTestsMode:(_Bool)arg1;
+ (void)setWindow:(id)arg1;
+ (id)webViewControllerWithLink:(id)arg1 appAction:(id)arg2 resources:(id)arg3 webView:(id)arg4;
+ (id)window;
- (void).cxx_destruct;
@property(retain, nonatomic) UIActivityIndicatorView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
@property(readonly, copy, nonatomic) BTNAppAction *appAction; // @synthesize appAction=_appAction;
@property(retain, nonatomic) UIBarButtonItem *backItem; // @synthesize backItem=_backItem;
- (void)closeBars;
- (void)closeOrExpandIfNeeded;
- (double)closedNavigationBarYCenter;
- (double)closedToolbarYCenter;
@property(retain, nonatomic) UIViewController *container; // @synthesize container=_container;
- (id)createItemWithTitle:(id)arg1 tintColor:(id)arg2 font:(id)arg3 actionHandler:(SEL)arg4;
- (void)dealloc;
@property(copy, nonatomic) CDUnknownBlockType didRequestAppInstallHandler; // @synthesize didRequestAppInstallHandler=_didRequestAppInstallHandler;
- (void)dismiss;
@property(copy, nonatomic) BTNWebViewSheet *dismissSheet; // @synthesize dismissSheet=_dismissSheet;
- (CDUnknownBlockType)dismissSheetAppActionHandlerBlock;
- (CDUnknownBlockType)dismissSheetDismissActionHandlerBlock;
@property(copy, nonatomic) NSString *dismissSheetUpdateName; // @synthesize dismissSheetUpdateName=_dismissSheetUpdateName;
- (id)dismissSheetViewModel;
- (CDUnknownBlockType)dismissSheetWebActionHandlerBlock;
- (void)embedDismissSheetController;
- (void)embedInstallSheetController;
- (void)embedWebViewController;
- (void)evaluateCheckpointsForActivation:(id)arg1 forPostNavigation:(_Bool)arg2;
- (void)evaluatePostNavigationCheckpointsForActivation;
- (void)evaluatePreNavigationCheckpointsForActivation;
- (_Bool)evaluateTrigger:(id)arg1 forURL:(id)arg2;
- (void)executeAction:(id)arg1 forCheckpointWithName:(id)arg2;
- (void)executePresentDismissSheetAction:(id)arg1;
- (void)executeUpdateDismissSheetAction:(id)arg1;
- (void)expandBars;
- (double)expandedNavigationBarYCenter;
- (double)expandedToolbarYCenter;
- (void)fetchIconAndSetupToolBarItems;
@property(retain, nonatomic) UIBarButtonItem *forwardItem; // @synthesize forwardItem=_forwardItem;
- (void)handleAppButtonTap:(id)arg1;
- (void)handleBackButtonTap:(id)arg1;
- (void)handleCancelButtonTap:(id)arg1;
- (void)handleDeviceOrientationChange:(id)arg1;
- (void)handleForwardButtonTap:(id)arg1;
- (void)handleInstallSuccessNotification:(id)arg1;
@property(retain, nonatomic) BTNNavigationHeaderView *headerView; // @synthesize headerView=_headerView;
- (id)initWithLink:(id)arg1 appAction:(id)arg2 resources:(id)arg3 webView:(id)arg4;
- (void)installActivityIndicator;
- (void)installCancelButton;
- (CDUnknownBlockType)installSheetAppActionHandlerBlock;
- (CDUnknownBlockType)installSheetPreferenceChangedHandlerBlock;
- (id)installSheetViewModel;
- (CDUnknownBlockType)installSheetWebActionHandlerBlock;
- (void)invokeAppInstallHandler;
- (_Bool)isPortraitMode;
- (_Bool)isResourceBlacklisted:(id)arg1;
@property(readonly, copy, nonatomic) BTNLink *link; // @synthesize link=_link;
- (void)loadView;
- (void)makeOriginalWindowKeyAndVisible;
- (double)navigationBarHeight;
- (double)navigationBarVisibilityFactor;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
@property(retain, nonatomic) UIWindow *originalKeyWindow; // @synthesize originalKeyWindow=_originalKeyWindow;
- (void)presentDismissSheetController;
- (void)presentSheetControllerWithCompletion:(CDUnknownBlockType)arg1;
@property(nonatomic) double previousYOffset; // @synthesize previousYOffset=_previousYOffset;
@property(readonly, nonatomic) __weak BTNResourceProvider *resources; // @synthesize resources=_resources;
@property(readonly, nonatomic) UIViewController *rootViewController; // @synthesize rootViewController=_rootViewController;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (_Bool)scrollViewShouldScrollToTop:(id)arg1;
@property(retain, nonatomic) BTNWebViewSheetController *sheetController; // @synthesize sheetController=_sheetController;
- (void)setupNavigationBarIfNeeded;
- (void)setupToolBarItemsWithIcon:(id)arg1;
- (void)setupWebView;
- (void)show;
- (void)showWithCompletion:(CDUnknownBlockType)arg1 rootViewController:(id)arg2;
- (void)startObservingNotifications;
- (void)startObservingWebViewLoadingProgress;
- (double)statusBarHeight;
- (void)stopObservingNotifications;
- (void)stopObservingWebViewLoadingProgress;
- (double)toolbarHeight;
- (void)updateBarPositionsWithDeltaY:(double)arg1;
- (void)updateForCurrentStatusBarOrientation;
- (void)updateScrollViewContentInset;
@property(readonly, nonatomic) WKWebView *webView; // @synthesize webView=_webView;
- (id)webView:(id)arg1 createWebViewWithConfiguration:(id)arg2 forNavigationAction:(id)arg3 windowFeatures:(id)arg4;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (void)webView:(id)arg1 didStartProvisionalNavigation:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


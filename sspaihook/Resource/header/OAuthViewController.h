//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UIWebViewDelegate.h"

@class NSString, UIWebView;

@interface OAuthViewController : UIViewController <UIWebViewDelegate>
{
    CDUnknownBlockType _callback;
    NSString *_action;
    UIWebView *_webView;
    unsigned long long _type;
    id _response;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *action; // @synthesize action=_action;
@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
- (void)didReceiveMemoryWarning;
- (void)getUserOauthInfoWith:(id)arg1 andPlatformType:(unsigned long long)arg2;
- (id)initWithPlatformType:(unsigned long long)arg1;
- (void)loadWebView;
@property(retain, nonatomic) id response; // @synthesize response=_response;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(nonatomic) __weak UIWebView *webView; // @synthesize webView=_webView;
- (void)test;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


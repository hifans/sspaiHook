//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, NSURLRequest, UIButton, WBSDKWebView;

@protocol WBSDKWebViewDelegate <NSObject>

@optional
- (void)wbsdk_webView:(WBSDKWebView *)arg1 didFailLoadWithError:(NSError *)arg2;
- (void)wbsdk_webView:(WBSDKWebView *)arg1 didPressErrorViewReloadButton:(UIButton *)arg2;
- (_Bool)wbsdk_webView:(WBSDKWebView *)arg1 shouldStartLoadWithRequest:(NSURLRequest *)arg2 navigationType:(long long)arg3;
- (void)wbsdk_webViewDidFinishLoad:(WBSDKWebView *)arg1;
- (void)wbsdk_webViewDidStartLoad:(WBSDKWebView *)arg1;
@end


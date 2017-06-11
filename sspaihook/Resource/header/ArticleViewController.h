//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "ArticleShareViewDelegate.h"
#import "LoginViewControllerDelegate.h"
#import "SFSafariViewControllerDelegate.h"
#import "UIGestureRecognizerDelegate.h"
#import "UIScrollViewDelegate.h"
#import "UIWebViewDelegate.h"
#import "WKNavigationDelegate.h"
#import "WKUIDelegate.h"

@class ArticleModel, NSMutableArray, NSString, NSTimer, NSURL, UIButton, UIImageView, UIProgressView, UIToolbar, UIView, UIWebView, WKWebView;

@interface ArticleViewController : UIViewController <UIWebViewDelegate, LoginViewControllerDelegate, ArticleShareViewDelegate, UIScrollViewDelegate, UIGestureRecognizerDelegate, SFSafariViewControllerDelegate, WKUIDelegate, WKNavigationDelegate>
{
    _Bool _firstPage;
    _Bool _canShowImageInfo;
    _Bool _theBool;
    _Bool _turnToSafari;
    _Bool _isLoginPress;
    _Bool _firstMovie;
    _Bool _tapImage;
    _Bool _haveLink;
    CDUnknownBlockType _updateCommentCount;
    CDUnknownBlockType _updateLikeCount;
    UIWebView *_webView;
    WKWebView *_wkView;
    UIView *_hudView;
    NSMutableArray *_UrlArray;
    ArticleModel *_article;
    UIButton *_commentButton;
    UIToolbar *_toolbar;
    UIButton *_likeButton;
    UIButton *_favoriteButton;
    UIView *_scrollView;
    UIImageView *_lastImageView;
    UIImageView *_pictureView;
    UIView *_preView;
    UIView *_alertView;
    UIView *_dimView;
    UIProgressView *_progressView;
    NSTimer *_timer;
    NSURL *_url;
    struct CGRect _originalFrame;
}

- (void).cxx_destruct;
- (id)URLDecodedString:(id)arg1;
- (id)URLEncodedString:(id)arg1;
@property(retain, nonatomic) NSMutableArray *UrlArray; // @synthesize UrlArray=_UrlArray;
- (id)addImageview:(id)arg1 toImage:(id)arg2;
- (void)adjustStatusBar;
@property(nonatomic) __weak UIView *alertView; // @synthesize alertView=_alertView;
@property(retain, nonatomic) ArticleModel *article; // @synthesize article=_article;
- (void)backToPreviousView:(id)arg1;
@property(nonatomic) _Bool canShowImageInfo; // @synthesize canShowImageInfo=_canShowImageInfo;
- (void)cancelButtonClickAction:(id)arg1;
- (void)commentArticle;
@property(nonatomic) __weak UIButton *commentButton; // @synthesize commentButton=_commentButton;
- (void)creatLongImageAndPush;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
@property(nonatomic) __weak UIView *dimView; // @synthesize dimView=_dimView;
- (void)favoriteArticle:(id)arg1;
@property(nonatomic) __weak UIButton *favoriteButton; // @synthesize favoriteButton=_favoriteButton;
@property(nonatomic) _Bool firstMovie; // @synthesize firstMovie=_firstMovie;
@property(nonatomic) _Bool firstPage; // @synthesize firstPage=_firstPage;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)handleLongPress:(id)arg1;
@property(nonatomic) _Bool haveLink; // @synthesize haveLink=_haveLink;
@property(nonatomic) __weak UIView *hudView; // @synthesize hudView=_hudView;
- (id)initWithArticle:(id)arg1;
@property(nonatomic) _Bool isLoginPress; // @synthesize isLoginPress=_isLoginPress;
@property(nonatomic) __weak UIImageView *lastImageView; // @synthesize lastImageView=_lastImageView;
- (void)lickArticle:(id)arg1;
@property(nonatomic) __weak UIButton *likeButton; // @synthesize likeButton=_likeButton;
- (void)loadUIWebView;
- (void)loadWkWebView;
- (void)longPress:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)openURLInSafari:(id)arg1;
@property(nonatomic) struct CGRect originalFrame; // @synthesize originalFrame=_originalFrame;
- (void)pan:(id)arg1;
- (void)panview:(id)arg1;
@property(nonatomic) __weak UIImageView *pictureView; // @synthesize pictureView=_pictureView;
- (void)pinch:(id)arg1;
@property(nonatomic) __weak UIView *preView; // @synthesize preView=_preView;
@property(nonatomic) __weak UIProgressView *progressView; // @synthesize progressView=_progressView;
- (void)pushActivityVC:(id)arg1;
- (void)pushRegistVierController:(id)arg1;
- (void)requestPhotosAccess:(CDUnknownBlockType)arg1;
- (void)safariViewController:(id)arg1 didCompleteInitialLoad:(_Bool)arg2;
- (void)saveButtonClickAction:(id)arg1;
- (void)saveImage:(id)arg1 toAlbumWithName:(id)arg2 fin:(CDUnknownBlockType)arg3;
@property(nonatomic) __weak UIView *scrollView; // @synthesize scrollView=_scrollView;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
@property(nonatomic) _Bool tapImage; // @synthesize tapImage=_tapImage;
@property(nonatomic) _Bool theBool; // @synthesize theBool=_theBool;
@property(nonatomic) __weak NSTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) __weak UIToolbar *toolbar; // @synthesize toolbar=_toolbar;
@property(nonatomic) _Bool turnToSafari; // @synthesize turnToSafari=_turnToSafari;
@property(copy, nonatomic) CDUnknownBlockType updateCommentCount; // @synthesize updateCommentCount=_updateCommentCount;
@property(copy, nonatomic) CDUnknownBlockType updateLikeCount; // @synthesize updateLikeCount=_updateLikeCount;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
@property(nonatomic) __weak UIWebView *webView; // @synthesize webView=_webView;
@property(nonatomic) __weak WKWebView *wkView; // @synthesize wkView=_wkView;
- (void)setupProgressView;
- (void)setupToolbar;
- (void)shareArticle:(id)arg1;
- (void)showZoomImageView:(id)arg1;
- (id)syncSaveImageWithPhotos:(id)arg1;
- (void)tap:(id)arg1;
- (void)tapview:(id)arg1;
- (void)timerCallback;
- (void)userContentController:(id)arg1 didReceiveScriptMessage:(id)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (id)webContentImage;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (void)webView:(id)arg1 decidePolicyForNavigationResponse:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (void)webView:(id)arg1 didReceiveServerRedirectForProvisionalNavigation:(id)arg2;
- (void)webView:(id)arg1 didStartProvisionalNavigation:(id)arg2;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;
- (void)webViewWebContentProcessDidTerminate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


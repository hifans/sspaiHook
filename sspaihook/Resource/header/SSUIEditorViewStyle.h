//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIColor, UIImage;

@interface SSUIEditorViewStyle : NSObject
{
    UIImage *_iPhoneNavigationbarBackgroundImage;
    UIColor *_iPhoneNavigationbarBackgroundColor;
    UIColor *_iPadNavigationbarBackgroundColor;
    UIColor *_contentViewBackgroundColor;
    NSString *_title;
    UIColor *_titleColor;
    NSString *_cancelButtonLabel;
    UIColor *_cancelButtonLabelColor;
    UIImage *_cancelButtonImage;
    NSString *_shareButtonLabel;
    UIColor *_shareButtonLabelColor;
    UIImage *_shareButtonImage;
    unsigned long long _supportedInterfaceOrientation;
    long long _statusBarStyle;
}

+ (void)setCancelButtonImage:(id)arg1;
+ (void)setCancelButtonLabel:(id)arg1;
+ (void)setCancelButtonLabelColor:(id)arg1;
+ (void)setContentViewBackgroundColor:(id)arg1;
+ (void)setShareButtonImage:(id)arg1;
+ (void)setShareButtonLabel:(id)arg1;
+ (void)setShareButtonLabelColor:(id)arg1;
+ (void)setStatusBarStyle:(long long)arg1;
+ (void)setSupportedInterfaceOrientation:(unsigned long long)arg1;
+ (void)setTitle:(id)arg1;
+ (void)setTitleColor:(id)arg1;
+ (void)setiPadNavigationBarBackgroundColor:(id)arg1;
+ (void)setiPhoneNavigationBarBackgroundColor:(id)arg1;
+ (void)setiPhoneNavigationBarBackgroundImage:(id)arg1;
+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) UIImage *cancelButtonImage; // @synthesize cancelButtonImage=_cancelButtonImage;
@property(copy, nonatomic) NSString *cancelButtonLabel; // @synthesize cancelButtonLabel=_cancelButtonLabel;
@property(retain, nonatomic) UIColor *cancelButtonLabelColor; // @synthesize cancelButtonLabelColor=_cancelButtonLabelColor;
@property(retain, nonatomic) UIColor *contentViewBackgroundColor; // @synthesize contentViewBackgroundColor=_contentViewBackgroundColor;
@property(retain, nonatomic) UIColor *iPadNavigationbarBackgroundColor; // @synthesize iPadNavigationbarBackgroundColor=_iPadNavigationbarBackgroundColor;
@property(retain, nonatomic) UIColor *iPhoneNavigationbarBackgroundColor; // @synthesize iPhoneNavigationbarBackgroundColor=_iPhoneNavigationbarBackgroundColor;
@property(retain, nonatomic) UIImage *iPhoneNavigationbarBackgroundImage; // @synthesize iPhoneNavigationbarBackgroundImage=_iPhoneNavigationbarBackgroundImage;
@property(retain, nonatomic) UIImage *shareButtonImage; // @synthesize shareButtonImage=_shareButtonImage;
@property(copy, nonatomic) NSString *shareButtonLabel; // @synthesize shareButtonLabel=_shareButtonLabel;
@property(retain, nonatomic) UIColor *shareButtonLabelColor; // @synthesize shareButtonLabelColor=_shareButtonLabelColor;
@property(nonatomic) long long statusBarStyle; // @synthesize statusBarStyle=_statusBarStyle;
@property(nonatomic) unsigned long long supportedInterfaceOrientation; // @synthesize supportedInterfaceOrientation=_supportedInterfaceOrientation;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) UIColor *titleColor; // @synthesize titleColor=_titleColor;

@end


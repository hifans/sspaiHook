//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class NSString, UIBarButtonItem, UIButton, UILabel, UITextField;

@interface ChangeUserInfoViewController : UIViewController
{
    NSString *_token;
    NSString *_password;
    CDUnknownBlockType _pushViewcontroller;
    UITextField *_textfield;
    UITextField *_reTextfield;
    UIButton *_sureButton;
    UIBarButtonItem *_saveItem;
    UILabel *_tipLabel;
}

- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
@property(copy, nonatomic) NSString *password; // @synthesize password=_password;
@property(copy, nonatomic) CDUnknownBlockType pushViewcontroller; // @synthesize pushViewcontroller=_pushViewcontroller;
@property(nonatomic) __weak UITextField *reTextfield; // @synthesize reTextfield=_reTextfield;
@property(nonatomic) __weak UIBarButtonItem *saveItem; // @synthesize saveItem=_saveItem;
- (void)savePasswordChange:(id)arg1;
@property(nonatomic) __weak UIButton *sureButton; // @synthesize sureButton=_sureButton;
@property(nonatomic) __weak UITextField *textfield; // @synthesize textfield=_textfield;
@property(nonatomic) __weak UILabel *tipLabel; // @synthesize tipLabel=_tipLabel;
@property(copy, nonatomic) NSString *token; // @synthesize token=_token;
- (void)setupUI;
- (void)sureButtonClickAction:(id)arg1;
- (void)textChange:(id)arg1;
- (_Bool)validateEmail:(id)arg1;
- (_Bool)validatePassword:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;

@end

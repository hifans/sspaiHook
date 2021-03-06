//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class CodeInputView, NSDictionary, NSString, UIButton, UILabel, UserModel;

@interface VerifyCodeViewController : UIViewController
{
    NSString *_email;
    NSDictionary *_registInfo;
    UILabel *_titleLabel;
    UILabel *_tipLabel;
    CodeInputView *_codeInputView;
    UIButton *_verifyButton;
    UserModel *_user;
}

- (void).cxx_destruct;
@property(nonatomic) __weak CodeInputView *codeInputView; // @synthesize codeInputView=_codeInputView;
- (void)didReceiveMemoryWarning;
@property(copy, nonatomic) NSString *email; // @synthesize email=_email;
- (void)nextStepAction:(id)arg1;
@property(retain, nonatomic) NSDictionary *registInfo; // @synthesize registInfo=_registInfo;
@property(nonatomic) __weak UILabel *tipLabel; // @synthesize tipLabel=_tipLabel;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UserModel *user; // @synthesize user=_user;
@property(nonatomic) __weak UIButton *verifyButton; // @synthesize verifyButton=_verifyButton;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;

@end


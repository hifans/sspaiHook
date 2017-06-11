//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WBBaseRequest.h"

@class NSString, WBAuthorizeRequest, WBMessageObject;

@interface WBSendMessageToWeiboRequest : WBBaseRequest
{
    _Bool _shouldShowComposerIfCannotShareInWBApp;
    WBMessageObject *message;
    WBAuthorizeRequest *authRequest;
    NSString *access_token;
}

+ (Class)associateResponseClass;
+ (id)requestWithMessage:(id)arg1;
+ (id)requestWithMessage:(id)arg1 authInfo:(id)arg2 access_token:(id)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *access_token; // @synthesize access_token;
@property(retain, nonatomic) WBAuthorizeRequest *authRequest; // @synthesize authRequest;
- (_Bool)canBeReceived;
- (_Bool)canBeSent;
- (void)loadFromDictionary:(id)arg1;
@property(retain, nonatomic) WBMessageObject *message; // @synthesize message;
@property(nonatomic) _Bool shouldShowComposerIfCannotShareInWBApp; // @synthesize shouldShowComposerIfCannotShareInWBApp=_shouldShowComposerIfCannotShareInWBApp;
- (void)storeToDictionary:(id)arg1;
- (id)validate;

@end


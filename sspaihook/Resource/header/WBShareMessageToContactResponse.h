//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WBBaseResponse.h"

@class WBAuthorizeResponse;

@interface WBShareMessageToContactResponse : WBBaseResponse
{
    WBAuthorizeResponse *_authResponse;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WBAuthorizeResponse *authResponse; // @synthesize authResponse=_authResponse;
- (_Bool)canBeReceived;
- (_Bool)canBeSent;
- (void)loadFromDictionary:(id)arg1;
- (void)storeToDictionary:(id)arg1;

@end


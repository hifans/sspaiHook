//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseReq.h"

@class NSString, WXMediaMessage;

@interface SendMessageToWXReq : BaseReq
{
    _Bool bText;
    int scene;
    NSString *text;
    WXMediaMessage *message;
}

@property(nonatomic) _Bool bText; // @synthesize bText;
- (void)dealloc;
- (id)init;
@property(retain, nonatomic) WXMediaMessage *message; // @synthesize message;
@property(nonatomic) int scene; // @synthesize scene;
@property(retain, nonatomic) NSString *text; // @synthesize text;

@end


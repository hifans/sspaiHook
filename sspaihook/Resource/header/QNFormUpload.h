//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSString, QNConfiguration, QNUpToken, QNUploadOption;

@interface QNFormUpload : NSObject
{
    int _retryTimes;
    float _previousPercent;
    NSData *_data;
    id <QNHttpDelegate> _httpManager;
    NSString *_key;
    QNUpToken *_token;
    QNUploadOption *_option;
    CDUnknownBlockType _complete;
    QNConfiguration *_config;
    NSString *_access;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *access; // @synthesize access=_access;
@property(copy, nonatomic) CDUnknownBlockType complete; // @synthesize complete=_complete;
@property(retain, nonatomic) QNConfiguration *config; // @synthesize config=_config;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
@property(retain, nonatomic) id <QNHttpDelegate> httpManager; // @synthesize httpManager=_httpManager;
- (id)initWithData:(id)arg1 withKey:(id)arg2 withToken:(id)arg3 withCompletionHandler:(CDUnknownBlockType)arg4 withOption:(id)arg5 withHttpManager:(id)arg6 withConfiguration:(id)arg7;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
@property(retain, nonatomic) QNUploadOption *option; // @synthesize option=_option;
@property(nonatomic) float previousPercent; // @synthesize previousPercent=_previousPercent;
- (void)put;
@property(nonatomic) int retryTimes; // @synthesize retryTimes=_retryTimes;
@property(retain, nonatomic) QNUpToken *token; // @synthesize token=_token;

@end

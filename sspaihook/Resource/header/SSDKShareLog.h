//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SSDKLog.h"

@class NSString, SSDKContentEntity, SSDKUser;

@interface SSDKShareLog : SSDKLog
{
    unsigned long long _platformType;
    SSDKContentEntity *_contentEntity;
    SSDKUser *_user;
    NSString *_target;
    SSDKShareLog *_selfRef;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SSDKContentEntity *contentEntity; // @synthesize contentEntity=_contentEntity;
- (void)convertContentEntityImage:(id)arg1 result:(CDUnknownBlockType)arg2;
- (void)convertContentEntityImages:(CDUnknownBlockType)arg1;
- (void)convertContentEntityToDictionaryValue:(CDUnknownBlockType)arg1;
- (void)getLogContent:(CDUnknownBlockType)arg1;
- (id)initWithPlatform:(unsigned long long)arg1 contentEntity:(id)arg2 user:(id)arg3 target:(id)arg4;
@property(nonatomic) unsigned long long platformType; // @synthesize platformType=_platformType;
@property(retain, nonatomic) SSDKShareLog *selfRef; // @synthesize selfRef=_selfRef;
@property(retain, nonatomic) NSString *target; // @synthesize target=_target;
@property(retain, nonatomic) SSDKUser *user; // @synthesize user=_user;

@end


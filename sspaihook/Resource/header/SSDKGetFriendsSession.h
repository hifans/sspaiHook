//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SSDKSession.h"

@interface SSDKGetFriendsSession : SSDKSession
{
    unsigned long long _platformType;
    long long _cursor;
    unsigned long long _size;
    CDUnknownBlockType _authorizeHandler;
    CDUnknownBlockType _stateChangedHandler;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType authorizeHandler; // @synthesize authorizeHandler=_authorizeHandler;
@property(nonatomic) long long cursor; // @synthesize cursor=_cursor;
- (id)initWithPlatformType:(unsigned long long)arg1 cursor:(long long)arg2 size:(unsigned long long)arg3 authorizeHandler:(CDUnknownBlockType)arg4 stateChangedHandler:(CDUnknownBlockType)arg5;
@property(nonatomic) unsigned long long platformType; // @synthesize platformType=_platformType;
@property(nonatomic) unsigned long long size; // @synthesize size=_size;
@property(copy, nonatomic) CDUnknownBlockType stateChangedHandler; // @synthesize stateChangedHandler=_stateChangedHandler;
- (void)start;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface APayAuthInfo : NSObject
{
    NSString *_appID;
    NSString *_pid;
    NSString *_redirectUri;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *appID; // @synthesize appID=_appID;
- (id)description;
- (id)initWithAppID:(id)arg1 pid:(id)arg2 redirectUri:(id)arg3;
@property(copy, nonatomic) NSString *pid; // @synthesize pid=_pid;
@property(copy, nonatomic) NSString *redirectUri; // @synthesize redirectUri=_redirectUri;
- (id)wapDescription;

@end


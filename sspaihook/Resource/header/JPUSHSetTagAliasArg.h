//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSInvocation, NSSet, NSString, NSTimer;

@interface JPUSHSetTagAliasArg : NSObject <NSCopying>
{
    NSTimer *_timeoutTimer;
    NSSet *_tags;
    NSString *_alias;
    unsigned long long _type;
    CDUnknownBlockType _completionHandler;
    NSInvocation *_cbInvocation;
    id _target;
    unsigned long long _sequence;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *alias; // @synthesize alias=_alias;
- (void)beginTimeoutTimer;
@property(retain, nonatomic) NSInvocation *cbInvocation; // @synthesize cbInvocation=_cbInvocation;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)onTimeout:(id)arg1;
- (void)p_deQueueFromTcpBlockQueue;
@property(nonatomic) unsigned long long sequence; // @synthesize sequence=_sequence;
@property(retain, nonatomic) NSSet *tags; // @synthesize tags=_tags;
@property(nonatomic) __weak id target; // @synthesize target=_target;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (void)stopTimeoutTimer;

@end


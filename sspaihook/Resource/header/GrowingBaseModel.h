//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSOperationQueue;

@interface GrowingBaseModel : NSObject
{
    NSOperationQueue *_queue;
    unsigned long long _modelType;
}

+ (id)accountIdForType:(unsigned long long)arg1;
+ (id)appInstance;
+ (id)eventInstance;
+ (id)sdkInstance;
+ (void)setAccountId:(id)arg1 forType:(unsigned long long)arg2;
+ (id)shareInstanceWithType:(unsigned long long)arg1;
- (void).cxx_destruct;
- (id)modelOperationQueue;
@property(readonly, nonatomic) unsigned long long modelType; // @synthesize modelType=_modelType;
- (_Bool)needAuthorityVerification;
- (void)startTaskWithURL:(id)arg1 httpMethod:(id)arg2 parameters:(id)arg3 LZ4Compress:(_Bool)arg4 success:(CDUnknownBlockType)arg5 failure:(CDUnknownBlockType)arg6;
- (void)startTaskWithURL:(id)arg1 httpMethod:(id)arg2 parameters:(id)arg3 LZ4Compress:(_Bool)arg4 timeoutInSeconds:(unsigned long long)arg5 success:(CDUnknownBlockType)arg6 failure:(CDUnknownBlockType)arg7;
- (void)startTaskWithURL:(id)arg1 httpMethod:(id)arg2 parameters:(id)arg3 outParametersSize:(unsigned long long *)arg4 configRequest:(CDUnknownBlockType)arg5 LZ4Compress:(_Bool)arg6 timeoutInSeconds:(unsigned long long)arg7 success:(CDUnknownBlockType)arg8 failure:(CDUnknownBlockType)arg9;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface JPUSHTagAlias : NSObject
{
    NSMutableDictionary *_dictSequenceToReq;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)doSetTagsAliasCallbackWithRetJson:(id)arg1;
- (void)doTagAliasCallbackAutomatic:(id)arg1 withResCode:(int)arg2;
- (void)doTagAliasCallbackForSeq:(unsigned long long)arg1 withResCode:(int)arg2;
- (void)doTagAliasCallbackUsingBlockForArgs:(id)arg1 withResCode:(int)arg2;
- (void)doTagAliasCallbackUsingCallbackForArgs:(id)arg1 withResCode:(int)arg2;
- (id)init;
- (_Bool)p_mergeOldTagAliasRequest:(id)arg1 WithNewRequest:(id *)arg2 UpdateArg:(id *)arg3;
- (void)p_sendAutomaticRequest:(id)arg1 WithArg:(id)arg2;
- (void)sendFailedTagAlias;
- (void)setTagAliasAutomatic:(id)arg1;
- (void)setTagAliasUsingBlock:(id)arg1;
- (void)setTagAliasUsingCallback:(id)arg1;
- (void)setTagsAlias:(id)arg1;

@end


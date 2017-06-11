//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, NSString, NSURL;

@interface MOBFImageLoader : NSObject
{
    _Bool _isLoading;
    NSObject<OS_dispatch_queue> *_queue;
    NSURL *_url;
    NSString *_cachePath;
    CDUnknownBlockType _resultHandler;
    CDUnknownBlockType _failHandler;
    CDUnknownBlockType _loadingHandler;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *cachePath; // @synthesize cachePath=_cachePath;
@property(copy, nonatomic) CDUnknownBlockType failHandler; // @synthesize failHandler=_failHandler;
- (id)initWithURL:(id)arg1 cachePath:(id)arg2;
@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
- (void)load;
- (void)loadLocalImageByURL:(id)arg1;
- (void)loadWebImageByURL:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType loadingHandler; // @synthesize loadingHandler=_loadingHandler;
- (void)onFail:(CDUnknownBlockType)arg1;
- (void)onLoading:(CDUnknownBlockType)arg1;
- (void)onResult:(CDUnknownBlockType)arg1;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(copy, nonatomic) CDUnknownBlockType resultHandler; // @synthesize resultHandler=_resultHandler;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface MOBFImageServiceObserver : NSObject
{
    NSMutableDictionary *_listeners;
}

- (void).cxx_destruct;
- (void)addListener:(CDUnknownBlockType)arg1 failHandler:(CDUnknownBlockType)arg2 loadingHandler:(CDUnknownBlockType)arg3 forImageURL:(id)arg4;
- (void)fail:(id)arg1 forImageURL:(id)arg2;
- (id)init;
@property(retain, nonatomic) NSMutableDictionary *listeners; // @synthesize listeners=_listeners;
- (void)loadingForImageURL:(id)arg1;
- (void)removeAllListener;
- (void)removeListener:(id)arg1;
- (void)result:(id)arg1 forImageURL:(id)arg2;

@end


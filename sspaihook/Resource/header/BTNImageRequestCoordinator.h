//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BTNRequestCoordinator.h"

@class BAFHTTPRequestOperationManager, BTNLRUCache;

@interface BTNImageRequestCoordinator : BTNRequestCoordinator
{
    BAFHTTPRequestOperationManager *_requestManager;
    BTNLRUCache *_imageCache;
}

- (void).cxx_destruct;
@property(retain, nonatomic) BTNLRUCache *imageCache; // @synthesize imageCache=_imageCache;
- (id)initWithResources:(id)arg1;
- (void)loadImageWithURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)prepareOperation:(id)arg1;
@property(retain, nonatomic) BAFHTTPRequestOperationManager *requestManager; // @synthesize requestManager=_requestManager;

@end


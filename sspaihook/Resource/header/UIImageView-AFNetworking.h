//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIImageView.h"

@interface UIImageView (AFNetworking)
+ (void)setSharedImageDownloader:(id)arg1;
+ (id)sharedImageDownloader;
- (void)cancelImageDownloadTask;
- (void)clearActiveDownloadInformation;
- (_Bool)isActiveTaskURLEqualToURLRequest:(id)arg1;
- (void)setImageWithURL:(id)arg1;
- (void)setImageWithURL:(id)arg1 placeholderImage:(id)arg2;
- (void)setImageWithURLRequest:(id)arg1 placeholderImage:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
@end


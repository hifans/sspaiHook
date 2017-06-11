//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "QNFileDelegate.h"

@class ALAsset, NSString;

@interface QNALAssetFile : NSObject <QNFileDelegate>
{
    ALAsset *_asset;
    long long _fileSize;
    long long _fileModifyTime;
}

- (void).cxx_destruct;
@property(retain, nonatomic) ALAsset *asset; // @synthesize asset=_asset;
- (void)close;
@property(readonly) long long fileModifyTime; // @synthesize fileModifyTime=_fileModifyTime;
@property(readonly) long long fileSize; // @synthesize fileSize=_fileSize;
- (id)init:(id)arg1 error:(id *)arg2;
- (long long)modifyTime;
- (id)path;
- (id)read:(long long)arg1 size:(long long)arg2;
- (id)readAll;
- (long long)size;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


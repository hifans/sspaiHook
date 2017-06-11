//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "QNFileDelegate.h"

@class NSData, NSFileHandle, NSString, NSURL, PHAsset;

@interface QNPHAssetFile : NSObject <QNFileDelegate>
{
    PHAsset *_phAsset;
    long long _fileSize;
    long long _fileModifyTime;
    NSData *_assetData;
    NSURL *_assetURL;
    NSString *_filepath;
    NSFileHandle *_file;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSData *assetData; // @synthesize assetData=_assetData;
@property(retain, nonatomic) NSURL *assetURL; // @synthesize assetURL=_assetURL;
- (void)close;
@property(retain, nonatomic) NSFileHandle *file; // @synthesize file=_file;
@property(readonly) long long fileModifyTime; // @synthesize fileModifyTime=_fileModifyTime;
@property(readonly) long long fileSize; // @synthesize fileSize=_fileSize;
@property(readonly, nonatomic) NSString *filepath; // @synthesize filepath=_filepath;
- (id)getInfo;
- (id)init:(id)arg1 error:(id *)arg2;
- (long long)modifyTime;
- (id)path;
@property(retain, nonatomic) PHAsset *phAsset; // @synthesize phAsset=_phAsset;
- (id)read:(long long)arg1 size:(long long)arg2;
- (id)readAll;
- (long long)size;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


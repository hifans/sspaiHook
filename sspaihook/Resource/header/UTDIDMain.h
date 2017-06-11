//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIPasteboard, UTDIDHelper, UTDIDPersistentConf;

@interface UTDIDMain : NSObject
{
    UIPasteboard *mUIPasteBoard;
    NSString *mFilePath;
    UTDIDHelper *mUtdidHelper;
    UTDIDPersistentConf *mDevicePersistentConfig;
}

+ (id)generateUtdid;
+ (id)uniqueGlobalDeviceIdentifier;
- (void).cxx_destruct;
- (id)NSData2Str:(id)arg1;
- (id)generateUtdidAndSave;
- (id)getUTDIDFromOldKeyChain;
- (id)getUTDIDFromOldNSUserDefaults;
- (id)getUTDIDFromOldUIPasteboard;
- (_Bool)isUtdidValid:(id)arg1;
- (void)preInit;
- (void)removeUtdid;
- (void)saveUtdid:(id)arg1;
- (void)testInit;
- (id)value;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MOBFData : NSObject
{
}

+ (id)aes128DecryptData:(id)arg1 key:(id)arg2 encoding:(unsigned long long)arg3;
+ (id)aes128DecryptData:(id)arg1 key:(id)arg2 options:(unsigned int)arg3;
+ (id)aes128EncryptData:(id)arg1 key:(id)arg2 encoding:(unsigned long long)arg3;
+ (id)aes128EncryptData:(id)arg1 key:(id)arg2 options:(unsigned int)arg3;
+ (id)compressDataUsingGZip:(id)arg1;
+ (id)dataByAES128Data:(id)arg1 withOperation:(unsigned int)arg2 forKey:(id)arg3 andIV:(id)arg4 andOptions:(unsigned int)arg5;
+ (id)hexStringByData:(id)arg1;
+ (id)hmacSha1Data:(id)arg1 forKey:(id)arg2;
+ (id)md5Data:(id)arg1;
+ (short)readInt16FromData:(id)arg1 offset:(long long)arg2;
+ (int)readInt32FromData:(id)arg1 offset:(long long)arg2;
+ (id)stringByBase64EncodeData:(id)arg1;
+ (id)stringByCRC32Data:(id)arg1;
+ (id)stringByMD5Data:(id)arg1;
+ (id)uncompressDataUsingGZip:(id)arg1;
+ (unsigned long long)valueByCRC32Data:(id)arg1;
+ (void)writeInt16:(short)arg1 toData:(id)arg2;
+ (void)writeInt32:(int)arg1 toData:(id)arg2;

@end


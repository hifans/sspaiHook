//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BTNResourceConsumer.h"

@class BTNResourceProvider, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSOperationQueue, NSString;

@interface BTNKeychain : NSObject <BTNResourceConsumer>
{
    BTNResourceProvider *_resources;
    NSString *_serviceName;
    NSString *_accountName;
    NSMutableDictionary *_keychainItems;
    NSObject<OS_dispatch_queue> *_memoryCacheSerialQueue;
    NSObject<OS_dispatch_queue> *_errorHandlerQueue;
    CDUnknownBlockType _errorHandler;
    NSOperationQueue *_keychainStoreSerialQueue;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *accountName; // @synthesize accountName=_accountName;
- (id)accountNameKey;
- (void)clean;
@property(copy, nonatomic) CDUnknownBlockType errorHandler; // @synthesize errorHandler=_errorHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *errorHandlerQueue; // @synthesize errorHandlerQueue=_errorHandlerQueue;
- (id)errorWithCode:(long long)arg1;
- (id)fetchKeychainItems;
- (id)fetchKeychainItemsWithAccountName:(id)arg1;
- (id)fetchLegacyKeychainItems;
- (id)init;
- (id)initWithResources:(id)arg1;
- (id)initWithServiceName:(id)arg1 resources:(id)arg2;
- (void)initializeKeychain;
- (id)keychainAccountNames;
@property(retain, nonatomic) NSMutableDictionary *keychainItems; // @synthesize keychainItems=_keychainItems;
- (id)keychainQueryWithAccountName:(id)arg1;
@property(retain, nonatomic) NSOperationQueue *keychainStoreSerialQueue; // @synthesize keychainStoreSerialQueue=_keychainStoreSerialQueue;
- (void)logMessage:(id)arg1;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *memoryCacheSerialQueue; // @synthesize memoryCacheSerialQueue=_memoryCacheSerialQueue;
- (void)migrateKeychainItems:(id)arg1;
- (id)objectForKey:(id)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)persistAccountName:(id)arg1;
- (void)persistCurrentKeychainItems;
- (void)persistKeychainItems:(id)arg1 withAccountName:(id)arg2 waitUntilFinished:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (id)persistedAccountName;
- (void)removeAllKeychainAccountNames;
- (void)removeAllObjects;
- (void)removeAllObjectsWithAccountName:(id)arg1;
- (void)removeAllObjectsWithCompletion:(CDUnknownBlockType)arg1;
- (void)removeKeychainAccountWithName:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (void)removeObjectForKey:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)reportError:(id)arg1;
@property(readonly, nonatomic) __weak BTNResourceProvider *resources; // @synthesize resources=_resources;
@property(readonly, copy, nonatomic) NSString *serviceName; // @synthesize serviceName=_serviceName;
- (void)setErrorHandler:(CDUnknownBlockType)arg1 handlerQueue:(id)arg2;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 forKey:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

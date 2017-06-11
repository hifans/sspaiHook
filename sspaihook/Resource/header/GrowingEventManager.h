//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GrowingEventDataBase, NSMutableArray, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSString;

@interface GrowingEventManager : NSObject
{
    _Bool _allowUploadViaCellular;
    _Bool _isUploading;
    _Bool _isCustomEventUploading;
    _Bool _uploadType_isFullData_unsafe;
    _Bool _whiteListImpOnly;
    _Bool _enableImp;
    _Bool _allNetwork;
    NSMutableArray *_allObservers;
    NSMutableArray *_eventQueue;
    NSObject<OS_dispatch_source> *_reportTimer;
    GrowingEventDataBase *_keyEventDB;
    GrowingEventDataBase *_normalEventDB;
    GrowingEventDataBase *_customEventDB;
    GrowingEventDataBase *_uploadEventSizeDB;
    unsigned long long _uploadLimitOfCellular;
    NSString *_ai;
    NSString *_user;
    NSMutableArray *_whiteListItems;
    unsigned long long _packageNum;
}

+ (id)shareInstance;
- (void).cxx_destruct;
- (void)addEvent:(id)arg1 thisNode:(id)arg2 triggerNode:(id)arg3 withContext:(id)arg4;
- (void)addObserver:(id)arg1;
@property(copy, nonatomic) NSString *ai; // @synthesize ai=_ai;
@property(nonatomic) _Bool allNetwork; // @synthesize allNetwork=_allNetwork;
@property(retain, nonatomic) NSMutableArray *allObservers; // @synthesize allObservers=_allObservers;
@property(nonatomic) _Bool allowUploadViaCellular; // @synthesize allowUploadViaCellular=_allowUploadViaCellular;
- (void)clearAllEvents;
- (id)compressCustomEvents:(id)arg1 outSTM:(unsigned long long *)arg2;
- (id)compressEvents:(id)arg1 outSTM:(unsigned long long *)arg2;
@property(retain, nonatomic) GrowingEventDataBase *customEventDB; // @synthesize customEventDB=_customEventDB;
- (void)dbErrorWithError:(id)arg1;
- (unsigned long long)destinyOfEvent:(id)arg1;
- (void)dispathInUpload:(CDUnknownBlockType)arg1;
@property(nonatomic) _Bool enableImp; // @synthesize enableImp=_enableImp;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *eventDispatch;
@property(retain, nonatomic) NSMutableArray *eventQueue; // @synthesize eventQueue=_eventQueue;
- (void)flushDB;
- (id)generateWhiteListAndOptionsURL;
- (id)getTodayKey;
- (id)initWithName:(id)arg1 ai:(id)arg2 user:(id)arg3;
@property(nonatomic) _Bool isCustomEventUploading; // @synthesize isCustomEventUploading=_isCustomEventUploading;
- (_Bool)isMatchingAnyTag:(id)arg1;
@property(nonatomic) _Bool isUploading; // @synthesize isUploading=_isUploading;
@property(retain, nonatomic) GrowingEventDataBase *keyEventDB; // @synthesize keyEventDB=_keyEventDB;
- (id)loadCustomEventFromDB_unsafe;
- (void)loadFromDB_unsafe;
@property(retain, nonatomic) GrowingEventDataBase *normalEventDB; // @synthesize normalEventDB=_normalEventDB;
@property(nonatomic) unsigned long long packageNum; // @synthesize packageNum=_packageNum;
- (void)readOptions_unsafe:(id)arg1;
- (void)readWhiteListAndOptions;
- (void)readWhiteList_unsafe:(id)arg1;
- (void)reloadFromDB_unsafe;
- (void)removeCustomEvents_unsafe:(id)arg1;
- (void)removeEvents_unsafe:(id)arg1;
- (void)removeObserver:(id)arg1;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *reportTimer; // @synthesize reportTimer=_reportTimer;
- (void)sendCustomEvents_unsafe;
- (void)sendEvents;
- (void)sendEvents_unsafe;
- (void)setCustomEventUploadFinish_unsafe;
@property(nonatomic) unsigned long long uploadEventSize;
@property(retain, nonatomic) GrowingEventDataBase *uploadEventSizeDB; // @synthesize uploadEventSizeDB=_uploadEventSizeDB;
- (void)setUploadFinish_unsafe;
@property(nonatomic) unsigned long long uploadLimitOfCellular; // @synthesize uploadLimitOfCellular=_uploadLimitOfCellular;
@property(nonatomic) _Bool uploadType_isFullData_unsafe; // @synthesize uploadType_isFullData_unsafe=_uploadType_isFullData_unsafe;
@property(copy, nonatomic) NSString *user; // @synthesize user=_user;
@property(nonatomic) _Bool whiteListImpOnly; // @synthesize whiteListImpOnly=_whiteListImpOnly;
@property(copy, nonatomic) NSMutableArray *whiteListItems; // @synthesize whiteListItems=_whiteListItems;
- (void)timerSendEvent;
- (_Bool)triggerNodeNeedTrack:(id)arg1 witheventType:(long long)arg2 withChild:(_Bool)arg3;

@end

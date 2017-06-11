//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface FoObjectSELObserverManager : NSObject
{
    _Bool _addRespondsToSelectorFlag;
    NSMutableDictionary *_beforeDict;
    NSMutableDictionary *_afterDict;
    id _obj;
}

- (void).cxx_destruct;
- (void)addItem:(id)arg1 type:(unsigned long long)arg2 sel:(SEL)arg3;
@property(nonatomic) _Bool addRespondsToSelectorFlag; // @synthesize addRespondsToSelectorFlag=_addRespondsToSelectorFlag;
- (void)addRespondsToSelectorHook;
@property(readonly, nonatomic) NSMutableDictionary *afterDict; // @synthesize afterDict=_afterDict;
- (id)arrForType:(unsigned long long)arg1 sel:(SEL)arg2;
@property(readonly, nonatomic) NSMutableDictionary *beforeDict; // @synthesize beforeDict=_beforeDict;
@property(nonatomic) id obj; // @synthesize obj=_obj;
- (void)remove;
- (void)removeDictArr:(id)arg1;
- (void)removeItem:(id)arg1 type:(unsigned long long)arg2 sel:(SEL)arg3;

@end


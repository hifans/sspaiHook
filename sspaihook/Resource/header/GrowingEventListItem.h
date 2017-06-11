//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GrowingImageCacheImage, NSArray, NSMutableArray, NSMutableString, NSString;

@interface GrowingEventListItem : NSObject
{
    NSMutableArray *_childItems;
    double _timeInterval;
    NSString *_title;
    NSMutableString *_message;
    GrowingImageCacheImage *_cacheImage;
    long long _eventType;
}

- (void).cxx_destruct;
- (void)addChildItem:(id)arg1;
- (void)addMessageWord:(id)arg1;
@property(retain, nonatomic) GrowingImageCacheImage *cacheImage; // @synthesize cacheImage=_cacheImage;
@property(readonly, nonatomic) NSArray *childItems;
- (id)debugDescription;
@property(nonatomic) long long eventType; // @synthesize eventType=_eventType;
- (id)init;
@property(readonly, nonatomic) NSMutableString *message; // @synthesize message=_message;
@property(nonatomic) double timeInterval; // @synthesize timeInterval=_timeInterval;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;

@end


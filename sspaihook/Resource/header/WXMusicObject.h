//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface WXMusicObject : NSObject
{
    NSString *musicUrl;
    NSString *musicLowBandUrl;
    NSString *musicDataUrl;
    NSString *musicLowBandDataUrl;
}

+ (id)object;
- (void)dealloc;
- (id)init;
@property(retain, nonatomic) NSString *musicDataUrl; // @synthesize musicDataUrl;
@property(retain, nonatomic) NSString *musicLowBandDataUrl; // @synthesize musicLowBandDataUrl;
@property(retain, nonatomic) NSString *musicLowBandUrl; // @synthesize musicLowBandUrl;
@property(retain, nonatomic) NSString *musicUrl; // @synthesize musicUrl;

@end


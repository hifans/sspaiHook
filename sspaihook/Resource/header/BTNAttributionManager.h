//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BTNResourceConsumer.h"

@class BTNResourceProvider, NSString;

@interface BTNAttributionManager : NSObject <BTNResourceConsumer>
{
    BTNResourceProvider *_resources;
    NSString *_referrerToken;
}

- (void).cxx_destruct;
- (_Bool)applyAttributionFromURL:(id)arg1;
- (id)initWithResources:(id)arg1;
@property(copy, nonatomic) NSString *referrerToken; // @synthesize referrerToken=_referrerToken;
@property(readonly, nonatomic) __weak BTNResourceProvider *resources; // @synthesize resources=_resources;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


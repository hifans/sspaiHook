//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IMOBFPlugin.h"

@class NSString;

@interface SSPFacebookMessengerProxy : NSObject <IMOBFPlugin>
{
}

- (_Bool)canShare:(id)arg1 callback:(id)arg2;
- (id)init;
- (_Bool)isClientInstalled;
- (void)load:(id)arg1;
- (void)registerShareMethod;
- (void)unload;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GrowingEvent.h"

@interface GrowingPageEvent : GrowingEvent
{
}

+ (void)resendEventWithController:(id)arg1;
+ (void)resendPageEventOnCS1Change;
+ (void)sendEventWithController:(id)arg1;
+ (void)sendEventWithController:(id)arg1 reSend:(_Bool)arg2;
+ (void)sendEventWithJavascriptCore:(id)arg1 andPageDataDict:(id)arg2;
+ (void)sendVstIfNeeded;
- (id)eventTypeKey;
- (id)initWithController:(id)arg1;
- (id)initWithJavascriptCore:(id)arg1 andPageDataDict:(id)arg2;

@end


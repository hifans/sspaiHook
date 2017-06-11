//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSURLConnectionDataDelegate.h"
#import "NSURLConnectionDelegate.h"

@class JPUSHHttpResponse, JPUSHReportRequest, NSData, NSString, NSURLResponse;

@interface JPUSHHttpRequest : NSObject <NSURLConnectionDataDelegate, NSURLConnectionDelegate>
{
    JPUSHHttpResponse *_reportResponse;
    id <JPUSHHttpRequestDelegate> _delegate;
    JPUSHReportRequest *_postData;
    NSURLResponse *_response;
    NSData *_result;
    NSString *_backUpAddress;
    NSString *_requestAddress;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *backUpAddress; // @synthesize backUpAddress=_backUpAddress;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connection:(id)arg1 willSendRequestForAuthenticationChallenge:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)dealloc;
@property(nonatomic) __weak id <JPUSHHttpRequestDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy) NSString *description;
- (id)initWithDelegate:(id)arg1 postData:(id)arg2 requestAddress:(id)arg3 backUpAddress:(id)arg4;
- (_Bool)p_checkTimestampLength:(long long)arg1;
@property(retain, nonatomic) JPUSHReportRequest *postData; // @synthesize postData=_postData;
@property(retain, nonatomic) JPUSHHttpResponse *reportResponse; // @synthesize reportResponse=_reportResponse;
@property(retain, nonatomic) NSString *requestAddress; // @synthesize requestAddress=_requestAddress;
@property(retain, nonatomic) NSURLResponse *response; // @synthesize response=_response;
@property(retain, nonatomic) NSData *result; // @synthesize result=_result;
- (void)send:(id)arg1;
- (void)writeToCache:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


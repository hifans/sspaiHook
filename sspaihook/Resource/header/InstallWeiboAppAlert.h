//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIAlertViewDelegate.h"

@class NSString, WBDataTransferObject;

@interface InstallWeiboAppAlert : NSObject <UIAlertViewDelegate>
{
    WBDataTransferObject *transferObject;
}

- (void).cxx_destruct;
- (void)alertView:(id)arg1 willDismissWithButtonIndex:(long long)arg2;
- (void)alertWithTransferObject:(id)arg1;
- (void)alertWithTransferObject:(id)arg1 isUpdate:(_Bool)arg2;
@property(retain, nonatomic) WBDataTransferObject *transferObject; // @synthesize transferObject;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


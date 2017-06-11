//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UPPromotionViewDelegate.h"

@class NSString, UPBankNumCell, UPKeyboard, UPPasswordCell, UPPointCell;

@interface UPPaymentElementsView : UIView <UPPromotionViewDelegate>
{
    UPKeyboard *_keyboard;
    id <UITextFieldDelegate><UPTextFieldDelegate> _delegate;
    UPPasswordCell *_securityCell;
    UPBankNumCell *_bankNumCell;
    UPPointCell *_pointCell;
    double _toplineLeftMargin;
    id <UITextFieldDelegate><UPTextFieldDelegate> textDelegate;
}

- (void).cxx_destruct;
- (void)addPointObservers;
- (id)checkPaymentParamsError;
- (id)checkSmsParamsError;
- (void)cleanupPassword;
- (void)cleanupSecretInfo;
- (void)dealloc;
- (id)elementArray;
- (id)initWithFrame:(struct CGRect)arg1 elements:(id)arg2 delegate:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1 elements:(id)arg2 delegate:(id)arg3 andInstalmentView:(id)arg4;
- (id)initWithFrame:(struct CGRect)arg1 elements:(id)arg2 delegate:(id)arg3 andInstalmentView:(id)arg4 toplineLeftMargin:(double)arg5;
- (void)makeKeyboardRandom;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)panParamWithValue:(id)arg1;
- (id)paymentParams;
- (void)removePointObservers;
- (id)secetParamWithValue:(id)arg1;
- (void)setNeedsDeviceEncryption;
@property(nonatomic) __weak id <UITextFieldDelegate><UPTextFieldDelegate> textDelegate; // @synthesize textDelegate;
- (id)smsParams;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

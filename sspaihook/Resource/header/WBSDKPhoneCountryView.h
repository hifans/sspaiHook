//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@class NSMutableArray, UILabel, WBSDKCountryCode;

@interface WBSDKPhoneCountryView : UIButton
{
    long long _countryCodeStr;
    NSMutableArray *_countryArray;
    WBSDKCountryCode *_currentCoutryCode;
    UILabel *_codeLabel;
    UILabel *_countryLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *codeLabel; // @synthesize codeLabel=_codeLabel;
@property(retain, nonatomic) NSMutableArray *countryArray; // @synthesize countryArray=_countryArray;
@property(retain, nonatomic) UILabel *countryLabel; // @synthesize countryLabel=_countryLabel;
@property(retain, nonatomic) WBSDKCountryCode *currentCoutryCode; // @synthesize currentCoutryCode=_currentCoutryCode;
- (void)getCountryList;
- (id)getSimCardInformation;
- (void)indexedContactsArrayWithSortedContacts:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)insertCommonUseData;
- (_Bool)isPhoneMacthCountry;
- (_Bool)isStringNull:(id)arg1;
- (void)matchingMCC:(id)arg1;

@end


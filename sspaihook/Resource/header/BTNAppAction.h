//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BTNModelObject.h"

#import "BTNMutableResourceConsumer.h"

@class BTNAppActionMeta, BTNAuthChallenge, BTNBrowser, BTNCard, BTNFooter, BTNHeader, BTNLink, BTNPreview, BTNProduct, BTNResourceProvider, NSArray, NSString;

@interface BTNAppAction : BTNModelObject <BTNMutableResourceConsumer>
{
    BTNResourceProvider *_resources;
    BTNAppActionMeta *_meta;
    BTNPreview *_preview;
    BTNCard *_card;
    BTNBrowser *_browser;
    BTNLink *_link;
    BTNAuthChallenge *_authChallenge;
}

+ (_Bool)canInitWithDictionary:(id)arg1;
- (void).cxx_destruct;
- (unsigned long long)appInstallState;
- (_Bool)appIsQueryable;
@property(readonly, copy, nonatomic) BTNAuthChallenge *authChallenge; // @synthesize authChallenge=_authChallenge;
@property(readonly, copy, nonatomic) BTNBrowser *browser; // @synthesize browser=_browser;
@property(readonly, copy, nonatomic) BTNCard *card; // @synthesize card=_card;
- (id)dictionaryRepresentation;
- (void)fetchPreviewIconImageWithCompletion:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) BTNFooter *footer;
@property(readonly, nonatomic) NSArray *groups;
@property(readonly, nonatomic) BTNHeader *header;
- (void)invokeAction;
- (void)invokeActionForListItem:(id)arg1;
- (void)invokeFooterAction;
- (void)invokePreviewAction;
- (_Bool)isEqualToAppAction:(id)arg1;
@property(readonly, copy, nonatomic) BTNLink *link; // @synthesize link=_link;
@property(readonly, copy, nonatomic) BTNAppActionMeta *meta; // @synthesize meta=_meta;
- (void)performAction:(id)arg1;
- (id)prefetchableAssetURLs;
@property(readonly, copy, nonatomic) BTNPreview *preview; // @synthesize preview=_preview;
@property(readonly, nonatomic) BTNProduct *product;
- (id)requiredAssetURLs;
@property(readonly, nonatomic) __weak BTNResourceProvider *resources;
- (void)setResources:(id)arg1;
- (void)trackButtonViewed;
- (void)updateWithRepresentation:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
